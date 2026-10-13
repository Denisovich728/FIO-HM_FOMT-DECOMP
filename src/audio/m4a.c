// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: AUDIO_M4A (165 functions)
// Description: Music Player 2000 sound driver, PCM playback and MIDI sequence synthesizer
// =============================================================================

#include "../../include/audio/m4a.h"

// =============================================================================
// Function: func_080C0910 @ 0x080C0910
// =============================================================================
undefined4 func_080C0910(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + _DAT_080c0934);
  cVar1 = *pcVar3;
  if (cVar1 == '\x13') {
    if (*(int *)(param_1 + _DAT_080c0938) == 3) {
      *(undefined1 *)(param_1 + _DAT_080c093c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + _DAT_080c094c) = 1;
    }
  }
  else if (cVar1 == '\x14') {
    *(undefined1 *)(param_1 + _DAT_080c098c) = 0;
    *(undefined1 *)(param_1 + 0x5f8) = 0;
    *pcVar3 = '\0';
    iVar2 = _DAT_080c0990;
    *(undefined1 *)(param_1 + _DAT_080c0990) = 0;
    if (*(char *)(param_1 + 0x60a) == '\0') {
      *(char *)(param_1 + _DAT_080c0994) = *(char *)(param_1 + _DAT_080c0994) + '\x01';
      func_08008B6C(param_1 + iVar2 + -0x89,199);
    }
    else {
      *(char *)(param_1 + _DAT_080c09cc) = *(char *)(param_1 + _DAT_080c09cc) + '\x01';
      func_08008B6C(param_1 + 0x580,0xbc);
    }
    iVar2 = _DAT_080c09d0;
    *(undefined4 *)(param_1 + _DAT_080c09d0) = 0;
    *(undefined1 *)(param_1 + _DAT_080c09d4) = 1;
    *(undefined4 *)(param_1 + iVar2 + -8) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C09D8 @ 0x080C09D8
// =============================================================================
ulonglong func_080C09D8(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x5a0) == 0) {
    if (*(char *)(param_1 + _DAT_080c0a24) != '\0') {
      iVar1 = *(int *)(param_1 + _DAT_080c0a2c) * 0x54 + (uint)*_DAT_080c0a28;
      goto LAB_080c0b44;
    }
    if (*(char *)(param_1 + _DAT_080c0a4c) != '\0') {
      iVar1 = *(int *)(param_1 + _DAT_080c0a54) * 0x54 + (uint)*(ushort *)(_DAT_080c0a50 + 4);
      goto LAB_080c0b44;
    }
    puVar2 = (ushort *)
             (((uint)*(byte *)(param_1 + _DAT_080c0a78) * 4 + *(int *)(param_1 + _DAT_080c0a7c) + 3)
              * 2 + _DAT_080c0a74);
  }
  else {
    if (*(int *)(param_1 + 0x5a0) != 3) {
      iVar1 = *(int *)(param_1 + _DAT_080c0a04) * 0x54 + (uint)*(ushort *)(_DAT_080c0a00 + 6);
      goto LAB_080c0b44;
    }
    if (*(int *)(param_1 + _DAT_080c0aa0) == 0) {
      puVar2 = (ushort *)
               (((uint)*(byte *)(param_1 + _DAT_080c0acc) * 4 +
                *(int *)(param_1 + _DAT_080c0acc + -0x5d) + 3) * 2 + _DAT_080c0ac8);
    }
    else {
      if (*(int *)(param_1 + _DAT_080c0aa0) != 1) {
        iVar1 = *(int *)(param_1 + _DAT_080c0aa8) * 0x54 + (uint)*(ushort *)(_DAT_080c0aa4 + 6);
        goto LAB_080c0b44;
      }
      if (*(char *)(param_1 + _DAT_080c0af0) != '\0') {
        *(char *)(param_1 + _DAT_080c0af0) = '\0';
        iVar1 = *(int *)(param_1 + _DAT_080c0af8) * 0x54 + (uint)*(ushort *)(_DAT_080c0af4 + 6);
        goto LAB_080c0b44;
      }
      if (*(char *)(param_1 + _DAT_080c0b18) != '\0') {
        iVar1 = *(int *)(param_1 + _DAT_080c0b20) * 0x54 + (uint)*_DAT_080c0b1c;
        goto LAB_080c0b44;
      }
      iVar1 = func_0x080d11e4();
      puVar2 = (ushort *)((1 - ((iVar1 << 0x10) >> 0x1f)) * 2 + _DAT_080c0b50);
    }
  }
  iVar1 = *(int *)(param_1 + _DAT_080c0b54) * 0x54 + (uint)*puVar2;
LAB_080c0b44:
  return CONCAT44(in_lr,iVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: func_080C0B70 @ 0x080C0B70
// =============================================================================
undefined4 func_080C0B70(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080088cc();
  func_080C0CA4(param_1);
  if ((uVar1 & 8) == 0) {
    func_080C0B94(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C0B94 @ 0x080C0B94
// =============================================================================
undefined4 func_080C0B94(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 in_lr;
  
  uVar4 = func_0x080088cc();
  if ((uVar4 & 1) == 0) {
    pcVar9 = (char *)(param_1 + _DAT_080c0bd0);
    if (*pcVar9 == '\0') {
      return in_lr;
    }
    pcVar6 = (char *)(param_1 + _DAT_080c0bd4);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') != '\x1e') {
      return in_lr;
    }
    *pcVar9 = '\0';
    *(undefined1 *)(param_1 + _DAT_080c0bd8) = 1;
    *pcVar6 = '\0';
    return in_lr;
  }
  pcVar9 = (char *)(param_1 + _DAT_080c0c3c);
  if (*pcVar9 == '\0') {
    *(undefined1 *)(param_1 + _DAT_080c0c40) = 1;
  }
  *pcVar9 = '\x01';
  iVar5 = _DAT_080c0c44;
  *(undefined1 *)(param_1 + _DAT_080c0c44) = 0;
  bVar3 = *(byte *)(param_1 + _DAT_080c0c48) + 1;
  *(byte *)(param_1 + _DAT_080c0c48) = bVar3;
  iVar2 = _DAT_080c0c94;
  if ((bVar3 < 2) || (0x14 < bVar3)) goto LAB_080c0c88;
  if (*(byte *)(param_1 + _DAT_080c0c4c) < 0xd) {
    pbVar7 = (byte *)(param_1 + iVar5 + -4);
    *pbVar7 = *pbVar7 + 1;
    *(undefined1 *)(param_1 + iVar5 + -3) = 0;
    if (4 < *pbVar7) {
      *pbVar7 = 0;
      piVar8 = (int *)(param_1 + _DAT_080c0c50);
      if (*piVar8 < 3) {
        iVar5 = *piVar8 + 1;
LAB_080c0c78:
        *piVar8 = iVar5;
        *(undefined1 *)(param_1 + _DAT_080c0c9c) = 1;
      }
    }
  }
  else {
    pbVar7 = (byte *)(param_1 + _DAT_080c0c94);
    *pbVar7 = *pbVar7 + 1;
    *(undefined1 *)(param_1 + iVar2 + -1) = 0;
    if (2 < *pbVar7) {
      *pbVar7 = 0;
      piVar8 = (int *)(param_1 + _DAT_080c0c98);
      if (0 < *piVar8) {
        iVar5 = *piVar8 + -1;
        goto LAB_080c0c78;
      }
    }
  }
  *(undefined1 *)(param_1 + _DAT_080c0ca0) = 0;
LAB_080c0c88:
  func_080C0910(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_080C0CA4 @ 0x080C0CA4
// =============================================================================
undefined4 func_080C0CA4(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar1 = func_0x080088cc();
  if ((uVar1 & 8) != 0) {
    func_08008B6C(param_1 + _DAT_080c0cd4,0xb8);
    piVar3 = (int *)(param_1 + _DAT_080c0cd8);
    iVar2 = *piVar3;
    if (iVar2 == 1) {
      *piVar3 = 3;
      *(undefined2 *)(*(int *)(param_1 + 0x4d8) + 0x10) = 0;
    }
    else {
      if (iVar2 < 2) {
        if (iVar2 != 0) {
          return in_lr;
        }
        iVar2 = 2;
      }
      else {
        if (iVar2 != 2) {
          if (iVar2 != 3) {
            return in_lr;
          }
          *piVar3 = 1;
          *(undefined2 *)(*(int *)(param_1 + 0x4d8) + 0x10) = 0x100;
          return in_lr;
        }
        iVar2 = 0;
      }
      *piVar3 = iVar2;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C0D1C @ 0x080C0D1C
// =============================================================================
undefined8 func_080C0D1C(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_080c0d40;
  uVar1 = func_080005D4(0x620);
  uVar1 = func_080BC938(uVar1,param_2);
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080C0D44 @ 0x080C0D44
// =============================================================================
undefined4 func_080C0D44(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_080c0d70;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080C0D74 @ 0x080C0D74
// =============================================================================
void func_080C0D74(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x080bccd4(*(undefined4 *)(param_1 + 4));
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080C0D90 @ 0x080C0D90
// =============================================================================
undefined8 func_080C0D90(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  func_0x080bcce0(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080C0DCC @ 0x080C0DCC
// =============================================================================
undefined8 func_080C0DCC(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  puStack_5c = param_2;
  func_08008444();
  *(undefined4 *)(param_1 + 4) = _DAT_080c11c0;
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  uVar2 = func_080005D4(4);
  func_0x0800835c(auStack_64);
  func_0x0800770c(auStack_60);
  uVar2 = func_08050CC0(uVar2,0,0x18,0,0,auStack_64,auStack_60);
  *(undefined4 *)(param_1 + _DAT_080c11c4) = uVar2;
  func_08007714(auStack_60,2);
  func_0x08008364(auStack_64,2);
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11c8);
  *(undefined4 *)(param_1 + 0x520) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11cc);
  *(undefined4 *)(param_1 + _DAT_080c11d0) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11d4);
  *(undefined4 *)(param_1 + 0x528) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11d8);
  *(undefined4 *)(param_1 + _DAT_080c11dc) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11e0);
  *(undefined4 *)(param_1 + 0x530) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11e4);
  *(undefined4 *)(param_1 + _DAT_080c11e8) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11ec);
  *(undefined4 *)(param_1 + 0x538) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11f0);
  *(undefined4 *)(param_1 + _DAT_080c11f4) = uVar2;
  uVar2 = func_080005D4(0x30);
  uVar2 = func_0805E6CC(uVar2,_DAT_080c11f8);
  *(undefined4 *)(param_1 + 0x540) = uVar2;
  puVar3 = (undefined4 *)func_080005D4(0x10);
  uVar2 = func_0x08008918(param_1);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = _DAT_080c11fc;
  func_08009300(puVar3 + 3,uVar2);
  iVar1 = _DAT_080c1200;
  *(undefined4 **)(param_1 + _DAT_080c1200) = puVar3;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + iVar1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined2 *)(param_1 + 0x55c) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0x1c);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0;
  *(undefined2 *)(param_1 + 0x56c) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0x2c);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + iVar1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined2 *)(param_1 + 0x584) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0x44);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined2 *)(param_1 + 0x594) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0x54);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x5a0) = 0;
  *(undefined4 *)(param_1 + iVar1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  *(undefined2 *)(param_1 + 0x5ac) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0x6c);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  *(undefined2 *)(param_1 + 0x5bc) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0x7c);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + iVar1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined2 *)(param_1 + 0x5d4) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0x94);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  *(undefined2 *)(param_1 + 0x5e4) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0xa4);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x5f0) = 0;
  *(undefined4 *)(param_1 + iVar1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  *(undefined2 *)(param_1 + 0x5fc) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0xbc);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x608) = 0;
  *(undefined2 *)(param_1 + 0x60c) = 0;
  puVar3 = (undefined4 *)(param_1 + iVar1 + 0xcc);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x618) = 0;
  puVar4 = (undefined4 *)(param_1 + _DAT_080c1204);
  iVar1 = 0x18;
  puVar5 = (undefined4 *)(param_1 + _DAT_080c1204 + 0x74);
  puVar3 = (undefined4 *)(_DAT_080c1204 + 0xf4 + param_1);
  puStack_34 = (undefined4 *)(param_1 + 0x740);
  puStack_30 = (undefined4 *)(param_1 + 0x748);
  puStack_2c = (undefined4 *)(param_1 + 0x760);
  puStack_28 = (undefined4 *)(param_1 + 0x768);
  puStack_24 = (undefined4 *)(param_1 + 0x770);
  puStack_58 = (undefined4 *)(param_1 + 0x7a8);
  puStack_54 = (undefined4 *)(param_1 + 0x7b0);
  puStack_50 = (undefined4 *)(param_1 + 0x7b8);
  puStack_4c = (undefined4 *)(param_1 + 2000);
  puStack_48 = (undefined4 *)(param_1 + 0x7d8);
  puStack_44 = (undefined4 *)(param_1 + 0x7e0);
  puStack_40 = (undefined4 *)(param_1 + 0x7f8);
  puStack_3c = (undefined4 *)(param_1 + 0x800);
  puStack_38 = (undefined4 *)(param_1 + _DAT_080c1208);
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(undefined4 *)(param_1 + 0x680) = 0;
  *(undefined2 *)(param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0x688) = 0;
  *(undefined2 *)(param_1 + 0x68c) = 0;
  *puVar5 = 0;
  *(undefined2 *)(puVar5 + 1) = 0;
  *(undefined4 *)(param_1 + 0x698) = 0;
  *(undefined2 *)(param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  puVar4 = (undefined4 *)(param_1 + _DAT_080c120c);
  iVar1 = 0x18;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined2 *)(param_1 + 0x70c) = 0;
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined4 *)(param_1 + 0x718) = 0;
  *(undefined2 *)(param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined2 *)(param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0x728) = 0;
  *(undefined4 *)(param_1 + _DAT_080c1210) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined2 *)(param_1 + 0x734) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0;
  *(undefined2 *)(param_1 + 0x73c) = 0;
  *puStack_34 = 0;
  *(undefined2 *)(param_1 + 0x744) = 0;
  *puStack_30 = 0;
  *(undefined2 *)(param_1 + 0x74c) = 0;
  *(undefined4 *)(param_1 + 0x750) = 0;
  *(undefined4 *)(param_1 + _DAT_080c1214) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined2 *)(param_1 + 0x75c) = 0;
  *puStack_2c = 0;
  *(undefined2 *)(param_1 + 0x764) = 0;
  *puStack_28 = 0;
  *(undefined2 *)(param_1 + 0x76c) = 0;
  *puStack_24 = 0;
  *(undefined2 *)(param_1 + 0x774) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + _DAT_080c1218) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined2 *)(param_1 + 0x7a4) = 0;
  *puStack_58 = 0;
  *(undefined2 *)(param_1 + 0x7ac) = 0;
  *puStack_54 = 0;
  *(undefined2 *)(param_1 + 0x7b4) = 0;
  *puStack_50 = 0;
  *(undefined2 *)(param_1 + 0x7bc) = 0;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + _DAT_080c121c) = 0;
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  *(undefined2 *)(param_1 + 0x7cc) = 0;
  *puStack_4c = 0;
  *(undefined2 *)(param_1 + 0x7d4) = 0;
  *puStack_48 = 0;
  *(undefined2 *)(param_1 + 0x7dc) = 0;
  *puStack_44 = 0;
  *(undefined2 *)(param_1 + 0x7e4) = 0;
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  *(undefined4 *)(param_1 + _DAT_080c1220) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined2 *)(param_1 + 0x7f4) = 0;
  *puStack_40 = 0;
  *(undefined2 *)(param_1 + 0x7fc) = 0;
  *puStack_3c = 0;
  *(undefined2 *)(param_1 + 0x804) = 0;
  *puStack_38 = 0;
  *(undefined2 *)(puStack_38 + 1) = 0;
  func_08008B54(param_1 + 0x810,0);
  func_08008B54(param_1 + _DAT_080c1224,1);
  func_08008B54(param_1 + _DAT_080c129c,2);
  func_08008B54(param_1 + _DAT_080c12a0,3);
  func_08008B54(param_1 + 0x820,4);
  iVar1 = _DAT_080c12a4;
  puVar3 = (undefined4 *)(param_1 + _DAT_080c12a4);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = _DAT_080c12a8;
  *(undefined4 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x834) = 0;
  *(undefined4 *)(param_1 + 0x838) = _DAT_080c12ac;
  func_080E52A0(param_1 + iVar1 + 0x18);
  *(undefined4 *)(param_1 + _DAT_080c12b0) = 0;
  *(undefined4 *)(param_1 + 0x980) = *puStack_5c;
  *(undefined1 *)(param_1 + _DAT_080c12b4) = *(undefined1 *)(puStack_5c + 1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080C14BC @ 0x080C14BC
// =============================================================================
undefined4 func_080C14BC(void)

{
  undefined4 in_lr;
  
  func_08008724();
  return in_lr;
}

// =============================================================================
// Function: func_080C14C8 @ 0x080C14C8
// =============================================================================
undefined4 func_080C14C8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = param_1 + _DAT_080c15dc;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,3);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15e0;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,6);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15e4;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,3);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15e8;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,2);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15ec;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,2);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15f0;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,5);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15f4;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,2);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15f8;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,3);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c15fc;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,2);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c1600;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,6);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = param_1 + _DAT_080c1604;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  uVar1 = func_08007B54(iVar2,5);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  param_1 = param_1 + _DAT_080c1608;
  func_08007C28(param_1,*(undefined4 *)(param_1 + 4));
  uVar1 = func_08007B54(param_1,3);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080C160C @ 0x080C160C
// =============================================================================
undefined4 func_080C160C(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  func_08008EB8(0,_DAT_080c16ac,0x20);
  uVar1 = _DAT_080c16b0;
  func_08008EB8(0xffffffff,_DAT_080c16b0,0x800);
  uVar2 = _DAT_080c16b4;
  func_08008EB8(0xffffffff,_DAT_080c16b4,0x800);
  func_0x080d102c(_DAT_080c16b8,uVar2);
  func_0x080d102c(_DAT_080c16bc,uVar1);
  func_0x080d102c(_DAT_080c16c0,0x6000000);
  func_08008E64(_DAT_080c16c4,_DAT_080c16c8,0x200);
  puVar3 = (undefined2 *)func_0x08008918(param_1);
  *puVar3 = 0x1640;
  iVar4 = func_0x08008918(param_1);
  *(short *)(iVar4 + 10) = (short)_DAT_080c16cc;
  iVar4 = func_0x08008918(param_1);
  *(short *)(iVar4 + 0xc) = (short)_DAT_080c16d0;
  return in_lr;
}

// =============================================================================
// Function: func_080C16D4 @ 0x080C16D4
// =============================================================================
undefined4 func_080C16D4(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 in_lr;
  undefined1 auStack_e4 [4];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
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
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  func_08008E64(*_DAT_080c17ec,_DAT_080c17f0,0x20);
  func_080C14C8(param_1);
  puVar6 = _DAT_080c17f4;
  *_DAT_080c17f4 = *_DAT_080c17f8;
  puVar6[1] = *_DAT_080c17fc;
  puVar6[2] = 0x1f;
  puVar6[3] = (short)_DAT_080c1800;
  func_08008EB8(0,param_1 + 0x548,8);
  func_0804EC84(*(undefined1 *)(_DAT_080c1804 + param_1),auStack_e4,0);
  puVar6 = _DAT_080c1808;
  *_DAT_080c1808 = 0x3e0;
  puVar6[1] = (short)_DAT_080c180c;
  puVar6[2] = (short)_DAT_080c1810;
  puVar6[3] = (short)_DAT_080c1814;
  puVar6[4] = (short)_DAT_080c1818;
  uStack_b0 = 0x20004;
  iVar12 = param_1 + 0xc;
  func_0804E7A0(0x20004,iVar12,0);
  uStack_ac = 0x20004;
  func_0804E958(0x20004,iVar12,0,0,auStack_e4,0,1);
  piVar3 = (int *)func_0x08008910(param_1);
  iVar4 = func_08007D4C(_DAT_080c181c + param_1,*(undefined4 *)(_DAT_080c181c + param_1 + 4));
  func_08008F0C(&uStack_e0,iVar12,iVar4 * 0x20 + _DAT_080c1820,0x100);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_a4 = 1;
    iStack_a8 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_a8;
    if (iStack_a8 == 0) {
      piVar15 = &iStack_a4;
    }
    puStack_28 = puVar9;
    if (iStack_a8 + *piVar15 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_a8 + *piVar15) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar4);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puStack_34 = &uStack_a0;
    puStack_2c = &uStack_d0;
    puVar11 = puStack_24;
    for (puVar9 = (undefined4 *)*piVar3; puVar9 != puStack_28; puVar9 = puVar9 + 4) {
      if (puVar11 != (undefined4 *)0x0) {
        uVar5 = puVar9[1];
        uVar16 = puVar9[2];
        *puVar11 = *puVar9;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar9[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_a4;
    if (iStack_a4 == 1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
    puStack_34 = &uStack_a0;
    puStack_2c = &uStack_d0;
  }
  uVar5 = func_08007D4C(_DAT_080c1a3c + param_1,*(undefined4 *)(_DAT_080c1a3c + param_1 + 4));
  func_0804EA94(puStack_34,0xd0,8,uVar5,2,0,2,1);
  *(undefined4 *)(param_1 + 0x548) = uStack_a0;
  *(undefined4 *)(param_1 + 0x54c) = uStack_9c;
  uVar5 = func_080005D4(0x14);
  iVar4 = func_0805E824(uVar5,*(undefined4 *)(param_1 + 0x520),0,0x100);
  piVar3 = (int *)(param_1 + 0x550);
  if (iVar4 != *piVar3) {
    func_08000608();
  }
  *piVar3 = iVar4;
  puVar6 = (undefined2 *)func_080005D4(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined1 *)((int)puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(_DAT_080c1a40 + param_1);
  if (puVar6 != (undefined2 *)*piVar15) {
    func_08000608();
  }
  *piVar15 = (int)puVar6;
  func_0805E860(*piVar3,0);
  *(undefined2 *)*piVar15 = 0x40;
  *(undefined2 *)(*piVar15 + 2) = 0x40;
  iVar4 = *piVar15;
  iVar12 = _DAT_080c1a44 + param_1;
  uVar1 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  *(undefined2 *)(iVar4 + 6) = uVar1;
  *(undefined2 *)(*piVar15 + 4) = 3;
  *(undefined1 *)(*piVar15 + 0x18) = 1;
  puVar9 = (undefined4 *)*piVar3;
  func_0x080d3918(&uStack_d0,(int *)*puVar9,
                  *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar9 + 0x10));
  memcpy(puStack_2c,puStack_2c,0x20);
  uVar5 = puStack_2c[1];
  uVar16 = puStack_2c[2];
  *(undefined4 *)(param_1 + 0x558) = *puStack_2c;
  *(undefined4 *)(param_1 + 0x55c) = uVar5;
  *(undefined4 *)(param_1 + 0x560) = uVar16;
  uVar5 = puStack_2c[4];
  uVar16 = puStack_2c[5];
  *(undefined4 *)(param_1 + 0x564) = puStack_2c[3];
  *(undefined4 *)(param_1 + 0x568) = uVar5;
  *(undefined4 *)(param_1 + 0x56c) = uVar16;
  uVar5 = puStack_2c[7];
  *(undefined4 *)(param_1 + 0x570) = puStack_2c[6];
  *(undefined4 *)(param_1 + 0x574) = uVar5;
  piVar3 = (int *)func_0x08008910(param_1);
  iVar17 = *(int *)(param_1 + 0x560);
  iVar4 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x560) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x564);
  }
  func_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + _DAT_080c1a48,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_94 = 1;
    iStack_98 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_98;
    if (iStack_98 == 0) {
      piVar15 = &iStack_94;
    }
    puStack_28 = puVar9;
    if (iStack_98 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_98 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar11 = puVar9;
    for (puVar10 = (undefined4 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
      if (puVar11 != (undefined4 *)0x0) {
        uVar5 = puVar10[1];
        uVar16 = puVar10[2];
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar10[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_94;
    if (iStack_94 == 1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x568) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x56c);
  }
  func_08008F0C(&uStack_e0,*(int *)(param_1 + 0x568),_DAT_080c1b58,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_8c = 1;
    iStack_90 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_90;
    if (iStack_90 == 0) {
      piVar15 = &iStack_8c;
    }
    puStack_28 = puVar9;
    if (iStack_90 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_90 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_8c;
    if (iStack_8c == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = func_080005D4(0x14);
  iVar4 = func_0805E824(uVar5,*(undefined4 *)(param_1 + 0x528),0,0x100);
  piVar3 = (int *)(param_1 + 0x578);
  if (iVar4 != *piVar3) {
    func_08000608();
  }
  *piVar3 = iVar4;
  puVar6 = (undefined2 *)func_080005D4(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined1 *)((int)puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(_DAT_080c1d44 + param_1);
  if (puVar6 != (undefined2 *)*piVar15) {
    func_08000608();
  }
  *piVar15 = (int)puVar6;
  func_0805E860(*piVar3,0);
  *(undefined2 *)*piVar15 = 0xc0;
  *(undefined2 *)(*piVar15 + 2) = 0;
  iVar4 = *piVar15;
  iVar12 = _DAT_080c1d48 + param_1;
  uVar1 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  *(undefined2 *)(iVar4 + 6) = uVar1;
  *(undefined2 *)(*piVar15 + 4) = 7;
  *(undefined2 *)(*piVar15 + 8) = 1;
  *(undefined1 *)(*piVar15 + 0x18) = 1;
  puVar9 = (undefined4 *)*piVar3;
  func_0x080d3918(&uStack_e0,(int *)*puVar9,
                  *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar9 + 0x10));
  memcpy(&uStack_e0,&uStack_e0,0x20);
  *(undefined4 *)(param_1 + 0x580) = uStack_e0;
  *(undefined4 *)(param_1 + 0x584) = uStack_dc;
  *(undefined4 *)(param_1 + 0x588) = uStack_d8;
  *(undefined4 *)(param_1 + 0x58c) = uStack_d4;
  *(undefined4 *)(param_1 + 0x590) = uStack_d0;
  *(undefined4 *)(param_1 + 0x594) = uStack_cc;
  *(undefined4 *)(param_1 + 0x598) = uStack_c8;
  *(undefined4 *)(param_1 + 0x59c) = uStack_c4;
  piVar3 = (int *)func_0x08008910(param_1);
  iVar17 = *(int *)(param_1 + 0x588);
  iVar4 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x588) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x58c);
  }
  func_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + _DAT_080c1d4c,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_84 = 1;
    iStack_88 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_88;
    if (iStack_88 == 0) {
      piVar15 = &iStack_84;
    }
    puStack_28 = puVar9;
    if (iStack_88 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_88 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_84;
    if (iStack_84 == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x590) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x594);
  }
  func_08008F0C(&uStack_e0,*(int *)(param_1 + 0x590),_DAT_080c1e60,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_7c = 1;
    iStack_80 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_80;
    if (iStack_80 == 0) {
      piVar15 = &iStack_7c;
    }
    puStack_28 = puVar9;
    if (iStack_80 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_80 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_7c;
    if (iStack_7c == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = func_080005D4(0x14);
  iVar4 = func_0805E824(uVar5,*(undefined4 *)(param_1 + 0x538),0,0x100);
  piVar3 = (int *)(param_1 + 0x728);
  if (iVar4 != *piVar3) {
    func_08000608();
  }
  *piVar3 = iVar4;
  puVar6 = (undefined2 *)func_080005D4(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined1 *)((int)puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(_DAT_080c203c + param_1);
  if (puVar6 != (undefined2 *)*piVar15) {
    func_08000608();
  }
  *piVar15 = (int)puVar6;
  func_0805E860(*piVar3,6);
  iVar4 = *piVar15;
  iVar12 = _DAT_080c2040 + param_1;
  uVar1 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  *(undefined2 *)(iVar4 + 6) = uVar1;
  *(undefined2 *)(*piVar15 + 4) = 8;
  *(undefined1 *)(*piVar15 + 0x18) = 1;
  puVar9 = (undefined4 *)*piVar3;
  func_0x080d3918(&uStack_e0,(int *)*puVar9,
                  *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar9 + 0x10));
  memcpy(&uStack_e0,&uStack_e0,0x20);
  *(undefined4 *)(param_1 + 0x730) = uStack_e0;
  *(undefined4 *)(param_1 + 0x734) = uStack_dc;
  *(undefined4 *)(param_1 + 0x738) = uStack_d8;
  *(undefined4 *)(param_1 + 0x73c) = uStack_d4;
  *(undefined4 *)(param_1 + 0x740) = uStack_d0;
  *(undefined4 *)(param_1 + 0x744) = uStack_cc;
  *(undefined4 *)(param_1 + 0x748) = uStack_c8;
  *(undefined4 *)(param_1 + 0x74c) = uStack_c4;
  piVar3 = (int *)func_0x08008910(param_1);
  iVar17 = *(int *)(param_1 + 0x738);
  iVar4 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x738) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x73c);
  }
  func_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + _DAT_080c2044,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_74 = 1;
    iStack_78 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_78;
    if (iStack_78 == 0) {
      piVar15 = &iStack_74;
    }
    puStack_28 = puVar9;
    if (iStack_78 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_78 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar11 = puVar9;
    for (puVar10 = (undefined4 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
      if (puVar11 != (undefined4 *)0x0) {
        uVar5 = puVar10[1];
        uVar16 = puVar10[2];
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar10[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_74;
    if (iStack_74 == 1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x740) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x744);
  }
  func_08008F0C(&uStack_e0,*(int *)(param_1 + 0x740),_DAT_080c2154,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_6c = 1;
    iStack_70 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_70;
    if (iStack_70 == 0) {
      piVar15 = &iStack_6c;
    }
    puStack_28 = puVar9;
    if (iStack_70 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_70 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_6c;
    if (iStack_6c == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = func_080005D4(0x14);
  puVar9 = (undefined4 *)(_DAT_080c23b8 + param_1);
  iVar4 = func_0805E824(uVar5,*puVar9,0,0x100);
  if (iVar4 != *(int *)(param_1 + 0x5a0)) {
    func_08000608();
  }
  *(int *)(param_1 + 0x5a0) = iVar4;
  puVar7 = (ushort *)func_080005D4(0x1c);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(undefined1 *)(puVar7 + 8) = 0;
  *(undefined1 *)((int)puVar7 + 0x11) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  piVar3 = (int *)(_DAT_080c23bc + param_1);
  if (puVar7 != (ushort *)*piVar3) {
    func_08000608();
  }
  *piVar3 = (int)puVar7;
  *puVar7 = (ushort)*(byte *)(_DAT_080c23c0 + param_1);
  puVar7[1] = (ushort)*(byte *)(_DAT_080c23c4 + param_1);
  uVar2 = func_08007D4C(_DAT_080c23c8 + param_1,*(undefined4 *)(_DAT_080c23c8 + param_1 + 4));
  puVar7[3] = uVar2;
  *(undefined2 *)(*piVar3 + 4) = 0xc;
  *(undefined2 *)(*piVar3 + 8) = 1;
  *(undefined1 *)(*piVar3 + 0x18) = 1;
  uVar5 = func_080005D4(0x14);
  iVar4 = func_0805E824(uVar5,*puVar9,0,0x100);
  piVar3 = (int *)(param_1 + 0x5c8);
  if (iVar4 != *piVar3) {
    func_08000608();
  }
  *piVar3 = iVar4;
  puVar6 = (undefined2 *)func_080005D4(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined1 *)((int)puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(_DAT_080c23cc + param_1);
  if (puVar6 != (undefined2 *)*piVar15) {
    func_08000608();
  }
  *piVar15 = (int)puVar6;
  func_0805E860(*piVar3,_DAT_080c23d0);
  iVar4 = *piVar15;
  iVar12 = _DAT_080c23d4 + param_1;
  uVar1 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  *(undefined2 *)(iVar4 + 6) = uVar1;
  *(undefined2 *)(*piVar15 + 4) = 10;
  *(undefined2 *)(*piVar15 + 8) = 1;
  *(undefined1 *)(*piVar15 + 0x18) = 1;
  puVar9 = (undefined4 *)*piVar3;
  func_0x080d3918(&uStack_e0,(int *)*puVar9,
                  *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar9 + 0x10));
  memcpy(&uStack_e0,&uStack_e0,0x20);
  *(undefined4 *)(param_1 + 0x5d0) = uStack_e0;
  *(undefined4 *)(param_1 + 0x5d4) = uStack_dc;
  *(undefined4 *)(param_1 + 0x5d8) = uStack_d8;
  *(undefined4 *)(param_1 + 0x5dc) = uStack_d4;
  *(undefined4 *)(param_1 + 0x5e0) = uStack_d0;
  *(undefined4 *)(param_1 + 0x5e4) = uStack_cc;
  *(undefined4 *)(param_1 + 0x5e8) = uStack_c8;
  *(undefined4 *)(param_1 + 0x5ec) = uStack_c4;
  piVar3 = (int *)func_0x08008910(param_1);
  iVar17 = *(int *)(param_1 + 0x5d8);
  iVar4 = func_08007D4C(iVar12,*(undefined4 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5d8) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x5dc);
  }
  func_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + _DAT_080c23d8,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_64 = 1;
    iStack_68 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_68;
    if (iStack_68 == 0) {
      piVar15 = &iStack_64;
    }
    puStack_28 = puVar9;
    if (iStack_68 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_68 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar11 = puVar9;
    for (puVar10 = (undefined4 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
      if (puVar11 != (undefined4 *)0x0) {
        uVar5 = puVar10[1];
        uVar16 = puVar10[2];
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar10[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_64;
    if (iStack_64 == 1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5e0) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x5e4);
  }
  func_08008F0C(&uStack_e0,*(int *)(param_1 + 0x5e0),_DAT_080c24e8,uVar1);
  puVar9 = (undefined4 *)piVar3[1];
  if (puVar9 == (undefined4 *)piVar3[3]) {
    iStack_5c = 1;
    iStack_60 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_60;
    if (iStack_60 == 0) {
      piVar15 = &iStack_5c;
    }
    puStack_28 = puVar9;
    if (iStack_60 + *piVar15 == 0) {
      puVar9 = (undefined4 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_60 + *piVar15) * 0x10;
      puVar9 = (undefined4 *)malloc(iVar4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)func_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_5c;
    if (iStack_5c == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = func_080005D4(0x14);
  iVar4 = func_0805E824(uVar5,*(undefined4 *)(_DAT_080c27c4 + param_1),0,0x100);
  piVar3 = (int *)(param_1 + 0x5f0);
  if (iVar4 != *piVar3) {
    func_08000608();
  }
  *piVar3 = iVar4;
  puVar6 = (undefined2 *)func_080005D4(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined1 *)((int)puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(_DAT_080c27c8 + param_1);
  if (puVar6 != (undefined2 *)*piVar15) {
    func_08000608();
  }
  *piVar15 = (int)puVar6;
  func_0805E860(*piVar3,*(int *)(param_1 + 0x980) * 0x54 + _DAT_080c27cc);
  *(ushort *)*piVar15 = (ushort)*(byte *)(_DAT_080c27d0 + param_1);
  *(ushort *)(*piVar15 + 2) = (ushort)*(byte *)(_DAT_080c27d4 + param_1);
  iVar4 = *piVar15;
  uVar1 = func_08007D4C(_DAT_080c27d8 + param_1,*(undefined4 *)(_DAT_080c27d8 + param_1 + 4));
  *(undefined2 *)(iVar4 + 6) = uVar1;
  *(undefined2 *)(*piVar15 + 4) = 4;
  *(undefined2 *)(*piVar15 + 8) = 1;
  *(undefined1 *)(*piVar15 + 0x18) = 1;
  uVar5 = func_080005D4(0x14);
  iVar4 = func_0805E824(uVar5,*(undefined4 *)(_DAT_080c27dc + param_1),0,0x100);
  if (iVar4 != *(int *)(param_1 + 0x6a0)) {
    func_08000608();
  }
  *(int *)(param_1 + 0x6a0) = iVar4;
  func_0805E860(iVar4,0);
  iStack_38 = 0;
  do {
    iVar17 = 0;
    iVar4 = iStack_38 * 4;
    iVar12 = iStack_38 << 4;
    do {
      iVar8 = iStack_38 + iVar4;
      puVar6 = (undefined2 *)func_080005D4(0x1c);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined1 *)((int)puVar6 + 0x11) = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      *(undefined1 *)(puVar6 + 0xc) = 0;
      iVar8 = (iVar8 + iVar17) * 4;
      puVar9 = (undefined4 *)(iVar8 + param_1 + _DAT_080c27e0);
      if (puVar6 != (undefined2 *)*puVar9) {
        func_08000608();
      }
      *puVar9 = puVar6;
      iVar13 = _DAT_080c27e0;
      **(short **)(iVar8 + param_1 + _DAT_080c27e0) = (short)iVar17 * 0x10 + 0x50;
      *(short *)(*(int *)(iVar8 + param_1 + iVar13) + 2) = (short)iVar12 + 0x28;
      iVar13 = *(int *)(iVar8 + param_1 + iVar13);
      iVar14 = _DAT_080c27e4 + param_1;
      uVar1 = func_08007D4C(iVar14,*(undefined4 *)(iVar14 + 4));
      *(undefined2 *)(iVar13 + 6) = uVar1;
      iVar13 = _DAT_080c27e0;
      *(undefined2 *)(*(int *)(iVar8 + param_1 + _DAT_080c27e0) + 4) = 5;
      *(undefined2 *)(*(int *)(iVar8 + param_1 + iVar13) + 8) = 1;
      *(undefined1 *)(*(int *)(iVar8 + param_1 + iVar13) + 0x18) = 1;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 5);
    puVar9 = *(undefined4 **)(param_1 + 0x6a0);
    func_0x080d3918(&uStack_e0,(int *)*puVar9,
                    *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar9 + 0x10));
    memcpy(&uStack_e0,&uStack_e0,0x20);
    *(undefined4 *)(param_1 + 0x708) = uStack_e0;
    *(undefined4 *)(param_1 + 0x70c) = uStack_dc;
    *(undefined4 *)(param_1 + 0x710) = uStack_d8;
    *(undefined4 *)(param_1 + 0x714) = uStack_d4;
    *(undefined4 *)(param_1 + 0x718) = uStack_d0;
    *(undefined4 *)(param_1 + 0x71c) = uStack_cc;
    *(undefined4 *)(param_1 + 0x720) = uStack_c8;
    *(undefined4 *)(param_1 + 0x724) = uStack_c4;
    piVar3 = (int *)func_0x08008910(param_1,param_1 + 0x728);
    iVar12 = *(int *)(param_1 + 0x710);
    iVar4 = func_08007D4C(iVar14,*(undefined4 *)(iVar14 + 4));
    uVar1 = 0;
    if (*(int *)(param_1 + 0x710) != 0) {
      uVar1 = *(undefined2 *)(param_1 + 0x714);
    }
    func_08008F0C(&uStack_e0,iVar12,iVar4 * 0x20 + _DAT_080c27e8,uVar1);
    puVar9 = (undefined4 *)piVar3[1];
    if (puVar9 == (undefined4 *)piVar3[3]) {
      iStack_54 = 1;
      iStack_58 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_58;
      if (iStack_58 == 0) {
        piVar15 = &iStack_54;
      }
      puStack_28 = puVar9;
      if (iStack_58 + *piVar15 == 0) {
        puVar9 = (undefined4 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_58 + *piVar15) * 0x10;
        puVar9 = (undefined4 *)malloc(iVar4);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)func_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_54;
      if (iStack_54 == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    piVar3 = (int *)func_0x08008910(param_1);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x718) != 0) {
      uVar1 = *(undefined2 *)(param_1 + 0x71c);
    }
    func_08008F0C(&uStack_e0,*(int *)(param_1 + 0x718),_DAT_080c2900,uVar1);
    puVar9 = (undefined4 *)piVar3[1];
    if (puVar9 == (undefined4 *)piVar3[3]) {
      iStack_4c = 1;
      iStack_50 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_50;
      if (iStack_50 == 0) {
        piVar15 = &iStack_4c;
      }
      puStack_28 = puVar9;
      if (iStack_50 + *piVar15 == 0) {
        puVar9 = (undefined4 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_50 + *piVar15) * 0x10;
        puVar9 = (undefined4 *)malloc(iVar4);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)func_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_4c;
      if (iStack_4c == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    iStack_38 = iStack_38 + 1;
  } while (iStack_38 < 5);
  uVar5 = func_080005D4(0x14);
  iVar4 = func_0805E824(uVar5,*(undefined4 *)(param_1 + 0x530),0,0x100);
  if (iVar4 != *(int *)(param_1 + 0x618)) {
    func_08000608();
  }
  *(int *)(param_1 + 0x618) = iVar4;
  func_0805E860(iVar4,0);
  iStack_38 = 0;
  do {
    iVar17 = 0;
    iVar4 = iStack_38 * 4;
    iVar12 = iStack_38 << 4;
    iStack_30 = iStack_38 + 1;
    do {
      iVar8 = iStack_38 + iVar4;
      puVar6 = (undefined2 *)func_080005D4(0x1c);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined1 *)((int)puVar6 + 0x11) = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      *(undefined1 *)(puVar6 + 0xc) = 0;
      iVar8 = (iVar8 + iVar17) * 4;
      puVar9 = (undefined4 *)(iVar8 + param_1 + _DAT_080c2b4c);
      if (puVar6 != (undefined2 *)*puVar9) {
        func_08000608();
      }
      *puVar9 = puVar6;
      iVar13 = _DAT_080c2b4c;
      **(short **)(iVar8 + param_1 + _DAT_080c2b4c) = (short)iVar17 * 0x10 + 0x50;
      *(short *)(*(int *)(iVar8 + param_1 + iVar13) + 2) = (short)iVar12 + 0x28;
      iVar13 = *(int *)(iVar8 + param_1 + iVar13);
      iVar14 = _DAT_080c2b50 + param_1;
      uVar1 = func_08007D4C(iVar14,*(undefined4 *)(iVar14 + 4));
      *(undefined2 *)(iVar13 + 6) = uVar1;
      iVar13 = _DAT_080c2b4c;
      *(undefined2 *)(*(int *)(iVar8 + param_1 + _DAT_080c2b4c) + 4) = 6;
      *(undefined2 *)(*(int *)(iVar8 + param_1 + iVar13) + 8) = 1;
      *(undefined1 *)(*(int *)(iVar8 + param_1 + iVar13) + 0x18) = 1;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 5);
    puVar9 = *(undefined4 **)(param_1 + 0x618);
    func_0x080d3918(&uStack_e0,(int *)*puVar9,
                    *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar9 + 0x10));
    memcpy(&uStack_e0,&uStack_e0,0x20);
    *(undefined4 *)(param_1 + 0x680) = uStack_e0;
    *(undefined4 *)(param_1 + 0x684) = uStack_dc;
    *(undefined4 *)(param_1 + 0x688) = uStack_d8;
    *(undefined4 *)(param_1 + 0x68c) = uStack_d4;
    *(undefined4 *)(param_1 + 0x690) = uStack_d0;
    *(undefined4 *)(param_1 + 0x694) = uStack_cc;
    *(undefined4 *)(param_1 + 0x698) = uStack_c8;
    *(undefined4 *)(param_1 + 0x69c) = uStack_c4;
    piVar3 = (int *)func_0x08008910(param_1,param_1 + 0x6a0);
    iVar12 = *(int *)(param_1 + 0x688);
    iVar4 = func_08007D4C(iVar14,*(undefined4 *)(iVar14 + 4));
    uVar1 = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      uVar1 = *(undefined2 *)(param_1 + 0x68c);
    }
    func_08008F0C(&uStack_e0,iVar12,iVar4 * 0x20 + _DAT_080c2b54,uVar1);
    puVar9 = (undefined4 *)piVar3[1];
    if (puVar9 == (undefined4 *)piVar3[3]) {
      iStack_44 = 1;
      iStack_48 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_48;
      if (iStack_48 == 0) {
        piVar15 = &iStack_44;
      }
      puStack_28 = puVar9;
      if (iStack_48 + *piVar15 == 0) {
        puVar9 = (undefined4 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_48 + *piVar15) * 0x10;
        puVar9 = (undefined4 *)malloc(iVar4);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)func_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_44;
      if (iStack_44 == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    piVar3 = (int *)func_0x08008910(param_1);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x690) != 0) {
      uVar1 = *(undefined2 *)(param_1 + 0x694);
    }
    func_08008F0C(&uStack_e0,*(int *)(param_1 + 0x690),_DAT_080c2c6c,uVar1);
    puVar9 = (undefined4 *)piVar3[1];
    if (puVar9 == (undefined4 *)piVar3[3]) {
      iStack_3c = 1;
      iStack_40 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_40;
      if (iStack_40 == 0) {
        piVar15 = &iStack_3c;
      }
      puStack_28 = puVar9;
      if (iStack_40 + *piVar15 == 0) {
        puVar9 = (undefined4 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_40 + *piVar15) * 0x10;
        puVar9 = (undefined4 *)malloc(iVar4);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)func_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (undefined4 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_3c;
      if (iStack_3c == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    iStack_38 = iStack_30;
  } while (iStack_30 < 5);
  return in_lr;
}

// =============================================================================
// Function: func_080C2D54 @ 0x080C2D54
// =============================================================================
void func_080C2D54(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  if (*(char *)(_ASSET_BLOCK_080C2FA8 + param_1) != '\0') {
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x7a0) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x7a4);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x7a0),uVar3,*(undefined4 *)(_DAT_080c2fac + param_1));
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x7c8) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x7cc);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x7c8),uVar3,*(undefined4 *)(_DAT_080c2fb0 + param_1));
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x7f0) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x7f4);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x7f0),uVar3,*(undefined4 *)(_DAT_080c2fb4 + param_1));
    puVar9 = (undefined4 *)(param_1 + 0x778);
    iVar11 = 3;
    do {
      pbVar5 = (byte *)func_0x08008920(param_1);
      bVar1 = *pbVar5;
      if (bVar1 < 0x80) {
        *(undefined4 *)(pbVar5 + (uint)bVar1 * 8 + 4) = *puVar9;
        *(undefined2 *)(pbVar5 + (uint)bVar1 * 8 + 4 + 4) = *(undefined2 *)(puVar9 + 1);
        *pbVar5 = bVar1 + 1;
      }
      puVar9 = puVar9 + 2;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  pbVar5 = (byte *)func_0x08008920(param_1);
  bVar1 = *pbVar5;
  if (bVar1 < 0x80) {
    *(undefined4 *)(pbVar5 + (uint)bVar1 * 8 + 4) = *(undefined4 *)(param_1 + 0x548);
    *(undefined2 *)(pbVar5 + (uint)bVar1 * 8 + 4 + 4) = *(undefined2 *)(_DAT_080c2fb8 + param_1);
    *pbVar5 = bVar1 + 1;
  }
  if (((*(int *)(_DAT_080c2fbc + param_1) == 4) && (*(int *)(_DAT_080c2fc0 + param_1) == 1)) ||
     ((*(int *)(_DAT_080c2fbc + param_1) == 3 && (*(int *)(param_1 + 0x8a0) != 2)))) {
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x558) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x55c);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x558),uVar3,*(undefined4 *)(_DAT_080c2fc4 + param_1));
  }
  uVar4 = func_0x08008920(param_1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x580) != 0) {
    uVar3 = *(undefined2 *)(param_1 + 0x584);
  }
  func_0805E99C(uVar4,*(int *)(param_1 + 0x580),uVar3,*(undefined4 *)(_DAT_080c2fc8 + param_1));
  if (*(char *)(_DAT_080c2fcc + param_1) != '\0') {
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x758) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x75c);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x758),uVar3,*(undefined4 *)(_DAT_080c2fd0 + param_1));
  }
  if (*(int *)(_DAT_080c2fd4 + param_1) == 9) {
    piVar7 = (int *)(_DAT_080c2fd8 + param_1);
    *(ushort *)*piVar7 = *(byte *)(_DAT_080c2fdc + param_1) - 8;
    *(ushort *)(*piVar7 + 2) = *(byte *)(_DAT_080c2fe0 + param_1) - 0x20;
    piVar7 = (int *)(param_1 + 0x728);
    iVar11 = func_0805E8F0(*piVar7);
    if (iVar11 * 0x40000000 < 0) {
      if (iVar11 * 0x20000000 < 0) {
        *(undefined2 *)(*piVar7 + 0x10) = 0;
      }
      puVar9 = (undefined4 *)*piVar7;
      func_0x080d3918(&uStack_78,(int *)*puVar9,
                      *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                      *(undefined4 *)(*(int *)*puVar9 + 0x10));
      memcpy(&uStack_78,&uStack_78,0x20);
      *(undefined4 *)(param_1 + 0x730) = uStack_78;
      *(undefined4 *)(param_1 + 0x734) = uStack_74;
      *(undefined4 *)(param_1 + 0x738) = uStack_70;
      *(undefined4 *)(param_1 + 0x73c) = uStack_6c;
      *(undefined4 *)(param_1 + 0x740) = uStack_68;
      *(undefined4 *)(param_1 + 0x744) = uStack_64;
      *(undefined4 *)(param_1 + 0x748) = uStack_60;
      *(undefined4 *)(param_1 + 0x74c) = uStack_5c;
      piVar7 = (int *)func_0x08008910(param_1);
      iVar13 = *(int *)(param_1 + 0x738);
      iVar11 = func_08007D4C(_DAT_080c2fe4 + param_1,*(undefined4 *)(_DAT_080c2fe4 + param_1 + 4));
      uVar3 = 0;
      if (*(int *)(param_1 + 0x738) != 0) {
        uVar3 = *(undefined2 *)(param_1 + 0x73c);
      }
      func_08008F0C(&uStack_78,iVar13,iVar11 * 0x20 + _DAT_080c2fe8,uVar3);
      puVar9 = (undefined4 *)piVar7[1];
      if (puVar9 == (undefined4 *)piVar7[3]) {
        iStack_54 = 1;
        iStack_58 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_58;
        if (iStack_58 == 0) {
          piVar6 = &iStack_54;
        }
        puStack_28 = puVar9;
        if (iStack_58 + *piVar6 == 0) {
          puStack_24 = (undefined4 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_58 + *piVar6) * 0x10;
          puStack_24 = (undefined4 *)malloc(iVar11);
          if (puStack_24 == (undefined4 *)0x0) {
            puStack_24 = (undefined4 *)func_080D3BC0(iVar11);
          }
        }
        puVar8 = puStack_24;
        for (puVar9 = (undefined4 *)*piVar7; puVar9 != puStack_28; puVar9 = puVar9 + 4) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar4 = puVar9[1];
            uVar14 = puVar9[2];
            *puVar8 = *puVar9;
            puVar8[1] = uVar4;
            puVar8[2] = uVar14;
            puVar8[3] = puVar9[3];
          }
          puVar8 = puVar8 + 4;
        }
        iVar13 = iStack_54;
        if (iStack_54 == 1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = uStack_78;
            puVar8[1] = uStack_74;
            puVar8[2] = uStack_70;
            puVar8[3] = uStack_6c;
          }
          puVar8 = puVar8 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = uStack_78;
              puVar8[1] = uStack_74;
              puVar8[2] = uStack_70;
              puVar8[3] = uStack_6c;
            }
            puVar8 = puVar8 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        if (*piVar7 != 0) {
          free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar8;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
      piVar7 = (int *)func_0x08008910(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x740) != 0) {
        uVar3 = *(undefined2 *)(param_1 + 0x744);
      }
      func_08008F0C(&uStack_78,*(int *)(param_1 + 0x740),_DAT_080c30f8,uVar3);
      puVar9 = (undefined4 *)piVar7[1];
      if (puVar9 == (undefined4 *)piVar7[3]) {
        iStack_4c = 1;
        iStack_50 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_50;
        if (iStack_50 == 0) {
          piVar6 = &iStack_4c;
        }
        puStack_28 = puVar9;
        if (iStack_50 + *piVar6 == 0) {
          puVar9 = (undefined4 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_50 + *piVar6) * 0x10;
          puVar9 = (undefined4 *)malloc(iVar11);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)func_080D3BC0(iVar11);
          }
        }
        puVar10 = puVar9;
        for (puVar8 = (undefined4 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar4 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar10[2] = uVar14;
            puVar10[3] = puVar8[3];
          }
          puVar10 = puVar10 + 4;
        }
        iVar13 = iStack_4c;
        if (iStack_4c == 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = uStack_78;
              puVar10[1] = uStack_74;
              puVar10[2] = uStack_70;
              puVar10[3] = uStack_6c;
            }
            puVar10 = puVar10 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        puStack_24 = puVar9;
        if (*piVar7 != 0) {
          free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar10;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
    }
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x730) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x734);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x730),uVar3,
                  *(undefined4 *)(_ASSET_BLOCK_080C321C + param_1));
  }
  if (*(char *)(_DAT_080c3220 + param_1) != '\0') {
    if ((*(int *)(_DAT_080c3224 + param_1) == 2) || (*(int *)(_DAT_080c3224 + param_1) == 0)) {
      piVar7 = (int *)(_DAT_080c32ec + param_1);
      *(ushort *)*piVar7 = (ushort)*(byte *)(_DAT_080c32f0 + param_1);
      iVar11 = *piVar7;
      uVar2 = (ushort)*(byte *)(_DAT_080c32f4 + param_1);
    }
    else {
      piVar7 = (int *)(_DAT_080c3228 + param_1);
      *(ushort *)*piVar7 = (ushort)*(byte *)(_DAT_080c322c + param_1);
      iVar11 = *piVar7;
      uVar2 = *(byte *)(_DAT_080c3230 + param_1) + 0xf;
    }
    *(ushort *)(iVar11 + 2) = uVar2;
    iVar11 = func_0805E8F0(*(int *)(param_1 + 0x5f0));
    if (iVar11 * 0x40000000 < 0) {
      puVar9 = *(undefined4 **)(param_1 + 0x5f0);
      func_0x080d3918(&uStack_78,(int *)*puVar9,
                      *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                      *(undefined4 *)(*(int *)*puVar9 + 0x10));
      memcpy(&uStack_78,&uStack_78,0x20);
      *(undefined4 *)(param_1 + 0x5f8) = uStack_78;
      *(undefined4 *)(param_1 + 0x5fc) = uStack_74;
      *(undefined4 *)(param_1 + 0x600) = uStack_70;
      *(undefined4 *)(param_1 + 0x604) = uStack_6c;
      *(undefined4 *)(param_1 + 0x608) = uStack_68;
      *(undefined4 *)(param_1 + 0x60c) = uStack_64;
      *(undefined4 *)(param_1 + 0x610) = uStack_60;
      *(undefined4 *)(param_1 + 0x614) = uStack_5c;
      piVar7 = (int *)func_0x08008910(param_1);
      iVar13 = *(int *)(param_1 + 0x600);
      iVar11 = func_08007D4C(_DAT_080c32f8 + param_1,*(undefined4 *)(_DAT_080c32f8 + param_1 + 4));
      uVar3 = 0;
      if (*(int *)(param_1 + 0x600) != 0) {
        uVar3 = *(undefined2 *)(param_1 + 0x604);
      }
      func_08008F0C(&uStack_78,iVar13,iVar11 * 0x20 + _DAT_080c32fc,uVar3);
      puVar9 = (undefined4 *)piVar7[1];
      if (puVar9 == (undefined4 *)piVar7[3]) {
        iStack_44 = 1;
        iStack_48 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_48;
        if (iStack_48 == 0) {
          piVar6 = &iStack_44;
        }
        puStack_28 = puVar9;
        if (iStack_48 + *piVar6 == 0) {
          puVar9 = (undefined4 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_48 + *piVar6) * 0x10;
          puVar9 = (undefined4 *)malloc(iVar11);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)func_080D3BC0(iVar11);
          }
        }
        puVar10 = puVar9;
        for (puVar8 = (undefined4 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar4 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar10[2] = uVar14;
            puVar10[3] = puVar8[3];
          }
          puVar10 = puVar10 + 4;
        }
        iVar13 = iStack_44;
        if (iStack_44 == 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = uStack_78;
              puVar10[1] = uStack_74;
              puVar10[2] = uStack_70;
              puVar10[3] = uStack_6c;
            }
            puVar10 = puVar10 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        puStack_24 = puVar9;
        if (*piVar7 != 0) {
          free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar10;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
      piVar7 = (int *)func_0x08008910(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x608) != 0) {
        uVar3 = *(undefined2 *)(param_1 + 0x60c);
      }
      func_08008F0C(&uStack_78,*(int *)(param_1 + 0x608),_DAT_080c340c,uVar3);
      puVar9 = (undefined4 *)piVar7[1];
      if (puVar9 == (undefined4 *)piVar7[3]) {
        iStack_3c = 1;
        iStack_40 = (int)puVar9 - *piVar7 >> 4;
        piVar6 = &iStack_40;
        if (iStack_40 == 0) {
          piVar6 = &iStack_3c;
        }
        puStack_28 = puVar9;
        if (iStack_40 + *piVar6 == 0) {
          puVar9 = (undefined4 *)0x0;
          iVar11 = 0;
        }
        else {
          iVar11 = (iStack_40 + *piVar6) * 0x10;
          puVar9 = (undefined4 *)malloc(iVar11);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)func_080D3BC0(iVar11);
          }
        }
        puVar10 = puVar9;
        for (puVar8 = (undefined4 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar4 = puVar8[1];
            uVar14 = puVar8[2];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar10[2] = uVar14;
            puVar10[3] = puVar8[3];
          }
          puVar10 = puVar10 + 4;
        }
        iVar13 = iStack_3c;
        if (iStack_3c == 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = uStack_78;
              puVar10[1] = uStack_74;
              puVar10[2] = uStack_70;
              puVar10[3] = uStack_6c;
            }
            puVar10 = puVar10 + 4;
          }
        }
        for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
        }
        puStack_24 = puVar9;
        if (*piVar7 != 0) {
          free();
        }
        *piVar7 = (int)puStack_24;
        piVar7[1] = (int)puVar10;
        piVar7[3] = (int)puStack_24 + iVar11;
      }
      else {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uStack_78;
          puVar9[1] = uStack_74;
          puVar9[2] = uStack_70;
          puVar9[3] = uStack_6c;
        }
        piVar7[1] = piVar7[1] + 0x10;
      }
    }
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5f8) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x5fc);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x5f8),uVar3,*(undefined4 *)(_DAT_080c35dc + param_1));
  }
  piVar7 = (int *)(_DAT_080c35e0 + param_1);
  *(ushort *)*piVar7 = (ushort)*(byte *)(_DAT_080c35e4 + param_1);
  *(ushort *)(*piVar7 + 2) = (ushort)*(byte *)(_DAT_080c35e8 + param_1);
  pcVar12 = (char *)(_DAT_080c35ec + param_1);
  if (*pcVar12 != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x5a0);
    uVar3 = func_0x080c7b38(param_1);
    func_0805E860(uVar4,uVar3);
    *pcVar12 = '\0';
  }
  iVar11 = func_0805E8F0(*(int *)(param_1 + 0x5a0));
  if (iVar11 * 0x40000000 < 0) {
    puVar9 = *(undefined4 **)(param_1 + 0x5a0);
    func_0x080d3918(&uStack_78,(int *)*puVar9,
                    *(undefined2 *)(puVar9[1] + (uint)*(ushort *)(puVar9 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar9 + 0x10));
    memcpy(&uStack_78,&uStack_78,0x20);
    *(undefined4 *)(param_1 + 0x5a8) = uStack_78;
    *(undefined4 *)(param_1 + 0x5ac) = uStack_74;
    *(undefined4 *)(param_1 + 0x5b0) = uStack_70;
    *(undefined4 *)(param_1 + 0x5b4) = uStack_6c;
    *(undefined4 *)(param_1 + 0x5b8) = uStack_68;
    *(undefined4 *)(param_1 + 0x5bc) = uStack_64;
    *(undefined4 *)(param_1 + 0x5c0) = uStack_60;
    *(undefined4 *)(param_1 + 0x5c4) = uStack_5c;
    piVar7 = (int *)func_0x08008910(param_1);
    iVar13 = *(int *)(param_1 + 0x5b0);
    iVar11 = func_08007D4C(_DAT_080c35f0 + param_1,*(undefined4 *)(_DAT_080c35f0 + param_1 + 4));
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5b0) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x5b4);
    }
    func_08008F0C(&uStack_78,iVar13,iVar11 * 0x20 + _DAT_080c35f4,uVar3);
    puVar9 = (undefined4 *)piVar7[1];
    if (puVar9 == (undefined4 *)piVar7[3]) {
      iStack_34 = 1;
      iStack_38 = (int)puVar9 - *piVar7 >> 4;
      piVar6 = &iStack_38;
      if (iStack_38 == 0) {
        piVar6 = &iStack_34;
      }
      puStack_28 = puVar9;
      if (iStack_38 + *piVar6 == 0) {
        puVar9 = (undefined4 *)0x0;
        iVar11 = 0;
      }
      else {
        iVar11 = (iStack_38 + *piVar6) * 0x10;
        puVar9 = (undefined4 *)malloc(iVar11);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)func_080D3BC0(iVar11);
        }
      }
      puVar10 = puVar9;
      for (puVar8 = (undefined4 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar4 = puVar8[1];
          uVar14 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          puVar10[2] = uVar14;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar13 = iStack_34;
      if (iStack_34 == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_78;
          puVar10[1] = uStack_74;
          puVar10[2] = uStack_70;
          puVar10[3] = uStack_6c;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar7 != 0) {
        free();
      }
      *piVar7 = (int)puStack_24;
      piVar7[1] = (int)puVar10;
      piVar7[3] = (int)puStack_24 + iVar11;
    }
    else {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uStack_78;
        puVar9[1] = uStack_74;
        puVar9[2] = uStack_70;
        puVar9[3] = uStack_6c;
      }
      piVar7[1] = piVar7[1] + 0x10;
    }
    piVar7 = (int *)func_0x08008910(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5b8) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x5bc);
    }
    func_08008F0C(&uStack_78,*(int *)(param_1 + 0x5b8),_DAT_080c3704,uVar3);
    puVar9 = (undefined4 *)piVar7[1];
    if (puVar9 == (undefined4 *)piVar7[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar9 - *piVar7 >> 4;
      piVar6 = &iStack_30;
      if (iStack_30 == 0) {
        piVar6 = &iStack_2c;
      }
      puStack_28 = puVar9;
      if (iStack_30 + *piVar6 == 0) {
        puVar9 = (undefined4 *)0x0;
        iVar11 = 0;
      }
      else {
        iVar11 = (iStack_30 + *piVar6) * 0x10;
        puVar9 = (undefined4 *)malloc(iVar11);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)func_080D3BC0(iVar11);
        }
      }
      puVar10 = puVar9;
      for (puVar8 = (undefined4 *)*piVar7; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar4 = puVar8[1];
          uVar14 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          puVar10[2] = uVar14;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar13 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_78;
          puVar10[1] = uStack_74;
          puVar10[2] = uStack_70;
          puVar10[3] = uStack_6c;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_78;
            puVar10[1] = uStack_74;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar13 = *piVar7; iVar13 != piVar7[1]; iVar13 = iVar13 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar7 != 0) {
        free();
      }
      *piVar7 = (int)puStack_24;
      piVar7[1] = (int)puVar10;
      piVar7[3] = (int)puStack_24 + iVar11;
    }
    else {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uStack_78;
        puVar9[1] = uStack_74;
        puVar9[2] = uStack_70;
        puVar9[3] = uStack_6c;
      }
      piVar7[1] = piVar7[1] + 0x10;
    }
  }
  uVar4 = func_0x08008920(param_1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x5a8) != 0) {
    uVar3 = *(undefined2 *)(param_1 + 0x5ac);
  }
  func_0805E99C(uVar4,*(int *)(param_1 + 0x5a8),uVar3,*(undefined4 *)(_DAT_080c38c0 + param_1));
  puVar9 = (undefined4 *)(_DAT_080c38c4 + param_1);
  pcVar12 = (char *)(_DAT_080c38c8 + param_1);
  iVar11 = 0x18;
  do {
    if (*pcVar12 != '\0') {
      uVar4 = func_0x08008920(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x708) != 0) {
        uVar3 = *(undefined2 *)(param_1 + 0x70c);
      }
      func_0805E99C(uVar4,*(int *)(param_1 + 0x708),uVar3,*puVar9);
    }
    puVar9 = puVar9 + 1;
    pcVar12 = pcVar12 + 4;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  if (*(char *)(_DAT_080c38cc + param_1) != '\0') {
    piVar7 = (int *)(_DAT_080c38d0 + param_1);
    *(ushort *)*piVar7 = (ushort)*(byte *)(_DAT_080c38d4 + param_1);
    *(ushort *)(*piVar7 + 2) = (ushort)*(byte *)(_DAT_080c38d8 + param_1);
    uVar4 = func_0x08008920(param_1);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x5d0) != 0) {
      uVar3 = *(undefined2 *)(param_1 + 0x5d4);
    }
    func_0805E99C(uVar4,*(int *)(param_1 + 0x5d0),uVar3,*piVar7);
  }
  puVar9 = (undefined4 *)(_DAT_080c38dc + param_1);
  pcVar12 = (char *)(_DAT_080c38e0 + param_1);
  iVar11 = 0x18;
  do {
    if (*pcVar12 != '\0') {
      uVar4 = func_0x08008920(param_1);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x680) != 0) {
        uVar3 = *(undefined2 *)(param_1 + 0x684);
      }
      func_0805E99C(uVar4,*(int *)(param_1 + 0x680),uVar3,*puVar9);
    }
    puVar9 = puVar9 + 1;
    pcVar12 = pcVar12 + 4;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080C38E4 @ 0x080C38E4
// =============================================================================
undefined4 func_080C38E4(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  if (param_2 == 0x3c) {
    pbVar8 = (byte *)(_DAT_080c3984 + param_1);
    bVar1 = *pbVar8;
    *pbVar8 = bVar1 - 1;
    if ((byte)(bVar1 - 1) == 9) {
      func_08008C28(param_1 + 0x810,0x180);
    }
    func_0804EC84(*pbVar8,&uStack_54,0);
    if (*pbVar8 < 10) {
      memcpy(auStack_50,_DAT_080c3988,2);
      uStack_53 = uStack_54;
      uStack_54 = 0x30;
    }
    uStack_3c = 0x20004;
    iVar6 = param_1 + 0xc;
    func_0804E7A0(0x20004,iVar6,0);
    if (*pbVar8 < 10) {
      uStack_34 = 0x20004;
      func_0804E958(0x20004,iVar6,0,0,&uStack_54,0,3);
    }
    else {
      uStack_38 = 0x20004;
      func_0804E958(0x20004,iVar6,0,0,&uStack_54,0,1);
    }
    piVar2 = (int *)func_0x08008910(param_1);
    iVar3 = func_08007D4C(_DAT_080c39f8 + param_1,*(undefined4 *)(_DAT_080c39f8 + param_1 + 4));
    func_08008F0C(&uStack_4c,iVar6,iVar3 * 0x20 + _DAT_080c39fc,0x100);
    puVar5 = (undefined4 *)piVar2[1];
    if (puVar5 == (undefined4 *)piVar2[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar5 - *piVar2 >> 4;
      piVar4 = &iStack_30;
      if (iStack_30 == 0) {
        piVar4 = &iStack_2c;
      }
      puStack_28 = puVar5;
      if (iStack_30 + *piVar4 == 0) {
        puStack_24 = (undefined4 *)0x0;
        iVar6 = 0;
      }
      else {
        iVar6 = (iStack_30 + *piVar4) * 0x10;
        puStack_24 = (undefined4 *)malloc(iVar6);
        if (puStack_24 == (undefined4 *)0x0) {
          puStack_24 = (undefined4 *)func_080D3BC0(iVar6);
        }
      }
      puVar7 = puStack_24;
      for (puVar5 = (undefined4 *)*piVar2; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
        if (puVar7 != (undefined4 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          *puVar7 = *puVar5;
          puVar7[1] = uVar9;
          puVar7[2] = uVar10;
          puVar7[3] = puVar5[3];
        }
        puVar7 = puVar7 + 4;
      }
      iVar3 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = uStack_4c;
          puVar7[1] = uStack_48;
          puVar7[2] = uStack_44;
          puVar7[3] = uStack_40;
        }
        puVar7 = puVar7 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = uStack_4c;
            puVar7[1] = uStack_48;
            puVar7[2] = uStack_44;
            puVar7[3] = uStack_40;
          }
          puVar7 = puVar7 + 4;
        }
      }
      for (iVar3 = *piVar2; iVar3 != piVar2[1]; iVar3 = iVar3 + 0x10) {
      }
      if (*piVar2 != 0) {
        free();
      }
      *piVar2 = (int)puStack_24;
      piVar2[1] = (int)puVar7;
      piVar2[3] = (int)puStack_24 + iVar6;
    }
    else {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_4c;
        puVar5[1] = uStack_48;
        puVar5[2] = uStack_44;
        puVar5[3] = uStack_40;
      }
      piVar2[1] = piVar2[1] + 0x10;
    }
    if (*(char *)(_DAT_080c3b08 + param_1) == '\0') {
      *(undefined1 *)(_DAT_080c3b0c + param_1) = 0;
      *(undefined4 *)(_DAT_080c3b10 + param_1) = 5;
      func_08008C28(param_1 + 0x810,0x100);
      func_08008B6C(_DAT_080c3b14 + param_1,0xbb);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C3B18 @ 0x080C3B18
// =============================================================================
undefined4 func_080C3B18(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  auStack_28[0] = *_DAT_080c3b58;
  auStack_28[1] = _DAT_080c3b58[1];
  auStack_28[2] = _DAT_080c3b58[2];
  auStack_28[3] = _DAT_080c3b58[3];
  uStack_18 = _DAT_080c3b58[4];
  uStack_14 = _DAT_080c3b58[5];
  uStack_10 = _DAT_080c3b58[6];
  *(undefined4 *)(param_1 + _DAT_080c3b5c) = auStack_28[*(int *)(param_1 + 0x980)];
  bVar1 = *(byte *)(param_1 + _DAT_080c3b60);
  if (bVar1 < 3) {
    uVar2 = 0;
  }
  else if ((byte)(bVar1 - 3) < 3) {
    uVar2 = 1;
  }
  else if ((byte)(bVar1 - 6) < 3) {
    uVar2 = 2;
  }
  else if ((byte)(bVar1 - 9) < 2) {
    uVar2 = 3;
  }
  else if ((byte)(bVar1 - 0xb) < 3) {
    uVar2 = 4;
  }
  else if ((byte)(bVar1 - 0xe) < 3) {
    uVar2 = 5;
  }
  else if ((byte)(bVar1 - 0x11) < 3) {
    uVar2 = 6;
  }
  else {
    uVar2 = 7;
  }
  *(undefined4 *)(param_1 + 0x8b0) = uVar2;
  *(char *)(param_1 + _DAT_080c3c14) =
       *(char *)(*(int *)(param_1 + 0x8b0) * 4 + _DAT_080c3c10 + 1) * '\x03';
  return in_lr;
}

// =============================================================================
// Function: func_080C3C18 @ 0x080C3C18
// =============================================================================
undefined4 func_080C3C18(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + _DAT_080c3ce0) = 2;
  *(undefined1 *)(param_1 + _DAT_080c3ce4) = 1;
  iVar1 = _DAT_080c3ce8;
  *(undefined1 *)(param_1 + _DAT_080c3ce8) = 0;
  *(undefined4 *)(param_1 + iVar1 + -0x29) = 0;
  *(undefined4 *)(param_1 + iVar1 + -0x21) = 0;
  *(undefined4 *)(param_1 + iVar1 + -0x25) = 0;
  *(undefined4 *)(param_1 + iVar1 + -0x1d) = 0;
  *(undefined4 *)(param_1 + iVar1 + -0x19) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xa3) = 1;
  *(undefined1 *)(param_1 + iVar1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xa7) = 1;
  iVar2 = _DAT_080c3cec;
  *(undefined1 *)(param_1 + _DAT_080c3cec) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xab) = 0;
  *(undefined1 *)(param_1 + iVar2 + 2) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + iVar2 + 0xb) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + iVar2 + 0xc) = 0;
  *(undefined1 *)(param_1 + iVar1 + -0x11) = 0x78;
  *(undefined1 *)(param_1 + _DAT_080c3cf0) = 0x98;
  iVar2 = _DAT_080c3cf4;
  *(undefined1 *)(param_1 + _DAT_080c3cf4) = 0;
  *(undefined1 *)(param_1 + iVar1 + -0xf) = 0;
  *(undefined1 *)(param_1 + iVar2 + 2) = 0;
  *(undefined1 *)(param_1 + iVar1 + -0xd) = 0;
  *(undefined1 *)(param_1 + _DAT_080c3cf8) = 0x19;
  *(undefined1 *)(param_1 + _DAT_080c3cfc) = 0;
  *(undefined1 *)(param_1 + iVar1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + _DAT_080c3d00) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080C3D04 @ 0x080C3D04
// =============================================================================
undefined4 func_080C3D04(int param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 in_lr;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 auStack_7c [13];
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  uStack_48 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  iStack_28 = 0;
  puVar4 = (undefined1 *)(param_1 + 0x904);
  iVar14 = 0x18;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 4;
    iVar14 = iVar14 + -1;
  } while (-1 < iVar14);
  puVar5 = (undefined2 *)func_0x08008918(param_1);
  *puVar5 = 0x1740;
  uVar6 = *(undefined4 *)(param_1 + 0x51c);
  uVar7 = func_0x080088dc(param_1);
  uStack_24 = func_0x08008920(param_1);
  uVar8 = func_0x08008918(param_1);
  uVar9 = func_0x08008940(param_1);
  uVar10 = func_0800894C(param_1);
  func_08050D3C(uVar6,uVar7,uStack_24,uVar8,uVar9,uVar10,param_1 + 0x814);
  uVar6 = *(undefined4 *)(param_1 + 0x51c);
  uVar3 = func_0x080c7b64(param_1);
  func_08050E50(uVar6,uVar3);
  piVar11 = (int *)(param_1 + 0x89c);
  do {
    if (*piVar11 != 0) {
      return in_lr;
    }
    func_080087C8(param_1);
    func_080088B8(param_1);
    puVar16 = (undefined4 *)(param_1 + _DAT_080c3e2c);
    iVar14 = func_0x08050d34(*puVar16);
    uVar17 = *puVar16;
    uVar6 = func_0x080088dc(param_1);
    uVar7 = func_0x08008920(param_1);
    uVar8 = func_0x08008918(param_1);
    uVar9 = func_0x08008940(param_1);
    uVar10 = func_0800894C(param_1);
    uVar12 = func_08050D3C(uVar17,uVar6,uVar7,uVar8,uVar9,uVar10,param_1 + _DAT_080c3e30);
    if (uVar12 < 7) {
      switch(*(uint *)(uVar12 * 4 + _DAT_080c3e34) & 0xfffffffe) {
      case 0x80c3e54:
        if (uStack_48 == 8) {
          *(undefined4 *)(param_1 + _DAT_080c3e64) = 1;
        }
        else if (uStack_48 == 5) {
          uStack_2c = 1;
          if (iStack_28 != 0) {
            func_08050D5C(*(undefined4 *)(param_1 + _DAT_080c3f1c));
            uStack_48 = 6;
            iStack_44 = 0;
            func_080C3C18(param_1);
            puVar4 = (undefined1 *)(param_1 + _DAT_080c3f20);
            iVar14 = 0x18;
            do {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4 = puVar4 + 4;
              iVar14 = iVar14 + -1;
            } while (-1 < iVar14);
            puVar16 = (undefined4 *)(param_1 + _DAT_080c3f24);
            uVar12 = *(uint *)*puVar16;
            if (-1 < (int)(-uVar12 | uVar12)) {
              func_08009378((uint *)*puVar16 + 3,_DAT_080c3f28,1,1);
              iVar14 = func_0x08008940(param_1);
              func_0x080d3914(iVar14,*puVar16,*(undefined4 *)(*(int *)(iVar14 + 8) + 0x10));
            }
            if ((int)(-*(uint *)*puVar16 | *(uint *)*puVar16) < 0) {
              puVar16 = (undefined4 *)(param_1 + _DAT_080c3f24);
              do {
                func_080087C8(param_1);
              } while ((int)(-*(uint *)*puVar16 | *(uint *)*puVar16) < 0);
            }
            piVar11 = (int *)(param_1 + _DAT_080c3f24);
            func_0800934C(*piVar11 + 0xc,_DAT_080c3f28,1,1);
            iVar14 = func_0x08008940(param_1);
            func_0x080d3914(iVar14,*piVar11,*(undefined4 *)(*(int *)(iVar14 + 8) + 0x10));
          }
        }
        else if (uStack_48 == 4) {
          iStack_34 = 1;
          if (iStack_30 != 0) {
            func_08050D5C(*(undefined4 *)(param_1 + _DAT_080c3f4c));
            uStack_48 = 5;
LAB_080c3f6e:
            iStack_44 = 0;
          }
        }
        else if (uStack_48 == 3) {
          iStack_3c = 1;
          if (iStack_38 != 0) {
            func_08050D5C(*(undefined4 *)(param_1 + _DAT_080c3f78));
            uStack_48 = 4;
            goto LAB_080c3f6e;
          }
        }
        else {
          func_08050D5C(*(undefined4 *)(param_1 + _DAT_080c3f9c));
          if ((uStack_48 != 0) && (uStack_48 != 6)) {
            uStack_48 = uStack_48 + 1;
          }
        }
        break;
      case 0x80c3fa0:
        if (iVar14 < 6) {
          if (iVar14 < 4) {
            if (iVar14 != 1) goto LAB_080c3fb6;
            if (uStack_48 < 9) {
              uVar6 = (**(code **)(uStack_48 * 4 + _DAT_080c3fdc))();
              return uVar6;
            }
          }
        }
        else if (iVar14 == 6) {
          iVar14 = func_08050DF0(*(undefined4 *)(param_1 + _DAT_080c40dc));
          if (iVar14 == 1) {
            if (uStack_48 == 0) {
              uStack_48 = 1;
            }
            else if (uStack_48 == 6) {
              uStack_48 = 7;
            }
          }
          else if (iVar14 == 2) {
            if (uStack_48 == 0) {
              uStack_48 = 7;
            }
            else if (uStack_48 == 6) {
              uStack_48 = 1;
              iStack_44 = 0;
              iStack_3c = 0;
              iStack_38 = 0;
              iStack_34 = 0;
              iStack_30 = 0;
              uStack_2c = 0;
              iStack_28 = 0;
            }
          }
        }
        else {
LAB_080c3fb6:
          func_08050D74(*(undefined4 *)(param_1 + _DAT_080c3fc4));
        }
      }
    }
    if (uStack_48 == 4) {
      if (iStack_34 == 0) goto SUB_080c513a;
      if (iStack_44 == 0) {
        *(undefined1 *)(param_1 + 0x8c5) = 1;
        func_080C7B7C(&uStack_98,param_1,3);
        *(char *)(param_1 + 0x97d) = (char)uStack_98 + '\b';
        func_080C7B7C(&uStack_94,param_1,3);
        *(char *)(param_1 + 0x97e) = (char)((uint)uStack_94 >> 8) + '\x18';
        func_08008B6C(param_1 + 0x818,0xbe);
        iVar14 = 1;
        goto case_080C5138;
      }
      if (iStack_44 == 0x14) {
        iVar14 = 0x910;
        goto SUB_080c4b4a;
      }
      if (iStack_44 == 0x1e) {
        *(undefined1 *)(param_1 + _DAT_080c469c) = 1;
        func_080C7B7C(&uStack_90,param_1,0x14);
        *(char *)(param_1 + _DAT_080c46a0) = (char)uStack_90 + '\b';
        func_080C7B7C(&uStack_8c,param_1,0x14);
        *(char *)(param_1 + _DAT_080c46a4) = (char)((uint)uStack_8c >> 8) + '\x18';
        iVar14 = param_1 + _DAT_080c46a8;
        goto LAB_080c41f8;
      }
      if (iStack_44 == 0x32) {
        *(undefined1 *)(param_1 + _DAT_080c46b8) = 1;
        iVar14 = 0x33;
        goto case_080C5138;
      }
      if (iStack_44 == 0x3c) {
        *(undefined1 *)(param_1 + 0x8c5) = 0;
        *(undefined1 *)(param_1 + 0x910) = 0;
        *(undefined1 *)(param_1 + 0x954) = 0;
        puVar16 = (undefined4 *)(param_1 + 0x544);
        uVar12 = *(uint *)*puVar16;
        if (-1 < (int)(-uVar12 | uVar12)) {
          func_08009378((uint *)*puVar16 + 3,0x889,1,1);
          iVar14 = func_0x08008940(param_1);
          func_0x080d3914(iVar14,*puVar16,*(undefined4 *)(*(int *)(iVar14 + 8) + 0x10));
        }
        iVar14 = 0x3d;
        uVar12 = -*(uint *)*puVar16 | *(uint *)*puVar16;
        while ((int)uVar12 < 0) {
          func_080087C8(param_1);
          func_080C2D54(param_1);
          uVar12 = -**(uint **)(param_1 + 0x544) | **(uint **)(param_1 + 0x544);
        }
        piVar11 = (int *)(param_1 + 0x544);
        func_0800934C(*piVar11 + 0xc,0x889,1,1);
        iVar13 = func_0x08008940(param_1);
        func_0x080d3914(iVar13,*piVar11,*(undefined4 *)(*(int *)(iVar13 + 8) + 0x10));
        *(undefined1 *)(param_1 + 0x8b4) = 0x78;
        *(undefined1 *)(param_1 + 0x8b5) = 0x51;
        uVar12 = -*(uint *)*piVar11 | *(uint *)*piVar11;
        while ((int)uVar12 < 0) {
          func_080087C8(param_1);
          func_080C2D54(param_1);
          uVar12 = -**(uint **)(param_1 + 0x544) | **(uint **)(param_1 + 0x544);
        }
        goto case_080C5138;
      }
      iVar14 = iStack_44 + 1;
      if (iStack_44 < 0x3d) {
        func_0x080c5138();
      }
      iVar13 = _DAT_080c4ad4;
      if (8 < *(uint *)(param_1 + _DAT_080c47d4)) goto case_080C5138;
      switch(*(uint *)(*(uint *)(param_1 + _DAT_080c47d4) * 4 + _DAT_080c47d8) & 0xfffffffe) {
      case 0x80c4800:
        *(undefined4 *)(param_1 + 0x8c0) = 4;
        *(undefined4 *)(param_1 + _ASSET_BLOCK_080C486C) = 8;
        *(undefined1 *)(param_1 + _LAB_080c4870) = 1;
        iVar14 = _LAB_080c4874;
        *(char *)(param_1 + _LAB_080c4874) = *(char *)(param_1 + _LAB_080c4874) + -10;
        iVar13 = _LAB_080c4878;
        *(undefined1 *)(param_1 + _LAB_080c4878) = 1;
        func_080C7B7C(&uStack_88,param_1,3);
        *(char *)(param_1 + _LAB_080c487c) = (char)uStack_88 + '\b';
        func_080C7B7C(&uStack_84,param_1,3);
        *(char *)(param_1 + _LAB_080c4880) = (char)((uint)uStack_84 >> 8) + '\x18';
        func_08008B6C(param_1 + iVar14 + -0x95,0xbc);
        func_08008B6C(param_1 + iVar13 + -0xad,0xbe);
        goto SUB_080c5028;
      case 0x80c4884:
        *(undefined4 *)(param_1 + _DAT_080c4894) = 5;
        pcVar15 = (char *)(param_1 + _DAT_080c4898);
SUB_080c5024:
        cVar2 = '\x01';
        goto SUB_080c5026;
      case 0x80c489c:
        *(undefined4 *)(param_1 + 0x8c0) = 2;
        iVar14 = _DAT_080c4908;
        *(undefined4 *)(param_1 + _DAT_080c4908) = 8;
        iVar13 = _DAT_080c490c;
        *(undefined1 *)(param_1 + _DAT_080c490c) = 1;
        *(char *)(param_1 + _DAT_080c4910) = *(char *)(param_1 + _DAT_080c4910) + -10;
        *(undefined1 *)(param_1 + _DAT_080c4914) = 1;
        func_080C7B7C(&uStack_80,param_1,0x14);
        *(char *)(param_1 + _DAT_080c4918) = (char)uStack_80 + '\b';
        func_080C7B7C(auStack_7c,param_1,0x14);
        *(char *)(param_1 + _DAT_080c491c) = (char)((uint)auStack_7c[0] >> 8) + '\x18';
        func_08008B6C(param_1 + iVar14 + -0x9c,0xbc);
        func_08008B6C(param_1 + iVar13 + -0xac,0xbe);
        goto SUB_080c5028;
      case 0x80c4920:
        cVar2 = *(char *)(param_1 + _DAT_080c4948) + -1;
        *(char *)(param_1 + _DAT_080c4948) = cVar2;
        iVar14 = iStack_44 + 1;
        if (cVar2 != 'X') {
          func_0x080c5138();
        }
        *(undefined4 *)(param_1 + _DAT_080c494c) = 7;
        puVar4 = (undefined1 *)(param_1 + _DAT_080c4950);
        goto SUB_080c5044;
      case 0x80c4954:
        cVar2 = *(char *)(param_1 + _DAT_080c497c) + '\x01';
        *(char *)(param_1 + _DAT_080c497c) = cVar2;
        iVar14 = iStack_44 + 1;
        if (cVar2 == -0x78) {
          *(undefined4 *)(param_1 + _DAT_080c4980) = 6;
          puVar4 = (undefined1 *)(param_1 + _DAT_080c4984);
          goto SUB_080c5044;
        }
        break;
      case 0x80c4988:
        cVar2 = *(char *)(param_1 + _DAT_080c49ac) + -1;
        *(char *)(param_1 + _DAT_080c49ac) = cVar2;
        iVar14 = iStack_44 + 1;
        if (cVar2 == '1') {
          *(undefined4 *)(param_1 + _DAT_080c49b0) = 0;
          iVar13 = _DAT_080c49b4;
          goto SUB_080c5042;
        }
        break;
      case 0x80c49b8:
        cVar2 = *(char *)(param_1 + _DAT_080c49e0) + '\x01';
        *(char *)(param_1 + _DAT_080c49e0) = cVar2;
        iVar14 = iStack_44 + 1;
        if (cVar2 == 'q') {
          *(undefined4 *)(param_1 + _DAT_080c49e4) = 3;
          puVar4 = (undefined1 *)(param_1 + _DAT_080c49e8);
          goto SUB_080c5044;
        }
        break;
      case 0x80c49ec:
        iStack_40 = iStack_40 + 1;
        if (iStack_40 == 0x14) {
          if (*(int *)(param_1 + 0x8c0) == 4) {
            pcVar15 = (char *)(param_1 + 0x910);
            goto SUB_080c5024;
          }
          iVar14 = iStack_44 + 1;
          if (*(int *)(param_1 + 0x8c0) == 2) {
            puVar4 = (undefined1 *)(param_1 + _DAT_080c4a1c);
            goto SUB_080c5044;
          }
        }
        else if (iStack_40 == 0x32) {
          func_08008B6C(param_1 + 0x820,0x6c);
          if (*(int *)(param_1 + 0x8c0) == 4) {
            pcVar15 = (char *)(param_1 + _DAT_080c4a44);
            goto SUB_080c5024;
          }
          iVar14 = iStack_44 + 1;
          if (*(int *)(param_1 + 0x8c0) == 2) {
            puVar4 = (undefined1 *)(param_1 + _DAT_080c4a58);
            goto SUB_080c5044;
          }
        }
        else {
          iVar14 = iStack_44 + 1;
          if (iStack_40 == 0x3c) {
            iStack_40 = 0;
            *(undefined1 *)(param_1 + _DAT_080c4ad4) = 0;
            iVar1 = _DAT_080c4ad8;
            piVar11 = (int *)(param_1 + _DAT_080c4ad8);
            *piVar11 = *(int *)(param_1 + 0x8c0);
            puVar4 = (undefined1 *)(param_1 + iVar13 + -1);
            *puVar4 = 1;
            pcVar15 = (char *)(param_1 + iVar1 + -7);
            *pcVar15 = *pcVar15 + '\n';
            if (*(int *)(param_1 + 0x8c0) == 2) {
              iStack_30 = 1;
              *(undefined1 *)(iVar1 + 0x54 + param_1) = 0;
              *(undefined1 *)(iVar1 + 0x98 + param_1) = 0;
              *(undefined1 *)(iVar1 + 0x55 + param_1) = 0;
              *(undefined1 *)(iVar1 + 0x99 + param_1) = 0;
              *piVar11 = 2;
              piVar11 = &iStack_30;
              goto LAB_080c4ac2;
            }
          }
        }
      }
      goto case_080C5138;
    }
    if (4 < (int)uStack_48) {
LAB_080c413c:
      if (uStack_48 == 5) {
        func_0x080c4ae0();
      }
      goto SUB_080c513a;
    }
    if (uStack_48 != 3) {
      func_0x080c513a();
      goto LAB_080c413c;
    }
    if (iStack_3c == 0) {
      func_0x080c513a();
    }
    if (iStack_44 == 0) {
      *(undefined1 *)(param_1 + 0x8c5) = 1;
      func_08008B6C(param_1 + 0x818,0xbe);
      func_080C7B7C(&uStack_b8,param_1,1);
      *(char *)(param_1 + 0x97d) = (char)uStack_b8 + '\b';
      func_080C7B7C(&uStack_b4,param_1,1);
      func_0x080c4b28((uStack_b4 >> 8) + 0x18,param_1 + 0x97e);
    }
    if (iStack_44 == 0x14) {
      iVar14 = 0x908;
SUB_080c4b4a:
      *(undefined1 *)(param_1 + iVar14) = 1;
      iVar14 = 0x15;
      goto case_080C5138;
    }
    if (iStack_44 == 0x1e) {
      *(undefined1 *)(param_1 + 0x8c5) = 1;
      func_080C7B7C(&uStack_b0,param_1,0x17);
      *(char *)(param_1 + 0x97d) = (char)uStack_b0 + '\b';
      func_080C7B7C(&uStack_ac,param_1,0x17);
      *(char *)(param_1 + 0x97e) = (char)((uint)uStack_ac >> 8) + '\x18';
      iVar14 = param_1 + 0x818;
LAB_080c41f8:
      func_08008B6C(iVar14,0xbe);
      iVar14 = 0x1f;
      goto case_080C5138;
    }
    if (iStack_44 == 0x32) {
      func_0x080c4bbc(0x32,param_1 + 0x960);
    }
    if (iStack_44 == 0x3c) {
      *(undefined1 *)(param_1 + 0x8c5) = 0;
      *(undefined1 *)(param_1 + 0x908) = 0;
      *(undefined1 *)(param_1 + 0x960) = 0;
      puVar16 = (undefined4 *)(param_1 + 0x544);
      uVar12 = *(uint *)*puVar16;
      if (-1 < (int)(-uVar12 | uVar12)) {
        func_08009378((uint *)*puVar16 + 3,0x889,1,1);
        iVar14 = func_0x08008940(param_1);
        func_0x080d3914(iVar14,*puVar16,*(undefined4 *)(*(int *)(iVar14 + 8) + 0x10));
      }
      iVar14 = 0x3d;
      uVar12 = -*(uint *)*puVar16 | *(uint *)*puVar16;
      while ((int)uVar12 < 0) {
        func_080087C8(param_1);
        func_080C2D54(param_1);
        uVar12 = -**(uint **)(param_1 + 0x544) | **(uint **)(param_1 + 0x544);
      }
      piVar11 = (int *)(param_1 + 0x544);
      func_0800934C(*piVar11 + 0xc,0x889,1,1);
      iVar13 = func_0x08008940(param_1);
      func_0x080d3914(iVar13,*piVar11,*(undefined4 *)(*(int *)(iVar13 + 8) + 0x10));
      *(undefined1 *)(param_1 + 0x8b4) = 0x78;
      *(undefined1 *)(param_1 + 0x8b5) = 0x51;
      uVar12 = -*(uint *)*piVar11 | *(uint *)*piVar11;
      while ((int)uVar12 < 0) {
        func_080087C8(param_1);
        func_080C2D54(param_1);
        uVar12 = -**(uint **)(param_1 + 0x544) | **(uint **)(param_1 + 0x544);
      }
      goto case_080C5138;
    }
    iVar14 = iStack_44 + 1;
    if (iStack_44 < 0x3d) {
      func_0x080c5138();
    }
    if (8 < *(uint *)(param_1 + _DAT_080c433c)) goto case_080C5138;
    switch(*(uint *)(*(uint *)(param_1 + _DAT_080c433c) * 4 + _DAT_080c4340) & 0xfffffffe) {
    case 0x80c4368:
      *(undefined4 *)(param_1 + 0x8c0) = 2;
      iVar14 = _ASSET_BLOCK_080C43C8;
      *(undefined4 *)(param_1 + _ASSET_BLOCK_080C43C8) = 8;
      *(undefined1 *)(param_1 + _LAB_080c43cc) = 1;
      *(char *)(param_1 + _LAB_080c43d0) = *(char *)(param_1 + _LAB_080c43d0) + -10;
      *(undefined1 *)(param_1 + 0x8c5) = 1;
      func_08008B6C(param_1 + iVar14 + -0xa4,0xbe);
      func_080C7B7C(&uStack_a8,param_1,1);
      *(char *)(param_1 + _LAB_080c43d4) = (char)uStack_a8 + '\b';
      func_080C7B7C(&uStack_a4,param_1,1);
      cVar2 = (char)((uint)uStack_a4 >> 8) + '\x18';
      pcVar15 = (char *)(param_1 + _LAB_080c43d8);
      goto SUB_080c5026;
    case 0x80c43dc:
      *(undefined4 *)(param_1 + _LAB_080c43ec) = 5;
      func_0x080c5024(5,param_1 + _LAB_080c43f0);
    case 0x80c43f4:
      *(undefined4 *)(param_1 + 0x8c0) = 6;
      *(undefined4 *)(param_1 + _ASSET_BLOCK_080C4454) = 8;
      *(undefined1 *)(param_1 + _LAB_080c4458) = 1;
      *(char *)(param_1 + _LAB_080c445c) = *(char *)(param_1 + _LAB_080c445c) + -10;
      *(undefined1 *)(param_1 + _LAB_080c4460) = 1;
      func_08008B6C(param_1 + _LAB_080c4464,0xbe);
      func_080C7B7C(&uStack_a0,param_1,0x17);
      *(char *)(param_1 + _LAB_080c4468) = (char)uStack_a0 + '\b';
      func_080C7B7C(&uStack_9c,param_1,0x17);
      cVar2 = (char)((uint)uStack_9c >> 8) + '\x18';
      pcVar15 = (char *)(param_1 + _LAB_080c446c);
SUB_080c5026:
      *pcVar15 = cVar2;
SUB_080c5028:
      iVar14 = iStack_44 + 1;
      goto case_080C5138;
    case 0x80c4470:
      cVar2 = *(char *)(param_1 + _LAB_080c449c) + -1;
      uVar6 = 0;
      *(char *)(param_1 + _LAB_080c449c) = cVar2;
      iVar14 = iStack_44 + 1;
      if (cVar2 != 'h') {
        func_0x080c5138();
      }
      *(undefined4 *)(param_1 + _LAB_080c44a0) = uVar6;
      puVar4 = (undefined1 *)(param_1 + _LAB_080c44a4);
      break;
    case 0x80c44a8:
      cVar2 = *(char *)(param_1 + _LAB_080c44d0) + '\x01';
      *(char *)(param_1 + _LAB_080c44d0) = cVar2;
      iVar14 = iStack_44 + 1;
      if (cVar2 != -0x78) {
        func_0x080c5138();
      }
      *(undefined4 *)(param_1 + _LAB_080c44d4) = 7;
      iVar13 = _LAB_080c44d8;
SUB_080c5042:
      puVar4 = (undefined1 *)(param_1 + iVar13);
      break;
    case 0x80c44dc:
      cVar2 = *(char *)(param_1 + _LAB_080c4508) + -1;
      *(char *)(param_1 + _LAB_080c4508) = cVar2;
      iVar14 = iStack_44 + 1;
      if (cVar2 != '1') {
        func_0x080c5138();
      }
      *(undefined4 *)(param_1 + _LAB_080c450c) = 4;
      puVar4 = (undefined1 *)(param_1 + _LAB_080c4510);
      break;
    case 0x80c4514:
      cVar2 = *(char *)(param_1 + _LAB_080c4540) + '\x01';
      *(char *)(param_1 + _LAB_080c4540) = cVar2;
      iVar14 = iStack_44 + 1;
      if (cVar2 != 'q') {
        func_0x080c5138();
      }
      *(undefined4 *)(param_1 + _LAB_080c4544) = 3;
      puVar4 = (undefined1 *)(param_1 + _LAB_080c4548);
      break;
    case 0x80c454c:
      iStack_40 = iStack_40 + 1;
      if (iStack_40 == 0x14) {
        if (*(int *)(param_1 + 0x8c0) == 6) {
          pcVar15 = (char *)(param_1 + 0x960);
          goto SUB_080c5024;
        }
        iVar14 = iStack_44 + 1;
        if (*(int *)(param_1 + 0x8c0) != 2) {
          func_0x080c5138();
        }
        puVar4 = (undefined1 *)(param_1 + _LAB_080c4580);
        break;
      }
      iVar14 = iStack_44 + 1;
      if (iStack_40 != 0x3c) {
        func_0x080c5138();
      }
      iStack_40 = 0;
      *(undefined1 *)(param_1 + _DAT_080c45e0) = 0;
      piVar11 = (int *)(param_1 + _DAT_080c45e4);
      *piVar11 = *(int *)(param_1 + 0x8c0);
      puVar4 = (undefined1 *)(param_1 + _DAT_080c45e8);
      *puVar4 = 1;
      pcVar15 = (char *)(param_1 + 0x8b5);
      *pcVar15 = *pcVar15 + '\n';
      if (*(int *)(param_1 + 0x8c0) == 2) {
        iStack_38 = 1;
        *(undefined1 *)(param_1 + 0x908) = 0;
        *(undefined1 *)(param_1 + 0x960) = 0;
        *piVar11 = 2;
        piVar11 = &iStack_38;
LAB_080c4ac2:
        iStack_40 = 0;
        *puVar4 = (char)*piVar11;
        *(undefined1 *)(param_1 + _DAT_080c4adc) = 0x78;
        *pcVar15 = -0x68;
      }
    case 0x80c5138:
      goto case_080C5138;
    }
SUB_080c5044:
    *puVar4 = 1;
case_080C5138:
    iStack_44 = iVar14;
SUB_080c513a:
    func_080C2D54(param_1);
    piVar11 = (int *)(param_1 + _DAT_080c5168);
  } while( true );
}

// =============================================================================
// Function: func_080C516C @ 0x080C516C
// =============================================================================
undefined4 func_080C516C(int param_1)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  func_0804EC84(*(undefined1 *)(param_1 + _DAT_080c5250),auStack_78,0);
  puVar10 = _DAT_080c5254;
  memcpy(auStack_74,_DAT_080c5254,6);
  uVar3 = _DAT_080c5258;
  memcpy(auStack_6c,_DAT_080c5258,0xf);
  uVar4 = _DAT_080c525c;
  memcpy(auStack_5c,_DAT_080c525c,10);
  uStack_50 = *puVar10;
  uStack_4c = *(undefined2 *)(puVar10 + 1);
  strcat(&uStack_50,uVar3);
  strcat(&uStack_50,auStack_78);
  strcat(&uStack_50,uVar4);
  iStack_28 = 0;
  puVar1 = (undefined1 *)(param_1 + _DAT_080c5260);
  iVar9 = 0x18;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  iStack_24 = 1;
  puVar2 = (undefined2 *)func_0x08008918(param_1);
  uStack_2c = 0x1740;
  *puVar2 = 0x1740;
  puVar10 = (undefined4 *)(param_1 + _DAT_080c5264);
  func_08050E5C(*puVar10);
  uVar11 = *puVar10;
  uVar3 = func_0x080088dc(param_1);
  uVar4 = func_0x08008920(param_1);
  uVar5 = func_0x08008918(param_1);
  uVar6 = func_0x08008940(param_1);
  uVar7 = func_0800894C(param_1);
  func_08050D3C(uVar11,uVar3,uVar4,uVar5,uVar6,uVar7,param_1 + _DAT_080c5268);
  do {
    do {
      func_080C2D54(param_1);
      if (*(int *)(param_1 + _DAT_080c5374) != 1) {
        return in_lr;
      }
      func_080087C8(param_1);
      puVar10 = (undefined4 *)(param_1 + _DAT_080c52cc);
      iVar9 = func_0x08050d34(*puVar10);
      uVar11 = *puVar10;
      uVar3 = func_0x080088dc(param_1);
      uVar4 = func_0x08008920(param_1);
      uVar5 = func_0x08008918(param_1);
      uVar6 = func_0x08008940(param_1);
      uVar7 = func_0800894C(param_1);
      uVar8 = func_08050D3C(uVar11,uVar3,uVar4,uVar5,uVar6,uVar7,param_1 + _DAT_080c52d0);
    } while (6 < uVar8);
    switch(*(uint *)(uVar8 * 4 + _DAT_080c52d4) & 0xfffffffe) {
    case 0x80c52f4:
      if (iStack_24 == 0) {
        *(undefined4 *)(param_1 + _DAT_080c5304) = 2;
      }
      else {
        func_08050D5C(*(undefined4 *)(param_1 + _DAT_080c5314));
      }
      break;
    case 0x80c5318:
      if (iVar9 == 1) {
        puVar10 = (undefined4 *)(param_1 + _DAT_080c5370);
        func_08050D8C(*puVar10,&uStack_50);
        func_0x08050dd8(*puVar10);
        iStack_24 = 0;
      }
    case 0x80c5334:
      iStack_28 = iStack_28 + 1;
      if (0x78 < iStack_28) {
        puVar10 = (undefined4 *)(param_1 + _DAT_080c5370);
        func_0x08050de4(*puVar10);
        func_08050D74(*puVar10);
      }
    }
  } while( true );
}

// =============================================================================
// Function: func_080C5378 @ 0x080C5378
// =============================================================================
undefined4 func_080C5378(int param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 in_lr;
  char acStack_58 [28];
  undefined2 auStack_3c [2];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined2 *puStack_24;
  
  *(undefined1 *)(param_1 + _ASSET_BLOCK_080C54E0) = 0x78;
  *(undefined1 *)(param_1 + _DAT_080c54e4) = 0x98;
  iVar10 = _DAT_080c54e8;
  *(undefined4 *)(param_1 + _DAT_080c54e8) = 2;
  *(undefined1 *)(param_1 + _DAT_080c54ec) = 1;
  uVar13 = 0;
  uStack_30 = 0;
  pbVar1 = (byte *)(*(int *)(param_1 + iVar10 + -0xc) * 4 + _DAT_080c54f0);
  uStack_2c = (uint)*pbVar1;
  uVar6 = (uint)pbVar1[1];
  uStack_28 = (uint)pbVar1[2];
  puStack_24 = auStack_3c;
  puVar2 = (undefined1 *)(param_1 + _DAT_080c54f4);
  iVar10 = 0x18;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 4;
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  puVar2 = (undefined1 *)(param_1 + _DAT_080c54f8);
  iVar10 = 0xe;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 4;
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  pcVar3 = acStack_58 + 0x18;
  do {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + -1;
  } while ((int)acStack_58 <= (int)pcVar3);
  iVar10 = 0;
  if (uVar6 != 0) {
    puVar2 = (undefined1 *)(param_1 + _DAT_080c54fc);
    do {
      uVar4 = func_0x080d11e4();
      *puVar2 = (char)((0x19U - iVar10 & 0xffff) * (uVar4 & 0xffff) >> 0x10);
      puVar2 = puVar2 + 4;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar6);
  }
  iVar10 = _DAT_080c54fc;
  acStack_58[*(byte *)(param_1 + _DAT_080c54fc)] = '\x01';
  iVar11 = 0;
  if (0 < (int)(uVar6 - 1)) {
    do {
      iVar11 = iVar11 + 1;
      iVar8 = param_1 + iVar11 * 4;
      pbVar1 = (byte *)(iVar8 + iVar10);
      uVar4 = (uint)*pbVar1;
      *pbVar1 = 0xff;
      pbVar1 = (byte *)(iVar8 + _DAT_080c54fc);
      do {
        *pbVar1 = *pbVar1 + 1;
        if (acStack_58[*pbVar1] == '\0') {
          uVar4 = uVar4 - 1;
        }
      } while (-1 < (int)uVar4);
      acStack_58[*(byte *)(param_1 + iVar11 * 4 + iVar10)] = '\x01';
    } while (iVar11 < (int)(uVar6 - 1));
  }
  if (uVar6 < 0xf) {
    *(undefined1 *)(param_1 + uVar6 * 4 + _DAT_080c54f8) = 1;
  }
  puVar5 = (undefined2 *)func_0x08008918(param_1);
  *puStack_24 = 0x1640;
  *puVar5 = 0x1640;
  func_080C2D54(param_1);
  if (*(int *)(param_1 + _DAT_080c5500) == 2) {
    piVar12 = (int *)(param_1 + 0x8a0);
    pcVar3 = (char *)(param_1 + _DAT_080c54f8);
    iVar10 = param_1;
    do {
      func_080087C8(param_1);
      iVar11 = *piVar12;
      if (iVar11 == 1) {
        if (uStack_30 == uStack_28) {
          *piVar12 = 2;
          puVar9 = (undefined4 *)(param_1 + _DAT_080c55f8);
          puVar7 = (uint *)*puVar9;
          uVar6 = *puVar7;
          if (-1 < (int)(-uVar6 | uVar6)) {
            func_08009378(puVar7 + 3,_DAT_080c55fc,1,1);
            iVar11 = func_0x08008940(param_1);
            func_0x080d3914(iVar11,*puVar9,*(undefined4 *)(*(int *)(iVar11 + 8) + 0x10));
          }
        }
        uStack_30 = uStack_30 + 1;
      }
      else if (iVar11 < 2) {
        if (iVar11 == 0) {
          if (uVar13 == 0) {
            if (*pcVar3 != '\0') {
              *piVar12 = 1;
              goto LAB_080c561c;
            }
            *(undefined1 *)(param_1 + _DAT_080c5560) = 1;
            func_08008B6C(param_1 + _DAT_080c5564,0xbe);
            puVar2 = (undefined1 *)(_DAT_080c5568 + iVar10);
            func_080C7B7C(auStack_38,param_1,*puVar2);
            *(char *)(param_1 + _DAT_080c556c) = auStack_38[0] + '\b';
            func_080C7B7C(auStack_34,param_1,*puVar2);
            *(char *)(param_1 + _DAT_080c5570) = auStack_34[1] + '\x18';
          }
          else if (uVar13 == 0x14) {
            *(undefined1 *)(param_1 + (uint)(byte)pcVar3[2] * 4 + _DAT_080c558c) = 1;
          }
          else if (uVar13 == uStack_2c) {
            uVar13 = 0xffffffff;
            *(undefined1 *)(param_1 + _DAT_080c55b0) = 0;
            iVar10 = iVar10 + 4;
            pcVar3 = pcVar3 + 4;
          }
          uVar13 = uVar13 + 1;
        }
      }
      else if ((iVar11 == 2) &&
              (-1 < (int)(-**(uint **)(param_1 + _DAT_080c5640) |
                         **(uint **)(param_1 + _DAT_080c5640)))) {
        *piVar12 = 0;
        *(undefined4 *)(param_1 + _DAT_080c5644) = 3;
      }
LAB_080c561c:
      func_080C2D54(param_1);
    } while (*(int *)(param_1 + _DAT_080c5644) == 2);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C5648 @ 0x080C5648
// =============================================================================
void func_080C5648(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = 0;
  puVar2 = (undefined1 *)(param_1 + _DAT_080c56f0);
  iVar3 = 0x18;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = _DAT_080c56f4;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined1 *)(param_1 + _DAT_080c56f4) = 0x78;
  *(undefined1 *)(param_1 + _DAT_080c56f8) = 0x51;
  *(undefined1 *)(param_1 + _DAT_080c56fc) = 2;
  *(undefined1 *)(param_1 + iVar1 + 2) = 2;
  iVar3 = _DAT_080c5700;
  *(undefined1 *)(param_1 + _DAT_080c5700) = 0;
  *(undefined1 *)(param_1 + iVar1 + 4) = 0;
  piVar4 = (int *)(param_1 + _DAT_080c5704);
  func_0800934C(*piVar4 + 0xc,iVar3 + -0x30,1,1);
  iVar3 = func_0x08008940(param_1);
  func_0x080d3914(iVar3,*piVar4,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x10));
  func_080C2D54(param_1);
  func_08008B6C(param_1 + _DAT_080c5708,0xbb);
  if (*(int *)(param_1 + _DAT_080c570c) == 3) {
    piVar4 = (int *)(param_1 + _DAT_080c570c);
    do {
      func_080087C8(param_1);
      if (iVar5 == 0x78) {
        *piVar4 = 4;
      }
      iVar5 = iVar5 + 1;
      func_080C2D54(param_1);
    } while (*piVar4 == 3);
  }
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080C5710 @ 0x080C5710
// =============================================================================
undefined4 func_080C5710(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  iStack_2c = 0;
  uVar1 = func_080005D4(0x14);
  iVar2 = func_0805E824(uVar1,*(undefined4 *)(param_1 + _DAT_080c57e4),0,0x100);
  piVar7 = (int *)(param_1 + 0x550);
  if (iVar2 != *piVar7) {
    func_08000608();
  }
  *piVar7 = iVar2;
  func_0805E860(iVar2,0);
  puVar3 = (undefined4 *)*piVar7;
  func_0x080d3918(&uStack_5c,(int *)*puVar3,
                  *(undefined2 *)(puVar3[1] + (uint)*(ushort *)(puVar3 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar3 + 0x10));
  memcpy(&uStack_5c,&uStack_5c,0x20);
  *(undefined4 *)(param_1 + 0x558) = uStack_5c;
  *(undefined4 *)(param_1 + 0x55c) = uStack_58;
  *(undefined4 *)(param_1 + 0x560) = uStack_54;
  *(undefined4 *)(param_1 + 0x564) = uStack_50;
  *(undefined4 *)(param_1 + 0x568) = uStack_4c;
  *(undefined4 *)(param_1 + 0x56c) = uStack_48;
  *(undefined4 *)(param_1 + 0x570) = uStack_44;
  *(undefined4 *)(param_1 + 0x574) = uStack_40;
  piVar7 = (int *)func_0x08008910(param_1);
  iVar8 = *(int *)(param_1 + 0x560);
  iVar2 = func_08007D4C(param_1 + _DAT_080c57e8,*(undefined4 *)(param_1 + _DAT_080c57e8 + 4));
  uVar6 = 0;
  if (*(int *)(param_1 + 0x560) != 0) {
    uVar6 = *(undefined2 *)(param_1 + 0x564);
  }
  piStack_28 = piVar7;
  func_08008F0C(&uStack_5c,iVar8,iVar2 * 0x20 + _DAT_080c57ec,uVar6);
  puVar3 = (undefined4 *)piVar7[1];
  if (puVar3 == (undefined4 *)piVar7[3]) {
    iStack_38 = 1;
    iStack_3c = (int)puVar3 - *piStack_28 >> 4;
    piVar7 = &iStack_3c;
    if (iStack_3c == 0) {
      piVar7 = &iStack_38;
    }
    puStack_24 = puVar3;
    if (iStack_3c + *piVar7 == 0) {
      puVar3 = (undefined4 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_3c + *piVar7) * 0x10;
      puVar3 = (undefined4 *)malloc(iVar2);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)func_080D3BC0(iVar2);
      }
    }
    puVar5 = puVar3;
    for (puVar4 = (undefined4 *)*piStack_28; puVar4 != puStack_24; puVar4 = puVar4 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar4[1];
        uVar9 = puVar4[2];
        *puVar5 = *puVar4;
        puVar5[1] = uVar1;
        puVar5[2] = uVar9;
        puVar5[3] = puVar4[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar8 = iStack_38;
    if (iStack_38 == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    for (iVar8 = *piStack_28; iVar8 != piStack_28[1]; iVar8 = iVar8 + 0x10) {
    }
    if (*piStack_28 != 0) {
      free();
    }
    *piStack_28 = (int)puVar3;
    piStack_28[1] = (int)puVar5;
    piStack_28[3] = iVar2 + (int)puVar3;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uStack_5c;
      puVar3[1] = uStack_58;
      puVar3[2] = uStack_54;
      puVar3[3] = uStack_50;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  piVar7 = (int *)func_0x08008910(param_1);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x568) != 0) {
    uVar6 = *(undefined2 *)(param_1 + 0x56c);
  }
  piStack_28 = piVar7;
  func_08008F0C(&uStack_5c,*(int *)(param_1 + 0x568),_DAT_080c5908,uVar6);
  puVar3 = (undefined4 *)piVar7[1];
  if (puVar3 == (undefined4 *)piVar7[3]) {
    iStack_30 = 1;
    iStack_34 = (int)puVar3 - *piStack_28 >> 4;
    piVar7 = &iStack_34;
    if (iStack_34 == 0) {
      piVar7 = &iStack_30;
    }
    puStack_24 = puVar3;
    if (iStack_34 + *piVar7 == 0) {
      puVar3 = (undefined4 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_34 + *piVar7) * 0x10;
      puVar3 = (undefined4 *)malloc(iVar2);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)func_080D3BC0(iVar2);
      }
    }
    puVar4 = puVar3;
    for (puVar5 = (undefined4 *)*piStack_28; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar1 = puVar5[1];
        uVar9 = puVar5[2];
        *puVar4 = *puVar5;
        puVar4[1] = uVar1;
        puVar4[2] = uVar9;
        puVar4[3] = puVar5[3];
      }
      puVar4 = puVar4 + 4;
    }
    iVar8 = iStack_30;
    if (iStack_30 == 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uStack_5c;
        puVar4[1] = uStack_58;
        puVar4[2] = uStack_54;
        puVar4[3] = uStack_50;
      }
      puVar4 = puVar4 + 4;
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = uStack_5c;
          puVar4[1] = uStack_58;
          puVar4[2] = uStack_54;
          puVar4[3] = uStack_50;
        }
        puVar4 = puVar4 + 4;
      }
    }
    for (iVar8 = *piStack_28; iVar8 != piStack_28[1]; iVar8 = iVar8 + 0x10) {
    }
    if (*piStack_28 != 0) {
      free();
    }
    *piStack_28 = (int)puVar3;
    piStack_28[1] = (int)puVar4;
    piStack_28[3] = iVar2 + (int)puVar3;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uStack_5c;
      puVar3[1] = uStack_58;
      puVar3[2] = uStack_54;
      puVar3[3] = uStack_50;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  func_080C2D54(param_1);
  iVar2 = _DAT_080c59ec;
  while (*(int *)(param_1 + iVar2) == 4) {
    func_080087C8(param_1);
    func_080088B8(param_1);
    if (*(int *)(param_1 + _DAT_080c5a0c) == 0) {
      func_080C7BF0(param_1);
      func_080C7DF8(param_1);
      func_080C76D4(param_1);
      func_080C7D78(param_1);
      iVar2 = iStack_2c + 1;
      iStack_2c = iVar2;
      func_080C38E4(param_1,iVar2);
      if (iVar2 == 0x3c) {
        iStack_2c = 0;
      }
    }
    else if (*(int *)(param_1 + _DAT_080c5a0c) == 1) {
      func_080C7D78(param_1);
    }
    func_080C2D54(param_1);
    iVar2 = _DAT_080c5a68;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C5A6C @ 0x080C5A6C
// =============================================================================
undefined4 func_080C5A6C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 in_lr;
  undefined1 auStack_7c [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int aiStack_4c [2];
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  iStack_38 = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x5a0) + 0x10) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x728) + 0x10) = 0x100;
  func_0805E860(*(int *)(param_1 + 0x728),6);
  *(undefined1 *)(param_1 + _DAT_080c5ad4) = 0;
  *(undefined4 *)(param_1 + _DAT_080c5ad8) = 3;
  *(undefined1 *)(param_1 + _DAT_080c5adc) = 1;
  func_080C2D54(param_1);
  iVar1 = _DAT_080c5ae0;
  while (*(int *)(param_1 + iVar1) == 5) {
    func_080087C8(param_1);
    iVar1 = *(int *)(param_1 + _DAT_080c5be0);
    if (iVar1 < 2) {
      iStack_30 = iStack_38 + 1;
      if (iStack_38 == 0xb4) {
        *(int *)(param_1 + _DAT_080c5be0) = iVar1 + 1;
        *(undefined4 *)(param_1 + _DAT_080c5be4) = 2;
        *(undefined1 *)(param_1 + _DAT_080c5be8) = 0;
        uVar2 = func_080005D4(0x14);
        iVar1 = func_0805E824(uVar2,*(undefined4 *)(param_1 + 0x520),0,0x100);
        piVar13 = (int *)(param_1 + 0x550);
        if (iVar1 != *piVar13) {
          func_08000608();
        }
        *piVar13 = iVar1;
        func_0805E860(iVar1,0);
        puVar3 = (undefined4 *)*piVar13;
        func_0x080d3918(&uStack_78,(int *)*puVar3,
                        *(undefined2 *)(puVar3[1] + (uint)*(ushort *)(puVar3 + 3) * 4),
                        *(undefined4 *)(*(int *)*puVar3 + 0x10));
        memcpy(&uStack_78,&uStack_78,0x20);
        *(undefined4 *)(param_1 + 0x558) = uStack_78;
        *(undefined4 *)(param_1 + 0x55c) = uStack_74;
        *(undefined4 *)(param_1 + 0x560) = uStack_70;
        *(undefined4 *)(param_1 + 0x564) = uStack_6c;
        *(undefined4 *)(param_1 + 0x568) = uStack_68;
        *(undefined4 *)(param_1 + 0x56c) = uStack_64;
        *(undefined4 *)(param_1 + 0x570) = uStack_60;
        *(undefined4 *)(param_1 + 0x574) = uStack_5c;
        piVar13 = (int *)func_0x08008910(param_1,param_1 + 0x578);
        iVar6 = *(int *)(param_1 + 0x560);
        iVar1 = func_08007D4C(param_1 + _DAT_080c5bec,*(undefined4 *)(param_1 + _DAT_080c5bec + 4));
        uVar11 = 0;
        if (*(int *)(param_1 + 0x560) != 0) {
          uVar11 = *(undefined2 *)(param_1 + 0x564);
        }
        puStack_34 = &uStack_78;
        func_08008F0C(&uStack_78,iVar6,iVar1 * 0x20 + _DAT_080c5bf0,uVar11);
        puVar3 = puStack_34;
        puVar7 = (undefined4 *)piVar13[1];
        if (puVar7 == (undefined4 *)piVar13[3]) {
          iStack_54 = 1;
          iStack_58 = (int)puVar7 - *piVar13 >> 4;
          piVar4 = &iStack_58;
          if (iStack_58 == 0) {
            piVar4 = &iStack_54;
          }
          if (iStack_58 + *piVar4 == 0) {
            puVar5 = (undefined4 *)0x0;
            iVar1 = 0;
          }
          else {
            iVar1 = (iStack_58 + *piVar4) * 0x10;
            puVar5 = (undefined4 *)malloc(iVar1);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)func_080D3BC0(iVar1);
            }
          }
          iStack_30 = iStack_38 + 1;
          puVar14 = puVar5;
          for (puVar9 = (undefined4 *)*piVar13; puVar9 != puVar7; puVar9 = puVar9 + 4) {
            if (puVar14 != (undefined4 *)0x0) {
              uVar2 = puVar9[1];
              uVar12 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_54;
          if (iStack_54 == 1) {
            if (puVar14 != (undefined4 *)0x0) {
              uVar2 = puVar3[1];
              uVar12 = puVar3[2];
              *puVar14 = *puVar3;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar3[3];
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (undefined4 *)0x0) {
                uVar2 = puVar3[1];
                uVar12 = puVar3[2];
                *puVar14 = *puVar3;
                puVar14[1] = uVar2;
                puVar14[2] = uVar12;
                puVar14[3] = puVar3[3];
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar13; iVar6 != piVar13[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_28 = puVar5;
          if (*piVar13 != 0) {
            free();
          }
          *piVar13 = (int)puStack_28;
          piVar13[1] = (int)puVar14;
          piVar13[3] = (int)puStack_28 + iVar1;
        }
        else {
          if (puVar7 != (undefined4 *)0x0) {
            uVar2 = puStack_34[1];
            uVar12 = puStack_34[2];
            *puVar7 = *puStack_34;
            puVar7[1] = uVar2;
            puVar7[2] = uVar12;
            puVar7[3] = puStack_34[3];
          }
          piVar13[1] = piVar13[1] + 0x10;
        }
        piVar13 = (int *)func_0x08008910(param_1);
        uVar11 = 0;
        if (*(int *)(param_1 + 0x568) != 0) {
          uVar11 = *(undefined2 *)(param_1 + 0x56c);
        }
        func_08008F0C(&uStack_78,*(int *)(param_1 + 0x568),_DAT_080c5d0c,uVar11);
        puVar3 = puStack_34;
        puVar7 = (undefined4 *)piVar13[1];
        if (puVar7 == (undefined4 *)piVar13[3]) {
          aiStack_4c[0] = 1;
          iStack_50 = (int)puVar7 - *piVar13 >> 4;
          piVar4 = &iStack_50;
          if (iStack_50 == 0) {
            piVar4 = aiStack_4c;
          }
          if (iStack_50 + *piVar4 == 0) {
            puVar5 = (undefined4 *)0x0;
            iVar1 = 0;
          }
          else {
            iVar1 = (iStack_50 + *piVar4) * 0x10;
            puVar5 = (undefined4 *)malloc(iVar1);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)func_080D3BC0(iVar1);
            }
          }
          puVar14 = puVar5;
          for (puVar9 = (undefined4 *)*piVar13; puVar9 != puVar7; puVar9 = puVar9 + 4) {
            if (puVar14 != (undefined4 *)0x0) {
              uVar2 = puVar9[1];
              uVar12 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = aiStack_4c[0];
          if (aiStack_4c[0] == 1) {
            if (puVar14 != (undefined4 *)0x0) {
              uVar2 = puVar3[1];
              uVar12 = puVar3[2];
              *puVar14 = *puVar3;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar3[3];
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (undefined4 *)0x0) {
                uVar2 = puVar3[1];
                uVar12 = puVar3[2];
                *puVar14 = *puVar3;
                puVar14[1] = uVar2;
                puVar14[2] = uVar12;
                puVar14[3] = puVar3[3];
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar13; iVar6 != piVar13[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_28 = puVar5;
          if (*piVar13 != 0) {
            free();
          }
          *piVar13 = (int)puStack_28;
          piVar13[1] = (int)puVar14;
          piVar13[3] = (int)puStack_28 + iVar1;
        }
        else {
          if (puVar7 != (undefined4 *)0x0) {
            uVar2 = puStack_34[1];
            uVar12 = puStack_34[2];
            *puVar7 = *puStack_34;
            puVar7[1] = uVar2;
            puVar7[2] = uVar12;
            puVar7[3] = puStack_34[3];
          }
          piVar13[1] = piVar13[1] + 0x10;
        }
        pcVar10 = (char *)(param_1 + _DAT_080c5e0c);
        *(char *)(param_1 + _DAT_080c5e08) = *pcVar10 + *(char *)(param_1 + _DAT_080c5e08);
        *pcVar10 = '\0';
        *(undefined1 *)(param_1 + _DAT_080c5e10) = 0;
        *(undefined1 *)(param_1 + _DAT_080c5e14) = 0;
        *(undefined1 *)(param_1 + _DAT_080c5e18) = 0;
      }
      iStack_38 = iStack_30;
    }
    else {
      *(undefined4 *)(param_1 + _ASSET_BLOCK_080C5F98) = 6;
      *(char *)(param_1 + _DAT_080c5f9c) =
           *(char *)(param_1 + _DAT_080c5fa0) + *(char *)(param_1 + _DAT_080c5f9c);
    }
    func_080C2D54(param_1);
    iVar1 = _ASSET_BLOCK_080C5F98;
  }
  if (*(int *)(param_1 + _ASSET_BLOCK_080C5F98) == 2) {
    puVar3 = (undefined4 *)(param_1 + _DAT_080c5fa4);
    uVar8 = *(uint *)*puVar3;
    if (-1 < (int)(-uVar8 | uVar8)) {
      func_08009378((uint *)*puVar3 + 3,_DAT_080c5fa8,1,1);
      iVar1 = func_0x08008940(param_1);
      func_0x080d3914(iVar1,*puVar3,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
    }
    puStack_34 = &uStack_78;
    iVar1 = param_1 + 0xc;
    puStack_2c = &uStack_44;
    uVar8 = -*(uint *)*puVar3 | *(uint *)*puVar3;
    while ((int)uVar8 < 0) {
      func_080087C8(param_1);
      func_080C2D54(param_1);
      uVar8 = -**(uint **)(param_1 + _DAT_080c5fa4) | **(uint **)(param_1 + _DAT_080c5fa4);
    }
    piVar13 = (int *)(param_1 + _DAT_080c5fa4);
    func_0800934C(*piVar13 + 0xc,_DAT_080c5fa8,1,1);
    iVar6 = func_0x08008940(param_1);
    func_0x080d3914(iVar6,*piVar13,*(undefined4 *)(*(int *)(iVar6 + 8) + 0x10));
    *(undefined2 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0x100;
    *(undefined2 *)(*(int *)(param_1 + 0x5a0) + 0x10) = 0x100;
    *(undefined2 *)(*(int *)(param_1 + 0x728) + 0x10) = 0x100;
    *(undefined1 *)(param_1 + _DAT_080c5fac) = 0x19;
    func_0804EC84(0x19,auStack_7c,0);
    aiStack_4c[1] = 0x20004;
    func_0804E7A0(0x20004,iVar1,0);
    uStack_44 = CONCAT22(uStack_44._2_2_,4);
    *(undefined2 *)((int)puStack_2c + 2) = 2;
    func_0804E958(uStack_44,iVar1,0,0,auStack_7c,0,1);
    piVar13 = (int *)func_0x08008910(param_1);
    iVar6 = func_08007D4C(param_1 + _DAT_080c5fb0,*(undefined4 *)(param_1 + _DAT_080c5fb0 + 4));
    func_08008F0C(&uStack_78,iVar1,iVar6 * 0x20 + _DAT_080c5fb4,0x100);
    puVar3 = puStack_34;
    puStack_24 = (undefined4 *)piVar13[1];
    if (puStack_24 == (undefined4 *)piVar13[3]) {
      iStack_3c = 1;
      iStack_40 = (int)puStack_24 - *piVar13 >> 4;
      piVar4 = &iStack_40;
      if (iStack_40 == 0) {
        piVar4 = &iStack_3c;
      }
      if (iStack_40 + *piVar4 == 0) {
        puVar7 = (undefined4 *)0x0;
        iVar1 = 0;
      }
      else {
        iVar1 = (iStack_40 + *piVar4) * 0x10;
        puVar7 = (undefined4 *)malloc(iVar1);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)func_080D3BC0(iVar1);
        }
      }
      puVar5 = puVar7;
      for (puVar9 = (undefined4 *)*piVar13; puVar9 != puStack_24; puVar9 = puVar9 + 4) {
        if (puVar5 != (undefined4 *)0x0) {
          uVar2 = puVar9[1];
          uVar12 = puVar9[2];
          *puVar5 = *puVar9;
          puVar5[1] = uVar2;
          puVar5[2] = uVar12;
          puVar5[3] = puVar9[3];
        }
        puVar5 = puVar5 + 4;
      }
      iVar6 = iStack_3c;
      if (iStack_3c == 1) {
        if (puVar5 != (undefined4 *)0x0) {
          uVar2 = puVar3[1];
          uVar12 = puVar3[2];
          *puVar5 = *puVar3;
          puVar5[1] = uVar2;
          puVar5[2] = uVar12;
          puVar5[3] = puVar3[3];
        }
        puVar5 = puVar5 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar5 != (undefined4 *)0x0) {
            uVar2 = puVar3[1];
            uVar12 = puVar3[2];
            *puVar5 = *puVar3;
            puVar5[1] = uVar2;
            puVar5[2] = uVar12;
            puVar5[3] = puVar3[3];
          }
          puVar5 = puVar5 + 4;
        }
      }
      for (iVar6 = *piVar13; iVar6 != piVar13[1]; iVar6 = iVar6 + 0x10) {
      }
      if (*piVar13 != 0) {
        free();
      }
      *piVar13 = (int)puVar7;
      piVar13[1] = (int)puVar5;
      piVar13[3] = iVar1 + (int)puVar7;
    }
    else {
      if (puStack_24 != (undefined4 *)0x0) {
        uVar2 = puStack_34[1];
        uVar12 = puStack_34[2];
        *puStack_24 = *puStack_34;
        puStack_24[1] = uVar2;
        puStack_24[2] = uVar12;
        puStack_24[3] = puStack_34[3];
      }
      piVar13[1] = piVar13[1] + 0x10;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C608C @ 0x080C608C
// =============================================================================
undefined4 func_080C608C(int param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  byte *pbVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  undefined4 in_lr;
  uint auStack_14c [4];
  undefined1 auStack_13c [16];
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int aiStack_a8 [2];
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int aiStack_94 [3];
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  undefined4 *puStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  undefined4 *puStack_40;
  int iStack_3c;
  int iStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  
  pbVar18 = (byte *)(_DAT_080c61d8 + param_1);
  uVar12 = (uint)*pbVar18;
  uStack_12c = *(byte *)(_DAT_080c61d4 + param_1) - uVar12;
  puVar14 = (uint *)(_DAT_080c61dc + param_1);
  uVar12 = (uStack_12c + *(byte *)(param_1 + 0x970)) - uVar12;
  *puVar14 = uVar12;
  if ((int)uVar12 < 0) {
    *puVar14 = 0;
  }
  if ((int)(uint)*(byte *)(_DAT_080c61e0 + param_1) <= (int)*puVar14) {
    *(undefined1 *)(_DAT_080c61e4 + param_1) = 1;
  }
  uStack_128 = (uint)*(byte *)(param_1 + 0x970);
  uStack_124 = (uint)*pbVar18;
  uStack_120 = *puVar14;
  memcpy(auStack_13c,&uStack_12c,0x10);
  memcpy(auStack_14c,auStack_13c,0x10);
  puVar2 = (undefined2 *)func_0x08008918(param_1);
  uStack_12c = CONCAT22(uStack_12c._2_2_,0x1740);
  *puVar2 = 0x1740;
  piVar19 = (int *)(_DAT_080c61e8 + param_1);
  iVar3 = *piVar19;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    func_08050D0C(iVar3,3);
  }
  *piVar19 = 0;
  uVar4 = func_080005D4(4);
  func_0x0800835c(&uStack_12c);
  func_0x0800770c(&uStack_128);
  iVar3 = func_08050CC0(uVar4,0,0x18,0,0,&uStack_12c,&uStack_128);
  piVar19 = (int *)(_DAT_080c61e8 + param_1);
  iVar5 = *piVar19;
  if ((iVar3 != iVar5) && (iVar5 != 0)) {
    func_08050D0C(iVar5,3);
  }
  *piVar19 = iVar3;
  func_08007714(&uStack_128,2);
  func_0x08008364(&uStack_12c,2);
  uVar4 = *(undefined4 *)(_DAT_080c61e8 + param_1);
  uVar6 = func_0x080088dc(param_1);
  uVar7 = func_0x08008920(param_1);
  uVar8 = func_0x08008918(param_1);
  uVar9 = func_0x08008940(param_1);
  uVar10 = func_0800894C(param_1);
  func_08050D3C(uVar4,uVar6,uVar7,uVar8,uVar9,uVar10,_DAT_080c61ec + param_1);
  if (*(char *)(_DAT_080c61e4 + param_1) == '\0') {
    uVar4 = func_080005D4(0x14);
    iVar3 = 0x540;
  }
  else {
    uVar4 = func_080005D4(0x14);
    iVar3 = _DAT_080c6324;
  }
  iVar3 = func_0805E824(uVar4,*(undefined4 *)(iVar3 + param_1),0,0x100);
  if (iVar3 != *(int *)(param_1 + 0x750)) {
    func_08000608();
  }
  *(int *)(param_1 + 0x750) = iVar3;
  puVar2 = (undefined2 *)func_080005D4(0x1c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  piVar19 = (int *)(_DAT_080c6328 + param_1);
  if (puVar2 != (undefined2 *)*piVar19) {
    func_08000608();
  }
  *piVar19 = (int)puVar2;
  func_0805E860(*(int *)(param_1 + 0x750),0);
  *(undefined2 *)*piVar19 = 0x40;
  *(undefined2 *)(*piVar19 + 2) = 0x40;
  iVar3 = *piVar19;
  iVar5 = _DAT_080c632c + param_1;
  uVar1 = func_08007D4C(iVar5,*(undefined4 *)(iVar5 + 4));
  *(undefined2 *)(iVar3 + 6) = uVar1;
  *(undefined2 *)(*piVar19 + 4) = 9;
  *(undefined1 *)(*piVar19 + 0x18) = 1;
  puVar11 = *(undefined4 **)(param_1 + 0x750);
  func_0x080d3918(&uStack_11c,(int *)*puVar11,
                  *(undefined2 *)(puVar11[1] + (uint)*(ushort *)(puVar11 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar11 + 0x10));
  memcpy(&uStack_11c,&uStack_11c,0x20);
  *(undefined4 *)(param_1 + 0x758) = uStack_11c;
  *(undefined4 *)(param_1 + 0x75c) = uStack_118;
  *(uint *)(param_1 + 0x760) = uStack_114;
  *(uint *)(param_1 + 0x764) = uStack_110;
  *(uint *)(param_1 + 0x768) = uStack_10c;
  *(uint *)(param_1 + 0x76c) = uStack_108;
  *(undefined4 *)(param_1 + 0x770) = uStack_104;
  *(undefined4 *)(param_1 + 0x774) = uStack_100;
  piVar19 = (int *)func_0x08008910(param_1);
  iVar21 = *(int *)(param_1 + 0x760);
  iVar3 = func_08007D4C(iVar5,*(undefined4 *)(iVar5 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x760) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x764);
  }
  func_08008F0C(&uStack_12c,iVar21,iVar3 * 0x20 + _DAT_080c6330,uVar1);
  puVar14 = (uint *)piVar19[1];
  if (puVar14 == (uint *)piVar19[3]) {
    puStack_28 = puVar14;
    iStack_f8 = 1;
    iStack_fc = (int)puVar14 - *piVar19 >> 4;
    piVar20 = &iStack_fc;
    if (iStack_fc == 0) {
      piVar20 = &iStack_f8;
    }
    if (iStack_fc + *piVar20 == 0) {
      puStack_24 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_fc + *piVar20) * 0x10;
      puStack_24 = (uint *)malloc(iVar3);
      if (puStack_24 == (uint *)0x0) {
        puStack_24 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puStack_40 = &uStack_ec;
    puStack_48 = &uStack_124;
    piStack_34 = aiStack_a8;
    puVar14 = puStack_24;
    for (puVar13 = (uint *)*piVar19; puVar13 != puStack_28; puVar13 = puVar13 + 4) {
      if (puVar14 != (uint *)0x0) {
        uVar12 = puVar13[1];
        uVar17 = puVar13[2];
        *puVar14 = *puVar13;
        puVar14[1] = uVar12;
        puVar14[2] = uVar17;
        puVar14[3] = puVar13[3];
      }
      puVar14 = puVar14 + 4;
    }
    iVar5 = iStack_f8;
    if (iStack_f8 == 1) {
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uStack_12c;
        puVar14[1] = uStack_128;
        puVar14[2] = uStack_124;
        puVar14[3] = uStack_120;
      }
      puVar14 = puVar14 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar14 != (uint *)0x0) {
          *puVar14 = uStack_12c;
          puVar14[1] = uStack_128;
          puVar14[2] = uStack_124;
          puVar14[3] = uStack_120;
        }
        puVar14 = puVar14 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar14;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar14 != (uint *)0x0) {
      *puVar14 = uStack_12c;
      puVar14[1] = uStack_128;
      puVar14[2] = uStack_124;
      puVar14[3] = uStack_120;
    }
    piVar19[1] = piVar19[1] + 0x10;
    puStack_40 = &uStack_ec;
    puStack_48 = &uStack_124;
    piStack_34 = aiStack_a8;
  }
  piVar19 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x768) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x76c);
  }
  func_08008F0C(&uStack_12c,*(int *)(param_1 + 0x768),_DAT_080c6450,uVar1);
  puVar14 = (uint *)piVar19[1];
  if (puVar14 == (uint *)piVar19[3]) {
    puStack_28 = puVar14;
    iStack_f0 = 1;
    iStack_f4 = (int)puVar14 - *piVar19 >> 4;
    piVar20 = &iStack_f4;
    if (iStack_f4 == 0) {
      piVar20 = &iStack_f0;
    }
    if (iStack_f4 + *piVar20 == 0) {
      puVar14 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_f4 + *piVar20) * 0x10;
      puVar14 = (uint *)malloc(iVar3);
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puVar16 = puVar14;
    for (puVar13 = (uint *)*piVar19; puVar13 != puStack_28; puVar13 = puVar13 + 4) {
      if (puVar16 != (uint *)0x0) {
        uVar12 = puVar13[1];
        uVar17 = puVar13[2];
        *puVar16 = *puVar13;
        puVar16[1] = uVar12;
        puVar16[2] = uVar17;
        puVar16[3] = puVar13[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar5 = iStack_f0;
    if (iStack_f0 == 1) {
      if (puVar16 != (uint *)0x0) {
        *puVar16 = uStack_12c;
        puVar16[1] = uStack_128;
        puVar16[2] = uStack_124;
        puVar16[3] = uStack_120;
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar16 != (uint *)0x0) {
          *puVar16 = uStack_12c;
          puVar16[1] = uStack_128;
          puVar16[2] = uStack_124;
          puVar16[3] = uStack_120;
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar14;
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar16;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar14 != (uint *)0x0) {
      *puVar14 = uStack_12c;
      puVar14[1] = uStack_128;
      puVar14[2] = uStack_124;
      puVar14[3] = uStack_120;
    }
    piVar19[1] = piVar19[1] + 0x10;
  }
  iStack_68 = 0;
  iStack_64 = _DAT_080c65a4 + param_1;
  do {
    iVar5 = iStack_68 * 8;
    func_08008EB8(0,iVar5 + 0x778 + param_1,8);
    func_0804EC84(0,&uStack_12c,0);
    iVar3 = iStack_68 * 0x40;
    iVar21 = iStack_68 * 0x104;
    uStack_ec = CONCAT22(uStack_ec._2_2_,4);
    *(undefined2 *)((int)puStack_40 + 2) = 2;
    func_0804E7A0(uStack_ec,iVar21 + param_1 + 0x110,0);
    iStack_38 = iVar5;
    if (iStack_68 == 2) {
      iVar5 = strlen(&uStack_12c);
      uStack_e4 = CONCAT22((undefined2)iStack_68,4);
      func_0804E958(uStack_e4,param_1 + 0x318,iVar5 * -8 + 0x20,0,&uStack_12c,0,7);
    }
    else {
      iVar5 = strlen(&uStack_12c);
      uStack_e8 = 0x20004;
      func_0804E958(0x20004,iVar21 + param_1 + 0x110,iVar5 * -8 + 0x20,0,&uStack_12c,0,5);
    }
    piVar19 = (int *)func_0x08008910(param_1);
    iVar3 = iVar3 + iStack_68;
    iVar5 = func_08007D4C(iStack_64,*(undefined4 *)(iStack_64 + 4));
    func_08008F0C(&uStack_124,iVar3 * 4 + param_1 + 0x110,(iStack_38 + iVar5) * 0x20 + _DAT_080c663c
                  ,0x100);
    puVar14 = puStack_48;
    puVar13 = (uint *)piVar19[1];
    if (puVar13 == (uint *)piVar19[3]) {
      puStack_28 = puVar13;
      iStack_dc = 1;
      iStack_e0 = (int)puVar13 - *piVar19 >> 4;
      piVar20 = &iStack_e0;
      if (iStack_e0 == 0) {
        piVar20 = &iStack_dc;
      }
      if (iStack_e0 + *piVar20 == 0) {
        puVar13 = (uint *)0x0;
        iVar3 = 0;
      }
      else {
        iVar3 = (iStack_e0 + *piVar20) * 0x10;
        puVar13 = (uint *)malloc(iVar3);
        if (puVar13 == (uint *)0x0) {
          puVar13 = (uint *)func_080D3BC0(iVar3);
        }
      }
      iStack_3c = iStack_68 + 1;
      puVar16 = puVar13;
      for (puVar15 = (uint *)*piVar19; puVar15 != puStack_28; puVar15 = puVar15 + 4) {
        if (puVar16 != (uint *)0x0) {
          uVar12 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar12;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar16 = puVar16 + 4;
      }
      iVar5 = iStack_dc;
      if (iStack_dc == 1) {
        if (puVar16 != (uint *)0x0) {
          uVar12 = puVar14[1];
          uVar17 = puVar14[2];
          *puVar16 = *puVar14;
          puVar16[1] = uVar12;
          puVar16[2] = uVar17;
          puVar16[3] = puVar14[3];
        }
        puVar16 = puVar16 + 4;
      }
      else {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (puVar16 != (uint *)0x0) {
            uVar12 = puVar14[1];
            uVar17 = puVar14[2];
            *puVar16 = *puVar14;
            puVar16[1] = uVar12;
            puVar16[2] = uVar17;
            puVar16[3] = puVar14[3];
          }
          puVar16 = puVar16 + 4;
        }
      }
      for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
      }
      puStack_24 = puVar13;
      if (*piVar19 != 0) {
        free();
      }
      *piVar19 = (int)puStack_24;
      piVar19[1] = (int)puVar16;
      piVar19[3] = (int)puStack_24 + iVar3;
    }
    else {
      if (puVar13 != (uint *)0x0) {
        uVar12 = puStack_48[1];
        uVar17 = puStack_48[2];
        *puVar13 = *puStack_48;
        puVar13[1] = uVar12;
        puVar13[2] = uVar17;
        puVar13[3] = puStack_48[3];
      }
      piVar19[1] = piVar19[1] + 0x10;
      iStack_3c = iStack_68 + 1;
    }
    if (iStack_68 == 3) {
      puVar11 = (undefined4 *)(param_1 + 0x790);
      iVar3 = func_08007D4C(iStack_64,*(undefined4 *)(iStack_64 + 4));
      func_0804EA94(&uStack_d0,200,0x8d,iVar3 + 0x18,2,0,2,1);
      uVar4 = uStack_d0;
      uVar6 = uStack_cc;
    }
    else {
      puVar11 = (undefined4 *)(iStack_38 + param_1 + 0x778);
      iVar3 = func_08007D4C(iStack_64,*(undefined4 *)(iStack_64 + 4));
      func_0804EA94(&uStack_d8,0x78,iStack_68 * 0x10 + 0x6d,iVar3 + iStack_38,2,0,2,1);
      uVar4 = uStack_d8;
      uVar6 = uStack_d4;
    }
    *puVar11 = uVar4;
    puVar11[1] = uVar6;
    iStack_68 = iStack_3c;
  } while (iStack_3c < 4);
  uVar4 = func_080005D4(0x14);
  iVar3 = func_0805E824(uVar4,*(undefined4 *)(_DAT_080c68b4 + param_1),0,0x100);
  piVar19 = (int *)(param_1 + 0x798);
  if (iVar3 != *piVar19) {
    func_08000608();
  }
  *piVar19 = iVar3;
  puVar2 = (undefined2 *)func_080005D4(0x1c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  piVar20 = (int *)(_DAT_080c68b8 + param_1);
  if (puVar2 != (undefined2 *)*piVar20) {
    func_08000608();
  }
  *piVar20 = (int)puVar2;
  func_0805E860(*piVar19,*(int *)(param_1 + 0x980) * 0x54 + _DAT_080c68bc);
  *(undefined2 *)*piVar20 = 0x70;
  *(undefined2 *)(*piVar20 + 2) = 0x85;
  iVar3 = *piVar20;
  iVar5 = _DAT_080c68c0 + param_1;
  uVar1 = func_08007D4C(iVar5,*(undefined4 *)(iVar5 + 4));
  *(undefined2 *)(iVar3 + 6) = uVar1;
  *(undefined2 *)(*piVar20 + 4) = 4;
  *(undefined1 *)(*piVar20 + 0x18) = 1;
  puVar11 = (undefined4 *)*piVar19;
  func_0x080d3918(&uStack_124,(int *)*puVar11,
                  *(undefined2 *)(puVar11[1] + (uint)*(ushort *)(puVar11 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar11 + 0x10));
  memcpy(puStack_48,puStack_48,0x20);
  uVar12 = puStack_48[1];
  uVar17 = puStack_48[2];
  *(uint *)(param_1 + 0x7a0) = *puStack_48;
  *(uint *)(param_1 + 0x7a4) = uVar12;
  *(uint *)(param_1 + 0x7a8) = uVar17;
  uVar12 = puStack_48[4];
  uVar17 = puStack_48[5];
  *(uint *)(param_1 + 0x7ac) = puStack_48[3];
  *(uint *)(param_1 + 0x7b0) = uVar12;
  *(uint *)(param_1 + 0x7b4) = uVar17;
  uVar12 = puStack_48[7];
  *(uint *)(param_1 + 0x7b8) = puStack_48[6];
  *(uint *)(param_1 + 0x7bc) = uVar12;
  piVar19 = (int *)func_0x08008910(param_1);
  iVar21 = *(int *)(param_1 + 0x7a8);
  iVar3 = func_08007D4C(iVar5,*(undefined4 *)(iVar5 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x7a8) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x7ac);
  }
  func_08008F0C(puStack_48,iVar21,iVar3 * 0x20 + _DAT_080c68c4,uVar1);
  puVar14 = puStack_48;
  puVar13 = (uint *)piVar19[1];
  if (puVar13 == (uint *)piVar19[3]) {
    puStack_28 = puVar13;
    iStack_c4 = 1;
    iStack_c8 = (int)puVar13 - *piVar19 >> 4;
    piVar20 = &iStack_c8;
    if (iStack_c8 == 0) {
      piVar20 = &iStack_c4;
    }
    if (iStack_c8 + *piVar20 == 0) {
      puVar13 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_c8 + *piVar20) * 0x10;
      puVar13 = (uint *)malloc(iVar3);
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puVar15 = puVar13;
    for (puVar16 = (uint *)*piVar19; puVar16 != puStack_28; puVar16 = puVar16 + 4) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar16[1];
        uVar17 = puVar16[2];
        *puVar15 = *puVar16;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar16[3];
      }
      puVar15 = puVar15 + 4;
    }
    iVar5 = iStack_c4;
    if (iStack_c4 == 1) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar14[1];
        uVar17 = puVar14[2];
        *puVar15 = *puVar14;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar14[3];
      }
      puVar15 = puVar15 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar15 != (uint *)0x0) {
          uVar12 = puVar14[1];
          uVar17 = puVar14[2];
          *puVar15 = *puVar14;
          puVar15[1] = uVar12;
          puVar15[2] = uVar17;
          puVar15[3] = puVar14[3];
        }
        puVar15 = puVar15 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar15;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar13 != (uint *)0x0) {
      uVar12 = puStack_48[1];
      uVar17 = puStack_48[2];
      *puVar13 = *puStack_48;
      puVar13[1] = uVar12;
      puVar13[2] = uVar17;
      puVar13[3] = puStack_48[3];
    }
    piVar19[1] = piVar19[1] + 0x10;
  }
  piVar19 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x7b4);
  }
  func_08008F0C(&uStack_124,*(int *)(param_1 + 0x7b0),_DAT_080c69d8,uVar1);
  puVar14 = puStack_48;
  puVar13 = (uint *)piVar19[1];
  if (puVar13 == (uint *)piVar19[3]) {
    puStack_28 = puVar13;
    iStack_bc = 1;
    iStack_c0 = (int)puVar13 - *piVar19 >> 4;
    piVar20 = &iStack_c0;
    if (iStack_c0 == 0) {
      piVar20 = &iStack_bc;
    }
    if (iStack_c0 + *piVar20 == 0) {
      puVar13 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_c0 + *piVar20) * 0x10;
      puVar13 = (uint *)malloc(iVar3);
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puVar15 = puVar13;
    for (puVar16 = (uint *)*piVar19; puVar16 != puStack_28; puVar16 = puVar16 + 4) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar16[1];
        uVar17 = puVar16[2];
        *puVar15 = *puVar16;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar16[3];
      }
      puVar15 = puVar15 + 4;
    }
    iVar5 = iStack_bc;
    if (iStack_bc == 1) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar14[1];
        uVar17 = puVar14[2];
        *puVar15 = *puVar14;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar14[3];
      }
      puVar15 = puVar15 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar15 != (uint *)0x0) {
          uVar12 = puVar14[1];
          uVar17 = puVar14[2];
          *puVar15 = *puVar14;
          puVar15[1] = uVar12;
          puVar15[2] = uVar17;
          puVar15[3] = puVar14[3];
        }
        puVar15 = puVar15 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar15;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar13 != (uint *)0x0) {
      uVar12 = puStack_48[1];
      uVar17 = puStack_48[2];
      *puVar13 = *puStack_48;
      puVar13[1] = uVar12;
      puVar13[2] = uVar17;
      puVar13[3] = puStack_48[3];
    }
    piVar19[1] = piVar19[1] + 0x10;
  }
  uVar4 = func_080005D4(0x14);
  iVar3 = func_0805E824(uVar4,*(undefined4 *)(_DAT_080c6bb0 + param_1),0,0x100);
  piVar19 = (int *)(param_1 + 0x7c0);
  if (iVar3 != *piVar19) {
    func_08000608();
  }
  *piVar19 = iVar3;
  puVar2 = (undefined2 *)func_080005D4(0x1c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  piVar20 = (int *)(_DAT_080c6bb4 + param_1);
  if (puVar2 != (undefined2 *)*piVar20) {
    func_08000608();
  }
  *piVar20 = (int)puVar2;
  *puVar2 = 0x68;
  puVar2[1] = 0x7d;
  iVar3 = _DAT_080c6bb8 + param_1;
  uVar1 = func_08007D4C(iVar3,*(undefined4 *)(iVar3 + 4));
  puVar2[3] = uVar1;
  *(undefined2 *)(*piVar20 + 4) = 5;
  *(undefined1 *)(*piVar20 + 0x18) = 1;
  puVar11 = (undefined4 *)*piVar19;
  func_0x080d3918(&uStack_124,(int *)*puVar11,
                  *(undefined2 *)(puVar11[1] + (uint)*(ushort *)(puVar11 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar11 + 0x10));
  memcpy(puStack_48,puStack_48,0x20);
  uVar12 = puStack_48[1];
  uVar17 = puStack_48[2];
  *(uint *)(param_1 + 0x7c8) = *puStack_48;
  *(uint *)(param_1 + 0x7cc) = uVar12;
  *(uint *)(param_1 + 2000) = uVar17;
  uVar12 = puStack_48[4];
  uVar17 = puStack_48[5];
  *(uint *)(param_1 + 0x7d4) = puStack_48[3];
  *(uint *)(param_1 + 0x7d8) = uVar12;
  *(uint *)(param_1 + 0x7dc) = uVar17;
  uVar12 = puStack_48[7];
  *(uint *)(param_1 + 0x7e0) = puStack_48[6];
  *(uint *)(param_1 + 0x7e4) = uVar12;
  piVar19 = (int *)func_0x08008910(param_1);
  iVar5 = *(int *)(param_1 + 2000);
  iVar3 = func_08007D4C(iVar3,*(undefined4 *)(iVar3 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 2000) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x7d4);
  }
  func_08008F0C(puStack_48,iVar5,iVar3 * 0x20 + _DAT_080c6bbc,uVar1);
  puVar14 = puStack_48;
  puVar13 = (uint *)piVar19[1];
  if (puVar13 == (uint *)piVar19[3]) {
    puStack_28 = puVar13;
    iStack_b4 = 1;
    iStack_b8 = (int)puVar13 - *piVar19 >> 4;
    piVar20 = &iStack_b8;
    if (iStack_b8 == 0) {
      piVar20 = &iStack_b4;
    }
    if (iStack_b8 + *piVar20 == 0) {
      puVar13 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_b8 + *piVar20) * 0x10;
      puVar13 = (uint *)malloc(iVar3);
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puVar16 = puVar13;
    for (puVar15 = (uint *)*piVar19; puVar15 != puStack_28; puVar15 = puVar15 + 4) {
      if (puVar16 != (uint *)0x0) {
        uVar12 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar12;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar5 = iStack_b4;
    if (iStack_b4 == 1) {
      if (puVar16 != (uint *)0x0) {
        uVar12 = puVar14[1];
        uVar17 = puVar14[2];
        *puVar16 = *puVar14;
        puVar16[1] = uVar12;
        puVar16[2] = uVar17;
        puVar16[3] = puVar14[3];
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar16 != (uint *)0x0) {
          uVar12 = puVar14[1];
          uVar17 = puVar14[2];
          *puVar16 = *puVar14;
          puVar16[1] = uVar12;
          puVar16[2] = uVar17;
          puVar16[3] = puVar14[3];
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar16;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar13 != (uint *)0x0) {
      uVar12 = puStack_48[1];
      uVar17 = puStack_48[2];
      *puVar13 = *puStack_48;
      puVar13[1] = uVar12;
      puVar13[2] = uVar17;
      puVar13[3] = puStack_48[3];
    }
    piVar19[1] = piVar19[1] + 0x10;
  }
  piVar19 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x7d8) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x7dc);
  }
  func_08008F0C(&uStack_124,*(int *)(param_1 + 0x7d8),_DAT_080c6ccc,uVar1);
  puVar14 = puStack_48;
  puVar13 = (uint *)piVar19[1];
  if (puVar13 == (uint *)piVar19[3]) {
    puStack_28 = puVar13;
    iStack_ac = 1;
    iStack_b0 = (int)puVar13 - *piVar19 >> 4;
    piVar20 = &iStack_b0;
    if (iStack_b0 == 0) {
      piVar20 = &iStack_ac;
    }
    if (iStack_b0 + *piVar20 == 0) {
      puVar13 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_b0 + *piVar20) * 0x10;
      puVar13 = (uint *)malloc(iVar3);
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puVar15 = puVar13;
    for (puVar16 = (uint *)*piVar19; puVar16 != puStack_28; puVar16 = puVar16 + 4) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar16[1];
        uVar17 = puVar16[2];
        *puVar15 = *puVar16;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar16[3];
      }
      puVar15 = puVar15 + 4;
    }
    iVar5 = iStack_ac;
    if (iStack_ac == 1) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar14[1];
        uVar17 = puVar14[2];
        *puVar15 = *puVar14;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar14[3];
      }
      puVar15 = puVar15 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar15 != (uint *)0x0) {
          uVar12 = puVar14[1];
          uVar17 = puVar14[2];
          *puVar15 = *puVar14;
          puVar15[1] = uVar12;
          puVar15[2] = uVar17;
          puVar15[3] = puVar14[3];
        }
        puVar15 = puVar15 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar15;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar13 != (uint *)0x0) {
      uVar12 = puStack_48[1];
      uVar17 = puStack_48[2];
      *puVar13 = *puStack_48;
      puVar13[1] = uVar12;
      puVar13[2] = uVar17;
      puVar13[3] = puStack_48[3];
    }
    piVar19[1] = piVar19[1] + 0x10;
  }
  puVar2 = (undefined2 *)func_080005D4(0x1c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  piVar19 = (int *)(_DAT_080c6e88 + param_1);
  if (puVar2 != (undefined2 *)*piVar19) {
    func_08000608();
  }
  *piVar19 = (int)puVar2;
  *puVar2 = 0x68;
  puVar2[1] = 0x8d;
  iVar3 = _DAT_080c6e8c + param_1;
  uVar1 = func_08007D4C(iVar3,*(undefined4 *)(iVar3 + 4));
  puVar2[3] = uVar1;
  *(undefined2 *)(*piVar19 + 4) = 8;
  *(undefined1 *)(*piVar19 + 0x18) = 1;
  piVar19 = *(int **)(param_1 + 0x538);
  iVar5 = *piVar19;
  func_0x080d3918(piStack_34,piVar19,6,*(undefined4 *)(iVar5 + 0xc));
  func_0x080d3918(&uStack_124,piVar19,*(undefined2 *)(aiStack_a8[0] + 0xc),
                  *(undefined4 *)(iVar5 + 0x10));
  memcpy(puStack_48,puStack_48,0x20);
  uVar12 = puStack_48[1];
  uVar17 = puStack_48[2];
  *(uint *)(param_1 + 0x7f0) = *puStack_48;
  *(uint *)(param_1 + 0x7f4) = uVar12;
  *(uint *)(param_1 + 0x7f8) = uVar17;
  uVar12 = puStack_48[4];
  uVar17 = puStack_48[5];
  *(uint *)(param_1 + 0x7fc) = puStack_48[3];
  *(uint *)(param_1 + 0x800) = uVar12;
  *(uint *)(param_1 + 0x804) = uVar17;
  uVar12 = puStack_48[7];
  *(uint *)(param_1 + 0x808) = puStack_48[6];
  *(uint *)(param_1 + 0x80c) = uVar12;
  piVar19 = (int *)func_0x08008910(param_1);
  iVar5 = *(int *)(param_1 + 0x7f8);
  iVar3 = func_08007D4C(iVar3,*(undefined4 *)(iVar3 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x7f8) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x7fc);
  }
  func_08008F0C(puStack_48,iVar5,iVar3 * 0x20 + _DAT_080c6e90,uVar1);
  puVar14 = puStack_48;
  puVar13 = (uint *)piVar19[1];
  if (puVar13 == (uint *)piVar19[3]) {
    puStack_28 = puVar13;
    iStack_9c = 1;
    iStack_a0 = (int)puVar13 - *piVar19 >> 4;
    piVar20 = &iStack_a0;
    if (iStack_a0 == 0) {
      piVar20 = &iStack_9c;
    }
    if (iStack_a0 + *piVar20 == 0) {
      puVar13 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_a0 + *piVar20) * 0x10;
      puVar13 = (uint *)malloc(iVar3);
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puVar16 = puVar13;
    for (puVar15 = (uint *)*piVar19; puVar15 != puStack_28; puVar15 = puVar15 + 4) {
      if (puVar16 != (uint *)0x0) {
        uVar12 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar12;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar5 = iStack_9c;
    if (iStack_9c == 1) {
      if (puVar16 != (uint *)0x0) {
        uVar12 = puVar14[1];
        uVar17 = puVar14[2];
        *puVar16 = *puVar14;
        puVar16[1] = uVar12;
        puVar16[2] = uVar17;
        puVar16[3] = puVar14[3];
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar16 != (uint *)0x0) {
          uVar12 = puVar14[1];
          uVar17 = puVar14[2];
          *puVar16 = *puVar14;
          puVar16[1] = uVar12;
          puVar16[2] = uVar17;
          puVar16[3] = puVar14[3];
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar16;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar13 != (uint *)0x0) {
      uVar12 = puStack_48[1];
      uVar17 = puStack_48[2];
      *puVar13 = *puStack_48;
      puVar13[1] = uVar12;
      puVar13[2] = uVar17;
      puVar13[3] = puStack_48[3];
    }
    piVar19[1] = piVar19[1] + 0x10;
  }
  piVar19 = (int *)func_0x08008910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x800) != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x804);
  }
  func_08008F0C(&uStack_124,*(int *)(param_1 + 0x800),_DAT_080c6fa0,uVar1);
  puVar14 = puStack_48;
  puVar13 = (uint *)piVar19[1];
  if (puVar13 == (uint *)piVar19[3]) {
    puStack_28 = puVar13;
    aiStack_94[0] = 1;
    iStack_98 = (int)puVar13 - *piVar19 >> 4;
    piVar20 = &iStack_98;
    if (iStack_98 == 0) {
      piVar20 = aiStack_94;
    }
    if (iStack_98 + *piVar20 == 0) {
      puVar13 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_98 + *piVar20) * 0x10;
      puVar13 = (uint *)malloc(iVar3);
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)func_080D3BC0(iVar3);
      }
    }
    puVar15 = puVar13;
    for (puVar16 = (uint *)*piVar19; puVar16 != puStack_28; puVar16 = puVar16 + 4) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar16[1];
        uVar17 = puVar16[2];
        *puVar15 = *puVar16;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar16[3];
      }
      puVar15 = puVar15 + 4;
    }
    iVar5 = aiStack_94[0];
    if (aiStack_94[0] == 1) {
      if (puVar15 != (uint *)0x0) {
        uVar12 = puVar14[1];
        uVar17 = puVar14[2];
        *puVar15 = *puVar14;
        puVar15[1] = uVar12;
        puVar15[2] = uVar17;
        puVar15[3] = puVar14[3];
      }
      puVar15 = puVar15 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar15 != (uint *)0x0) {
          uVar12 = puVar14[1];
          uVar17 = puVar14[2];
          *puVar15 = *puVar14;
          puVar15[1] = uVar12;
          puVar15[2] = uVar17;
          puVar15[3] = puVar14[3];
        }
        puVar15 = puVar15 + 4;
      }
    }
    for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar13;
    if (*piVar19 != 0) {
      free();
    }
    *piVar19 = (int)puStack_24;
    piVar19[1] = (int)puVar15;
    piVar19[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar13 != (uint *)0x0) {
      uVar12 = puStack_48[1];
      uVar17 = puStack_48[2];
      *puVar13 = *puStack_48;
      puVar13[1] = uVar12;
      puVar13[2] = uVar17;
      puVar13[3] = puStack_48[3];
    }
    piVar19[1] = piVar19[1] + 0x10;
  }
  func_08008C38(param_1 + 0x810,0xcd,_DAT_080c70a4);
  func_080C2D54(param_1);
  iStack_60 = 0;
  iStack_5c = 0;
  puVar14 = puStack_48 + 3;
  do {
    *puVar14 = 0;
    puVar14 = puVar14 + -1;
  } while ((int)puStack_48 <= (int)puVar14);
  iStack_58 = 0;
  iStack_54 = 0;
  do {
    if (*(int *)(_DAT_080c76d0 + param_1) != 6) {
      return in_lr;
    }
    func_080087C8(param_1);
    func_080088B8(param_1);
    piVar19 = (int *)(_DAT_080c70d4 + param_1);
    if (*piVar19 == 0) {
      iStack_60 = iStack_60 + 1;
      if (iStack_60 == 0x78) {
        iStack_60 = 0;
        iVar3 = 1;
LAB_080c76aa:
        *piVar19 = iVar3;
      }
    }
    else {
      uStack_50 = func_0x080088d4(param_1);
      puVar11 = (undefined4 *)(_DAT_080c713c + param_1);
      iVar3 = func_0x08050d34(*puVar11);
      uVar10 = *puVar11;
      uVar4 = func_0x080088dc(param_1);
      uVar6 = func_0x08008920(param_1);
      uVar7 = func_0x08008918(param_1);
      uVar8 = func_0x08008940(param_1);
      uVar9 = func_0800894C(param_1);
      uVar12 = func_08050D3C(uVar10,uVar4,uVar6,uVar7,uVar8,uVar9,_DAT_080c7140 + param_1);
      if (uVar12 < 7) {
        switch(*(uint *)(uVar12 * 4 + _DAT_080c7144) & 0xfffffffe) {
        case 0x80c7164:
          func_08050D5C(*(undefined4 *)(_DAT_080c7170 + param_1));
          break;
        case 0x80c7174:
          if (iVar3 == 1) {
            puVar11 = (undefined4 *)(_DAT_080c71a8 + param_1);
            func_08050D8C(*puVar11,_DAT_080c71ac);
            func_0x08050dd8(*puVar11);
            *(undefined1 *)(_DAT_080c71b0 + param_1) = 1;
          }
        }
      }
      iVar3 = *(int *)(_DAT_080c71b4 + param_1);
      if (iVar3 == 2) {
        iStack_5c = iStack_5c + 1;
        if (iStack_5c == 0x3c) {
          *(undefined1 *)(_DAT_080c765c + param_1) = 1;
          if (*(char *)(_DAT_080c7660 + param_1) == '\0') {
            func_08008B6C(_DAT_080c7664 + param_1,0xb7);
          }
          else {
            func_08008B6C(_DAT_080c7684 + param_1,0xb6);
          }
        }
        if (iStack_5c == 0xf0) {
          iStack_5c = 0;
          piVar19 = (int *)(_DAT_080c7688 + param_1);
          iVar3 = 3;
          goto LAB_080c76aa;
        }
      }
      else if (iVar3 < 3) {
        if ((iVar3 == 1) && (*(char *)(_DAT_080c7200 + param_1) != '\0')) {
          iStack_54 = iStack_54 + 1;
          iStack_2c = iStack_58 * 4;
          if (iStack_54 == 0x14) {
            iStack_54 = 0;
            puStack_48[iStack_58] = puStack_48[iStack_58] + 1;
            if (iStack_58 == 2) {
              func_08008B6C(param_1 + 0x820,0xc0);
            }
            else {
              func_08008B6C(param_1 + 0x820,0xbf);
            }
            func_0804EC84(*(undefined4 *)((int)puStack_48 + iStack_2c),&uStack_12c,0);
            iVar3 = iStack_58 * 0x40;
            iVar5 = iStack_58 * 0x104;
            aiStack_94[1] = 0x20004;
            func_0804E7A0(0x20004,iVar5 + param_1 + 0x110);
            if (iStack_58 == 2) {
              iVar5 = strlen(&uStack_12c);
              uStack_88 = CONCAT22((undefined2)iStack_58,4);
              func_0804E958(uStack_88,param_1 + 0x318,iVar5 * -8 + 0x20,0,&uStack_12c,0,7);
            }
            else {
              iVar21 = strlen(&uStack_12c);
              aiStack_94[2] = 0x20004;
              func_0804E958(0x20004,iVar5 + param_1 + 0x110,iVar21 * -8 + 0x20,0,&uStack_12c,0,5);
            }
            piVar19 = (int *)func_0x08008910(param_1);
            iVar5 = iStack_58;
            iVar3 = iVar3 + iStack_58;
            iVar21 = func_08007D4C(_DAT_080c730c + param_1,
                                   *(undefined4 *)(_DAT_080c730c + param_1 + 4));
            func_08008F0C(&uStack_114,iVar3 * 4 + param_1 + 0x110,
                          (iVar5 * 8 + iVar21) * 0x20 + _DAT_080c7310,0x100);
            puVar14 = (uint *)piVar19[1];
            puStack_44 = &uStack_114;
            if (puVar14 == (uint *)piVar19[3]) {
              puStack_28 = puVar14;
              iStack_80 = 1;
              iStack_84 = (int)puVar14 - *piVar19 >> 4;
              piVar20 = &iStack_84;
              if (iStack_84 == 0) {
                piVar20 = &iStack_80;
              }
              if (iStack_84 + *piVar20 == 0) {
                puVar14 = (uint *)0x0;
                iVar3 = 0;
              }
              else {
                iVar3 = (iStack_84 + *piVar20) * 0x10;
                puVar14 = (uint *)malloc(iVar3);
                if (puVar14 == (uint *)0x0) {
                  puVar14 = (uint *)func_080D3BC0(iVar3);
                }
              }
              puStack_24 = puVar14;
              for (puVar13 = (uint *)*piVar19; puVar13 != puStack_28; puVar13 = puVar13 + 4) {
                if (puVar14 != (uint *)0x0) {
                  uVar12 = puVar13[1];
                  uVar17 = puVar13[2];
                  *puVar14 = *puVar13;
                  puVar14[1] = uVar12;
                  puVar14[2] = uVar17;
                  puVar14[3] = puVar13[3];
                }
                puVar14 = puVar14 + 4;
              }
              iVar5 = iStack_80;
              if (iStack_80 == 1) {
                if (puVar14 != (uint *)0x0) {
                  *puVar14 = uStack_114;
                  puVar14[1] = uStack_110;
                  puVar14[2] = uStack_10c;
                  puVar14[3] = uStack_108;
                }
                puVar14 = puVar14 + 4;
              }
              else {
                for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                  if (puVar14 != (uint *)0x0) {
                    *puVar14 = uStack_114;
                    puVar14[1] = uStack_110;
                    puVar14[2] = uStack_10c;
                    puVar14[3] = uStack_108;
                  }
                  puVar14 = puVar14 + 4;
                }
              }
              for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
              }
              if (*piVar19 != 0) {
                free();
              }
              *piVar19 = (int)puStack_24;
              piVar19[1] = (int)puVar14;
              piVar19[3] = (int)puStack_24 + iVar3;
            }
            else {
              if (puVar14 != (uint *)0x0) {
                *puVar14 = uStack_114;
                puVar14[1] = uStack_110;
                puVar14[2] = uStack_10c;
                puVar14[3] = uStack_108;
              }
              piVar19[1] = piVar19[1] + 0x10;
            }
          }
          if (*(int *)((int)puStack_48 + iStack_2c) == *(int *)((int)auStack_14c + iStack_2c)) {
            iStack_58 = iStack_58 + 1;
          }
          if ((uStack_50 & 9) != 0) {
            iStack_68 = 0;
            puStack_44 = &uStack_114;
            puStack_30 = &uStack_7c;
            puStack_4c = &uStack_78;
            do {
              uVar12 = auStack_14c[iStack_68];
              puStack_48[iStack_68] = uVar12;
              func_0804EC84(uVar12,&uStack_12c,0);
              iVar3 = iStack_68 * 0x40;
              iVar5 = iStack_68 * 0x104;
              uStack_7c = CONCAT22(uStack_7c._2_2_,4);
              *(undefined2 *)((int)puStack_30 + 2) = 2;
              func_0804E7A0(uStack_7c,iVar5 + param_1 + 0x110,0);
              if (iStack_68 == 2) {
                iVar5 = strlen(&uStack_12c);
                uStack_74 = CONCAT22((undefined2)iStack_68,4);
                func_0804E958(uStack_74,param_1 + 0x318,iVar5 * -8 + 0x20,0,&uStack_12c,0,7);
              }
              else {
                iVar21 = strlen(&uStack_12c);
                puVar11 = puStack_4c;
                *(undefined2 *)puStack_4c = 4;
                *(undefined2 *)((int)puVar11 + 2) = 2;
                func_0804E958(*puVar11,iVar5 + param_1 + 0x110,iVar21 * -8 + 0x20,0,&uStack_12c,0,5)
                ;
              }
              piVar19 = (int *)func_0x08008910(param_1);
              iVar3 = iVar3 + iStack_68;
              iVar5 = func_08007D4C(_DAT_080c7528 + param_1,
                                    *(undefined4 *)(_DAT_080c7528 + param_1 + 4));
              func_08008F0C(&uStack_114,iVar3 * 4 + param_1 + 0x110,
                            (iStack_68 * 8 + iVar5) * 0x20 + _DAT_080c752c,0x100);
              puVar14 = puStack_44;
              puVar13 = (uint *)piVar19[1];
              if (puVar13 == (uint *)piVar19[3]) {
                puStack_28 = puVar13;
                iStack_6c = 1;
                iStack_70 = (int)puVar13 - *piVar19 >> 4;
                piVar20 = &iStack_70;
                if (iStack_70 == 0) {
                  piVar20 = &iStack_6c;
                }
                if (iStack_70 + *piVar20 == 0) {
                  puVar13 = (uint *)0x0;
                  iVar3 = 0;
                }
                else {
                  iVar3 = (iStack_70 + *piVar20) * 0x10;
                  puVar13 = (uint *)malloc(iVar3);
                  if (puVar13 == (uint *)0x0) {
                    puVar13 = (uint *)func_080D3BC0(iVar3);
                  }
                }
                puStack_24 = puVar13;
                puVar16 = (uint *)*piVar19;
                iStack_3c = iStack_68 + 1;
                for (; puVar16 != puStack_28; puVar16 = puVar16 + 4) {
                  if (puVar13 != (uint *)0x0) {
                    uVar12 = puVar16[1];
                    uVar17 = puVar16[2];
                    *puVar13 = *puVar16;
                    puVar13[1] = uVar12;
                    puVar13[2] = uVar17;
                    puVar13[3] = puVar16[3];
                  }
                  puVar13 = puVar13 + 4;
                }
                iVar5 = iStack_6c;
                if (iStack_6c == 1) {
                  if (puVar13 != (uint *)0x0) {
                    uVar12 = puVar14[1];
                    uVar17 = puVar14[2];
                    *puVar13 = *puVar14;
                    puVar13[1] = uVar12;
                    puVar13[2] = uVar17;
                    puVar13[3] = puVar14[3];
                  }
                  puVar13 = puVar13 + 4;
                }
                else {
                  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                    if (puVar13 != (uint *)0x0) {
                      uVar12 = puVar14[1];
                      uVar17 = puVar14[2];
                      *puVar13 = *puVar14;
                      puVar13[1] = uVar12;
                      puVar13[2] = uVar17;
                      puVar13[3] = puVar14[3];
                    }
                    puVar13 = puVar13 + 4;
                  }
                }
                for (iVar5 = *piVar19; iVar5 != piVar19[1]; iVar5 = iVar5 + 0x10) {
                }
                if (*piVar19 != 0) {
                  free();
                }
                *piVar19 = (int)puStack_24;
                piVar19[1] = (int)puVar13;
                piVar19[3] = (int)puStack_24 + iVar3;
              }
              else {
                if (puVar13 != (uint *)0x0) {
                  uVar12 = puStack_44[1];
                  uVar17 = puStack_44[2];
                  *puVar13 = *puStack_44;
                  puVar13[1] = uVar12;
                  puVar13[2] = uVar17;
                  puVar13[3] = puStack_44[3];
                }
                piVar19[1] = piVar19[1] + 0x10;
                iStack_3c = iStack_68 + 1;
              }
              iStack_68 = iStack_3c;
            } while (iStack_3c < 4);
          }
          if ((((uStack_124 == auStack_14c[0]) && (puStack_48[1] == auStack_14c[1])) &&
              (puStack_48[2] == auStack_14c[2])) && (puStack_48[3] == auStack_14c[3])) {
            piVar19 = (int *)(_DAT_080c7630 + param_1);
            iVar3 = 2;
            goto LAB_080c76aa;
          }
        }
      }
      else if ((iVar3 == 3) &&
              ((iStack_5c = iStack_5c + 1, (uStack_50 & 9) != 0 || (iStack_5c == 600)))) {
        piVar19 = (int *)(_DAT_080c76d0 + param_1);
        iVar3 = 7;
        goto LAB_080c76aa;
      }
    }
    func_080C2D54(param_1);
  } while( true );
}

// =============================================================================
// Function: func_080C76D4 @ 0x080C76D4
// =============================================================================
undefined4 func_080C76D4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 in_lr;
  
  uVar7 = func_0x080088c4();
  iVar4 = _DAT_080c7b2c;
  iVar3 = _DAT_080c7938;
  iVar2 = _DAT_080c7894;
  iVar13 = _DAT_080c7808;
  iVar10 = _DAT_080c7768;
  uVar8 = *(int *)(param_1 + _DAT_080c76f8) - 4;
  if (5 < uVar8) goto LAB_080c7b12;
  switch(*(uint *)(uVar8 * 4 + _DAT_080c76fc) & 0xfffffffe) {
  case 0x80c7718:
    bVar1 = *(byte *)(param_1 + _DAT_080c7768);
    if (bVar1 < 0x59) {
      if (bVar1 != 0x58) goto LAB_080c7b12;
      *(undefined4 *)(param_1 + _DAT_080c77bc) = 0;
      puVar12 = (undefined1 *)(param_1 + _DAT_080c77c0);
      uVar6 = 1;
    }
    else {
      *(byte *)(param_1 + _DAT_080c7768) = bVar1 - 2;
      pbVar9 = (byte *)(param_1 + _DAT_080c776c);
      bVar1 = *pbVar9;
      *pbVar9 = (byte)(bVar1 - 2);
      iVar13 = (int)((bVar1 - 2) * 0x1000000) >> 0x18;
      if (iVar13 == -0x10) {
        *pbVar9 = 0;
        *(char *)(param_1 + _DAT_080c7770) = *(char *)(param_1 + _DAT_080c7770) + -1;
        if ((uVar7 & 0x20) != 0) goto LAB_080c7b12;
        *(undefined4 *)(param_1 + iVar10 + 8) = 0;
        puVar12 = (undefined1 *)(param_1 + _DAT_080c7774);
        uVar6 = 1;
      }
      else {
        if ((iVar13 != 0) || ((uVar7 & 0x20) != 0)) goto LAB_080c7b12;
        *(undefined4 *)(param_1 + _DAT_080c779c) = 0;
        puVar12 = (undefined1 *)(param_1 + _DAT_080c77a0);
        uVar6 = 1;
      }
    }
    break;
  case 0x80c77c4:
    bVar1 = *(byte *)(param_1 + _DAT_080c7808);
    if (bVar1 < 0x98) {
      *(byte *)(param_1 + _DAT_080c7808) = bVar1 + 2;
      pcVar11 = (char *)(param_1 + _DAT_080c780c);
      cVar5 = *pcVar11 + '\x02';
      *pcVar11 = cVar5;
      if (cVar5 == '\x10') {
        *pcVar11 = '\0';
        pcVar11 = (char *)(param_1 + iVar13 + 2);
        *pcVar11 = *pcVar11 + '\x01';
        iVar10 = _DAT_080c7810;
      }
      else {
        iVar10 = _DAT_080c783c;
        if (cVar5 != '\0') goto LAB_080c7b12;
      }
      if ((uVar7 & 0x10) != 0) goto LAB_080c7b12;
    }
    else {
      iVar10 = _DAT_080c783c;
      if (bVar1 != 0x98) goto LAB_080c7b12;
    }
    *(undefined4 *)(param_1 + iVar10) = 1;
    *(undefined1 *)(param_1 + _DAT_080c7840) = 1;
    goto LAB_080c7b12;
  case 0x80c7844:
    bVar1 = *(byte *)(param_1 + _DAT_080c7894);
    if (bVar1 < 0x32) {
      if (bVar1 != 0x31) goto LAB_080c7b12;
      *(undefined4 *)(param_1 + _DAT_080c78e4) = 2;
      puVar12 = (undefined1 *)(param_1 + _DAT_080c78e8);
      uVar6 = 1;
    }
    else {
      *(byte *)(param_1 + _DAT_080c7894) = bVar1 - 2;
      pbVar9 = (byte *)(param_1 + _DAT_080c7898);
      bVar1 = *pbVar9;
      *pbVar9 = (byte)(bVar1 - 2);
      iVar10 = (int)((bVar1 - 2) * 0x1000000) >> 0x18;
      if (iVar10 == -0x10) {
        *pbVar9 = 0;
        *(char *)(param_1 + _DAT_080c789c) = *(char *)(param_1 + _DAT_080c789c) + -1;
        if ((uVar7 & 0x40) != 0) goto LAB_080c7b12;
        *(undefined4 *)(param_1 + iVar2 + 7) = 2;
        puVar12 = (undefined1 *)(param_1 + _DAT_080c78a0);
        uVar6 = 1;
      }
      else {
        if ((iVar10 != 0) || ((uVar7 & 0x40) != 0)) goto LAB_080c7b12;
        *(undefined4 *)(param_1 + _DAT_080c78c4) = 2;
        puVar12 = (undefined1 *)(param_1 + _DAT_080c78c8);
        uVar6 = 1;
      }
    }
    break;
  case 0x80c78ec:
    bVar1 = *(byte *)(param_1 + _DAT_080c7938);
    if (bVar1 < 0x71) {
      *(byte *)(param_1 + _DAT_080c7938) = bVar1 + 2;
      pcVar11 = (char *)(param_1 + _DAT_080c793c);
      cVar5 = *pcVar11 + '\x02';
      *pcVar11 = cVar5;
      if (cVar5 == '\x10') {
        *pcVar11 = '\0';
        *(char *)(param_1 + _DAT_080c7940) = *(char *)(param_1 + _DAT_080c7940) + '\x01';
        if ((uVar7 & 0x80) != 0) goto LAB_080c7b12;
        *(undefined4 *)(param_1 + iVar3 + 7) = 3;
        puVar12 = (undefined1 *)(param_1 + _DAT_080c7944);
        uVar6 = 1;
      }
      else {
        if ((cVar5 != '\0') || ((uVar7 & 0x80) != 0)) goto LAB_080c7b12;
        *(undefined4 *)(param_1 + _DAT_080c7968) = 3;
        puVar12 = (undefined1 *)(param_1 + _DAT_080c796c);
        uVar6 = 1;
      }
    }
    else {
      if (bVar1 != 0x71) goto LAB_080c7b12;
      *(undefined4 *)(param_1 + _DAT_080c7988) = 3;
      puVar12 = (undefined1 *)(param_1 + _DAT_080c798c);
      uVar6 = 1;
    }
    break;
  case 0x80c7990:
    iVar10 = (uint)*(byte *)(param_1 + _DAT_080c79c4) * 5 + (uint)*(byte *)(param_1 + _DAT_080c79c0)
    ;
    cVar5 = *(char *)(param_1 + _DAT_080c79c8);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + _DAT_080c79c0 + 0xf) = 1;
      *(char *)(param_1 + _DAT_080c79cc) = *(char *)(param_1 + _DAT_080c79cc) + -10;
    }
    else if (cVar5 == '\x14') {
      *(undefined1 *)(param_1 + iVar10 * 4 + _DAT_080c79e4) = 1;
    }
    else if ((cVar5 == '2') && (*(char *)(param_1 + _DAT_080c7a94) == '\0')) {
      *(undefined1 *)(param_1 + iVar10 * 4 + _DAT_080c7a98) = 1;
      func_08008B6C(param_1 + 0x820,0x6c);
    }
    iVar10 = _DAT_080c7a9c;
    pcVar11 = (char *)(param_1 + _DAT_080c7a9c);
    cVar5 = *pcVar11;
    *pcVar11 = cVar5 + '\x01';
    if ((char)(cVar5 + '\x01') == '<') {
      *(char *)(param_1 + _DAT_080c7aa0) = *(char *)(param_1 + _DAT_080c7aa0) + '\n';
      *(undefined1 *)(param_1 + _DAT_080c7aa4) = 0;
      *pcVar11 = '\0';
      iVar13 = _DAT_080c7aa8;
      *(undefined4 *)(param_1 + _DAT_080c7aa8) = *(undefined4 *)(param_1 + iVar10 + -0xb9);
      *(undefined1 *)(param_1 + _DAT_080c7aac) = 1;
      if ((uVar7 & 1) != 0) {
        *(undefined1 *)(param_1 + iVar13 + 0xac) = 0;
      }
      if (*(char *)(param_1 + _DAT_080c7ab0) ==
          *(char *)(*(int *)(param_1 + _DAT_080c7ab0 + -0xcf) * 4 + _DAT_080c7ab4 + 1)) {
        *(char *)(param_1 + _DAT_080c7ab0) = '\0';
        *(undefined4 *)(param_1 + _DAT_080c7ab8) = 5;
        func_08008C28(param_1 + 0x810,0x100);
        func_08008B6C(param_1 + _DAT_080c7abc,0xbb);
      }
    }
    goto LAB_080c7b12;
  case 0x80c7ac0:
    pcVar11 = (char *)(param_1 + _DAT_080c7b2c);
    cVar5 = *pcVar11;
    *pcVar11 = cVar5 + '\x01';
    if ((char)(cVar5 + '\x01') != '<') goto LAB_080c7b12;
    *pcVar11 = '\0';
    *(undefined4 *)(param_1 + _DAT_080c7b30) = *(undefined4 *)(param_1 + 0x8c0);
    *(undefined1 *)(param_1 + iVar4 + -0xb6) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x728) + 0x10) = 0x100;
    func_0805E860(*(int *)(param_1 + 0x728),6);
    if ((uVar7 & 1) == 0) goto LAB_080c7b12;
    puVar12 = (undefined1 *)(param_1 + _DAT_080c7b34);
    uVar6 = 0;
  }
  *puVar12 = uVar6;
LAB_080c7b12:
  if ((*(char *)(param_1 + _DAT_080c7b34) == '\0') && ((uVar7 & 1) == 0)) {
    *(char *)(param_1 + _DAT_080c7b34) = '\x01';
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C7B7C @ 0x080C7B7C
// =============================================================================
undefined8 func_080C7B7C(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = (param_4 & _DAT_080c7be8 | param_3 & 0xff) & _DAT_080c7bec;
  uVar2 = uVar1;
  while (4 < (uVar2 & 0xff)) {
    uVar2 = (uVar1 & _DAT_080c7be8 | uVar1 - 5 & 0xff) & _DAT_080c7bec;
    uVar1 = uVar2 | (((uVar1 & _DAT_080c7be8) >> 8) + 1 & 0xff) << 8;
  }
  *param_1 = (uVar1 & _DAT_080c7be8 | uVar1 * 0x10000000 + 0x50000000 >> 0x18) & _DAT_080c7bec |
             ((uVar1 & _DAT_080c7be8) >> 8) * 0x10000000 + 0x28000000 >> 0x10;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080C7BF0 @ 0x080C7BF0
// =============================================================================
undefined4 func_080C7BF0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar2 = func_0x080088c4();
  if ((((uVar2 & 1) != 0) && (*(int *)(param_1 + _DAT_080c7c84) < 4)) &&
     (*(char *)(param_1 + _DAT_080c7c88) != '\0')) {
    *(int *)(param_1 + _DAT_080c7c88 + -0xa8) = *(int *)(param_1 + _DAT_080c7c84);
    *(char *)(param_1 + _DAT_080c7c8c) = *(char *)(param_1 + _DAT_080c7c8c) + '\x01';
    iVar9 = 0;
    pcVar5 = (char *)(param_1 + _DAT_080c7c94);
    puVar8 = (undefined4 *)(param_1 + _DAT_080c7c84);
    puVar3 = (undefined1 *)(_DAT_080c7c94 + -0xb4 + param_1);
    puVar7 = (undefined1 *)(param_1 + _DAT_080c7c84 + 0xd);
    pcVar4 = (char *)(param_1 + _DAT_080c7c98);
    pcVar6 = (char *)(param_1 + _DAT_080c7c98 + 0xa1);
    do {
      if (*pcVar4 != '\0') {
        *pcVar5 = *pcVar5 + '\x01';
        *puVar8 = 9;
        *puVar3 = 1;
        *pcVar6 = '\x01';
LAB_080c7cbe:
        func_08008B6C(param_1 + 0x820,199);
        break;
      }
      if ((uint)(byte)pcVar4[2] ==
          (uint)*(byte *)(param_1 + _DAT_080c7c90) +
          (uint)*(byte *)(param_1 + _DAT_080c7c90 + 1) * 5) {
        if (pcVar4[1] != '\0') {
          *puVar8 = 9;
          *puVar3 = 1;
          *pcVar5 = *pcVar5 + '\x01';
          *pcVar6 = '\x01';
          goto LAB_080c7cbe;
        }
        *puVar7 = 1;
        if ((iVar9 == *(byte *)(param_1 + _DAT_080c7ce8) - 1) && (*pcVar6 == '\0')) {
          *(char *)(param_1 + 0x970) = *(char *)(param_1 + 0x970) + '\x01';
        }
        else {
          *pcVar6 = '\x01';
        }
        *puVar8 = 8;
        *puVar3 = 1;
        func_08008B6C(param_1 + 0x820,0xbc);
        func_08008B6C(param_1 + _DAT_080c7d18,0xbe);
        *(char *)(param_1 + _DAT_080c7d1c) = *(char *)(param_1 + _DAT_080c7d1c) + '\x01';
        break;
      }
      puVar7 = puVar7 + 4;
      pcVar4 = pcVar4 + 4;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0xf);
    iVar1 = _DAT_080c7d6c;
    if (iVar9 == 0xf) {
      *(char *)(param_1 + _DAT_080c7d6c) = *(char *)(param_1 + _DAT_080c7d6c) + '\x01';
      *(undefined4 *)(param_1 + _DAT_080c7d70) = 9;
      *(undefined1 *)(param_1 + _DAT_080c7d74) = 1;
      *(undefined1 *)(param_1 + iVar1 + -0xf) = 1;
      func_08008B6C(param_1 + 0x820,199);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C7D78 @ 0x080C7D78
// =============================================================================
undefined4 func_080C7D78(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x080088cc();
  if ((uVar1 & 8) != 0) {
    func_08008B6C(param_1 + _DAT_080c7da4,0xb8);
    piVar2 = (int *)(param_1 + _DAT_080c7da8);
    if (*piVar2 == 0) {
      *piVar2 = 1;
      *(undefined2 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0x5a0) + 0x10) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0x728) + 0x10) = 0;
    }
    else if (*piVar2 == 1) {
      *piVar2 = 0;
      *(undefined2 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0x100;
      *(undefined2 *)(*(int *)(param_1 + 0x5a0) + 0x10) = 0x100;
      *(undefined2 *)(*(int *)(param_1 + 0x728) + 0x10) = 0x100;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C7DF8 @ 0x080C7DF8
// =============================================================================
undefined4 func_080C7DF8(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar1 = func_0x080088c4();
  iVar2 = *(int *)(param_1 + _DAT_080c7e28);
  if (7 < iVar2) {
    return in_lr;
  }
  if (((((uVar1 & 0x20) != 0) && (iVar2 != 6)) && (iVar2 != 7)) && (iVar2 != 4)) {
    *(int *)(param_1 + _DAT_080c7e28) = 4;
    goto LAB_080c7e92;
  }
  if ((uVar1 & 0x10) == 0) {
LAB_080c7e50:
    if ((uVar1 & 0x40) != 0) {
      piVar3 = (int *)(param_1 + _DAT_080c7e70);
      iVar2 = *piVar3;
      if (((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 6)) {
        iVar2 = 6;
        goto LAB_080c7e90;
      }
    }
    if ((uVar1 & 0x80) == 0) {
      return in_lr;
    }
    piVar3 = (int *)(param_1 + _DAT_080c7ea0);
    iVar2 = *piVar3;
    if (iVar2 == 4) {
      return in_lr;
    }
    if (iVar2 == 5) {
      return in_lr;
    }
    if (iVar2 == 7) {
      return in_lr;
    }
    iVar2 = 7;
  }
  else {
    piVar3 = (int *)(param_1 + _DAT_080c7e4c);
    iVar2 = *piVar3;
    if (((iVar2 == 6) || (iVar2 == 7)) || (iVar2 == 5)) goto LAB_080c7e50;
    iVar2 = 5;
  }
LAB_080c7e90:
  *piVar3 = iVar2;
LAB_080c7e92:
  *(undefined1 *)(param_1 + _DAT_080c7ea4) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_080C7EA8 @ 0x080C7EA8
// =============================================================================
undefined8 func_080C7EA8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_080c7ec8;
  uVar1 = func_080005D4(_DAT_080c7ecc);
  uVar1 = func_080C0DCC(uVar1,param_2);
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080C7ED0 @ 0x080C7ED0
// =============================================================================
undefined4 func_080C7ED0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_080c7efc;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080C7F00 @ 0x080C7F00
// =============================================================================
void func_080C7F00(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x080c12b8(*(undefined4 *)(param_1 + 4));
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080C7F1C @ 0x080C7F1C
// =============================================================================
undefined8 func_080C7F1C(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  func_0x080c12c4(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080C7F58 @ 0x080C7F58
// =============================================================================
undefined8 func_080C7F58(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 in_lr;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined1 *puStack_58;
  int iStack_54;
  int iStack_50;
  undefined2 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int iStack_40;
  undefined2 *puStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  int iStack_30;
  undefined2 *puStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  
  func_08008444();
  *(undefined4 *)(param_1 + 4) = _DAT_080c8310;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  func_08008B54(param_1 + 0x18,1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  func_0x0800835c(auStack_6c);
  func_0x0800770c(auStack_68);
  func_08050CC0(param_1 + 0x348,0,0x1c,0,0,auStack_6c,auStack_68);
  func_08007714(auStack_68,2);
  func_0x08008364(auStack_6c,2);
  func_08007874(param_1 + 0x354);
  uVar2 = func_08007B54(param_1 + 0x354,2);
  *(undefined4 *)(param_1 + 0x358) = uVar2;
  func_0x08007128(param_1 + 0x35c);
  uVar2 = func_0800736C(param_1 + 0x35c);
  *(undefined4 *)(param_1 + 0x360) = uVar2;
  func_08007874(param_1 + 0x364);
  uVar2 = func_08007B54(param_1 + 0x364,2);
  *(undefined4 *)(param_1 + 0x368) = uVar2;
  func_0x08007128(param_1 + 0x36c);
  uVar2 = func_0800736C(param_1 + 0x36c);
  *(undefined4 *)(param_1 + 0x370) = uVar2;
  func_08007874(param_1 + 0x374);
  uVar2 = func_08007B54(param_1 + 0x374,1);
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  func_08007874(param_1 + 0x37c);
  uVar2 = func_08007B54(param_1 + 0x37c,1);
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  func_0x08007128(param_1 + 900);
  uVar2 = func_0800736C(param_1 + 900);
  *(undefined4 *)(param_1 + 0x388) = uVar2;
  func_08007874(param_1 + 0x38c);
  uVar2 = func_08007B54(param_1 + 0x38c,1);
  *(undefined4 *)(param_1 + 0x390) = uVar2;
  func_08007874(param_1 + 0x394);
  uVar2 = func_08007B54(param_1 + 0x394,1);
  *(undefined4 *)(param_1 + 0x398) = uVar2;
  func_0x08007128(param_1 + 0x39c);
  uVar2 = func_0800736C(param_1 + 0x39c);
  *(undefined4 *)(param_1 + 0x3a0) = uVar2;
  iVar6 = param_1 + 0x3a4;
  iVar7 = 8;
  piStack_28 = &iStack_64;
  do {
    func_08007874(iVar6);
    *(undefined4 *)(iVar6 + 4) = 0;
    iVar6 = iVar6 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  iVar6 = param_1 + 0x3ec;
  iVar7 = 8;
  iStack_30 = param_1 + 0x568;
  puVar3 = (undefined2 *)(_DAT_080c8314 + param_1);
  puStack_58 = (undefined1 *)(param_1 + 0x598);
  iStack_50 = param_1 + 0x5a0;
  puVar5 = (undefined2 *)(_DAT_080c8318 + param_1);
  puStack_44 = (undefined1 *)(param_1 + 0x5d0);
  iStack_40 = param_1 + 0x5d8;
  puStack_3c = (undefined2 *)(param_1 + _DAT_080c831c);
  puStack_38 = (undefined1 *)(param_1 + 0x608);
  iStack_34 = param_1 + 0x610;
  puStack_2c = (undefined2 *)(param_1 + _DAT_080c8320);
  puStack_24 = (undefined1 *)(param_1 + 0x640);
  puStack_5c = (undefined4 *)(param_1 + 0x648);
  iStack_54 = param_1 + _DAT_080c8324;
  puStack_4c = (undefined2 *)(param_1 + 0x660);
  puStack_48 = (undefined1 *)(param_1 + _DAT_080c8328);
  do {
    func_0x08007128(iVar6);
    *(undefined4 *)(iVar6 + 4) = 0;
    iVar1 = _DAT_080c832c;
    iVar6 = iVar6 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  *(undefined2 *)(param_1 + _DAT_080c832c) = 0;
  iStack_64 = param_1;
  func_080E542C(param_1 + iVar1 + 4,piStack_28);
  iVar7 = param_1 + _DAT_080c8330;
  func_0805E6CC(iVar7,_DAT_080c8334);
  iStack_60 = param_1 + _DAT_080c8338;
  func_0805E6CC(iStack_60,_DAT_080c833c);
  iVar6 = _DAT_080c8340 + param_1;
  func_0805E6CC(iVar6,_DAT_080c8344);
  puVar4 = (undefined2 *)(param_1 + _DAT_080c8348);
  *puVar4 = 0;
  puVar4[1] = 0;
  func_0805E824(iStack_30,iVar7,0,0x100);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined1 *)(puVar3 + 8) = 0;
  *(undefined1 *)((int)puVar3 + 0x11) = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  *puStack_58 = 0;
  puVar3 = (undefined2 *)(param_1 + _DAT_080c834c);
  *puVar3 = 0;
  puVar3[1] = 0;
  func_0805E824(iStack_50,iVar7,1,0x100);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  *(undefined1 *)(puVar5 + 8) = 0;
  *(undefined1 *)((int)puVar5 + 0x11) = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *puStack_44 = 0;
  puVar3 = (undefined2 *)(param_1 + _DAT_080c8350);
  *puVar3 = 0;
  puVar3[1] = 0;
  func_0805E824(iStack_40,iVar6,0,0x100);
  *puStack_3c = 0;
  puStack_3c[1] = 0;
  puStack_3c[2] = 0;
  puStack_3c[3] = 0;
  puStack_3c[4] = 0;
  *(undefined4 *)(puStack_3c + 6) = 0;
  *(undefined1 *)(puStack_3c + 8) = 0;
  *(undefined1 *)((int)puStack_3c + 0x11) = 0;
  *(undefined4 *)(puStack_3c + 10) = 0;
  *(undefined1 *)(puStack_3c + 0xc) = 0;
  *puStack_38 = 0;
  puVar3 = (undefined2 *)(param_1 + _DAT_080c8354);
  *puVar3 = 0;
  puVar3[1] = 0;
  func_0805E824(iStack_34,iVar6,1,0x100);
  *puStack_2c = 0;
  puStack_2c[1] = 0;
  puStack_2c[2] = 0;
  puStack_2c[3] = 0;
  puStack_2c[4] = 0;
  *(undefined4 *)(puStack_2c + 6) = 0;
  *(undefined1 *)(puStack_2c + 8) = 0;
  *(undefined1 *)((int)puStack_2c + 0x11) = 0;
  *(undefined4 *)(puStack_2c + 10) = 0;
  *(undefined1 *)(puStack_2c + 0xc) = 0;
  *puStack_24 = 0;
  puVar3 = (undefined2 *)(param_1 + _DAT_080c8358);
  *puVar3 = 0xc;
  *puStack_5c = 0x28;
  func_0805E824(iStack_54,iStack_60,0,0x100);
  *puStack_4c = 0;
  puStack_4c[1] = 0;
  puStack_4c[2] = 0;
  puStack_4c[3] = 0;
  puStack_4c[4] = 0;
  *(undefined4 *)(puStack_4c + 6) = 0;
  *(undefined1 *)(puStack_4c + 8) = 0;
  *(undefined1 *)((int)puStack_4c + 0x11) = 0;
  *(undefined4 *)(puStack_4c + 10) = 0;
  *(undefined1 *)(puStack_4c + 0xc) = 0;
  *puStack_48 = 1;
  *(undefined4 *)(puVar3 + 0x1e) = 0;
  func_080CA770(param_1 + _DAT_080c835c,param_1);
  *(undefined1 *)(param_1 + 0x6a0) = 0;
  *(undefined1 *)(param_1 + 0x6a1) = 0;
  *(undefined1 *)(param_1 + 0x6a2) = 0;
  *(undefined1 *)(param_1 + 0x6a3) = 0;
  iVar6 = 0;
  puVar8 = (undefined4 *)(param_1 + 0x3a8);
  do {
    iVar7 = iVar6 * 8 + param_1 + 0x3a4;
    func_08007C28(iVar7,*puVar8);
    uVar2 = func_08007B54(iVar7,2);
    *puVar8 = uVar2;
    iVar7 = iVar6 * 8 + param_1 + 0x3ec;
    func_0x080073e0(iVar7,puVar8[0x12]);
    uVar2 = func_0800736C(iVar7);
    puVar8[0x12] = uVar2;
    puVar8 = puVar8 + 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 9);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080C8360 @ 0x080C8360
// =============================================================================
undefined4 func_080C8360(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 4) = _DAT_080c853c;
  puVar4 = (undefined2 *)(param_1 + _DAT_080c8540);
  func_08000540(0,*puVar4);
  uVar1 = _DAT_080c8548;
  *(undefined4 *)(param_1 + _DAT_080c8544) = _DAT_080c8548;
  iVar3 = _DAT_080c854c;
  *(undefined4 *)(param_1 + _DAT_080c854c) = uVar1;
  *(undefined4 *)(param_1 + iVar3 + -0x30) = uVar1;
  func_080E5478(param_1 + 0x438,2);
  if (param_1 != -0x3ec) {
    while ((undefined2 *)(param_1 + 0x3ec) != puVar4) {
      puVar5 = puVar4 + -4;
      func_0x080073e0(puVar5,*(undefined4 *)(puVar4 + -2));
      func_08007184(puVar5,2);
      puVar4 = puVar5;
    }
  }
  iVar3 = param_1 + 0x24;
  if ((param_1 != -0x3a4) && (param_1 + 0x3a4 != param_1 + 0x3ec)) {
    iVar2 = param_1 + 0x3ec;
    do {
      iVar6 = iVar2 + -8;
      func_08007C28(iVar6,*(undefined4 *)(iVar2 + -4));
      func_080079E8(iVar6,2);
      iVar2 = iVar6;
    } while (param_1 + 0x3a4 != iVar6);
  }
  func_0x080073e0(param_1 + 0x39c,*(undefined4 *)(param_1 + 0x3a0));
  func_08007184(param_1 + 0x39c,2);
  func_08007C28(param_1 + 0x394,*(undefined4 *)(param_1 + 0x398));
  func_080079E8(param_1 + 0x394,2);
  func_08007C28(param_1 + 0x38c,*(undefined4 *)(param_1 + 0x390));
  func_080079E8(param_1 + 0x38c,2);
  func_0x080073e0(param_1 + 900,*(undefined4 *)(param_1 + 0x388));
  func_08007184(param_1 + 900,2);
  func_08007C28(param_1 + 0x37c,*(undefined4 *)(param_1 + 0x380));
  func_080079E8(param_1 + 0x37c,2);
  func_08007C28(param_1 + 0x374,*(undefined4 *)(param_1 + 0x378));
  func_080079E8(param_1 + 0x374,2);
  func_0x080073e0(param_1 + 0x36c,*(undefined4 *)(param_1 + 0x370));
  func_08007184(param_1 + 0x36c,2);
  func_08007C28(param_1 + 0x364,*(undefined4 *)(param_1 + 0x368));
  func_080079E8(param_1 + 0x364,2);
  func_0x080073e0(param_1 + 0x35c,*(undefined4 *)(param_1 + 0x360));
  func_08007184(param_1 + 0x35c,2);
  func_08007C28(param_1 + 0x354,*(undefined4 *)(param_1 + 0x358));
  func_080079E8(param_1 + 0x354,2);
  func_08050D0C(param_1 + 0x348,2);
  for (; iVar3 != param_1 + *(int *)(param_1 + 0x20) * 0x10 + 0x24; iVar3 = iVar3 + 0x10) {
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    func_08075DEC(iVar3 + 0x28,2);
    for (iVar2 = *(int *)(iVar3 + 0x18); iVar2 != *(int *)(iVar3 + 0x1c); iVar2 = iVar2 + 0x40) {
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      free();
    }
    func_08000608(iVar3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080C8550 @ 0x080C8550
// =============================================================================
undefined4 func_080C8550(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_080c858c;
  func_08008EB8(_DAT_080c858c,_DAT_080c8590,0x28);
  func_08008EB8(uVar1,_DAT_080c8594,0x28);
  func_0804EDB4(*(undefined4 *)(*(int *)(param_1 + 8) + _DAT_080c8598),_DAT_080c859c,0xa0,0,0x20);
  return in_lr;
}

// =============================================================================
// Function: func_080C85A0 @ 0x080C85A0
// =============================================================================
undefined4 func_080C85A0(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 in_lr;
  undefined1 auStack_150 [64];
  undefined4 auStack_110 [4];
  undefined1 auStack_100 [16];
  int aiStack_f0 [4];
  undefined1 auStack_e0 [16];
  int aiStack_d0 [4];
  undefined1 auStack_c0 [16];
  int aiStack_b0 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
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
  undefined4 *puStack_64;
  undefined1 *puStack_60;
  int *piStack_5c;
  undefined1 *puStack_58;
  int *piStack_54;
  undefined1 *puStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined1 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  iVar3 = func_0x08008918();
  *(undefined2 *)(iVar3 + 8) = 0x1c40;
  iVar3 = func_0x08008918(param_1);
  *(short *)(iVar3 + 10) = (short)_DAT_080c87b0;
  iVar3 = func_0x08008918(param_1);
  *(short *)(iVar3 + 0xc) = (short)_DAT_080c87b4;
  iVar3 = func_0x08008918(param_1);
  *(undefined2 *)(iVar3 + 0xe) = 8000;
  uVar12 = _DAT_080c87b8;
  func_08008EB8(0xffffffff,_DAT_080c87b8,0x800);
  uVar14 = _DAT_080c87bc;
  func_08008EB8(0xffffffff,_DAT_080c87bc,0x800);
  func_08008EB8(0xffffffff,_DAT_080c87c0,0x800);
  func_08008EB8(0,0x6000000,0x8000);
  puVar4 = (undefined2 *)func_0x08008918(param_1);
  *puVar4 = 0x1e40;
  func_08008E64(*_DAT_080c87c4,0x6000000,*_DAT_080c87c8);
  func_08008EB8(_DAT_080c87cc,uVar14,0x800);
  func_08051320(uVar14,0,0,0x1e,3,0,0);
  func_08008E64(*_DAT_080c87d0,0x5000000,0x20);
  func_08008EB8(_DAT_080c87d4,uVar12,0x800);
  iVar3 = func_0x08008918(param_1);
  *(short *)(iVar3 + 0x1e) = (short)_DAT_080c87d8;
  iVar15 = 0;
  puStack_34 = auStack_150;
  puStack_48 = &uStack_9c;
  puStack_44 = &uStack_98;
  puStack_64 = auStack_110;
  puStack_60 = auStack_100;
  piStack_5c = aiStack_f0;
  puStack_58 = auStack_e0;
  piStack_54 = aiStack_d0;
  puStack_50 = auStack_c0;
  piStack_4c = aiStack_b0;
  puVar4 = _DAT_080c87e0;
  iVar3 = _DAT_080c87dc;
  do {
    uStack_a0 = 0x20001;
    func_0x0804e5ac(0x20001,auStack_150,0,0,*puVar4,0,1);
    func_08008E64(puStack_34,iVar3,0x40);
    iVar3 = iVar3 + 0x40;
    puVar4 = puVar4 + 1;
    iVar15 = iVar15 + 1;
  } while (iVar15 < 10);
  func_08050D5C(param_1 + 0x348);
  uStack_9c = CONCAT22(uStack_9c._2_2_,2);
  *(undefined2 *)((int)puStack_48 + 2) = 2;
  iVar3 = param_1 + _DAT_080c87e4;
  func_0804E7A0(uStack_9c,iVar3,0);
  uStack_98 = CONCAT22(uStack_98._2_2_,2);
  *(undefined2 *)((int)puStack_44 + 2) = 2;
  func_0804E958(uStack_98,iVar3,0,0,_DAT_080c87e8,0,1);
  piStack_2c = (int *)func_0x08008910(param_1);
  func_08008F0C(auStack_110,iVar3,_DAT_080c87ec,0x80);
  puVar1 = puStack_64;
  puVar8 = (undefined4 *)piStack_2c[1];
  if (puVar8 == (undefined4 *)piStack_2c[3]) {
    iStack_90 = 1;
    iStack_94 = (int)puVar8 - *piStack_2c >> 4;
    piVar5 = &iStack_94;
    if (iStack_94 == 0) {
      piVar5 = &iStack_90;
    }
    if (iStack_94 + *piVar5 == 0) {
      puStack_28 = (undefined4 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_94 + *piVar5) * 0x10;
      puStack_28 = (undefined4 *)malloc(iVar3);
      if (puStack_28 == (undefined4 *)0x0) {
        puStack_28 = (undefined4 *)func_080D3BC0(iVar3);
      }
    }
    piStack_30 = (int *)(param_1 + 0x1c);
    piStack_38 = (int *)(param_1 + 0x650);
    piStack_40 = (int *)(param_1 + _DAT_080c8894);
    piStack_3c = (int *)(param_1 + _DAT_080c8898);
    puVar10 = puStack_28;
    for (puVar11 = (undefined4 *)*piStack_2c; puVar11 != puVar8; puVar11 = puVar11 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar12 = puVar11[1];
        uVar14 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar12;
        puVar10[2] = uVar14;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar15 = iStack_90;
    if (iStack_90 == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar12 = puVar1[1];
        uVar14 = puVar1[2];
        *puVar10 = *puVar1;
        puVar10[1] = uVar12;
        puVar10[2] = uVar14;
        puVar10[3] = puVar1[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar12 = puVar1[1];
          uVar14 = puVar1[2];
          *puVar10 = *puVar1;
          puVar10[1] = uVar12;
          puVar10[2] = uVar14;
          puVar10[3] = puVar1[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar15 = *piStack_2c; iVar15 != piStack_2c[1]; iVar15 = iVar15 + 0x10) {
    }
    if (*piStack_2c != 0) {
      free();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)puVar10;
    piStack_2c[3] = (int)puStack_28 + iVar3;
  }
  else {
    if (puVar8 != (undefined4 *)0x0) {
      uVar12 = puStack_64[1];
      uVar14 = puStack_64[2];
      *puVar8 = *puStack_64;
      puVar8[1] = uVar12;
      puVar8[2] = uVar14;
      puVar8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
    piStack_30 = (int *)(param_1 + 0x1c);
    piStack_38 = (int *)(param_1 + 0x650);
    piStack_40 = (int *)(param_1 + _DAT_080c87f0);
    piStack_3c = (int *)(param_1 + _DAT_080c87f4);
  }
  func_0804E9F4(_DAT_080c8954,0x20,2,2,0,0x20);
  func_080C8550(param_1);
  piVar5 = (int *)func_0x08008910(param_1);
  iVar3 = func_08007D4C(param_1 + 0x354,*(undefined4 *)(param_1 + 0x358));
  piStack_2c = piVar5;
  func_08008F0C(auStack_110,_DAT_080c8958,iVar3 * 0x20 + _DAT_080c895c,0x80);
  puVar1 = puStack_64;
  puVar8 = (undefined4 *)piStack_2c[1];
  if (puVar8 == (undefined4 *)piStack_2c[3]) {
    iStack_88 = 1;
    iStack_8c = (int)puVar8 - *piStack_2c >> 4;
    piVar5 = &iStack_8c;
    if (iStack_8c == 0) {
      piVar5 = &iStack_88;
    }
    if (iStack_8c + *piVar5 == 0) {
      puVar11 = (undefined4 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_8c + *piVar5) * 0x10;
      puVar11 = (undefined4 *)malloc(iVar3);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)func_080D3BC0(iVar3);
      }
    }
    puVar13 = puVar11;
    for (puVar10 = (undefined4 *)*piStack_2c; puVar10 != puVar8; puVar10 = puVar10 + 4) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar10[1];
        uVar14 = puVar10[2];
        *puVar13 = *puVar10;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar10[3];
      }
      puVar13 = puVar13 + 4;
    }
    iVar15 = iStack_88;
    if (iStack_88 == 1) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar1[1];
        uVar14 = puVar1[2];
        *puVar13 = *puVar1;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar1[3];
      }
      puVar13 = puVar13 + 4;
    }
    else {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar13 != (undefined4 *)0x0) {
          uVar12 = puVar1[1];
          uVar14 = puVar1[2];
          *puVar13 = *puVar1;
          puVar13[1] = uVar12;
          puVar13[2] = uVar14;
          puVar13[3] = puVar1[3];
        }
        puVar13 = puVar13 + 4;
      }
    }
    for (iVar15 = *piStack_2c; iVar15 != piStack_2c[1]; iVar15 = iVar15 + 0x10) {
    }
    puStack_28 = puVar11;
    if (*piStack_2c != 0) {
      free();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)puVar13;
    piStack_2c[3] = (int)puStack_28 + iVar3;
  }
  else {
    if (puVar8 != (undefined4 *)0x0) {
      uVar12 = puStack_64[1];
      uVar14 = puStack_64[2];
      *puVar8 = *puStack_64;
      puVar8[1] = uVar12;
      puVar8[2] = uVar14;
      puVar8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  piVar5 = (int *)func_0x08008910(param_1);
  iVar3 = func_080074C0(param_1 + 0x35c,*(undefined4 *)(param_1 + 0x360));
  piStack_2c = piVar5;
  func_08008F0C(auStack_110,_DAT_080c8a84,iVar3 * 0x20 + _DAT_080c8a88,0x20);
  puVar1 = puStack_64;
  puVar8 = (undefined4 *)piStack_2c[1];
  if (puVar8 == (undefined4 *)piStack_2c[3]) {
    iStack_80 = 1;
    iStack_84 = (int)puVar8 - *piStack_2c >> 4;
    piVar5 = &iStack_84;
    if (iStack_84 == 0) {
      piVar5 = &iStack_80;
    }
    if (iStack_84 + *piVar5 == 0) {
      puVar11 = (undefined4 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_84 + *piVar5) * 0x10;
      puVar11 = (undefined4 *)malloc(iVar3);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)func_080D3BC0(iVar3);
      }
    }
    puVar13 = puVar11;
    for (puVar10 = (undefined4 *)*piStack_2c; puVar10 != puVar8; puVar10 = puVar10 + 4) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar10[1];
        uVar14 = puVar10[2];
        *puVar13 = *puVar10;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar10[3];
      }
      puVar13 = puVar13 + 4;
    }
    iVar15 = iStack_80;
    if (iStack_80 == 1) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar1[1];
        uVar14 = puVar1[2];
        *puVar13 = *puVar1;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar1[3];
      }
      puVar13 = puVar13 + 4;
    }
    else {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar13 != (undefined4 *)0x0) {
          uVar12 = puVar1[1];
          uVar14 = puVar1[2];
          *puVar13 = *puVar1;
          puVar13[1] = uVar12;
          puVar13[2] = uVar14;
          puVar13[3] = puVar1[3];
        }
        puVar13 = puVar13 + 4;
      }
    }
    for (iVar15 = *piStack_2c; iVar15 != piStack_2c[1]; iVar15 = iVar15 + 0x10) {
    }
    puStack_28 = puVar11;
    if (*piStack_2c != 0) {
      free();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)puVar13;
    piStack_2c[3] = (int)puStack_28 + iVar3;
  }
  else {
    if (puVar8 != (undefined4 *)0x0) {
      uVar12 = puStack_64[1];
      uVar14 = puStack_64[2];
      *puVar8 = *puStack_64;
      puVar8[1] = uVar12;
      puVar8[2] = uVar14;
      puVar8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  uVar12 = func_080005D4(0x4c);
  uVar14 = func_0800894C(param_1);
  uVar6 = func_0x08008918(param_1);
  iVar3 = func_08075B00(uVar12,100,uVar14,uVar6,_DAT_080c8c88);
  piVar5 = piStack_30;
  iVar15 = *(int *)(param_1 + 0x1c);
  if ((iVar3 != iVar15) && (iVar15 != 0)) {
    func_08075DEC(iVar15 + 0x28,2);
    for (iVar9 = *(int *)(iVar15 + 0x18); iVar9 != *(int *)(iVar15 + 0x1c); iVar9 = iVar9 + 0x40) {
    }
    if (*(int *)(iVar15 + 0x18) != 0) {
      free();
    }
    func_08000608(iVar15);
  }
  *piVar5 = iVar3;
  iVar3 = func_0x08008918(param_1);
  *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) | 0x20;
  iVar3 = func_0x08008918(param_1);
  *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) | 0x1700;
  Interrupt_SetMasterEnable(4);
  uVar2 = func_08000540(0,4);
  *(undefined2 *)(param_1 + _DAT_080c8c8c) = uVar2;
  *(undefined2 *)(param_1 + _DAT_080c8c90) = 0xe8;
  *(undefined2 *)(param_1 + _DAT_080c8c94) = 0x18;
  *(undefined2 *)(param_1 + _DAT_080c8c98) = 0xe8;
  *(undefined2 *)(param_1 + _DAT_080c8c9c) = 0x60;
  piVar5 = *(int **)(param_1 + _DAT_080c8ca0);
  func_0x080d3918(puStack_60,piVar5,
                  *(undefined2 *)
                   (*piStack_38 + (uint)*(ushort *)((undefined4 *)(param_1 + _DAT_080c8ca0) + 3) * 4
                   ),*(undefined4 *)(*piVar5 + 0x10));
  piVar5 = (int *)func_0x08008910(param_1);
  iVar3 = aiStack_f0[0];
  iVar15 = func_080074C0(param_1 + 0x36c,*(undefined4 *)(param_1 + 0x370));
  uVar2 = 0;
  if (aiStack_f0[0] != 0) {
    uVar2 = (undefined2)piStack_5c[1];
  }
  piStack_2c = piVar5;
  func_08008F0C(auStack_110,iVar3,iVar15 * 0x20 + _DAT_080c8ca4,uVar2);
  puVar1 = puStack_64;
  puVar8 = (undefined4 *)piVar5[1];
  if (puVar8 == (undefined4 *)piVar5[3]) {
    iStack_78 = 1;
    iStack_7c = (int)puVar8 - *piStack_2c >> 4;
    piVar5 = &iStack_7c;
    if (iStack_7c == 0) {
      piVar5 = &iStack_78;
    }
    if (iStack_7c + *piVar5 == 0) {
      puVar11 = (undefined4 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_7c + *piVar5) * 0x10;
      puVar11 = (undefined4 *)malloc(iVar3);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)func_080D3BC0(iVar3);
      }
    }
    puVar13 = puVar11;
    for (puVar10 = (undefined4 *)*piStack_2c; puVar10 != puVar8; puVar10 = puVar10 + 4) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar10[1];
        uVar14 = puVar10[2];
        *puVar13 = *puVar10;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar10[3];
      }
      puVar13 = puVar13 + 4;
    }
    iVar15 = iStack_78;
    if (iStack_78 == 1) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar1[1];
        uVar14 = puVar1[2];
        *puVar13 = *puVar1;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar1[3];
      }
      puVar13 = puVar13 + 4;
    }
    else {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar13 != (undefined4 *)0x0) {
          uVar12 = puVar1[1];
          uVar14 = puVar1[2];
          *puVar13 = *puVar1;
          puVar13[1] = uVar12;
          puVar13[2] = uVar14;
          puVar13[3] = puVar1[3];
        }
        puVar13 = puVar13 + 4;
      }
    }
    for (iVar15 = *piStack_2c; iVar15 != piStack_2c[1]; iVar15 = iVar15 + 0x10) {
    }
    puStack_28 = puVar11;
    if (*piStack_2c != 0) {
      free();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)puVar13;
    piStack_2c[3] = (int)puStack_28 + iVar3;
  }
  else {
    if (puVar8 != (undefined4 *)0x0) {
      uVar12 = puStack_64[1];
      uVar14 = puStack_64[2];
      *puVar8 = *puStack_64;
      puVar8[1] = uVar12;
      puVar8[2] = uVar14;
      puVar8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  func_0x080d3918(puStack_58,*(int **)(param_1 + 0x568),
                  *(undefined2 *)(*piStack_40 + (uint)*(ushort *)(param_1 + 0x574) * 4),
                  *(undefined4 *)(**(int **)(param_1 + 0x568) + 0x10));
  piVar7 = (int *)func_0x08008910(param_1);
  piVar5 = piStack_54;
  iVar15 = *piStack_54;
  iVar3 = func_080074C0(param_1 + 900,*(undefined4 *)(param_1 + 0x388));
  uVar2 = 0;
  if (*piVar5 != 0) {
    uVar2 = (undefined2)piVar5[1];
  }
  piStack_2c = piVar7;
  func_08008F0C(auStack_110,iVar15,iVar3 * 0x20 + _DAT_080c8df4,uVar2);
  puVar1 = puStack_64;
  puVar8 = (undefined4 *)piStack_2c[1];
  if (puVar8 == (undefined4 *)piStack_2c[3]) {
    iStack_70 = 1;
    iStack_74 = (int)puVar8 - *piStack_2c >> 4;
    piVar5 = &iStack_74;
    if (iStack_74 == 0) {
      piVar5 = &iStack_70;
    }
    if (iStack_74 + *piVar5 == 0) {
      puVar11 = (undefined4 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_74 + *piVar5) * 0x10;
      puVar11 = (undefined4 *)malloc(iVar3);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)func_080D3BC0(iVar3);
      }
    }
    puVar13 = puVar11;
    for (puVar10 = (undefined4 *)*piStack_2c; puVar10 != puVar8; puVar10 = puVar10 + 4) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar10[1];
        uVar14 = puVar10[2];
        *puVar13 = *puVar10;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar10[3];
      }
      puVar13 = puVar13 + 4;
    }
    iVar15 = iStack_70;
    if (iStack_70 == 1) {
      if (puVar13 != (undefined4 *)0x0) {
        uVar12 = puVar1[1];
        uVar14 = puVar1[2];
        *puVar13 = *puVar1;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = puVar1[3];
      }
      puVar13 = puVar13 + 4;
    }
    else {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar13 != (undefined4 *)0x0) {
          uVar12 = puVar1[1];
          uVar14 = puVar1[2];
          *puVar13 = *puVar1;
          puVar13[1] = uVar12;
          puVar13[2] = uVar14;
          puVar13[3] = puVar1[3];
        }
        puVar13 = puVar13 + 4;
      }
    }
    for (iVar15 = *piStack_2c; iVar15 != piStack_2c[1]; iVar15 = iVar15 + 0x10) {
    }
    puStack_28 = puVar11;
    if (*piStack_2c != 0) {
      free();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)puVar13;
    piStack_2c[3] = (int)puStack_28 + iVar3;
  }
  else {
    if (puVar8 != (undefined4 *)0x0) {
      uVar12 = puStack_64[1];
      uVar14 = puStack_64[2];
      *puVar8 = *puStack_64;
      puVar8[1] = uVar12;
      puVar8[2] = uVar14;
      puVar8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  func_0x080d3918(puStack_50,*(int **)(param_1 + 0x5d8),
                  *(undefined2 *)(*piStack_3c + (uint)*(ushort *)(param_1 + 0x5e4) * 4),
                  *(undefined4 *)(**(int **)(param_1 + 0x5d8) + 0x10));
  piVar7 = (int *)func_0x08008910(param_1);
  piVar5 = piStack_4c;
  iVar15 = *piStack_4c;
  iVar3 = func_080074C0(param_1 + 0x39c,*(undefined4 *)(param_1 + 0x3a0));
  uVar2 = 0;
  if (*piVar5 != 0) {
    uVar2 = (undefined2)piVar5[1];
  }
  func_08008F0C(auStack_110,iVar15,iVar3 * 0x20 + _DAT_080c8f40,uVar2);
  puVar1 = puStack_64;
  puStack_24 = (undefined4 *)piVar7[1];
  if (puStack_24 == (undefined4 *)piVar7[3]) {
    iStack_68 = 1;
    iStack_6c = (int)puStack_24 - *piVar7 >> 4;
    piVar5 = &iStack_6c;
    if (iStack_6c == 0) {
      piVar5 = &iStack_68;
    }
    if (iStack_6c + *piVar5 == 0) {
      puVar8 = (undefined4 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_6c + *piVar5) * 0x10;
      puVar8 = (undefined4 *)malloc(iVar3);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)func_080D3BC0(iVar3);
      }
    }
    puVar10 = puVar8;
    for (puVar11 = (undefined4 *)*piVar7; puVar11 != puStack_24; puVar11 = puVar11 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar12 = puVar11[1];
        uVar14 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar12;
        puVar10[2] = uVar14;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar15 = iStack_68;
    if (iStack_68 == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar12 = puVar1[1];
        uVar14 = puVar1[2];
        *puVar10 = *puVar1;
        puVar10[1] = uVar12;
        puVar10[2] = uVar14;
        puVar10[3] = puVar1[3];
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar12 = puVar1[1];
          uVar14 = puVar1[2];
          *puVar10 = *puVar1;
          puVar10[1] = uVar12;
          puVar10[2] = uVar14;
          puVar10[3] = puVar1[3];
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar15 = *piVar7; iVar15 != piVar7[1]; iVar15 = iVar15 + 0x10) {
    }
    puStack_28 = puVar8;
    if (*piVar7 != 0) {
      free();
    }
    *piVar7 = (int)puStack_28;
    piVar7[1] = (int)puVar10;
    piVar7[3] = (int)puStack_28 + iVar3;
  }
  else {
    if (puStack_24 != (undefined4 *)0x0) {
      uVar12 = puStack_64[1];
      uVar14 = puStack_64[2];
      *puStack_24 = *puStack_64;
      puStack_24[1] = uVar12;
      puStack_24[2] = uVar14;
      puStack_24[3] = puStack_64[3];
    }
    piVar7[1] = piVar7[1] + 0x10;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080C9020 @ 0x080C9020
// =============================================================================
undefined4 func_080C9020(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  undefined4 in_lr;
  
  uVar9 = 0x28;
  if ((param_2 != 1) && (param_2 != 0)) {
    if (param_2 == 2) {
      uVar9 = 0x38;
    }
    else if (param_2 == 3) {
      uVar9 = 0x48;
    }
    else {
      uVar9 = 0x58;
    }
  }
  pcVar7 = (char *)(param_1 + _DAT_080c90c0);
  if ((*pcVar7 == '\0') || (cVar2 = '\0', *(char *)(param_1 + 0x6a0) != '\0')) {
    uVar4 = func_0x080088cc(param_1);
    if ((uVar4 & 1) != 0) {
      pcVar7 = (char *)(param_1 + 0x6a0);
      cVar2 = '\x01';
      goto LAB_080c906c;
    }
  }
  else {
LAB_080c906c:
    *pcVar7 = cVar2;
  }
  pcVar7 = (char *)(param_1 + _DAT_080c90c4);
  if ((*pcVar7 == '\0') || (cVar2 = '\0', *(char *)(param_1 + _DAT_080c90c4 + -1) != '\0')) {
    uVar4 = func_0x080088cc(param_1);
    if ((uVar4 & 2) != 0) {
      pcVar7 = (char *)(param_1 + _DAT_080c90c8);
      cVar2 = '\x01';
      goto LAB_080c9096;
    }
  }
  else {
LAB_080c9096:
    *pcVar7 = cVar2;
  }
  uVar4 = func_0x080088c4(param_1);
  uVar4 = uVar4 & 0xffff;
  piVar8 = (int *)(param_1 + 0x680);
  if (*piVar8 != 0) {
    if (*piVar8 < 1) {
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -4;
      iVar5 = *piVar8 + 1;
    }
    else {
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 4;
      iVar5 = *piVar8 + -1;
    }
    *piVar8 = iVar5;
    goto LAB_080c9262;
  }
  bVar1 = false;
  uVar6 = func_0x080088d4(param_1);
  if (((uVar6 & 0x40) != 0) && ((_DAT_080c9114 & uVar4) == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    if (*(char *)(param_1 + 0x6a0) != '\0') {
      *(undefined1 *)(param_1 + _DAT_080c9118) = 1;
      *(char *)(param_1 + 0x6a0) = '\0';
      return in_lr;
    }
    *(undefined1 *)(param_1 + _DAT_080c9138) = 0;
    pcVar7 = (char *)(param_1 + _DAT_080c913c);
    if (*pcVar7 != '\0') {
      *(undefined1 *)(param_1 + _DAT_080c9140) = 1;
      *pcVar7 = '\0';
      return in_lr;
    }
    *(undefined1 *)(param_1 + _DAT_080c9168) = 0;
    iVar5 = *(int *)(param_1 + 0x648);
    if (iVar5 < 0x29) {
      sVar3 = 0;
      if (*(short *)(param_1 + 0xc) < 1) {
LAB_080c9244:
        *(short *)(param_1 + 0xc) = sVar3;
        goto LAB_080c9262;
      }
      *(undefined4 *)(param_1 + 0x680) = 0xfffffffc;
      iVar5 = *(int *)(param_1 + 0x10) + -1;
LAB_080c9256:
      *(int *)(param_1 + 0x10) = iVar5;
      func_08008B6C(param_1 + 0x18,0xcb);
      goto LAB_080c9262;
    }
    if (iVar5 == 0x38) {
      iVar5 = 0x28;
LAB_080c9176:
      *(int *)(param_1 + 0x648) = iVar5;
    }
    else if (0x38 < iVar5) {
      if (iVar5 == 0x48) {
        iVar5 = 0x38;
      }
      else {
        if (iVar5 != 0x58) goto LAB_080c9178;
        iVar5 = 0x48;
      }
      goto LAB_080c9176;
    }
LAB_080c9178:
    iVar5 = *(int *)(param_1 + 0x10) + -1;
  }
  else {
    bVar1 = false;
    uVar6 = func_0x080088d4(param_1);
    if (((uVar6 & 0x80) != 0) && ((_DAT_080c9204 & uVar4) == 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar1 = false;
      uVar6 = func_0x080088d4(param_1);
      if (((uVar6 & 0x10) != 0) && ((_DAT_080c92dc & uVar4) == 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = _DAT_080c95f8;
        if (*(char *)(param_1 + 0x6a0) != '\0') goto LAB_080c95e8;
        *(undefined1 *)(param_1 + _DAT_080c92e0) = 0;
        pcVar7 = (char *)(param_1 + _DAT_080c92e4);
        iVar5 = _DAT_080c92e4;
        if (*pcVar7 != '\0') goto LAB_080c960c;
        *(undefined1 *)(param_1 + _DAT_080c92e8) = 0;
        sVar3 = *(short *)(*(int *)(param_1 + 0x1c) + 0xe) + -0xa0;
        piVar8 = (int *)(param_1 + 0x648);
        iVar5 = *piVar8;
        if (0x47 < iVar5) {
          if (iVar5 == 0x48) {
            *piVar8 = 0x58;
            if (uVar9 < 0x58) {
              *piVar8 = 0x48;
              goto LAB_080c94f0;
            }
            if (*(short *)(param_1 + 0xc) < sVar3) {
              *(undefined4 *)(param_1 + 0x680) = 4;
              iVar5 = *(int *)(param_1 + 0x10) + 2;
            }
            else {
              *(short *)(param_1 + 0xc) = sVar3;
              iVar5 = *(int *)(param_1 + 0x10) + 1;
            }
          }
          else {
            if ((int)sVar3 <= (int)*(short *)(param_1 + 0xc)) {
LAB_080c94c4:
              *(short *)(param_1 + 0xc) = sVar3;
              return in_lr;
            }
            if ((int)*(short *)(param_1 + 0xc) < sVar3 + -0x10) {
              *(undefined4 *)(param_1 + 0x680) = 8;
              iVar5 = *(int *)(param_1 + 0x10) + 2;
            }
            else {
              *(undefined4 *)(param_1 + 0x680) = 4;
              iVar5 = *(int *)(param_1 + 0x10) + 1;
            }
          }
          goto LAB_080c94ee;
        }
        if (iVar5 == 0x38) {
          iVar5 = 0x48;
LAB_080c92fc:
          *piVar8 = iVar5;
        }
        else if (iVar5 < 0x39) {
          if (iVar5 == 0x28) {
            iVar5 = 0x38;
            goto LAB_080c92fc;
          }
        }
        else if (iVar5 == 0x48) {
          iVar5 = 0x58;
          goto LAB_080c92fc;
        }
        piVar8 = (int *)(param_1 + 0x648);
        iVar5 = *piVar8;
        if ((int)uVar9 < iVar5) {
          if (iVar5 == 0x38) {
            *piVar8 = 0x28;
            return in_lr;
          }
          if (iVar5 < 0x39) {
            return in_lr;
          }
          if (iVar5 == 0x48) {
            *piVar8 = 0x38;
            return in_lr;
          }
          if (iVar5 != 0x58) {
            return in_lr;
          }
          *piVar8 = 0x48;
          return in_lr;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        if (iVar5 == 0x38) {
          iVar5 = 0x48;
LAB_080c9354:
          *piVar8 = iVar5;
        }
        else if (iVar5 < 0x39) {
          if (iVar5 == 0x28) {
            iVar5 = 0x38;
            goto LAB_080c9354;
          }
        }
        else if (iVar5 == 0x48) {
          iVar5 = 0x58;
          goto LAB_080c9354;
        }
        piVar8 = (int *)(param_1 + 0x648);
        iVar5 = *piVar8;
        if ((int)uVar9 < iVar5) {
          if (iVar5 == 0x38) {
            *piVar8 = 0x28;
          }
          else if (0x38 < iVar5) {
            if (iVar5 == 0x48) {
              *piVar8 = 0x38;
            }
            else if (iVar5 == 0x58) {
              *piVar8 = 0x48;
            }
          }
          goto LAB_080c94f0;
        }
        iVar5 = *(int *)(param_1 + 0x10) + 1;
        goto LAB_080c94ee;
      }
      bVar1 = false;
      uVar9 = func_0x080088d4(param_1);
      if (((uVar9 & 0x20) != 0) && ((_DAT_080c9440 & uVar4) == 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar1 = false;
        uVar9 = func_0x080088d4(param_1);
        if (((uVar9 >> 8 & 1) != 0) && ((_DAT_080c9530 & uVar4) == 0)) {
          bVar1 = true;
        }
        if (bVar1) {
          iVar5 = _DAT_080c9534;
          if (*(char *)(param_1 + 0x6a0) != '\0') {
LAB_080c95e8:
            *(undefined1 *)(param_1 + iVar5) = 1;
            *(undefined1 *)(param_1 + 0x6a0) = 0;
            return in_lr;
          }
          *(undefined1 *)(param_1 + _DAT_080c9568) = 0;
          pcVar7 = (char *)(param_1 + _DAT_080c956c);
          iVar5 = _DAT_080c956c;
          if (*pcVar7 == '\0') {
            *(undefined1 *)(param_1 + _DAT_080c9570) = 0;
            iVar5 = *(short *)(*(int *)(param_1 + 0x1c) + 0xe) + -0xa0;
            if (iVar5 * 0x10000 >> 0x10 <= (int)*(short *)(param_1 + 0xc)) {
              *(short *)(param_1 + 0xc) = (short)iVar5;
              return in_lr;
            }
            *(undefined4 *)(param_1 + 0x680) = 4;
            func_08008B6C(param_1 + 0x18,0xcb);
            iVar5 = *(int *)(param_1 + 0x648);
            if (iVar5 < 0x29) {
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
              return in_lr;
            }
            if (iVar5 == 0x38) {
              *(int *)(param_1 + 0x648) = 0x28;
              return in_lr;
            }
            if (iVar5 < 0x39) {
              return in_lr;
            }
            if (iVar5 == 0x48) {
LAB_080c966e:
              *(undefined4 *)(param_1 + 0x648) = 0x38;
              return in_lr;
            }
            if (iVar5 != 0x58) {
              return in_lr;
            }
LAB_080c9674:
            *(undefined4 *)(param_1 + 0x648) = 0x48;
            return in_lr;
          }
        }
        else {
          bVar1 = false;
          uVar9 = func_0x080088d4(param_1);
          if (((uVar9 >> 8 & 2) != 0) && ((_DAT_080c95f4 & uVar4) == 0)) {
            bVar1 = true;
          }
          if (!bVar1) {
            if (*(char *)(param_1 + 0x6a0) != '\0') {
              *(undefined1 *)(param_1 + 0x6a1) = 1;
              *(char *)(param_1 + 0x6a0) = bVar1;
              return in_lr;
            }
            pcVar7 = (char *)(param_1 + _DAT_080c96bc);
            if (*pcVar7 == '\0') {
              return in_lr;
            }
            *(undefined1 *)(param_1 + _DAT_080c96c0) = 1;
            *pcVar7 = '\0';
            return in_lr;
          }
          iVar5 = _DAT_080c95f8;
          if (*(char *)(param_1 + 0x6a0) != '\0') goto LAB_080c95e8;
          *(undefined1 *)(param_1 + _DAT_080c9618) = 0;
          pcVar7 = (char *)(param_1 + _DAT_080c961c);
          iVar5 = _DAT_080c961c;
          if (*pcVar7 == '\0') {
            *(undefined1 *)(param_1 + _DAT_080c9634) = 0;
            if (*(short *)(param_1 + 0xc) < 1) {
              *(undefined2 *)(param_1 + 0xc) = 0;
              return in_lr;
            }
            *(undefined4 *)(param_1 + 0x680) = 0xfffffffc;
            func_08008B6C(param_1 + 0x18,0xcb);
            iVar5 = *(int *)(param_1 + 0x648);
            if (0x57 < iVar5) {
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
              return in_lr;
            }
            if (iVar5 != 0x38) {
              if (0x38 < iVar5) {
                if (iVar5 != 0x48) {
                  return in_lr;
                }
                *(int *)(param_1 + 0x648) = 0x58;
                return in_lr;
              }
              if (iVar5 != 0x28) {
                return in_lr;
              }
              goto LAB_080c966e;
            }
            goto LAB_080c9674;
          }
        }
LAB_080c960c:
        *(undefined1 *)(param_1 + iVar5 + 1) = 1;
        *pcVar7 = '\0';
        return in_lr;
      }
      iVar5 = _DAT_080c95f8;
      if (*(char *)(param_1 + 0x6a0) != '\0') goto LAB_080c95e8;
      *(undefined1 *)(param_1 + _DAT_080c9444) = 0;
      pcVar7 = (char *)(param_1 + _DAT_080c9448);
      if (*pcVar7 != '\0') {
        *(undefined1 *)(param_1 + _DAT_080c9448 + 1) = 1;
        *pcVar7 = '\0';
        return in_lr;
      }
      *(undefined1 *)(param_1 + _DAT_080c9468) = 0;
      piVar8 = (int *)(param_1 + 0x648);
      iVar5 = *piVar8;
      if (iVar5 < 0x39) {
        if (iVar5 == 0x38) {
          *piVar8 = 0x28;
          if (0 < *(short *)(param_1 + 0xc)) {
            piVar8 = (int *)(param_1 + 0x680);
            iVar5 = -4;
            goto LAB_080c94e8;
          }
          iVar5 = *(int *)(param_1 + 0x10) + -1;
        }
        else {
          sVar3 = 0;
          if (*(short *)(param_1 + 0xc) < 1) goto LAB_080c94c4;
          if (0x10 < *(short *)(param_1 + 0xc)) {
            piVar8 = (int *)(param_1 + 0x680);
            iVar5 = -8;
            goto LAB_080c94e8;
          }
          *(undefined4 *)(param_1 + 0x680) = 0xfffffffc;
          iVar5 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        if (iVar5 == 0x48) {
          iVar5 = 0x38;
LAB_080c9472:
          *piVar8 = iVar5;
        }
        else if (iVar5 == 0x58) {
          iVar5 = 0x48;
          goto LAB_080c9472;
        }
        piVar8 = (int *)(param_1 + 0x648);
        iVar5 = *piVar8;
        if (iVar5 == 0x38) {
          iVar5 = 0x28;
LAB_080c94e8:
          *piVar8 = iVar5;
        }
        else if (0x38 < iVar5) {
          if (iVar5 == 0x48) {
            iVar5 = 0x38;
          }
          else {
            if (iVar5 != 0x58) goto LAB_080c94ea;
            iVar5 = 0x48;
          }
          goto LAB_080c94e8;
        }
LAB_080c94ea:
        iVar5 = *(int *)(param_1 + 0x10) + -2;
      }
LAB_080c94ee:
      *(int *)(param_1 + 0x10) = iVar5;
LAB_080c94f0:
      func_08008B6C(param_1 + 0x18,0xcb);
      return in_lr;
    }
    iVar5 = _DAT_080c95f8;
    if (*(char *)(param_1 + 0x6a0) != '\0') goto LAB_080c95e8;
    *(undefined1 *)(param_1 + _DAT_080c9208) = 0;
    pcVar7 = (char *)(param_1 + _DAT_080c920c);
    iVar5 = _DAT_080c920c;
    if (*pcVar7 != '\0') goto LAB_080c960c;
    *(undefined1 *)(param_1 + _DAT_080c9210) = 0;
    sVar3 = *(short *)(*(int *)(param_1 + 0x1c) + 0xe) + -0xa0;
    iVar5 = *(int *)(param_1 + 0x648);
    if ((int)uVar9 <= iVar5) {
      if (sVar3 <= *(short *)(param_1 + 0xc)) goto LAB_080c9244;
      *(undefined4 *)(param_1 + 0x680) = 4;
      iVar5 = *(int *)(param_1 + 0x10) + 1;
      goto LAB_080c9256;
    }
    if (iVar5 == 0x38) {
      iVar5 = 0x48;
LAB_080c9224:
      *(int *)(param_1 + 0x648) = iVar5;
    }
    else if (iVar5 < 0x39) {
      if (iVar5 == 0x28) {
        iVar5 = 0x38;
        goto LAB_080c9224;
      }
    }
    else if (iVar5 == 0x48) {
      iVar5 = 0x58;
      goto LAB_080c9224;
    }
    iVar5 = *(int *)(param_1 + 0x10) + 1;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  func_08008B6C(param_1 + 0x18,0xcb);
LAB_080c9262:
  func_08075C88(*(undefined4 *)(param_1 + 0x1c),(int)*(short *)(param_1 + 0xc));
  return in_lr;
}

// =============================================================================
// Function: func_080C96C4 @ 0x080C96C4
// =============================================================================
undefined4 func_080C96C4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  short *psVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  bool bVar21;
  uint *puVar22;
  uint *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined4 in_lr;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  uint uStack_f0;
  undefined1 *puStack_ec;
  uint uStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  uint uStack_d4;
  undefined1 *puStack_d0;
  uint uStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 *puStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 **ppuStack_4c;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 **ppuStack_40;
  uint *puStack_3c;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  int iStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  
  iStack_60 = 1;
  pbVar3 = (byte *)func_0x08008920(param_1);
  uVar4 = func_08007D4C(param_1 + 0x354,*(undefined4 *)(param_1 + 0x358));
  uVar5 = func_080074C0(param_1 + 0x35c,*(undefined4 *)(param_1 + 0x360));
  func_0804EA94(&uStack_b0,0x10,4,uVar4,uVar5,0,iStack_60,0);
  bVar1 = *pbVar3;
  if (bVar1 < 0x80) {
    *(undefined4 *)(pbVar3 + (uint)bVar1 * 8 + 4) = uStack_b0;
    *(undefined2 *)(pbVar3 + (uint)bVar1 * 8 + 4 + 4) = uStack_ac;
    *pbVar3 = bVar1 + 1;
  }
  uVar4 = func_0x08050d34(param_1 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = uVar4;
  uVar4 = func_0x080088dc(param_1);
  uVar5 = func_0x08008920(param_1);
  uVar6 = func_0x08008918(param_1);
  uVar7 = func_0x08008940(param_1);
  uVar8 = func_0800894C(param_1);
  iVar9 = func_08050D3C(param_1 + 0x348,uVar4,uVar5,uVar6,uVar7,uVar8,param_1 + 0x18);
  *(int *)(param_1 + 0x350) = iVar9;
  iStack_60 = 0;
  if ((iVar9 == 3) && (*(char *)(_DAT_080c98a4 + param_1 + 8) == '\0')) {
    iStack_60 = 1;
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 != 0) {
    uVar25 = 0;
    iVar9 = *(short *)(param_1 + 0xc) + -8;
    puStack_3c = &uStack_f0;
    if ((uVar10 != 0) && (*(short *)(param_1 + 0x24) < iVar9)) {
      psVar15 = (short *)(param_1 + 0x24);
      do {
        psVar15 = psVar15 + 8;
        uVar25 = uVar25 + 1;
        if (uVar10 <= uVar25) break;
      } while (*psVar15 < iVar9);
    }
    uStack_48 = 0;
    uStack_104 = (undefined1 *)0x0;
    uStack_5c = uVar10;
    puVar11 = (undefined1 *)malloc(0x18);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)func_080D3BC0(0x18);
    }
    uStack_100 = uStack_48;
    uStack_fc = uStack_48;
    *puVar11 = (char)uStack_48;
    *(uint *)(puVar11 + 4) = uStack_48;
    *(undefined1 **)(puVar11 + 8) = puVar11;
    *(undefined1 **)(puVar11 + 0xc) = puVar11;
    puStack_44 = (undefined1 *)0x0;
    puStack_ec = (undefined1 *)0x0;
    uStack_104 = puVar11;
    puVar11 = (undefined1 *)malloc(0x18);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)func_080D3BC0(0x18);
    }
    puVar24 = puStack_44;
    puStack_3c[2] = (uint)puStack_44;
    puStack_e4 = puVar24;
    *puVar11 = (char)puVar24;
    *(undefined1 **)(puVar11 + 4) = puStack_44;
    *(undefined1 **)(puVar11 + 8) = puVar11;
    *(undefined1 **)(puVar11 + 0xc) = puVar11;
    iStack_58 = *(short *)(param_1 + 0xc) + 0x68;
    puStack_ec = puVar11;
    if (uVar25 < uStack_5c) {
      iStack_38 = param_1 + 0x20;
      iStack_2c = uVar25 * 0x10;
      if (*(short *)(iStack_38 + iStack_2c + 4) <= iStack_58) {
        ppuStack_4c = &puStack_f8;
        ppuStack_40 = &puStack_f4;
        puStack_30 = &uStack_9c;
        uStack_34 = uVar25;
        do {
          iStack_54 = iStack_38 + iStack_2c + 4;
          puStack_a8 = *(undefined1 **)(iStack_54 + 8);
          uStack_34 = uStack_34 + 1;
          puVar24 = *(undefined1 **)(uStack_104 + 4);
          puVar11 = uStack_104;
          while (puVar16 = puVar24, puVar16 != (undefined1 *)0x0) {
            if (*(undefined1 **)(puVar16 + 0x10) < puStack_a8) {
              puVar24 = *(undefined1 **)(puVar16 + 0xc);
            }
            else {
              puVar24 = *(undefined1 **)(puVar16 + 8);
              puVar11 = puVar16;
            }
          }
          *ppuStack_4c = puVar11;
          uVar10 = uStack_48;
          bVar21 = false;
          puStack_f4 = uStack_104;
          if (((puStack_f8 == uStack_104) || (puStack_a8 < *(undefined1 **)(puStack_f8 + 0x10))) &&
             ((int)uStack_48 < 9)) {
            bVar21 = true;
          }
          if (bVar21) {
            puStack_dc = puStack_f8;
            puStack_d0 = puStack_a8;
            uStack_cc = uStack_48;
            memcpy(&puStack_d0,&puStack_d0,8);
            puStack_d8 = puStack_d0;
            uStack_d4 = uStack_cc;
            puStack_c8 = puStack_dc;
            func_080E5664(&puStack_e0,&uStack_108,&puStack_c8,&puStack_d8);
            iVar9 = uVar10 * 8 + param_1;
            iStack_50 = func_08007D4C(iVar9 + 0x3a4,*(undefined4 *)(iVar9 + 0x3a8));
            piVar19 = (int *)func_0x08008910(param_1);
            func_08008F0C(&puStack_e0,puStack_a8,iStack_50 * 0x20 + _DAT_080c9958,0x80);
            puVar14 = (uint *)piVar19[1];
            if (puVar14 == (uint *)piVar19[3]) {
              puStack_28 = puVar14;
              iStack_a0 = 1;
              puVar23 = (uint *)*piVar19;
              iStack_a4 = (int)puVar14 - (int)puVar23 >> 4;
              piVar12 = &iStack_a4;
              if (iStack_a4 == 0) {
                piVar12 = &iStack_a0;
              }
              if (iStack_a4 + *piVar12 == 0) {
                puVar14 = (uint *)0x0;
                iVar9 = 0;
                puStack_24 = puVar14;
              }
              else {
                iVar9 = (iStack_a4 + *piVar12) * 0x10;
                puVar14 = (uint *)malloc(iVar9);
                if (puVar14 == (uint *)0x0) {
                  puVar14 = (uint *)func_080D3BC0(iVar9);
                }
                puVar23 = (uint *)*piVar19;
                puStack_24 = puVar14;
              }
              for (; puVar23 != puStack_28; puVar23 = puVar23 + 4) {
                if (puVar14 != (uint *)0x0) {
                  uVar10 = puVar23[1];
                  uVar25 = puVar23[2];
                  *puVar14 = *puVar23;
                  puVar14[1] = uVar10;
                  puVar14[2] = uVar25;
                  puVar14[3] = puVar23[3];
                }
                puVar14 = puVar14 + 4;
              }
              iVar20 = iStack_a0;
              if (iStack_a0 == 1) {
                if (puVar14 != (uint *)0x0) {
                  *puVar14 = (uint)puStack_e0;
                  puVar14[1] = (uint)puStack_dc;
                  puVar14[2] = (uint)puStack_d8;
                  puVar14[3] = uStack_d4;
                }
                puVar14 = puVar14 + 4;
              }
              else {
                for (; iVar20 != 0; iVar20 = iVar20 + -1) {
                  if (puVar14 != (uint *)0x0) {
                    *puVar14 = (uint)puStack_e0;
                    puVar14[1] = (uint)puStack_dc;
                    puVar14[2] = (uint)puStack_d8;
                    puVar14[3] = uStack_d4;
                  }
                  puVar14 = puVar14 + 4;
                }
              }
              iVar13 = *piVar19;
              for (iVar20 = iVar13; iVar20 != piVar19[1]; iVar20 = iVar20 + 0x10) {
              }
              if (iVar13 != 0) {
                free(iVar13);
              }
              *piVar19 = (int)puStack_24;
              piVar19[1] = (int)puVar14;
              piVar19[3] = (int)puStack_24 + iVar9;
            }
            else {
              if (puVar14 != (uint *)0x0) {
                *puVar14 = (uint)puStack_e0;
                puVar14[1] = (uint)puStack_dc;
                puVar14[2] = (uint)puStack_d8;
                puVar14[3] = uStack_d4;
              }
              piVar19[1] = piVar19[1] + 0x10;
            }
            uStack_48 = uStack_48 + 1;
          }
          else {
            iVar9 = *(int *)(puStack_f8 + 0x14) * 8 + param_1;
            iStack_50 = func_08007D4C(iVar9 + 0x3a4,*(undefined4 *)(iVar9 + 0x3a8));
          }
          puVar11 = puStack_ec;
          uStack_9c = *(uint *)(iStack_54 + 0xc);
          puVar24 = puStack_ec;
          if (*(undefined1 **)(puStack_ec + 4) != (undefined1 *)0x0) {
            puVar16 = *(undefined1 **)(puStack_ec + 4);
            do {
              if (*(uint *)(puVar16 + 0x10) < *puStack_30) {
                puVar17 = *(undefined1 **)(puVar16 + 0xc);
              }
              else {
                puVar17 = *(undefined1 **)(puVar16 + 8);
                puVar24 = puVar16;
              }
              puVar16 = puVar17;
            } while (puVar17 != (undefined1 *)0x0);
          }
          *ppuStack_40 = puVar24;
          bVar21 = false;
          puStack_e0 = puVar11;
          if (((puStack_f4 == puVar11) || (uStack_9c < *(uint *)(puStack_f4 + 0x10))) &&
             ((int)puStack_44 < 9)) {
            bVar21 = true;
          }
          if (bVar21) {
            puStack_d8 = puStack_f4;
            uStack_cc = uStack_9c;
            puStack_c8 = puStack_44;
            memcpy(&uStack_cc,&uStack_cc,8);
            uStack_d4 = uStack_cc;
            puStack_d0 = puStack_c8;
            puStack_c4 = puStack_d8;
            func_080E5664(&puStack_dc,&uStack_f0,&puStack_c4,&uStack_d4);
            iVar9 = (int)puStack_44 * 8 + param_1;
            iVar9 = func_080074C0(iVar9 + 0x3ec,*(undefined4 *)(iVar9 + 0x3f0));
            piVar19 = (int *)func_0x08008910(param_1);
            func_08008F0C(&puStack_dc,uStack_9c,iVar9 * 0x20 + _DAT_080c9b1c,0x20);
            puVar14 = (uint *)piVar19[1];
            if (puVar14 == (uint *)piVar19[3]) {
              puStack_28 = puVar14;
              iStack_94 = 1;
              puVar23 = (uint *)*piVar19;
              iStack_98 = (int)puVar14 - (int)puVar23 >> 4;
              piVar12 = &iStack_98;
              if (iStack_98 == 0) {
                piVar12 = &iStack_94;
              }
              if (iStack_98 + *piVar12 == 0) {
                puVar14 = (uint *)0x0;
                iVar20 = 0;
                puStack_24 = puVar14;
              }
              else {
                iVar20 = (iStack_98 + *piVar12) * 0x10;
                puVar14 = (uint *)malloc(iVar20);
                if (puVar14 == (uint *)0x0) {
                  puVar14 = (uint *)func_080D3BC0(iVar20);
                }
                puVar23 = (uint *)*piVar19;
                puStack_24 = puVar14;
              }
              for (; puVar23 != puStack_28; puVar23 = puVar23 + 4) {
                if (puVar14 != (uint *)0x0) {
                  uVar10 = puVar23[1];
                  uVar25 = puVar23[2];
                  *puVar14 = *puVar23;
                  puVar14[1] = uVar10;
                  puVar14[2] = uVar25;
                  puVar14[3] = puVar23[3];
                }
                puVar14 = puVar14 + 4;
              }
              iVar13 = iStack_94;
              if (iStack_94 == 1) {
                if (puVar14 != (uint *)0x0) {
                  *puVar14 = (uint)puStack_dc;
                  puVar14[1] = (uint)puStack_d8;
                  puVar14[2] = uStack_d4;
                  puVar14[3] = (uint)puStack_d0;
                }
                puVar14 = puVar14 + 4;
              }
              else {
                for (; iVar13 != 0; iVar13 = iVar13 + -1) {
                  if (puVar14 != (uint *)0x0) {
                    *puVar14 = (uint)puStack_dc;
                    puVar14[1] = (uint)puStack_d8;
                    puVar14[2] = uStack_d4;
                    puVar14[3] = (uint)puStack_d0;
                  }
                  puVar14 = puVar14 + 4;
                }
              }
              iVar18 = *piVar19;
              for (iVar13 = iVar18; iVar13 != piVar19[1]; iVar13 = iVar13 + 0x10) {
              }
              if (iVar18 != 0) {
                free(iVar18);
              }
              *piVar19 = (int)puStack_24;
              piVar19[1] = (int)puVar14;
              piVar19[3] = (int)puStack_24 + iVar20;
            }
            else {
              if (puVar14 != (uint *)0x0) {
                *puVar14 = (uint)puStack_dc;
                puVar14[1] = (uint)puStack_d8;
                puVar14[2] = uStack_d4;
                puVar14[3] = (uint)puStack_d0;
              }
              piVar19[1] = piVar19[1] + 0x10;
            }
            puStack_44 = puStack_44 + 1;
          }
          else {
            iVar9 = *(int *)(puStack_f4 + 0x14) * 8 + param_1;
            iVar9 = func_080074C0(iVar9 + 0x3ec,*(undefined4 *)(iVar9 + 0x3f0));
          }
          if ((-1 < iStack_50) && (-1 < iVar9)) {
            pbVar3 = (byte *)func_0x08008920(param_1);
            psVar15 = (short *)(iStack_38 + iStack_2c + 4);
            func_0804EA94(&uStack_90,*(undefined4 *)(psVar15 + 2),
                          (int)*psVar15 - (int)*(short *)(param_1 + 0xc),iStack_50,iVar9,2,1,0);
            bVar1 = *pbVar3;
            if (bVar1 < 0x80) {
              *(undefined4 *)(pbVar3 + (uint)bVar1 * 8 + 4) = uStack_90;
              *(undefined2 *)(pbVar3 + (uint)bVar1 * 8 + 4 + 4) = uStack_8c;
              *pbVar3 = bVar1 + 1;
            }
          }
        } while ((uStack_34 < uStack_5c) &&
                (iStack_2c = uStack_34 * 0x10, *(short *)(iStack_38 + iStack_2c + 4) <= iStack_58));
      }
    }
    if (uStack_e8 != 0) {
      func_080E54C4(puStack_3c,*(undefined4 *)(puStack_ec + 4));
      *(undefined1 **)(puStack_ec + 8) = puStack_ec;
      *(undefined4 *)(puStack_ec + 4) = 0;
      *(undefined1 **)(puStack_ec + 0xc) = puStack_ec;
      puStack_3c[2] = 0;
    }
    if (puStack_ec != (undefined1 *)0x0) {
      free();
    }
    if (uStack_100 != 0) {
      func_080E54C4(&uStack_108,*(undefined4 *)(uStack_104 + 4));
      *(undefined1 **)(uStack_104 + 8) = uStack_104;
      *(undefined4 *)(uStack_104 + 4) = 0;
      *(undefined1 **)(uStack_104 + 0xc) = uStack_104;
      uStack_100 = 0;
    }
    if (uStack_104 != (undefined1 *)0x0) {
      free();
    }
  }
  uStack_108 = 0;
  uStack_104 = (undefined1 *)0x0;
  uStack_100 = uStack_100 & 0xffff0000;
  uStack_fc = 0;
  puStack_f8 = (undefined1 *)((uint)puStack_f8 & 0xffff0000);
  puStack_f4 = (undefined1 *)0x0;
  uStack_f0 = uStack_f0 & 0xffffff00;
  if ((int)*(short *)(param_1 + 0xc) < *(short *)(*(int *)(param_1 + 0x1c) + 0xe) + -0xa0) {
    *(undefined1 *)(param_1 + 0x5d0) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x5d0) = 0;
  }
  if (*(short *)(param_1 + 0xc) == 0) {
    *(undefined1 *)(param_1 + 0x598) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x598) = 1;
  }
  iVar9 = _DAT_080c9d88 + param_1;
  if (*(char *)(iVar9 + 8) == '\0') {
    *(undefined1 *)(param_1 + 0x608) = 0;
    *(undefined1 *)(param_1 + 0x640) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x608) = 1;
    *(undefined1 *)(param_1 + 0x640) = 1;
    *(short *)(_DAT_080c9d8c + param_1) = ((short)*(undefined4 *)(iVar9 + 0x10) + 2) * 8;
    *(short *)(_DAT_080c9d90 + param_1) = (short)*(undefined4 *)(param_1 + 0x648) + -8;
    *(short *)(_DAT_080c9d94 + param_1) = ((short)*(undefined4 *)(iVar9 + 0x10) + 2) * 8;
    *(short *)(_DAT_080c9d98 + param_1) = (short)*(undefined4 *)(param_1 + 0x648) + 8;
  }
  if (*(char *)(_DAT_080c9eac + param_1) != '\0') {
    if (iStack_60 != 0) {
      func_0805E8F0(_DAT_080c9eb0 + param_1);
    }
    piVar19 = *(int **)(_DAT_080c9eb0 + param_1);
    func_0x080d3918(&puStack_ec,piVar19,
                    *(undefined2 *)
                     (*(int *)(param_1 + 0x650) +
                     (uint)*(ushort *)((undefined4 *)(_DAT_080c9eb0 + param_1) + 3) * 4),
                    *(undefined4 *)(*piVar19 + 0x10));
    uStack_104 = *(undefined1 **)(param_1 + 0x664);
    uStack_fc = *(undefined4 *)(param_1 + 0x66c);
    puStack_f8 = *(undefined1 **)(param_1 + 0x670);
    puStack_f4 = *(undefined1 **)(param_1 + 0x674);
    uStack_f0 = *(uint *)(param_1 + 0x678);
    uStack_108 = CONCAT22((short)*(undefined4 *)(param_1 + 0x648),
                          *(undefined2 *)(_DAT_080c9eb4 + param_1));
    uStack_100._2_2_ = (undefined2)((uint)*(undefined4 *)(param_1 + 0x668) >> 0x10);
    uStack_100 = CONCAT22(uStack_100._2_2_,1);
    uVar2 = func_080074C0(param_1 + 0x36c,*(undefined4 *)(param_1 + 0x370));
    uStack_104 = (undefined1 *)CONCAT22(uStack_104._2_2_,uVar2);
    uVar2 = func_08007D4C(param_1 + 0x364,*(undefined4 *)(param_1 + 0x368));
    uStack_104 = (undefined1 *)CONCAT22(uVar2,(undefined2)uStack_104);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
    uVar4 = func_0x08008920(param_1);
    uVar10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      uVar10 = uStack_e8 & 0xffff;
    }
    func_0805E99C(uVar4,puStack_ec,uVar10,&uStack_108);
    piVar19 = (int *)func_0x08008910(param_1);
    puVar11 = puStack_e4;
    iVar9 = func_08007D4C(param_1 + 0x364,*(undefined4 *)(param_1 + 0x368));
    uVar10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      uVar10 = (uint)puStack_e0 & 0xffff;
    }
    func_08008F0C(&uStack_c0,puVar11,iVar9 * 0x20 + _DAT_080c9eb8,uVar10);
    puVar14 = (uint *)piVar19[1];
    if (puVar14 == (uint *)piVar19[3]) {
      puStack_28 = puVar14;
      iStack_84 = 1;
      iStack_88 = (int)puVar14 - *piVar19 >> 4;
      piVar12 = &iStack_88;
      if (iStack_88 == 0) {
        piVar12 = &iStack_84;
      }
      if (iStack_88 + *piVar12 == 0) {
        puVar14 = (uint *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_88 + *piVar12) * 0x10;
        puVar14 = (uint *)malloc(iVar9);
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)func_080D3BC0(iVar9);
        }
      }
      puVar23 = puVar14;
      for (puVar22 = (uint *)*piVar19; puVar22 != puStack_28; puVar22 = puVar22 + 4) {
        if (puVar23 != (uint *)0x0) {
          uVar10 = puVar22[1];
          uVar25 = puVar22[2];
          *puVar23 = *puVar22;
          puVar23[1] = uVar10;
          puVar23[2] = uVar25;
          puVar23[3] = puVar22[3];
        }
        puVar23 = puVar23 + 4;
      }
      iVar20 = iStack_84;
      if (iStack_84 == 1) {
        if (puVar23 != (uint *)0x0) {
          *puVar23 = uStack_c0;
          puVar23[1] = uStack_bc;
          puVar23[2] = uStack_b8;
          puVar23[3] = uStack_b4;
        }
        puVar23 = puVar23 + 4;
      }
      else {
        for (; iVar20 != 0; iVar20 = iVar20 + -1) {
          if (puVar23 != (uint *)0x0) {
            *puVar23 = uStack_c0;
            puVar23[1] = uStack_bc;
            puVar23[2] = uStack_b8;
            puVar23[3] = uStack_b4;
          }
          puVar23 = puVar23 + 4;
        }
      }
      for (iVar20 = *piVar19; iVar20 != piVar19[1]; iVar20 = iVar20 + 0x10) {
      }
      puStack_24 = puVar14;
      if (*piVar19 != 0) {
        free();
      }
      *piVar19 = (int)puStack_24;
      piVar19[1] = (int)puVar23;
      piVar19[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uStack_c0;
        puVar14[1] = uStack_bc;
        puVar14[2] = uStack_b8;
        puVar14[3] = uStack_b4;
      }
      piVar19[1] = piVar19[1] + 0x10;
    }
  }
  if (*(char *)(param_1 + 0x598) != '\0') {
    if (iStack_60 != 0) {
      func_0805E8F0(param_1 + 0x568);
    }
    func_0x080d3918(&puStack_ec,*(int **)(param_1 + 0x568),
                    *(undefined2 *)
                     (*(int *)(_DAT_080ca080 + param_1) + (uint)*(ushort *)(param_1 + 0x574) * 4),
                    *(undefined4 *)(**(int **)(param_1 + 0x568) + 0x10));
    iVar9 = _DAT_080ca084 + param_1;
    uStack_104 = *(undefined1 **)(iVar9 + 4);
    uStack_fc = *(undefined4 *)(iVar9 + 0xc);
    puStack_f8 = *(undefined1 **)(iVar9 + 0x10);
    puStack_f4 = *(undefined1 **)(iVar9 + 0x14);
    uStack_f0 = *(uint *)(iVar9 + 0x18);
    uStack_108 = CONCAT22(*(undefined2 *)(_DAT_080ca08c + param_1),
                          *(undefined2 *)(_DAT_080ca088 + param_1));
    uStack_100._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar9 + 8) >> 0x10);
    uStack_100 = CONCAT22(uStack_100._2_2_,1);
    uVar2 = func_080074C0(param_1 + 900,*(undefined4 *)(param_1 + 0x388));
    uStack_104 = (undefined1 *)CONCAT22(uStack_104._2_2_,uVar2);
    uVar2 = func_08007D4C(param_1 + 0x374,*(undefined4 *)(param_1 + 0x378));
    uStack_104 = (undefined1 *)CONCAT22(uVar2,(undefined2)uStack_104);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
    uVar4 = func_0x08008920(param_1);
    uVar10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      uVar10 = uStack_e8 & 0xffff;
    }
    func_0805E99C(uVar4,puStack_ec,uVar10,&uStack_108);
    piVar19 = (int *)func_0x08008910(param_1);
    puVar11 = puStack_e4;
    iVar9 = func_08007D4C(param_1 + 0x374,*(undefined4 *)(param_1 + 0x378));
    uVar10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      uVar10 = (uint)puStack_e0 & 0xffff;
    }
    func_08008F0C(&uStack_cc,puVar11,iVar9 * 0x20 + _DAT_080ca090,uVar10);
    puVar14 = (uint *)piVar19[1];
    if (puVar14 == (uint *)piVar19[3]) {
      puStack_28 = puVar14;
      iStack_7c = 1;
      iStack_80 = (int)puVar14 - *piVar19 >> 4;
      piVar12 = &iStack_80;
      if (iStack_80 == 0) {
        piVar12 = &iStack_7c;
      }
      if (iStack_80 + *piVar12 == 0) {
        puVar14 = (uint *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_80 + *piVar12) * 0x10;
        puVar14 = (uint *)malloc(iVar9);
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)func_080D3BC0(iVar9);
        }
      }
      puVar23 = puVar14;
      for (puVar22 = (uint *)*piVar19; puVar22 != puStack_28; puVar22 = puVar22 + 4) {
        if (puVar23 != (uint *)0x0) {
          uVar10 = puVar22[1];
          uVar25 = puVar22[2];
          *puVar23 = *puVar22;
          puVar23[1] = uVar10;
          puVar23[2] = uVar25;
          puVar23[3] = puVar22[3];
        }
        puVar23 = puVar23 + 4;
      }
      iVar20 = iStack_7c;
      if (iStack_7c == 1) {
        if (puVar23 != (uint *)0x0) {
          *puVar23 = uStack_cc;
          puVar23[1] = (uint)puStack_c8;
          puVar23[2] = (uint)puStack_c4;
          puVar23[3] = uStack_c0;
        }
        puVar23 = puVar23 + 4;
      }
      else {
        for (; iVar20 != 0; iVar20 = iVar20 + -1) {
          if (puVar23 != (uint *)0x0) {
            *puVar23 = uStack_cc;
            puVar23[1] = (uint)puStack_c8;
            puVar23[2] = (uint)puStack_c4;
            puVar23[3] = uStack_c0;
          }
          puVar23 = puVar23 + 4;
        }
      }
      for (iVar20 = *piVar19; iVar20 != piVar19[1]; iVar20 = iVar20 + 0x10) {
      }
      puStack_24 = puVar14;
      if (*piVar19 != 0) {
        free();
      }
      *piVar19 = (int)puStack_24;
      piVar19[1] = (int)puVar23;
      piVar19[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uStack_cc;
        puVar14[1] = (uint)puStack_c8;
        puVar14[2] = (uint)puStack_c4;
        puVar14[3] = uStack_c0;
      }
      piVar19[1] = piVar19[1] + 0x10;
    }
  }
  if (*(char *)(param_1 + 0x5d0) != '\0') {
    if (iStack_60 != 0) {
      func_0805E8F0(param_1 + 0x5a0);
    }
    func_0x080d3918(&puStack_ec,*(int **)(param_1 + 0x5a0),
                    *(undefined2 *)
                     (*(int *)(_DAT_080ca258 + param_1) + (uint)*(ushort *)(param_1 + 0x5ac) * 4),
                    *(undefined4 *)(**(int **)(param_1 + 0x5a0) + 0x10));
    iVar9 = _DAT_080ca25c + param_1;
    uStack_104 = *(undefined1 **)(iVar9 + 4);
    uStack_fc = *(undefined4 *)(iVar9 + 0xc);
    puStack_f8 = *(undefined1 **)(iVar9 + 0x10);
    puStack_f4 = *(undefined1 **)(iVar9 + 0x14);
    uStack_f0 = *(uint *)(iVar9 + 0x18);
    uStack_108 = CONCAT22(*(undefined2 *)(_DAT_080ca264 + param_1),
                          *(undefined2 *)(_DAT_080ca260 + param_1));
    uStack_100._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar9 + 8) >> 0x10);
    uStack_100 = CONCAT22(uStack_100._2_2_,1);
    uVar2 = func_080074C0(param_1 + 900,*(undefined4 *)(param_1 + 0x388));
    uStack_104 = (undefined1 *)CONCAT22(uStack_104._2_2_,uVar2);
    uVar2 = func_08007D4C(param_1 + 0x37c,*(undefined4 *)(param_1 + 0x380));
    uStack_104 = (undefined1 *)CONCAT22(uVar2,(undefined2)uStack_104);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
    uVar4 = func_0x08008920(param_1);
    uVar10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      uVar10 = uStack_e8 & 0xffff;
    }
    func_0805E99C(uVar4,puStack_ec,uVar10,&uStack_108);
    piVar19 = (int *)func_0x08008910(param_1);
    puVar11 = puStack_e4;
    iVar9 = func_08007D4C(param_1 + 0x37c,*(undefined4 *)(param_1 + 0x380));
    uVar10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      uVar10 = (uint)puStack_e0 & 0xffff;
    }
    func_08008F0C(&uStack_cc,puVar11,iVar9 * 0x20 + _DAT_080ca268,uVar10);
    puVar14 = (uint *)piVar19[1];
    if (puVar14 == (uint *)piVar19[3]) {
      puStack_28 = puVar14;
      iStack_74 = 1;
      iStack_78 = (int)puVar14 - *piVar19 >> 4;
      piVar12 = &iStack_78;
      if (iStack_78 == 0) {
        piVar12 = &iStack_74;
      }
      if (iStack_78 + *piVar12 == 0) {
        puVar14 = (uint *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_78 + *piVar12) * 0x10;
        puVar14 = (uint *)malloc(iVar9);
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)func_080D3BC0(iVar9);
        }
      }
      puVar23 = puVar14;
      for (puVar22 = (uint *)*piVar19; puVar22 != puStack_28; puVar22 = puVar22 + 4) {
        if (puVar23 != (uint *)0x0) {
          uVar10 = puVar22[1];
          uVar25 = puVar22[2];
          *puVar23 = *puVar22;
          puVar23[1] = uVar10;
          puVar23[2] = uVar25;
          puVar23[3] = puVar22[3];
        }
        puVar23 = puVar23 + 4;
      }
      iVar20 = iStack_74;
      if (iStack_74 == 1) {
        if (puVar23 != (uint *)0x0) {
          *puVar23 = uStack_cc;
          puVar23[1] = (uint)puStack_c8;
          puVar23[2] = (uint)puStack_c4;
          puVar23[3] = uStack_c0;
        }
        puVar23 = puVar23 + 4;
      }
      else {
        for (; iVar20 != 0; iVar20 = iVar20 + -1) {
          if (puVar23 != (uint *)0x0) {
            *puVar23 = uStack_cc;
            puVar23[1] = (uint)puStack_c8;
            puVar23[2] = (uint)puStack_c4;
            puVar23[3] = uStack_c0;
          }
          puVar23 = puVar23 + 4;
        }
      }
      for (iVar20 = *piVar19; iVar20 != piVar19[1]; iVar20 = iVar20 + 0x10) {
      }
      puStack_24 = puVar14;
      if (*piVar19 != 0) {
        free();
      }
      *piVar19 = (int)puStack_24;
      piVar19[1] = (int)puVar23;
      piVar19[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uStack_cc;
        puVar14[1] = (uint)puStack_c8;
        puVar14[2] = (uint)puStack_c4;
        puVar14[3] = uStack_c0;
      }
      piVar19[1] = piVar19[1] + 0x10;
    }
  }
  if (*(char *)(param_1 + 0x640) != '\0') {
    func_0805E8F0((undefined4 *)(param_1 + 0x610));
    piVar19 = *(int **)(param_1 + 0x610);
    func_0x080d3918(&puStack_ec,piVar19,
                    *(undefined2 *)
                     (*(int *)(_DAT_080ca42c + param_1) + (uint)*(ushort *)(param_1 + 0x61c) * 4),
                    *(undefined4 *)(*piVar19 + 0x10));
    iVar9 = _DAT_080ca430 + param_1;
    uStack_104 = *(undefined1 **)(iVar9 + 4);
    uStack_fc = *(undefined4 *)(iVar9 + 0xc);
    puStack_f8 = *(undefined1 **)(iVar9 + 0x10);
    puStack_f4 = *(undefined1 **)(iVar9 + 0x14);
    uStack_f0 = *(uint *)(iVar9 + 0x18);
    uStack_108 = CONCAT22(*(undefined2 *)(_DAT_080ca438 + param_1),
                          *(undefined2 *)(_DAT_080ca434 + param_1));
    uStack_100 = *(uint *)(iVar9 + 8) & 0xffff0000;
    uVar2 = func_080074C0(param_1 + 0x39c,*(undefined4 *)(param_1 + 0x3a0));
    uStack_104 = (undefined1 *)CONCAT22(uStack_104._2_2_,uVar2);
    uVar2 = func_08007D4C(param_1 + 0x394,*(undefined4 *)(param_1 + 0x398));
    uStack_104 = (undefined1 *)CONCAT22(uVar2,(undefined2)uStack_104);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
    uVar4 = func_0x08008920(param_1);
    uVar10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      uVar10 = uStack_e8 & 0xffff;
    }
    func_0805E99C(uVar4,puStack_ec,uVar10,&uStack_108);
    piVar19 = (int *)func_0x08008910(param_1);
    puVar11 = puStack_e4;
    iVar9 = func_08007D4C(param_1 + 0x394,*(undefined4 *)(param_1 + 0x398));
    uVar10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      uVar10 = (uint)puStack_e0 & 0xffff;
    }
    func_08008F0C(&uStack_cc,puVar11,iVar9 * 0x20 + _DAT_080ca43c,uVar10);
    puVar14 = (uint *)piVar19[1];
    if (puVar14 == (uint *)piVar19[3]) {
      puStack_28 = puVar14;
      iStack_6c = 1;
      iStack_70 = (int)puVar14 - *piVar19 >> 4;
      piVar12 = &iStack_70;
      if (iStack_70 == 0) {
        piVar12 = &iStack_6c;
      }
      if (iStack_70 + *piVar12 == 0) {
        puVar14 = (uint *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_70 + *piVar12) * 0x10;
        puVar14 = (uint *)malloc(iVar9);
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)func_080D3BC0(iVar9);
        }
      }
      puVar22 = puVar14;
      for (puVar23 = (uint *)*piVar19; puVar23 != puStack_28; puVar23 = puVar23 + 4) {
        if (puVar22 != (uint *)0x0) {
          uVar10 = puVar23[1];
          uVar25 = puVar23[2];
          *puVar22 = *puVar23;
          puVar22[1] = uVar10;
          puVar22[2] = uVar25;
          puVar22[3] = puVar23[3];
        }
        puVar22 = puVar22 + 4;
      }
      iVar20 = iStack_6c;
      if (iStack_6c == 1) {
        if (puVar22 != (uint *)0x0) {
          *puVar22 = uStack_cc;
          puVar22[1] = (uint)puStack_c8;
          puVar22[2] = (uint)puStack_c4;
          puVar22[3] = uStack_c0;
        }
        puVar22 = puVar22 + 4;
      }
      else {
        for (; iVar20 != 0; iVar20 = iVar20 + -1) {
          if (puVar22 != (uint *)0x0) {
            *puVar22 = uStack_cc;
            puVar22[1] = (uint)puStack_c8;
            puVar22[2] = (uint)puStack_c4;
            puVar22[3] = uStack_c0;
          }
          puVar22 = puVar22 + 4;
        }
      }
      for (iVar20 = *piVar19; iVar20 != piVar19[1]; iVar20 = iVar20 + 0x10) {
      }
      puStack_24 = puVar14;
      if (*piVar19 != 0) {
        free();
      }
      *piVar19 = (int)puStack_24;
      piVar19[1] = (int)puVar22;
      piVar19[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uStack_cc;
        puVar14[1] = (uint)puStack_c8;
        puVar14[2] = (uint)puStack_c4;
        puVar14[3] = uStack_c0;
      }
      piVar19[1] = piVar19[1] + 0x10;
    }
  }
  if (*(char *)(param_1 + 0x608) != '\0') {
    func_0805E8F0((undefined4 *)(param_1 + 0x5d8));
    piVar19 = *(int **)(param_1 + 0x5d8);
    func_0x080d3918(&puStack_ec,piVar19,
                    *(undefined2 *)
                     (*(int *)(_DAT_080ca604 + param_1) + (uint)*(ushort *)(param_1 + 0x5e4) * 4),
                    *(undefined4 *)(*piVar19 + 0x10));
    iVar9 = _DAT_080ca608 + param_1;
    uStack_104 = *(undefined1 **)(iVar9 + 4);
    uStack_fc = *(undefined4 *)(iVar9 + 0xc);
    puStack_f8 = *(undefined1 **)(iVar9 + 0x10);
    puStack_f4 = *(undefined1 **)(iVar9 + 0x14);
    uStack_f0 = *(uint *)(iVar9 + 0x18);
    uStack_108 = CONCAT22(*(undefined2 *)(_DAT_080ca610 + param_1),
                          *(undefined2 *)(_DAT_080ca60c + param_1));
    uStack_100 = *(uint *)(iVar9 + 8) & 0xffff0000;
    uVar2 = func_080074C0(param_1 + 0x39c,*(undefined4 *)(param_1 + 0x3a0));
    uStack_104 = (undefined1 *)CONCAT22(uStack_104._2_2_,uVar2);
    uVar2 = func_08007D4C(param_1 + 0x38c,*(undefined4 *)(param_1 + 0x390));
    uStack_104 = (undefined1 *)CONCAT22(uVar2,(undefined2)uStack_104);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
    uVar4 = func_0x08008920(param_1);
    uVar10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      uVar10 = uStack_e8 & 0xffff;
    }
    func_0805E99C(uVar4,puStack_ec,uVar10,&uStack_108);
    piVar19 = (int *)func_0x08008910(param_1);
    puVar11 = puStack_e4;
    iVar9 = func_08007D4C(param_1 + 0x38c,*(undefined4 *)(param_1 + 0x390));
    uVar10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      uVar10 = (uint)puStack_e0 & 0xffff;
    }
    func_08008F0C(&uStack_cc,puVar11,iVar9 * 0x20 + _DAT_080ca614,uVar10);
    puStack_28 = (uint *)piVar19[1];
    if (puStack_28 == (uint *)piVar19[3]) {
      iStack_64 = 1;
      iStack_68 = (int)puStack_28 - *piVar19 >> 4;
      piVar12 = &iStack_68;
      if (iStack_68 == 0) {
        piVar12 = &iStack_64;
      }
      if (iStack_68 + *piVar12 == 0) {
        puVar14 = (uint *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_68 + *piVar12) * 0x10;
        puVar14 = (uint *)malloc(iVar9);
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)func_080D3BC0(iVar9);
        }
      }
      puVar22 = puVar14;
      for (puVar23 = (uint *)*piVar19; puVar23 != puStack_28; puVar23 = puVar23 + 4) {
        if (puVar22 != (uint *)0x0) {
          uVar10 = puVar23[1];
          uVar25 = puVar23[2];
          *puVar22 = *puVar23;
          puVar22[1] = uVar10;
          puVar22[2] = uVar25;
          puVar22[3] = puVar23[3];
        }
        puVar22 = puVar22 + 4;
      }
      iVar20 = iStack_64;
      if (iStack_64 == 1) {
        if (puVar22 != (uint *)0x0) {
          *puVar22 = uStack_cc;
          puVar22[1] = (uint)puStack_c8;
          puVar22[2] = (uint)puStack_c4;
          puVar22[3] = uStack_c0;
        }
        puVar22 = puVar22 + 4;
      }
      else {
        for (; iVar20 != 0; iVar20 = iVar20 + -1) {
          if (puVar22 != (uint *)0x0) {
            *puVar22 = uStack_cc;
            puVar22[1] = (uint)puStack_c8;
            puVar22[2] = (uint)puStack_c4;
            puVar22[3] = uStack_c0;
          }
          puVar22 = puVar22 + 4;
        }
      }
      for (iVar20 = *piVar19; iVar20 != piVar19[1]; iVar20 = iVar20 + 0x10) {
      }
      puStack_24 = puVar14;
      if (*piVar19 != 0) {
        free();
      }
      *piVar19 = (int)puStack_24;
      piVar19[1] = (int)puVar22;
      piVar19[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puStack_28 != (uint *)0x0) {
        *puStack_28 = uStack_cc;
        puStack_28[1] = (uint)puStack_c8;
        puStack_28[2] = (uint)puStack_c4;
        puStack_28[3] = uStack_c0;
      }
      piVar19[1] = piVar19[1] + 0x10;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CA6F4 @ 0x080CA6F4
// =============================================================================
undefined4 func_080CA6F4(void)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*_DAT_080ca704 == '\x17') {
    uVar1 = *_DAT_080ca738;
    while ((uVar1 & 2) == 0) {
      uVar1 = *_DAT_080ca738;
    }
    *_DAT_080ca73c = (short)_DAT_080ca740;
    puVar2 = _DAT_080ca738;
    *_DAT_080ca738 = *_DAT_080ca738 & 0xff;
    uVar1 = 0x9f00;
  }
  else {
    if (*_DAT_080ca704 != -0x61) {
      return in_lr;
    }
    *_DAT_080ca764 = (short)_DAT_080ca768;
    puVar2 = _DAT_080ca76c;
    *_DAT_080ca76c = *_DAT_080ca76c & 0xff;
    uVar1 = 0x1700;
  }
  *puVar2 = uVar1 | *puVar2;
  return in_lr;
}

// =============================================================================
// Function: func_080CA770 @ 0x080CA770
// =============================================================================
undefined8 func_080CA770(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  *param_1 = 0;
  param_1[1] = 99;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[6] = param_2;
  puStack_28 = param_1;
  piVar1 = (int *)func_0x08008910();
  func_08008F0C(&uStack_40,_DAT_080ca7d0,_DAT_080ca7d4,0x1c0);
  puStack_24 = (undefined4 *)piVar1[1];
  if (puStack_24 == (undefined4 *)piVar1[3]) {
    iStack_2c = 1;
    puVar6 = (undefined4 *)*piVar1;
    iStack_30 = (int)puStack_24 - (int)puVar6 >> 4;
    piVar2 = &iStack_30;
    if (iStack_30 == 0) {
      piVar2 = &iStack_2c;
    }
    if (iStack_30 + *piVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      iVar8 = 0;
      puVar4 = puVar3;
    }
    else {
      iVar8 = (iStack_30 + *piVar2) * 0x10;
      puVar3 = (undefined4 *)malloc(iVar8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar1;
      puVar4 = puVar3;
    }
    for (; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar9 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar5 = iStack_2c;
    if (iStack_2c == 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uStack_40;
        puVar3[1] = uStack_3c;
        puVar3[2] = uStack_38;
        puVar3[3] = uStack_34;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uStack_40;
          puVar3[1] = uStack_3c;
          puVar3[2] = uStack_38;
          puVar3[3] = uStack_34;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar1;
    for (iVar5 = iVar7; iVar5 != piVar1[1]; iVar5 = iVar5 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar1 = (int)puVar4;
    piVar1[1] = (int)puVar3;
    piVar1[3] = iVar8 + (int)puVar4;
  }
  else {
    if (puStack_24 != (undefined4 *)0x0) {
      *puStack_24 = uStack_40;
      puStack_24[1] = uStack_3c;
      puStack_24[2] = uStack_38;
      puStack_24[3] = uStack_34;
    }
    piVar1[1] = piVar1[1] + 0x10;
  }
  return CONCAT44(in_lr,puStack_28);
}

// =============================================================================
// Function: func_080CA8B4 @ 0x080CA8B4
// =============================================================================
undefined4 func_080CA8B4(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_1[3] = *(int *)(param_1[6] + 0x10) * 2 + 4;
  param_1[4] = param_4;
  *param_1 = param_2;
  if (param_3 < 100) {
    param_1[1] = param_3;
  }
  else {
    param_1[1] = 99;
  }
  iVar4 = param_1[6];
  uVar1 = func_0x080d0eda(*(undefined4 *)(*(int *)(iVar4 + 8) + _DAT_080ca988),*param_1);
  if (uVar1 < (uint)param_1[1]) {
    param_1[1] = uVar1;
  }
  func_0804E9F4(*(int *)(*(int *)(iVar4 + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 + param_4 * 2,0x2e
                ,1,1,0,0x20);
  func_0804EE30(param_1[5],
                *(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 +
                (param_4 + 2) * 2,0x24,0,0x20);
  func_0804E9F4(*(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 +
                (param_4 + 4) * 2,0x2f,1,1,0,0x20);
  iVar3 = (int)*(short *)(*(int *)(param_1[6] + 0x1c) + 0xc);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = iVar3 + 7;
  }
  iVar2 = iVar3 + 0x100;
  if (iVar2 < 0) {
    iVar2 = iVar3 + 0x107;
  }
  func_08075BC8(*(int *)(param_1[6] + 0x1c),iVar4 >> 3,iVar2 >> 3);
  *(undefined1 *)(param_1 + 2) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_080CA98C @ 0x080CA98C
// =============================================================================
undefined4 func_080CA98C(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = param_1[5];
  uVar2 = func_0x080088d4(param_1[6]);
  if ((uVar2 & 0x40) == 0) {
    uVar2 = func_0x080088d4(param_1[6]);
    if ((uVar2 & 0x80) == 0) {
      uVar2 = func_0x080088d4(param_1[6]);
      if ((uVar2 & 0x10) == 0) {
        uVar2 = func_0x080088d4(param_1[6]);
        if ((uVar2 & 0x20) == 0) goto LAB_080caa1a;
        uVar2 = param_1[5];
        if (uVar2 == 1) {
          iVar3 = param_1[1];
        }
        else if (uVar2 < 0xc) {
          iVar3 = 1;
        }
        else {
          iVar3 = uVar2 - 10;
        }
      }
      else {
        uVar2 = param_1[1];
        if (param_1[5] != uVar2) {
          uVar4 = param_1[5] + 10;
          param_1[5] = uVar4;
          if (uVar2 <= uVar4) {
            param_1[5] = uVar2;
          }
          goto LAB_080caa1a;
        }
        iVar3 = 1;
      }
    }
    else {
      iVar3 = param_1[5];
      param_1[5] = iVar3 + -1;
      if (iVar3 + -1 != 0) goto LAB_080caa1a;
      iVar3 = param_1[1];
    }
  }
  else {
    iVar3 = param_1[5];
    param_1[5] = iVar3 + 1U;
    if (iVar3 + 1U <= (uint)param_1[1]) goto LAB_080caa1a;
    iVar3 = 1;
  }
  param_1[5] = iVar3;
LAB_080caa1a:
  uVar1 = _DAT_080caaf0;
  if (iVar6 != param_1[5]) {
    func_08008EB8(_DAT_080caaf0,
                  *(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 +
                  (param_1[4] + 1) * 2,4);
    func_08008EB8(uVar1,*(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + param_1[3] * 0x40 + 0x18,0x1c
                 );
    func_08008EB8(uVar1,*(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 +
                        0x18,0x1c);
    func_0804EE30(param_1[5],
                  *(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 +
                  (param_1[4] + 2) * 2,0x24,0,0x20);
    func_0804EDB4(param_1[5] * *param_1,
                  *(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + param_1[3] * 0x40 + 0x32,0xa0,0,
                  0x20);
    iVar3 = (int)*(short *)(*(int *)(param_1[6] + 0x1c) + 0xc);
    iVar6 = iVar3;
    if (iVar3 < 0) {
      iVar6 = iVar3 + 7;
    }
    iVar5 = iVar3 + 0x100;
    if (iVar5 < 0) {
      iVar5 = iVar3 + 0x107;
    }
    func_08075BC8(*(int *)(param_1[6] + 0x1c),iVar6 >> 3,iVar5 >> 3);
    func_08008B6C(param_1[6] + 0x18,0xcb);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CAAF4 @ 0x080CAAF4
// =============================================================================
undefined4 func_080CAAF4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = _DAT_080cab9c;
  func_08008EB8(_DAT_080cab9c,
                *(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 +
                param_1[4] * 2,0x10);
  func_08008EB8(uVar1,*(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + param_1[3] * 0x40 + 0x18,0x1c);
  func_08008EB8(uVar1,*(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + (param_1[3] + 1) * 0x40 + 0x18,
                0x1c);
  func_0804EDB4(*param_1,*(int *)(*(int *)(param_1[6] + 0x1c) + 0x18) + param_1[3] * 0x40 + 0x32,
                0xa0,0,0x20);
  iVar4 = (int)*(short *)(*(int *)(param_1[6] + 0x1c) + 0xc);
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar4 + 7;
  }
  iVar3 = iVar4 + 0x100;
  if (iVar3 < 0) {
    iVar3 = iVar4 + 0x107;
  }
  func_08075BC8(*(int *)(param_1[6] + 0x1c),iVar2 >> 3,iVar3 >> 3);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  return in_lr;
}

// =============================================================================
// Function: func_080CABA0 @ 0x080CABA0
// =============================================================================
undefined4 func_080CABA0(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  param_1 = param_1 + 0x348;
  func_08050EBC(param_1,4);
  func_08050EBC(param_1,8);
  func_08050EBC(param_1,1);
  func_08050EBC(param_1,2);
  func_08050EBC(param_1,0x10);
  func_08050EBC(param_1,0x20);
  func_08050D8C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080CABEC @ 0x080CABEC
// =============================================================================
undefined4 func_080CABEC(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  param_1 = param_1 + 0x348;
  func_08050E98(param_1,4);
  func_08050E98(param_1,8);
  func_08050E98(param_1,1);
  func_08050E98(param_1,2);
  func_08050E98(param_1,0x10);
  func_08050E98(param_1,0x20);
  func_08050DC8(param_1,param_2,0,0);
  return in_lr;
}

// =============================================================================
// Function: func_080CAC7C @ 0x080CAC7C
// =============================================================================
undefined8
func_080CAC7C(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 in_lr;
  undefined1 auStack_a0 [48];
  undefined2 uStack_70;
  undefined2 uStack_6e;
  int *piStack_6c;
  int iStack_68;
  ushort uStack_60;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_28;
  
  func_0805E6CC(auStack_a0);
  uStack_70 = 0;
  uStack_6e = 0;
  func_0805E824(&piStack_6c,auStack_a0,param_3,0x100);
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x080d3918(auStack_38,piStack_6c,*(undefined2 *)(iStack_68 + (uint)uStack_60 * 4),
                  *(undefined4 *)(*piStack_6c + 0x10));
  param_1[1] = uStack_30;
  param_1[2] = uStack_28;
  *param_1 = param_4;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CADB4 @ 0x080CADB4
// =============================================================================
undefined8 func_080CADB4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  param_1[0x84] = _DAT_080cadec;
  *param_1 = param_2;
  param_1[2] = 0;
  iVar1 = malloc(0xc);
  if (iVar1 == 0) {
    iVar1 = func_080D3BC0(0xc);
  }
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  param_1[2] = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CADF0 @ 0x080CADF0
// =============================================================================
undefined4 func_080CADF0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  undefined4 *puStack_18;
  
  *(undefined4 *)(param_1 + 0x210) = _DAT_080cae0c;
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = puVar1;
  puVar4 = (undefined4 *)*puVar1;
  puStack_18 = (undefined4 *)*puVar1;
  while ((int)(-((uint)puVar4 ^ (uint)puVar2) | (uint)puVar4 ^ (uint)puVar2) < 0) {
    iVar3 = puStack_18[2];
    if (iVar3 != 0) {
      func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 8) + 0xc));
    }
    puVar2 = (undefined4 *)*puStack_18;
    puVar4 = puVar1;
    puStack_18 = puVar2;
  }
  func_080E586C(param_1 + 4);
  if (*(int *)(param_1 + 8) != 0) {
    free();
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CAE60 @ 0x080CAE60
// =============================================================================
undefined4
func_080CAE60(int *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
             undefined4 param_5,undefined2 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  uVar1 = func_080005D4(0x20);
  iVar2 = func_0804EA58(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar3 = param_1[2];
  piVar4 = (int *)malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)func_080D3BC0(0xc);
  }
  if (piVar4 != (int *)0xfffffff8) {
    piVar4[2] = iVar2;
  }
  puVar5 = *(undefined4 **)(iVar3 + 4);
  *piVar4 = iVar3;
  piVar4[1] = (int)puVar5;
  *puVar5 = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  func_0x080d3914(*param_1,iVar2,*(undefined4 *)(*(int *)(*param_1 + 8) + 0x10));
  return in_lr;
}

// =============================================================================
// Function: func_080CAEEC @ 0x080CAEEC
// =============================================================================
undefined4
func_080CAEEC(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
             undefined2 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  uVar1 = func_080005D4(0x1c);
  iVar2 = func_0804EE64(uVar1,param_2,param_3,param_4,param_5,param_6);
  iVar3 = param_1[2];
  piVar4 = (int *)malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)func_080D3BC0(0xc);
  }
  if (piVar4 != (int *)0xfffffff8) {
    piVar4[2] = iVar2;
  }
  puVar5 = *(undefined4 **)(iVar3 + 4);
  *piVar4 = iVar3;
  piVar4[1] = (int)puVar5;
  *puVar5 = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  func_0x080d3914(*param_1,iVar2,*(undefined4 *)(*(int *)(*param_1 + 8) + 0x10));
  return in_lr;
}

// =============================================================================
// Function: func_080CAF6C @ 0x080CAF6C
// =============================================================================
undefined4 func_080CAF6C(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  undefined4 *puStack_18;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puStack_18 = (undefined4 *)*puVar1;
  while (uVar3 = (uint)puStack_18 ^ (uint)puVar1, (int)(-uVar3 | uVar3) < 0) {
    puVar4 = (uint *)puStack_18[2];
    if ((int)(-*puVar4 | *puVar4) < 0) {
      puStack_18 = (undefined4 *)*puStack_18;
    }
    else {
      func_0x080d3914(puVar4,3,*(undefined4 *)(puVar4[2] + 0xc));
      puVar5 = (undefined4 *)*puStack_18;
      puVar2 = (undefined4 *)puStack_18[1];
      *puVar2 = puVar5;
      puVar5[1] = puVar2;
      free();
      puStack_18 = puVar5;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CAFC4 @ 0x080CAFC4
// =============================================================================
undefined8
func_080CAFC4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
             undefined1 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  undefined1 *puStack_24;
  
  func_080CADB4(param_1,param_3);
  *(undefined4 *)(param_1 + 0x210) = _DAT_080cb08c;
  func_0x080cac70(&uStack_34);
  puStack_28 = (uint *)(param_1 + 0x214);
  *puStack_28 = 0;
  if (param_4 < 9) {
    puVar1 = (undefined4 *)(param_1 + 0x218);
    for (uVar2 = param_4; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uStack_34;
        puVar1[1] = uStack_30;
        puVar1[2] = uStack_2c;
      }
      puVar1 = puVar1 + 3;
    }
    *puStack_28 = param_4;
  }
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *(undefined1 *)(param_1 + 0x27c) = param_6;
  puStack_24 = (undefined1 *)&uStack_34;
  func_0x080cac70(param_1 + 0x280);
  uVar2 = strlen(param_5);
  if (8 < uVar2) {
    uVar2 = 8;
  }
  memcpy(param_1 + 0x28c,param_5,uVar2);
  *(undefined1 *)(param_1 + 0x28c + uVar2) = 0;
  *(uint *)(param_1 + 0x298) = param_4;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CB090 @ 0x080CB090
// =============================================================================
undefined4 func_080CB090(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  iVar4 = 0x13;
  iVar6 = _DAT_080cb1dc;
  iVar8 = _DAT_080cb1d8;
  do {
    func_08008EB8(_DAT_080cb1e0,iVar6,0x1c);
    func_08008EB8(_DAT_080cb1e4,iVar8,0x20);
    iVar8 = iVar8 + 0x40;
    iVar6 = iVar6 + 0x40;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  uStack_3c = *_DAT_080cb1e8;
  if (*(char *)(param_1 + 0x27c) != '\0') {
    func_080CAE60(param_1,(uStack_3c >> 8 & 0xff) * 0x40 + (uStack_3c & 0xff) * 2 + _DAT_080cb1dc,
                  0x1c,2,2,1,0x20);
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    do {
      uStack_3c = *(uint *)(uVar5 * 4 + _DAT_080cb1ec);
      func_080CAE60(param_1,(uStack_3c >> 8 & 0xff) * 0x40 + (uStack_3c & 0xff) * 2 + _DAT_080cb1dc,
                    0x1c,2,2,1,0x20);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x214));
  }
  pcVar10 = (char *)(param_1 + 0x28c);
  if (*pcVar10 != '\0') {
    uStack_38 = 0x20008;
    iVar8 = param_1 + 0x10;
    func_0804E7A0(0x20008,iVar8,0);
    iVar6 = strlen(pcVar10);
    uStack_34 = 0x20008;
    func_0804E958(0x20008,iVar8,iVar6 * -8 + 0x40,0,pcVar10,0,1);
    piVar9 = *(int **)(param_1 + 0x278);
    func_08008F0C(&uStack_4c,iVar8,_DAT_080cb1f0,0x200);
    puVar2 = (undefined4 *)piVar9[1];
    if (puVar2 == (undefined4 *)piVar9[3]) {
      iStack_2c = 1;
      puVar3 = (undefined4 *)*piVar9;
      iStack_30 = (int)puVar2 - (int)puVar3 >> 4;
      piVar1 = &iStack_30;
      if (iStack_30 == 0) {
        piVar1 = &iStack_2c;
      }
      puStack_28 = puVar2;
      if (iStack_30 + *piVar1 == 0) {
        puVar2 = (undefined4 *)0x0;
        iVar6 = 0;
        puStack_24 = puVar2;
      }
      else {
        iVar6 = (iStack_30 + *piVar1) * 0x10;
        puVar2 = (undefined4 *)malloc(iVar6);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)func_080D3BC0(iVar6);
        }
        puVar3 = (undefined4 *)*piVar9;
        puStack_24 = puVar2;
      }
      for (; puVar3 != puStack_28; puVar3 = puVar3 + 4) {
        if (puVar2 != (undefined4 *)0x0) {
          uVar7 = puVar3[1];
          uVar11 = puVar3[2];
          *puVar2 = *puVar3;
          puVar2[1] = uVar7;
          puVar2[2] = uVar11;
          puVar2[3] = puVar3[3];
        }
        puVar2 = puVar2 + 4;
      }
      iVar8 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uStack_4c;
          puVar2[1] = uStack_48;
          puVar2[2] = uStack_44;
          puVar2[3] = uStack_40;
        }
        puVar2 = puVar2 + 4;
      }
      else {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = uStack_4c;
            puVar2[1] = uStack_48;
            puVar2[2] = uStack_44;
            puVar2[3] = uStack_40;
          }
          puVar2 = puVar2 + 4;
        }
      }
      iVar4 = *piVar9;
      for (iVar8 = iVar4; iVar8 != piVar9[1]; iVar8 = iVar8 + 0x10) {
      }
      if (iVar4 != 0) {
        free(iVar4);
      }
      *piVar9 = (int)puStack_24;
      piVar9[1] = (int)puVar2;
      piVar9[3] = (int)puStack_24 + iVar6;
    }
    else {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = uStack_4c;
        puVar2[1] = uStack_48;
        puVar2[2] = uStack_44;
        puVar2[3] = uStack_40;
      }
      piVar9[1] = piVar9[1] + 0x10;
    }
    func_080CAE60(param_1,_DAT_080cb2e4,0x58,8,2,0,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CB304 @ 0x080CB304
// =============================================================================
undefined4 func_080CB304(int param_1,int param_2,undefined4 param_3,undefined2 param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  
  iVar8 = param_2 * 0xc + param_1;
  iStack_40 = param_1;
  iStack_28 = param_2;
  func_0x080cad18(iVar8 + 0x218,param_3,param_4,param_5);
  piVar9 = *(int **)(iStack_40 + 0x278);
  func_08008F0C(&uStack_64,*(undefined4 *)(iVar8 + 0x21c),iStack_28 * 0x80 + _DAT_080cb390,0x80);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_50 = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_54 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_54;
    if (iStack_54 == 0) {
      piVar2 = &iStack_50;
    }
    puStack_24 = puVar5;
    if (iStack_54 + *piVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
      iVar8 = 0;
    }
    else {
      iVar8 = (iStack_54 + *piVar2) * 0x10;
      puVar5 = (undefined4 *)malloc(iVar8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
    }
    iStack_38 = iStack_28 << 1;
    iStack_2c = iStack_28 << 5;
    iStack_34 = iStack_28 << 2;
    puStack_30 = &uStack_44;
    uStack_3c = iStack_28 + 3;
    puVar3 = puVar5;
    for (; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar4 = iStack_50;
    if (iStack_50 == 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uStack_64;
        puVar3[1] = uStack_60;
        puVar3[2] = uStack_5c;
        puVar3[3] = uStack_58;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uStack_64;
          puVar3[1] = uStack_60;
          puVar3[2] = uStack_5c;
          puVar3[3] = uStack_58;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar4 = iVar7; iVar4 != piVar9[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puVar5;
    piVar9[1] = (int)puVar3;
    piVar9[3] = iVar8 + (int)puVar5;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_64;
      puVar5[1] = uStack_60;
      puVar5[2] = uStack_5c;
      puVar5[3] = uStack_58;
    }
    piVar9[1] = piVar9[1] + 0x10;
    iStack_2c = iStack_28 << 5;
    iStack_34 = iStack_28 << 2;
    puStack_30 = &uStack_44;
    uStack_3c = iStack_28 + 3;
    iStack_38 = param_2 * 2;
  }
  piVar9 = *(int **)(iStack_40 + 0x278);
  func_08008F0C(&uStack_64,*(undefined4 *)((iStack_38 + iStack_28) * 4 + iStack_40 + 0x220),
                iStack_2c + _DAT_080cb4d0,0x20);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_48 = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_4c = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar2 = &iStack_48;
    }
    if (iStack_4c + *piVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      iVar8 = 0;
      puStack_24 = puVar3;
    }
    else {
      iVar8 = (iStack_4c + *piVar2) * 0x10;
      puVar3 = (undefined4 *)malloc(iVar8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
      puStack_24 = puVar3;
    }
    for (; puVar6 != puVar5; puVar6 = puVar6 + 4) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar4 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uStack_64;
        puVar3[1] = uStack_60;
        puVar3[2] = uStack_5c;
        puVar3[3] = uStack_58;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uStack_64;
          puVar3[1] = uStack_60;
          puVar3[2] = uStack_5c;
          puVar3[3] = uStack_58;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar4 = iVar7; iVar4 != piVar9[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar3;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_64;
      puVar5[1] = uStack_60;
      puVar5[2] = uStack_5c;
      puVar5[3] = uStack_58;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uStack_44 = *(uint *)(iStack_34 + _DAT_080cb62c);
  func_080CAE60(iStack_40,
                (uint)*(byte *)((int)puStack_30 + 1) * 0x40 + (uStack_44 & 0xff) * 2 + _DAT_080cb630
                ,iStack_34 + 0x34U & 0xffff,2,2,uStack_3c & 0xffff,0x20);
  puVar1 = puStack_30;
  func_080CAE60(iStack_40,
                (uint)*(byte *)((int)puStack_30 + 1) * 0x40 + (uStack_44 & 0xff) * 2 + _DAT_080cb634
                ,0x54,2,1,0,0x20);
  if (1 < param_5) {
    func_080CAEEC(iStack_40,param_5,
                  (uint)*(byte *)((int)puVar1 + 1) * 0x40 + (uint)(byte)*puVar1 * 2 + _DAT_080cb638,
                  0x20,0,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CB63C @ 0x080CB63C
// =============================================================================
void func_080CB63C(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  uint *puStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  
  iStack_3c = param_1;
  uStack_38 = param_4;
  func_0x080cada0(param_2 * 0xc + param_1 + 0x218,param_3,param_4,param_5);
  piVar9 = *(int **)(iStack_3c + 0x278);
  func_08008F0C(&uStack_60,param_3,param_2 * 0x80 + _DAT_080cb6bc,0x80);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_4c = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_50 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_50;
    if (iStack_50 == 0) {
      piVar2 = &iStack_4c;
    }
    puStack_24 = puVar5;
    if (iStack_50 + *piVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
      iVar8 = 0;
    }
    else {
      iVar8 = (iStack_50 + *piVar2) * 0x10;
      puVar5 = (undefined4 *)malloc(iVar8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
    }
    iStack_28 = param_2 << 5;
    iStack_30 = param_2 << 2;
    puStack_2c = &uStack_40;
    uStack_34 = param_2 + 3;
    puVar3 = puVar5;
    for (; puVar6 != puStack_24; puVar6 = puVar6 + 4) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar4 = iStack_4c;
    if (iStack_4c == 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uStack_60;
        puVar3[1] = uStack_5c;
        puVar3[2] = uStack_58;
        puVar3[3] = uStack_54;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uStack_60;
          puVar3[1] = uStack_5c;
          puVar3[2] = uStack_58;
          puVar3[3] = uStack_54;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar4 = iVar7; iVar4 != piVar9[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puVar5;
    piVar9[1] = (int)puVar3;
    piVar9[3] = iVar8 + (int)puVar5;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_60;
      puVar5[1] = uStack_5c;
      puVar5[2] = uStack_58;
      puVar5[3] = uStack_54;
    }
    piVar9[1] = piVar9[1] + 0x10;
    iStack_28 = param_2 << 5;
    iStack_30 = param_2 << 2;
    puStack_2c = &uStack_40;
    uStack_34 = param_2 + 3;
  }
  piVar9 = *(int **)(iStack_3c + 0x278);
  func_08008F0C(&uStack_60,uStack_38,iStack_28 + _DAT_080cb7dc,0x20);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_44 = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_48 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_48;
    if (iStack_48 == 0) {
      piVar2 = &iStack_44;
    }
    if (iStack_48 + *piVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      iVar8 = 0;
      puStack_24 = puVar3;
    }
    else {
      iVar8 = (iStack_48 + *piVar2) * 0x10;
      puVar3 = (undefined4 *)malloc(iVar8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
      puStack_24 = puVar3;
    }
    for (; puVar6 != puVar5; puVar6 = puVar6 + 4) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = puVar6[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar4 = iStack_44;
    if (iStack_44 == 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uStack_60;
        puVar3[1] = uStack_5c;
        puVar3[2] = uStack_58;
        puVar3[3] = uStack_54;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uStack_60;
          puVar3[1] = uStack_5c;
          puVar3[2] = uStack_58;
          puVar3[3] = uStack_54;
        }
        puVar3 = puVar3 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar4 = iVar7; iVar4 != piVar9[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar3;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_60;
      puVar5[1] = uStack_5c;
      puVar5[2] = uStack_58;
      puVar5[3] = uStack_54;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uStack_40 = *(uint *)(iStack_30 + _DAT_080cb938);
  func_080CAE60(iStack_3c,
                (uint)*(byte *)((int)puStack_2c + 1) * 0x40 + (uStack_40 & 0xff) * 2 + _DAT_080cb93c
                ,iStack_30 + 0x34U & 0xffff,2,2,uStack_34 & 0xffff,0x20);
  puVar1 = puStack_2c;
  func_080CAE60(iStack_3c,
                (uint)*(byte *)((int)puStack_2c + 1) * 0x40 + (uStack_40 & 0xff) * 2 + _DAT_080cb940
                ,0x54,2,1,0,0x20);
  if (1 < param_5) {
    func_080CAEEC(iStack_3c,param_5,
                  (uint)*(byte *)((int)puVar1 + 1) * 0x40 + (uint)(byte)*puVar1 * 2 + _DAT_080cb944,
                  0x20,0,0x20);
  }
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080CBAF0 @ 0x080CBAF0
// =============================================================================
undefined4 func_080CBAF0(int param_1,undefined4 param_2,undefined2 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  func_0x080cad18(param_1 + 0x280,param_2,param_3);
  piVar9 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_50,*(undefined4 *)(param_1 + 0x284),_DAT_080cbb4c,0x80);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_3c = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_40 = (int)puVar5 - (int)puVar6 >> 4;
    piVar1 = &iStack_40;
    if (iStack_40 == 0) {
      piVar1 = &iStack_3c;
    }
    puStack_28 = puVar5;
    if (iStack_40 + *piVar1 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar8 = 0;
    }
    else {
      iVar8 = (iStack_40 + *piVar1) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar8);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
    }
    puStack_2c = &uStack_30;
    puVar5 = puStack_24;
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar4;
        puVar5[2] = uVar10;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar2 = iStack_3c;
    if (iStack_3c == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_50;
        puVar5[1] = uStack_4c;
        puVar5[2] = uStack_48;
        puVar5[3] = uStack_44;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_50;
          puVar5[1] = uStack_4c;
          puVar5[2] = uStack_48;
          puVar5[3] = uStack_44;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar2 = iVar7; iVar2 != piVar9[1]; iVar2 = iVar2 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar5;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_50;
      puVar5[1] = uStack_4c;
      puVar5[2] = uStack_48;
      puVar5[3] = uStack_44;
    }
    piVar9[1] = piVar9[1] + 0x10;
    puStack_2c = &uStack_30;
  }
  piVar9 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_50,*(undefined4 *)(param_1 + 0x288),_DAT_080cbc60,0x20);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_34 = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_38 = (int)puVar5 - (int)puVar6 >> 4;
    piVar1 = &iStack_38;
    if (iStack_38 == 0) {
      piVar1 = &iStack_34;
    }
    puStack_28 = puVar5;
    if (iStack_38 + *piVar1 == 0) {
      puVar5 = (undefined4 *)0x0;
      iVar8 = 0;
      puStack_24 = puVar5;
    }
    else {
      iVar8 = (iStack_38 + *piVar1) * 0x10;
      puVar5 = (undefined4 *)malloc(iVar8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
      puStack_24 = puVar5;
    }
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar4;
        puVar5[2] = uVar10;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar2 = iStack_34;
    if (iStack_34 == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_50;
        puVar5[1] = uStack_4c;
        puVar5[2] = uStack_48;
        puVar5[3] = uStack_44;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_50;
          puVar5[1] = uStack_4c;
          puVar5[2] = uStack_48;
          puVar5[3] = uStack_44;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar2 = iVar7; iVar2 != piVar9[1]; iVar2 = iVar2 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar5;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_50;
      puVar5[1] = uStack_4c;
      puVar5[2] = uStack_48;
      puVar5[3] = uStack_44;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uStack_30 = *_DAT_080cbdc4;
  func_080CAE60(param_1,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (uStack_30 & 0xff) * 2 + _DAT_080cbdc8,0x30,2,2,2,0x20);
  func_080CAE60(param_1,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (uStack_30 & 0xff) * 2 + _DAT_080cbdcc,0x54,2,1,0,0x20);
  uVar3 = func_0x080cad14(param_1 + 0x280);
  if (1 < uVar3) {
    uVar4 = func_0x080cad14(param_1 + 0x280);
    func_080CAEEC(param_1,uVar4,
                  (uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                  (uint)(byte)*puStack_2c * 2 + _DAT_080cbdd0,0x20,0,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CBDD4 @ 0x080CBDD4
// =============================================================================
undefined4 func_080CBDD4(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  func_0x080cada0(param_1 + 0x280);
  piVar9 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_50,*(undefined4 *)(param_1 + 0x284),_DAT_080cbe2c,0x80);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_3c = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_40 = (int)puVar5 - (int)puVar6 >> 4;
    piVar1 = &iStack_40;
    if (iStack_40 == 0) {
      piVar1 = &iStack_3c;
    }
    puStack_28 = puVar5;
    if (iStack_40 + *piVar1 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar8 = 0;
    }
    else {
      iVar8 = (iStack_40 + *piVar1) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar8);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
    }
    puStack_2c = &uStack_30;
    puVar5 = puStack_24;
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar4;
        puVar5[2] = uVar10;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar2 = iStack_3c;
    if (iStack_3c == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_50;
        puVar5[1] = uStack_4c;
        puVar5[2] = uStack_48;
        puVar5[3] = uStack_44;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_50;
          puVar5[1] = uStack_4c;
          puVar5[2] = uStack_48;
          puVar5[3] = uStack_44;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar2 = iVar7; iVar2 != piVar9[1]; iVar2 = iVar2 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar5;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_50;
      puVar5[1] = uStack_4c;
      puVar5[2] = uStack_48;
      puVar5[3] = uStack_44;
    }
    piVar9[1] = piVar9[1] + 0x10;
    puStack_2c = &uStack_30;
  }
  piVar9 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_50,*(undefined4 *)(param_1 + 0x288),_DAT_080cbf40,0x20);
  puVar5 = (undefined4 *)piVar9[1];
  if (puVar5 == (undefined4 *)piVar9[3]) {
    iStack_34 = 1;
    puVar6 = (undefined4 *)*piVar9;
    iStack_38 = (int)puVar5 - (int)puVar6 >> 4;
    piVar1 = &iStack_38;
    if (iStack_38 == 0) {
      piVar1 = &iStack_34;
    }
    puStack_28 = puVar5;
    if (iStack_38 + *piVar1 == 0) {
      puVar5 = (undefined4 *)0x0;
      iVar8 = 0;
      puStack_24 = puVar5;
    }
    else {
      iVar8 = (iStack_38 + *piVar1) * 0x10;
      puVar5 = (undefined4 *)malloc(iVar8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)func_080D3BC0(iVar8);
      }
      puVar6 = (undefined4 *)*piVar9;
      puStack_24 = puVar5;
    }
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar4;
        puVar5[2] = uVar10;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar2 = iStack_34;
    if (iStack_34 == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_50;
        puVar5[1] = uStack_4c;
        puVar5[2] = uStack_48;
        puVar5[3] = uStack_44;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_50;
          puVar5[1] = uStack_4c;
          puVar5[2] = uStack_48;
          puVar5[3] = uStack_44;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar9;
    for (iVar2 = iVar7; iVar2 != piVar9[1]; iVar2 = iVar2 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar5;
    piVar9[3] = (int)puStack_24 + iVar8;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_50;
      puVar5[1] = uStack_4c;
      puVar5[2] = uStack_48;
      puVar5[3] = uStack_44;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uStack_30 = *_DAT_080cc0a4;
  func_080CAE60(param_1,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (uStack_30 & 0xff) * 2 + _DAT_080cc0a8,0x30,2,2,2,0x20);
  func_080CAE60(param_1,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (uStack_30 & 0xff) * 2 + _DAT_080cc0ac,0x54,2,1,0,0x20);
  uVar3 = func_0x080cad14(param_1 + 0x280);
  if (1 < uVar3) {
    uVar4 = func_0x080cad14(param_1 + 0x280);
    func_080CAEEC(param_1,uVar4,
                  (uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                  (uint)(byte)*puStack_2c * 2 + _DAT_080cc0b0,0x20,0,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CC0B4 @ 0x080CC0B4
// =============================================================================
undefined4 func_080CC0B4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  func_0x080cada8(param_1 + 0x280);
  uVar1 = *_DAT_080cc128;
  func_080CAE60(param_1,(uVar1 >> 8 & 0xff) * 0x40 + (uVar1 & 0xff) * 2 + _DAT_080cc12c,0x54,2,2,0,
                0x20);
  func_080CAE60(param_1,(uVar1 >> 8 & 0xff) * 0x40 + (uVar1 & 0xff) * 2 + _DAT_080cc130,0x54,2,1,0,
                0x20);
  return in_lr;
}

// =============================================================================
// Function: func_080CC150 @ 0x080CC150
// =============================================================================
undefined4 func_080CC150(void)

{
  undefined4 in_lr;
  
  func_080CAF6C();
  return in_lr;
}

// =============================================================================
// Function: func_080CC15C @ 0x080CC15C
// =============================================================================
undefined8
func_080CC15C(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
             char param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 *puStack_24;
  
  uStack_28 = param_4;
  func_080CADB4(param_1,param_3);
  *(undefined4 *)(param_1 + 0x210) = _DAT_080cc30c;
  func_0x080cac70(&uStack_34);
  *(uint *)(param_1 + 0x214) = 0;
  if (uStack_28 < 9) {
    puVar2 = (undefined4 *)(param_1 + 0x218);
    for (uVar3 = uStack_28; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = uStack_34;
        puVar2[1] = uStack_30;
        puVar2[2] = uStack_2c;
      }
      puVar2 = puVar2 + 3;
    }
    *(uint *)(param_1 + 0x214) = uStack_28;
  }
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *(char *)(param_1 + 0x27c) = param_6;
  puStack_24 = (undefined1 *)&uStack_34;
  func_0x080cac70(param_1 + 0x280);
  uVar3 = strlen(param_5);
  if (8 < uVar3) {
    uVar3 = 8;
  }
  memcpy(param_1 + 0x28c,param_5,uVar3);
  *(undefined1 *)(param_1 + 0x28c + uVar3) = 0;
  *(uint *)(param_1 + 0x298) = uStack_28;
  func_08007874(param_1 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  func_0x08007128(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  iVar4 = param_1 + 0x2ac;
  iVar5 = 7;
  do {
    func_08007874(iVar4);
    *(undefined4 *)(iVar4 + 4) = 0;
    iVar4 = iVar4 + 8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  iVar4 = param_1 + 0x2ec;
  iVar5 = 7;
  do {
    func_0x08007128(iVar4);
    *(undefined4 *)(iVar4 + 4) = 0;
    iVar4 = iVar4 + 8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x2b0);
  do {
    iVar4 = uVar3 * 8 + param_1 + 0x2ac;
    func_08007C28(iVar4,*puVar2);
    uVar1 = func_08007B54(iVar4,2);
    *puVar2 = uVar1;
    iVar4 = uVar3 * 8 + param_1 + 0x2ec;
    func_0x080073e0(iVar4,puVar2[0x10]);
    uVar1 = func_0800736C(iVar4);
    puVar2[0x10] = uVar1;
    puVar2 = puVar2 + 2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (param_6 != '\0') {
    func_08007C28(param_1 + 0x29c,*(undefined4 *)(param_1 + 0x2a0));
    uVar1 = func_08007B54(param_1 + 0x29c,2);
    *(undefined4 *)(param_1 + 0x2a0) = uVar1;
    func_0x080073e0(param_1 + 0x2a4,*(undefined4 *)(param_1 + 0x2a8));
    uVar1 = func_0800736C(param_1 + 0x2a4);
    *(undefined4 *)(param_1 + 0x2a8) = uVar1;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CC310 @ 0x080CC310
// =============================================================================
undefined4 func_080CC310(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 in_lr;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  iVar7 = 0x13;
  iVar8 = _DAT_080cc478;
  iVar10 = _DAT_080cc474;
  do {
    func_08008EB8(_DAT_080cc47c,iVar8,0x1c);
    func_08008EB8(_DAT_080cc480,iVar10,0x20);
    iVar10 = iVar10 + 0x40;
    iVar8 = iVar8 + 0x40;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  uVar1 = *_DAT_080cc484 + 0xf & 0xff;
  uVar3 = *_DAT_080cc484 & _DAT_080cc488;
  uStack_3c = uVar3 | uVar1;
  if (*(char *)(param_1 + 0x27c) != '\0') {
    func_080CAE60(param_1,((uVar3 & 0xff00) >> 8) * 0x40 +
                          (uVar3 & 0xff | uVar1) * 2 + _DAT_080cc48c,0x1c,2,2,1,0x20);
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    do {
      uVar6 = *(uint *)(uVar1 * 4 + _DAT_080cc490);
      uVar3 = uVar6 + 0xf & 0xff;
      uVar6 = uVar6 & _DAT_080cc488;
      uStack_3c = uVar6 | uVar3;
      func_080CAE60(param_1,((uVar6 & 0xff00) >> 8) * 0x40 +
                            (uVar6 & 0xff | uVar3) * 2 + _DAT_080cc48c,0x1c,2,2,1,0x20);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x214));
  }
  pcVar12 = (char *)(param_1 + 0x28c);
  if (*pcVar12 != '\0') {
    uStack_38 = 0x20008;
    iVar10 = param_1 + 0x10;
    func_0804E7A0(0x20008,iVar10,0);
    iVar8 = strlen(pcVar12);
    uStack_34 = 0x20008;
    func_0804E958(0x20008,iVar10,iVar8 * -8 + 0x40,0,pcVar12,0,1);
    piVar11 = *(int **)(param_1 + 0x278);
    func_08008F0C(&uStack_4c,iVar10,_DAT_080cc494,0x200);
    puVar4 = (undefined4 *)piVar11[1];
    if (puVar4 == (undefined4 *)piVar11[3]) {
      iStack_2c = 1;
      puVar5 = (undefined4 *)*piVar11;
      iStack_30 = (int)puVar4 - (int)puVar5 >> 4;
      piVar2 = &iStack_30;
      if (iStack_30 == 0) {
        piVar2 = &iStack_2c;
      }
      puStack_28 = puVar4;
      if (iStack_30 + *piVar2 == 0) {
        puVar4 = (undefined4 *)0x0;
        iVar8 = 0;
        puStack_24 = puVar4;
      }
      else {
        iVar8 = (iStack_30 + *piVar2) * 0x10;
        puVar4 = (undefined4 *)malloc(iVar8);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)func_080D3BC0(iVar8);
        }
        puVar5 = (undefined4 *)*piVar11;
        puStack_24 = puVar4;
      }
      for (; puVar5 != puStack_28; puVar5 = puVar5 + 4) {
        if (puVar4 != (undefined4 *)0x0) {
          uVar9 = puVar5[1];
          uVar13 = puVar5[2];
          *puVar4 = *puVar5;
          puVar4[1] = uVar9;
          puVar4[2] = uVar13;
          puVar4[3] = puVar5[3];
        }
        puVar4 = puVar4 + 4;
      }
      iVar10 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = uStack_4c;
          puVar4[1] = uStack_48;
          puVar4[2] = uStack_44;
          puVar4[3] = uStack_40;
        }
        puVar4 = puVar4 + 4;
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = uStack_4c;
            puVar4[1] = uStack_48;
            puVar4[2] = uStack_44;
            puVar4[3] = uStack_40;
          }
          puVar4 = puVar4 + 4;
        }
      }
      iVar7 = *piVar11;
      for (iVar10 = iVar7; iVar10 != piVar11[1]; iVar10 = iVar10 + 0x10) {
      }
      if (iVar7 != 0) {
        free(iVar7);
      }
      *piVar11 = (int)puStack_24;
      piVar11[1] = (int)puVar4;
      piVar11[3] = (int)puStack_24 + iVar8;
    }
    else {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uStack_4c;
        puVar4[1] = uStack_48;
        puVar4[2] = uStack_44;
        puVar4[3] = uStack_40;
      }
      piVar11[1] = piVar11[1] + 0x10;
    }
    func_080CAE60(param_1,_DAT_080cc588,0x68,8,2,0,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CC58C @ 0x080CC58C
// =============================================================================
undefined4 func_080CC58C(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 in_lr;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  byte *pbStack_30;
  uint uStack_2c;
  uint *puStack_28;
  int iStack_24;
  
  pbStack_30 = param_2;
  func_080CAF6C();
  uStack_2c = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    puStack_28 = (uint *)(param_1 + 0x214);
    puVar2 = (undefined4 *)(param_1 + 0x2b0);
    piVar9 = (int *)(param_1 + 0x21c);
    do {
      iStack_24 = 0;
      if ((*piVar9 == 0) || (piVar9[1] == 0)) {
        iStack_24 = 1;
      }
      if (iStack_24 == 0) {
        uVar7 = *(uint *)(uStack_2c * 4 + _DAT_080cc700);
        uVar8 = uVar7 & _DAT_080cc704;
        iVar6 = uStack_2c * 8;
        uVar3 = func_08007D4C(iVar6 + param_1 + 0x2ac,*puVar2);
        uVar4 = func_080074C0(iVar6 + param_1 + 0x2ec,puVar2[0x10]);
        func_0804EA94(&uStack_40,(uVar7 + 0xf & 0xff) * 8,(uVar8 & 0xffff) >> 5,uVar3,uVar4,1,1,
                      iStack_24);
        bVar1 = *pbStack_30;
        if (bVar1 < 0x80) {
          *(undefined4 *)(pbStack_30 + (uint)bVar1 * 8 + 4) = uStack_40;
          *(undefined2 *)(pbStack_30 + (uint)bVar1 * 8 + 4 + 4) = uStack_3c;
          *pbStack_30 = bVar1 + 1;
        }
      }
      puVar2 = puVar2 + 2;
      piVar9 = piVar9 + 3;
      uStack_2c = uStack_2c + 1;
    } while (uStack_2c < *puStack_28);
  }
  bVar5 = false;
  if ((*(int *)(param_1 + 0x284) == 0) || (*(int *)(param_1 + 0x288) == 0)) {
    bVar5 = true;
  }
  if (!bVar5) {
    uVar7 = *_DAT_080cc708;
    uVar3 = func_08007D4C(param_1 + 0x29c,*(undefined4 *)(param_1 + 0x2a0));
    uVar4 = func_080074C0(param_1 + 0x2a4,*(undefined4 *)(param_1 + 0x2a8));
    func_0804EA94(&uStack_38,(uVar7 + 0xf & 0xff) * 8,(uVar7 >> 8 & 0xff) * 8,uVar3,uVar4,1,1,0);
    bVar1 = *pbStack_30;
    if (bVar1 < 0x80) {
      *(undefined4 *)(pbStack_30 + (uint)bVar1 * 8 + 4) = uStack_38;
      *(undefined2 *)(pbStack_30 + (uint)bVar1 * 8 + 4 + 4) = uStack_34;
      *pbStack_30 = bVar1 + 1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CCD48 @ 0x080CCD48
// =============================================================================
undefined4 func_080CCD48(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  func_0x080cad10(param_2 * 0xc + param_1 + 0x218,param_3);
  uVar2 = *(uint *)(param_2 * 4 + _DAT_080ccddc);
  uVar1 = uVar2 + 0xf & 0xff;
  uVar2 = uVar2 & _DAT_080ccde0;
  func_080CAE60(param_1,((uVar2 & 0xff00) >> 8) * 0x40 + (uVar2 & 0xff | uVar1) * 2 + _DAT_080ccde4,
                0x54,2,1,0,0x20);
  if (1 < param_3) {
    func_080CAEEC(param_1,param_3,
                  ((uVar2 & 0xff00) >> 8) * 0x40 + (uVar2 & 0xff | uVar1) * 2 + _DAT_080ccde8,0x20,0
                  ,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CCDEC @ 0x080CCDEC
// =============================================================================
undefined4 func_080CCDEC(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  func_0x080cada8(param_2 * 0xc + param_1 + 0x218);
  uVar1 = *(uint *)(param_2 * 4 + _DAT_080cce4c);
  uVar2 = uVar1 & _DAT_080cce50;
  func_080CAE60(param_1,((uVar2 & 0xff00) >> 8) * 0x40 +
                        (uVar2 & 0xff | uVar1 + 0xf & 0xff) * 2 + _DAT_080cce54,0x54,2,1,0,0x20);
  return in_lr;
}

// =============================================================================
// Function: func_080CCE58 @ 0x080CCE58
// =============================================================================
undefined4 func_080CCE58(int param_1,undefined4 param_2,undefined2 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  uStack_38 = param_4;
  func_0x080cad18(param_1 + 0x280,param_2,param_3);
  iVar1 = func_08007D4C(param_1 + 0x29c,*(undefined4 *)(param_1 + 0x2a0));
  iStack_34 = func_080074C0(param_1 + 0x2a4,*(undefined4 *)(param_1 + 0x2a8));
  piVar10 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_5c,*(undefined4 *)(param_1 + 0x284),iVar1 * 0x20 + _DAT_080ccee0,0x80);
  puVar5 = (undefined4 *)piVar10[1];
  if (puVar5 == (undefined4 *)piVar10[3]) {
    iStack_48 = 1;
    puVar6 = (undefined4 *)*piVar10;
    iStack_4c = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar2 = &iStack_48;
    }
    puStack_28 = puVar5;
    if (iStack_4c + *piVar2 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_4c + *piVar2) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar1);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar1);
      }
      puVar6 = (undefined4 *)*piVar10;
    }
    iStack_30 = iStack_34 << 5;
    puStack_2c = &uStack_3c;
    puVar5 = puStack_24;
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
    iStack_30 = iStack_34 << 5;
    puStack_2c = &uStack_3c;
  }
  piVar10 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_5c,*(undefined4 *)(param_1 + 0x288),iStack_30 + _DAT_080ccffc,0x20);
  puVar5 = (undefined4 *)piVar10[1];
  if (puVar5 == (undefined4 *)piVar10[3]) {
    iStack_40 = 1;
    puVar6 = (undefined4 *)*piVar10;
    iStack_44 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_44;
    if (iStack_44 == 0) {
      piVar2 = &iStack_40;
    }
    puStack_28 = puVar5;
    if (iStack_44 + *piVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar5;
    }
    else {
      iVar1 = (iStack_44 + *piVar2) * 0x10;
      puVar5 = (undefined4 *)malloc(iVar1);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)func_080D3BC0(iVar1);
      }
      puVar6 = (undefined4 *)*piVar10;
      puStack_24 = puVar5;
    }
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
  }
  uVar4 = *_DAT_080cd13c + 0xf & 0xff;
  uVar8 = *_DAT_080cd13c & _DAT_080cd140;
  uStack_3c = uVar8 | uVar4;
  func_080CAE60(param_1,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (uVar8 & 0xff | uVar4) * 2 + _DAT_080cd144,0x54,2,1,0,0x20);
  if (1 < uStack_38) {
    func_080CAEEC(param_1,uStack_38,
                  (uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                  (uint)(byte)*puStack_2c * 2 + _DAT_080cd148,0x20,0,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CD14C @ 0x080CD14C
// =============================================================================
undefined4 func_080CD14C(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  uint *puStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  uStack_38 = param_4;
  func_0x080cada0(param_1 + 0x280);
  iVar1 = func_08007D4C(param_1 + 0x29c,*(undefined4 *)(param_1 + 0x2a0));
  iStack_34 = func_080074C0(param_1 + 0x2a4,*(undefined4 *)(param_1 + 0x2a8));
  piVar10 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_5c,*(undefined4 *)(param_1 + 0x284),iVar1 * 0x20 + _DAT_080cd1d0,0x80);
  puVar5 = (undefined4 *)piVar10[1];
  if (puVar5 == (undefined4 *)piVar10[3]) {
    iStack_48 = 1;
    puVar6 = (undefined4 *)*piVar10;
    iStack_4c = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar2 = &iStack_48;
    }
    puStack_28 = puVar5;
    if (iStack_4c + *piVar2 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_4c + *piVar2) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar1);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar1);
      }
      puVar6 = (undefined4 *)*piVar10;
    }
    iStack_2c = iStack_34 << 5;
    puStack_30 = &uStack_3c;
    puVar5 = puStack_24;
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
    iStack_2c = iStack_34 << 5;
    puStack_30 = &uStack_3c;
  }
  piVar10 = *(int **)(param_1 + 0x278);
  func_08008F0C(&uStack_5c,*(undefined4 *)(param_1 + 0x288),iStack_2c + _DAT_080cd2ec,0x20);
  puVar5 = (undefined4 *)piVar10[1];
  if (puVar5 == (undefined4 *)piVar10[3]) {
    iStack_40 = 1;
    puVar6 = (undefined4 *)*piVar10;
    iStack_44 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_44;
    if (iStack_44 == 0) {
      piVar2 = &iStack_40;
    }
    puStack_28 = puVar5;
    if (iStack_44 + *piVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar5;
    }
    else {
      iVar1 = (iStack_44 + *piVar2) * 0x10;
      puVar5 = (undefined4 *)malloc(iVar1);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)func_080D3BC0(iVar1);
      }
      puVar6 = (undefined4 *)*piVar10;
      puStack_24 = puVar5;
    }
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
  }
  uVar4 = *_DAT_080cd42c + 0xf & 0xff;
  uVar8 = *_DAT_080cd42c & _DAT_080cd430;
  uStack_3c = uVar8 | uVar4;
  func_080CAE60(param_1,(uint)*(byte *)((int)puStack_30 + 1) * 0x40 +
                        (uVar8 & 0xff | uVar4) * 2 + _DAT_080cd434,0x54,2,1,0,0x20);
  if (1 < uStack_38) {
    func_080CAEEC(param_1,uStack_38,
                  (uint)*(byte *)((int)puStack_30 + 1) * 0x40 +
                  (uint)(byte)*puStack_30 * 2 + _DAT_080cd438,0x20,0,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CD43C @ 0x080CD43C
// =============================================================================
undefined4 func_080CD43C(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  func_0x080cad10(param_1 + 0x280,param_2);
  uVar1 = *_DAT_080cd4c4 + 0xf & 0xff;
  uVar2 = *_DAT_080cd4c4 & _DAT_080cd4c8;
  func_080CAE60(param_1,((uVar2 & 0xff00) >> 8) * 0x40 + (uVar2 & 0xff | uVar1) * 2 + _DAT_080cd4cc,
                0x54,2,1,0,0x20);
  if (1 < param_2) {
    func_080CAEEC(param_1,param_2,
                  ((uVar2 & 0xff00) >> 8) * 0x40 + (uVar2 & 0xff | uVar1) * 2 + _DAT_080cd4d0,0x20,0
                  ,0x20);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CD4D4 @ 0x080CD4D4
// =============================================================================
undefined4 func_080CD4D4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  func_0x080cada8(param_1 + 0x280);
  uVar1 = *_DAT_080cd528 & _DAT_080cd52c;
  func_080CAE60(param_1,((uVar1 & 0xff00) >> 8) * 0x40 +
                        (uVar1 & 0xff | *_DAT_080cd528 + 0xf & 0xff) * 2 + _DAT_080cd530,0x54,2,1,0,
                0x20);
  return in_lr;
}

// =============================================================================
// Function: func_080CD620 @ 0x080CD620
// =============================================================================
undefined4 func_080CD620(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [8];
  int aiStack_5c [2];
  int aiStack_54 [4];
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  iVar1 = func_0x08008918();
  *(undefined2 *)(iVar1 + 8) = 0x1d40;
  iVar1 = func_0x08008918(param_1);
  *(short *)(iVar1 + 10) = (short)_DAT_080cd73c;
  iVar1 = func_0x08008918(param_1);
  *(short *)(iVar1 + 0xc) = (short)_DAT_080cd740;
  func_08008EB8(0xffffffff,_DAT_080cd744,0x800);
  uVar10 = _DAT_080cd748;
  func_08008EB8(0xffffffff,_DAT_080cd748,0x800);
  func_08008EB8(0,0x6000000,0x8000);
  puVar2 = (undefined2 *)func_0x08008918(param_1);
  *puVar2 = 0x1640;
  func_08008E64(*_DAT_080cd74c,0x5000000,0x20);
  func_08008E64(*_DAT_080cd750,0x6000000,*_DAT_080cd754);
  func_08008EB8(_DAT_080cd758,uVar10,0x800);
  puStack_2c = auStack_64;
  piStack_3c = aiStack_5c;
  piStack_38 = aiStack_54;
  iVar1 = 0x13;
  puVar2 = _DAT_080cd75c;
  do {
    *puVar2 = 8;
    puVar2[1] = 2;
    puVar2 = puVar2 + 0x20;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  func_08008EB8(_DAT_080cd760,_DAT_080cd744,0x800);
  piVar3 = (int *)func_0x08008910(param_1);
  func_08008F0C(&uStack_74,_DAT_080cd764,_DAT_080cd768,0x1c0);
  puVar6 = (undefined4 *)piVar3[1];
  if (puVar6 == (undefined4 *)piVar3[3]) {
    iStack_40 = 1;
    puVar7 = (undefined4 *)*piVar3;
    iStack_44 = (int)puVar6 - (int)puVar7 >> 4;
    piVar4 = &iStack_44;
    if (iStack_44 == 0) {
      piVar4 = &iStack_40;
    }
    puStack_28 = puVar6;
    if (iStack_44 + *piVar4 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_44 + *piVar4) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar1);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar1);
      }
      puVar7 = (undefined4 *)*piVar3;
    }
    iStack_34 = param_1 + 0x44;
    iStack_30 = param_1 + 0x80;
    puVar6 = puStack_24;
    for (; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar10 = puVar7[1];
        uVar11 = puVar7[2];
        *puVar6 = *puVar7;
        puVar6[1] = uVar10;
        puVar6[2] = uVar11;
        puVar6[3] = puVar7[3];
      }
      puVar6 = puVar6 + 4;
    }
    iVar5 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = uStack_74;
        puVar6[1] = uStack_70;
        puVar6[2] = uStack_6c;
        puVar6[3] = uStack_68;
      }
      puVar6 = puVar6 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = uStack_74;
          puVar6[1] = uStack_70;
          puVar6[2] = uStack_6c;
          puVar6[3] = uStack_68;
        }
        puVar6 = puVar6 + 4;
      }
    }
    iVar8 = *piVar3;
    for (iVar5 = iVar8; iVar5 != piVar3[1]; iVar5 = iVar5 + 0x10) {
    }
    if (iVar8 != 0) {
      free(iVar8);
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar6;
    piVar3[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = uStack_74;
      puVar6[1] = uStack_70;
      puVar6[2] = uStack_6c;
      puVar6[3] = uStack_68;
    }
    piVar3[1] = piVar3[1] + 0x10;
    iStack_34 = param_1 + 0x44;
    iStack_30 = param_1 + 0x80;
  }
  func_0x080d3918(puStack_2c,*(int **)(param_1 + 0x44),
                  *(undefined2 *)(*(int *)(param_1 + 0x48) + (uint)*(ushort *)(iStack_34 + 0xc) * 4)
                  ,*(undefined4 *)(**(int **)(param_1 + 0x44) + 0x10));
  uVar9 = 0;
  if (aiStack_5c[0] != 0) {
    uVar9 = (undefined2)piStack_3c[1];
  }
  func_08008E64(aiStack_5c[0],_DAT_080cd898,uVar9);
  uVar9 = 0;
  if (aiStack_54[0] != 0) {
    uVar9 = (undefined2)piStack_38[1];
  }
  func_08008E64(aiStack_54[0],_DAT_080cd89c,uVar9);
  func_08050D5C(iStack_30);
  return in_lr;
}

// =============================================================================
// Function: func_080CD8A0 @ 0x080CD8A0
// =============================================================================
undefined4 func_080CD8A0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar1 = func_0x08050d34();
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = func_0x080088dc(param_1);
  uVar2 = func_0x08008920(param_1);
  uVar3 = func_0x08008918(param_1);
  uVar4 = func_0x08008940(param_1);
  uVar5 = func_0800894C(param_1);
  uVar1 = func_08050D3C(param_1 + 0x80,uVar1,uVar2,uVar3,uVar4,uVar5,param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  iVar6 = *(int *)(param_1 + 0x78);
  if (iVar6 != 0) {
    func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0xc));
  }
  iVar6 = *(int *)(param_1 + 0x7c);
  if (iVar6 != 0) {
    uVar1 = func_0x08008920(param_1);
    func_080CC58C(iVar6,uVar1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CD9B0 @ 0x080CD9B0
// =============================================================================
undefined8 func_080CD9B0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_3;
  func_08007874(param_1 + 5);
  iVar1 = func_08007B54(param_1 + 5,2);
  param_1[6] = iVar1;
  func_0x08007128(param_1 + 7);
  iVar1 = func_0800736C(param_1 + 7);
  param_1[8] = iVar1;
  func_0805E6CC(param_1 + 9,_DAT_080cda40);
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((int)param_1 + 0x56) = 0;
  func_0805E824(param_1 + 0x16,param_1 + 9,0,0x100);
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((int)param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = *(int *)(*(int *)(*param_1 + 0x78) + 0x298);
  param_1[4] = *(int *)(*(int *)(*param_1 + 0x7c) + 0x298) + 9;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CDA44 @ 0x080CDA44
// =============================================================================
undefined8 func_080CDA44(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  param_1[3] = *(int *)(*(int *)(*param_1 + 0x78) + 0x298);
  param_1[4] = *(int *)(*(int *)(*param_1 + 0x7c) + 0x298) + 9;
  iVar3 = param_1[1];
  iVar2 = *(int *)(iVar3 * 0x10 + _DAT_080cda78);
  if (iVar3 == 0) {
    iVar3 = param_1[2];
    if (iVar3 == 9) goto LAB_080cda92;
    uVar1 = iVar3 - 5;
  }
  else {
    if ((iVar3 != 9) || (iVar3 = param_1[2], iVar3 == 0)) goto LAB_080cda92;
    uVar1 = iVar3 - 0xe;
  }
  iVar2 = iVar3 + 4;
  if (uVar1 < 4) {
    iVar2 = iVar3;
  }
LAB_080cda92:
  if (iVar2 < 9) {
    iVar3 = param_1[1];
    if ((iVar2 == 0) && (*(char *)(*(int *)(*param_1 + 0x78) + 0x27c) == '\0')) {
      iVar2 = iVar3 + 4;
    }
    for (; param_1[3] < iVar2; iVar2 = *(int *)(iVar2 * 0x10 + _DAT_080cdac4)) {
    }
  }
  else {
    iVar3 = param_1[1];
    if ((iVar2 == 9) && (*(char *)(*(int *)(*param_1 + 0x7c) + 0x27c) == '\0')) {
      iVar2 = iVar3 + 4;
    }
    for (; param_1[4] < iVar2; iVar2 = *(int *)(iVar2 * 0x10 + _DAT_080cdb04)) {
    }
  }
  if (iVar2 != iVar3) {
    param_1[2] = iVar3;
    param_1[1] = iVar2;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_080CDB08 @ 0x080CDB08
// =============================================================================
undefined8 func_080CDB08(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  param_1[3] = *(int *)(*(int *)(*param_1 + 0x78) + 0x298);
  param_1[4] = *(int *)(*(int *)(*param_1 + 0x7c) + 0x298) + 9;
  iVar3 = param_1[1];
  iVar2 = *(int *)(iVar3 * 0x10 + _DAT_080cdb40 + 4);
  if (iVar3 == 0) {
    iVar3 = param_1[2];
    if (iVar3 == 9) goto LAB_080cdb5a;
    uVar1 = iVar3 - 1;
  }
  else {
    if ((iVar3 != 9) || (iVar3 = param_1[2], iVar3 == 0)) goto LAB_080cdb5a;
    uVar1 = iVar3 - 10;
  }
  iVar2 = iVar3 + -4;
  if (uVar1 < 4) {
    iVar2 = iVar3;
  }
LAB_080cdb5a:
  if (iVar2 < 9) {
    iVar3 = param_1[1];
    if ((iVar2 == 0) && (*(char *)(*(int *)(*param_1 + 0x78) + 0x27c) == '\0')) {
      iVar2 = iVar3 + -4;
    }
    while (param_1[3] < iVar2) {
      iVar2 = *(int *)(iVar2 * 0x10 + _DAT_080cdba4);
      if ((iVar2 == 0) && (*(char *)(*(int *)(*param_1 + 0x78) + 0x27c) == '\0')) {
        iVar2 = iVar3;
      }
    }
  }
  else {
    iVar3 = param_1[1];
    if ((iVar2 == 9) && (*(char *)(*(int *)(*param_1 + 0x7c) + 0x27c) == '\0')) {
      iVar2 = iVar3 + -4;
    }
    while (param_1[4] < iVar2) {
      iVar2 = *(int *)(iVar2 * 0x10 + _DAT_080cdbfc);
      if ((iVar2 == 9) && (*(char *)(*(int *)(*param_1 + 0x7c) + 0x27c) == '\0')) {
        iVar2 = iVar3;
      }
    }
  }
  if (iVar2 != iVar3) {
    param_1[2] = iVar3;
    param_1[1] = iVar2;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_080CDC00 @ 0x080CDC00
// =============================================================================
undefined8 func_080CDC00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*param_1 + 0x78);
  iVar7 = *(int *)(iVar1 + 0x298);
  param_1[3] = iVar7;
  iVar6 = *(int *)(*param_1 + 0x7c);
  iVar5 = *(int *)(iVar6 + 0x298) + 9;
  param_1[4] = iVar5;
  iVar4 = param_1[1];
  iVar2 = _DAT_080cdc4c + 8;
  iVar3 = *(int *)(iVar4 * 0x10 + iVar2);
  if (iVar3 < 9) {
    if (iVar3 == 0) {
      iVar5 = iVar3;
      if (*(char *)(iVar1 + 0x27c) == '\0') {
        iVar5 = iVar4;
      }
    }
    else {
      while (iVar5 = iVar3, iVar7 < iVar5) {
        iVar3 = iVar7;
        if (4 < iVar7) {
          iVar3 = *(int *)(iVar5 * 0x10 + iVar2);
        }
      }
    }
    iVar3 = iVar5;
    if (((iVar5 != 4) || (iVar1 = param_1[2], iVar1 != param_1[3])) || (iVar1 < 5))
    goto LAB_080cdcbe;
  }
  else {
    iVar1 = iVar3;
    if (iVar3 == 9) {
      if (*(char *)(iVar6 + 0x27c) == '\0') {
        iVar3 = 0;
      }
    }
    else {
      while (iVar3 = iVar1, iVar5 < iVar3) {
        iVar1 = iVar5;
        if (0xd < iVar5) {
          iVar1 = *(int *)(iVar3 * 0x10 + iVar2);
        }
      }
    }
    if (((iVar3 != 0xd) || (iVar1 = param_1[2], iVar1 != param_1[4])) || (iVar1 < 0xe))
    goto LAB_080cdcbe;
  }
  iVar3 = iVar1;
LAB_080cdcbe:
  if (iVar3 != iVar4) {
    param_1[2] = iVar4;
    param_1[1] = iVar3;
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_080CDCD0 @ 0x080CDCD0
// =============================================================================
undefined8 func_080CDCD0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(*param_1 + 0x78);
  iVar6 = *(int *)(iVar7 + 0x298);
  param_1[3] = iVar6;
  iVar1 = *(int *)(*param_1 + 0x7c);
  iVar5 = *(int *)(iVar1 + 0x298) + 9;
  param_1[4] = iVar5;
  iVar4 = param_1[1];
  iVar2 = _DAT_080cdd18 + 0xc;
  iVar3 = *(int *)(iVar4 * 0x10 + iVar2);
  if (iVar3 < 9) {
    if (iVar3 == 0) {
      if (*(char *)(iVar7 + 0x27c) == '\0') {
        iVar3 = 9;
      }
    }
    else if (iVar6 < iVar3) {
      if (iVar4 == 0x11) {
        iVar3 = 1;
      }
      else {
        for (; iVar3 < 9; iVar3 = *(int *)(iVar3 * 0x10 + iVar2)) {
        }
      }
    }
  }
  else if (iVar3 == 9) {
    if (*(char *)(iVar1 + 0x27c) == '\0') {
      iVar3 = 0;
    }
  }
  else if (iVar5 < iVar3) {
    if (iVar5 < 0xe) {
      iVar3 = 1;
    }
    else {
      for (; 8 < iVar3; iVar3 = *(int *)(iVar3 * 0x10 + iVar2)) {
      }
    }
  }
  if ((iVar3 == 10) && (param_1[2] == 0xe)) {
    iVar3 = 0xe;
  }
  if (iVar3 != iVar4) {
    param_1[2] = iVar4;
    param_1[1] = iVar3;
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_080CDD7C @ 0x080CDD7C
// =============================================================================
undefined8 func_080CDD7C(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 10;
  if (param_1[1] < 9) {
    iVar1 = *(int *)(*param_1 + 0x7c);
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x78);
    iVar2 = 1;
  }
  if (iVar1 == 0) {
    iVar2 = param_1[1];
  }
  if (iVar2 != param_1[1]) {
    param_1[2] = param_1[1];
    param_1[1] = iVar2;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_080CDDAC @ 0x080CDDAC
// =============================================================================
undefined4 func_080CDDAC(int *param_1,int param_2)

{
  undefined4 in_lr;
  
  param_1[3] = *(int *)(*(int *)(*param_1 + 0x78) + 0x298);
  param_1[4] = *(int *)(*(int *)(*param_1 + 0x7c) + 0x298) + 9;
  param_1[2] = param_1[1];
  param_1[1] = param_2;
  return in_lr;
}

// =============================================================================
// Function: func_080CDDD4 @ 0x080CDDD4
// =============================================================================
undefined4 func_080CDDD4(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  undefined2 uStack_70;
  int iStack_6c;
  undefined2 uStack_68;
  int aiStack_64 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte bStack_44;
  byte bStack_43;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  *(char *)(param_1 + 0x22) = '\x01';
  func_080CE120(&bStack_44,*param_1,param_1[1]);
  *(ushort *)(param_1 + 0x15) = (ushort)bStack_44;
  *(ushort *)((int)param_1 + 0x56) = (ushort)bStack_43;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = (uint)uStack_88._2_2_ << 0x10;
  iStack_84 = 0;
  uStack_80 = (uint)uStack_80._2_2_ << 0x10;
  iStack_7c = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  if ((char)param_1[0x22] != '\0') {
    if (*(int *)(*param_1 + 0x88) == 3) {
      func_0805E8F0(param_1 + 0x16);
    }
    func_0x080d3918(&iStack_74,(int *)param_1[0x16],
                    *(undefined2 *)(param_1[0x17] + (uint)*(ushort *)(param_1 + 0x19) * 4),
                    *(undefined4 *)(*(int *)param_1[0x16] + 0x10));
    uStack_8c = param_1[0x1c];
    iStack_84 = param_1[0x1e];
    uStack_80 = param_1[0x1f];
    iStack_7c = param_1[0x20];
    uStack_78 = param_1[0x21];
    uStack_90 = param_1[0x15];
    uStack_88._2_2_ = (ushort)((uint)param_1[0x1d] >> 0x10);
    uStack_88 = CONCAT22(uStack_88._2_2_,1);
    uVar1 = func_080074C0(param_1 + 7,param_1[8]);
    uStack_8c = CONCAT22(uStack_8c._2_2_,uVar1);
    uVar1 = func_08007D4C(param_1 + 5,param_1[6]);
    uStack_8c = CONCAT22(uVar1,(undefined2)uStack_8c);
    uStack_78 = CONCAT31(uStack_78._1_3_,1);
    uVar2 = func_0x08008920(*param_1);
    uVar1 = 0;
    if (iStack_74 != 0) {
      uVar1 = uStack_70;
    }
    piStack_30 = param_1 + 7;
    func_0805E99C(uVar2,iStack_74,uVar1,&uStack_90);
    piVar3 = (int *)func_0x08008910(*param_1);
    iVar9 = iStack_6c;
    iVar4 = func_08007D4C(param_1 + 5,param_1[6]);
    uVar1 = 0;
    if (iStack_6c != 0) {
      uVar1 = uStack_68;
    }
    piStack_28 = piVar3;
    func_08008F0C(&uStack_54,iVar9,iVar4 * 0x20 + _DAT_080cdf1c,uVar1);
    puVar7 = (undefined4 *)piVar3[1];
    if (puVar7 == (undefined4 *)piVar3[3]) {
      iStack_3c = 1;
      iStack_40 = (int)puVar7 - *piStack_28 >> 4;
      piVar3 = &iStack_40;
      if (iStack_40 == 0) {
        piVar3 = &iStack_3c;
      }
      if (iStack_40 + *piVar3 == 0) {
        puStack_24 = (undefined4 *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_40 + *piVar3) * 0x10;
        puStack_24 = (undefined4 *)malloc(iVar9);
        if (puStack_24 == (undefined4 *)0x0) {
          puStack_24 = (undefined4 *)func_080D3BC0(iVar9);
        }
      }
      piStack_2c = aiStack_64;
      puVar8 = puStack_24;
      for (puVar6 = (undefined4 *)*piStack_28; puVar6 != puVar7; puVar6 = puVar6 + 4) {
        if (puVar8 != (undefined4 *)0x0) {
          uVar2 = puVar6[1];
          uVar11 = puVar6[2];
          *puVar8 = *puVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar11;
          puVar8[3] = puVar6[3];
        }
        puVar8 = puVar8 + 4;
      }
      iVar4 = iStack_3c;
      if (iStack_3c == 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = uStack_54;
          puVar8[1] = uStack_50;
          puVar8[2] = uStack_4c;
          puVar8[3] = uStack_48;
        }
        puVar8 = puVar8 + 4;
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = uStack_54;
            puVar8[1] = uStack_50;
            puVar8[2] = uStack_4c;
            puVar8[3] = uStack_48;
          }
          puVar8 = puVar8 + 4;
        }
      }
      for (iVar4 = *piStack_28; iVar4 != piStack_28[1]; iVar4 = iVar4 + 0x10) {
      }
      if (*piStack_28 != 0) {
        free();
      }
      *piStack_28 = (int)puStack_24;
      piStack_28[1] = (int)puVar8;
      piStack_28[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uStack_54;
        puVar7[1] = uStack_50;
        puVar7[2] = uStack_4c;
        puVar7[3] = uStack_48;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
      piStack_2c = aiStack_64;
    }
    piVar3 = (int *)func_0x08008910(*param_1);
    iVar9 = aiStack_64[0];
    iVar4 = func_080074C0(piStack_30,piStack_30[1]);
    uVar1 = 0;
    if (aiStack_64[0] != 0) {
      uVar1 = (undefined2)piStack_2c[1];
    }
    func_08008F0C(&uStack_54,iVar9,iVar4 * 0x20 + _DAT_080ce04c,uVar1);
    puVar7 = (undefined4 *)piVar3[1];
    if (puVar7 == (undefined4 *)piVar3[3]) {
      iStack_34 = 1;
      iStack_38 = (int)puVar7 - *piVar3 >> 4;
      piVar5 = &iStack_38;
      if (iStack_38 == 0) {
        piVar5 = &iStack_34;
      }
      if (iStack_38 + *piVar5 == 0) {
        puVar6 = (undefined4 *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_38 + *piVar5) * 0x10;
        puVar6 = (undefined4 *)malloc(iVar9);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)func_080D3BC0(iVar9);
        }
      }
      puVar10 = puVar6;
      for (puVar8 = (undefined4 *)*piVar3; puVar8 != puVar7; puVar8 = puVar8 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar2 = puVar8[1];
          uVar11 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar2;
          puVar10[2] = uVar11;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar4 = iStack_34;
      if (iStack_34 == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_54;
          puVar10[1] = uStack_50;
          puVar10[2] = uStack_4c;
          puVar10[3] = uStack_48;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_54;
            puVar10[1] = uStack_50;
            puVar10[2] = uStack_4c;
            puVar10[3] = uStack_48;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar4 = *piVar3; iVar4 != piVar3[1]; iVar4 = iVar4 + 0x10) {
      }
      puStack_24 = puVar6;
      if (*piVar3 != 0) {
        free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uStack_54;
        puVar7[1] = uStack_50;
        puVar7[2] = uStack_4c;
        puVar7[3] = uStack_48;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CE120 @ 0x080CE120
// =============================================================================
undefined8 func_080CE120(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == 0) {
    if (*(int *)(param_2 + 0x78) != 0) {
      func_0x080cc144(&uStack_18);
      param_4 = uStack_18;
    }
  }
  else if (param_3 == 9) {
    if (*(int *)(param_2 + 0x7c) != 0) {
      func_0x080cd558(&uStack_14);
      param_4 = uStack_14;
    }
  }
  else if (param_3 < 9) {
    if (*(int *)(param_2 + 0x78) != 0) {
      func_0x080cc134(&uStack_10,*(int *)(param_2 + 0x78),param_3 + -1);
      param_4 = uStack_10;
    }
  }
  else if (*(int *)(param_2 + 0x7c) != 0) {
    func_0x080cd534(&uStack_c,*(int *)(param_2 + 0x7c),param_3 + -10);
    param_4 = uStack_c;
  }
  *param_1 = param_4;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CE184 @ 0x080CE184
// =============================================================================
undefined8 func_080CE184(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 < 9) {
    iVar1 = param_3 * 8 + -1;
  }
  else {
    iVar1 = param_3 * 8 + -10;
  }
  return CONCAT44(in_lr,param_2 + iVar1);
}

// =============================================================================
// Function: func_080CE19C @ 0x080CE19C
// =============================================================================
undefined8 func_080CE19C(int param_1)

{
  undefined4 in_lr;
  
  func_080CD578();
  *(undefined4 *)(param_1 + 4) = _DAT_080ce1c0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CE1C4 @ 0x080CE1C4
// =============================================================================
undefined8 func_080CE1C4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 unaff_r6;
  int unaff_r10;
  undefined4 in_lr;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_00000040;
  undefined2 *in_stack_00000044;
  undefined2 *in_stack_00000048;
  int *in_stack_0000004c;
  int *in_stack_00000050;
  int in_stack_00000054;
  undefined4 in_stack_00000074;
  
  iVar1 = func_0x0800db30();
  if (iVar1 - 5U < 0x29) {
    switch(*(uint *)(PTR_case_080CE1E4_080ce1e0 + (iVar1 - 5U) * 4) & 0xfffffffe) {
    case 0x80ce1e4:
      for (iVar1 = *in_stack_00000050; iVar1 != in_stack_00000050[1]; iVar1 = iVar1 + 0x10) {
      }
      if (*in_stack_00000050 != 0) {
        free();
      }
      *in_stack_00000050 = in_stack_00000054;
      in_stack_00000050[1] = param_3;
      in_stack_00000050[3] = in_stack_00000054 + unaff_r10;
      *in_stack_00000044 = 0xe8;
      *in_stack_00000048 = 0x28;
      *in_stack_0000003c = 0xe8;
      *in_stack_00000040 = 0x50;
      func_080CE510(unaff_r6,*in_stack_0000004c + 1,_DAT_080ce784,0x20);
      func_080CE480(unaff_r6,_DAT_080ce788,0x2d,1);
      func_080CE510(unaff_r6,8,_DAT_080ce78c,0x20);
      return CONCAT44(extraout_r1,in_stack_00000074);
    case 0x80ce288:
      uVar2 = 1;
      goto LAB_080ce28e;
    }
  }
  uVar2 = 0;
LAB_080ce28e:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_080CE294 @ 0x080CE294
// =============================================================================
undefined4 func_080CE294(int param_1)

{
  undefined4 in_lr;
  
  func_080CD620();
  param_1 = param_1 + 0x80;
  func_08050E98(param_1,1);
  func_08050E98(param_1,2);
  func_08050E98(param_1,4);
  func_08050E98(param_1,8);
  return in_lr;
}

// =============================================================================
// Function: func_080CE2C4 @ 0x080CE2C4
// =============================================================================
undefined4 func_080CE2C4(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    func_080CDDD4();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    func_0x080cece8();
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    func_080CE790();
  }
  func_080CD8A0(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_080CE2FC @ 0x080CE2FC
// =============================================================================
undefined8 func_080CE2FC(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  *param_1 = param_2;
  func_08007874(param_1 + 1);
  uVar1 = func_08007B54(param_1 + 1,2);
  param_1[2] = uVar1;
  func_08007874(param_1 + 3);
  uVar1 = func_08007B54(param_1 + 3,2);
  param_1[4] = uVar1;
  func_0x08007128(param_1 + 5);
  uVar1 = func_0800736C(param_1 + 5);
  param_1[6] = uVar1;
  puVar3 = param_1 + 7;
  func_0805E6CC(puVar3,_DAT_080ce3d8);
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  func_0805E824(param_1 + 0x14,puVar3,0,0x100);
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((int)param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x75) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((int)param_1 + 0x86) = 0;
  func_0805E824(param_1 + 0x22,puVar3,1,0x100);
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)((int)param_1 + 0xa2) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((int)param_1 + 0xad) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  iVar2 = malloc(0xc);
  if (iVar2 == 0) {
    iVar2 = func_080D3BC0(0xc);
  }
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  param_1[0x31] = iVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CE480 @ 0x080CE480
// =============================================================================
undefined4
func_080CE480(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
             undefined4 param_5,undefined2 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  uVar1 = func_080005D4(0x20);
  iVar2 = func_0804EA58(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar3 = param_1[0x31];
  piVar4 = (int *)malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)func_080D3BC0(0xc);
  }
  if (piVar4 != (int *)0xfffffff8) {
    piVar4[2] = iVar2;
  }
  puVar5 = *(undefined4 **)(iVar3 + 4);
  *piVar4 = iVar3;
  piVar4[1] = (int)puVar5;
  *puVar5 = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  iVar3 = func_0x08008940(*param_1);
  func_0x080d3914(iVar3,iVar2,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x10));
  return in_lr;
}

// =============================================================================
// Function: func_080CE510 @ 0x080CE510
// =============================================================================
undefined4
func_080CE510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
             undefined2 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  uVar1 = func_080005D4(0x1c);
  iVar2 = func_0804EE64(uVar1,param_2,param_3,param_4,param_5,param_6);
  iVar3 = param_1[0x31];
  piVar4 = (int *)malloc(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)func_080D3BC0(0xc);
  }
  if (piVar4 != (int *)0xfffffff8) {
    piVar4[2] = iVar2;
  }
  puVar5 = *(undefined4 **)(iVar3 + 4);
  *piVar4 = iVar3;
  piVar4[1] = (int)puVar5;
  *puVar5 = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  iVar3 = func_0x08008940(*param_1);
  func_0x080d3914(iVar3,iVar2,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x10));
  return in_lr;
}

// =============================================================================
// Function: func_080CE598 @ 0x080CE598
// =============================================================================
undefined4 func_080CE598(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  undefined1 auStack_74 [16];
  int iStack_64;
  undefined2 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  undefined2 *puStack_38;
  undefined4 *puStack_34;
  undefined2 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  func_0x080d3918(auStack_74,(int *)param_1[0x14],
                  *(undefined2 *)(param_1[0x15] + (uint)*(ushort *)(param_1 + 0x17) * 4),
                  *(undefined4 *)(*(int *)param_1[0x14] + 0x10));
  piVar1 = (int *)func_0x08008910(*param_1);
  iVar6 = iStack_64;
  iVar2 = func_080074C0(param_1 + 5,param_1[6]);
  uVar5 = 0;
  if (iStack_64 != 0) {
    uVar5 = uStack_60;
  }
  piStack_28 = piVar1;
  func_08008F0C(&uStack_54,iVar6,iVar2 * 0x20 + _DAT_080ce638,uVar5);
  puVar3 = (undefined4 *)piVar1[1];
  if (puVar3 == (undefined4 *)piVar1[3]) {
    iStack_40 = 1;
    iStack_44 = (int)puVar3 - *piStack_28 >> 4;
    piVar1 = &iStack_44;
    if (iStack_44 == 0) {
      piVar1 = &iStack_40;
    }
    if (iStack_44 + *piVar1 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar6 = 0;
    }
    else {
      iVar6 = (iStack_44 + *piVar1) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar6);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar6);
      }
    }
    puStack_34 = param_1 + 0x13;
    puStack_30 = (undefined2 *)((int)param_1 + 0x4e);
    puStack_3c = param_1 + 0x21;
    puStack_38 = (undefined2 *)((int)param_1 + 0x86);
    piStack_2c = param_1 + 0x2f;
    puVar8 = puStack_24;
    for (puVar4 = (undefined4 *)*piStack_28; puVar4 != puVar3; puVar4 = puVar4 + 4) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar7 = puVar4[1];
        uVar9 = puVar4[2];
        *puVar8 = *puVar4;
        puVar8[1] = uVar7;
        puVar8[2] = uVar9;
        puVar8[3] = puVar4[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar2 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = uStack_54;
        puVar8[1] = uStack_50;
        puVar8[2] = uStack_4c;
        puVar8[3] = uStack_48;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = uStack_54;
          puVar8[1] = uStack_50;
          puVar8[2] = uStack_4c;
          puVar8[3] = uStack_48;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar2 = *piStack_28; iVar2 != piStack_28[1]; iVar2 = iVar2 + 0x10) {
    }
    if (*piStack_28 != 0) {
      free();
    }
    *piStack_28 = (int)puStack_24;
    piStack_28[1] = (int)puVar8;
    piStack_28[3] = (int)puStack_24 + iVar6;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uStack_54;
      puVar3[1] = uStack_50;
      puVar3[2] = uStack_4c;
      puVar3[3] = uStack_48;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
    puStack_34 = param_1 + 0x13;
    puStack_30 = (undefined2 *)((int)param_1 + 0x4e);
    puStack_3c = param_1 + 0x21;
    puStack_38 = (undefined2 *)((int)param_1 + 0x86);
    piStack_2c = param_1 + 0x2f;
  }
  *(undefined2 *)puStack_34 = 0xe8;
  *puStack_30 = 0x28;
  *(undefined2 *)puStack_3c = 0xe8;
  *puStack_38 = 0x50;
  func_080CE510(param_1,*piStack_2c + 1,_DAT_080ce784,0x20,0,0x20);
  func_080CE480(param_1,_DAT_080ce788,0x2d,1,1,0,0x20);
  func_080CE510(param_1,8,_DAT_080ce78c,0x20,0,0x20);
  return in_lr;
}

// =============================================================================
// Function: func_080CE790 @ 0x080CE790
// =============================================================================
undefined4 func_080CE790(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  undefined2 uStack_64;
  int iStack_60;
  undefined2 uStack_5c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  *(char *)(param_1 + 0x20) = '\x01';
  *(undefined1 *)(param_1 + 0x2e) = 1;
  iStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = uStack_7c & 0xffff0000;
  iStack_78 = 0;
  uStack_74 = uStack_74 & 0xffff0000;
  iStack_70 = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  if ((char)param_1[0x20] != '\0') {
    if (*(int *)(*param_1 + 0x88) == 3) {
      func_0805E8F0(param_1 + 0x14);
    }
    func_0x080d3918(&iStack_68,(int *)param_1[0x14],
                    *(undefined2 *)(param_1[0x15] + (uint)*(ushort *)(param_1 + 0x17) * 4),
                    *(undefined4 *)(*(int *)param_1[0x14] + 0x10));
    uStack_80 = param_1[0x1a];
    iStack_78 = param_1[0x1c];
    uStack_74 = param_1[0x1d];
    iStack_70 = param_1[0x1e];
    uStack_6c = param_1[0x1f];
    iStack_84 = param_1[0x13];
    uStack_7c._2_2_ = (undefined2)((uint)param_1[0x1b] >> 0x10);
    uStack_7c = CONCAT22(uStack_7c._2_2_,1);
    uVar1 = func_080074C0(param_1 + 5,param_1[6]);
    uStack_80 = CONCAT22(uStack_80._2_2_,uVar1);
    uVar1 = func_08007D4C(param_1 + 1,param_1[2]);
    uStack_80 = CONCAT22(uVar1,(undefined2)uStack_80);
    uStack_6c = CONCAT31(uStack_6c._1_3_,1);
    uVar2 = func_0x08008920(*param_1);
    uVar1 = 0;
    if (iStack_68 != 0) {
      uVar1 = uStack_64;
    }
    func_0805E99C(uVar2,iStack_68,uVar1,&iStack_84);
    piVar6 = (int *)func_0x08008910(*param_1);
    iVar9 = iStack_60;
    iVar3 = func_08007D4C(param_1 + 1,param_1[2]);
    uVar1 = 0;
    if (iStack_60 != 0) {
      uVar1 = uStack_5c;
    }
    piStack_28 = piVar6;
    func_08008F0C(&uStack_48,iVar9,iVar3 * 0x20 + _DAT_080ce8b8,uVar1);
    puVar7 = (undefined4 *)piVar6[1];
    if (puVar7 == (undefined4 *)piVar6[3]) {
      iStack_34 = 1;
      iStack_38 = (int)puVar7 - *piStack_28 >> 4;
      piVar6 = &iStack_38;
      if (iStack_38 == 0) {
        piVar6 = &iStack_34;
      }
      puStack_24 = puVar7;
      if (iStack_38 + *piVar6 == 0) {
        puVar7 = (undefined4 *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_38 + *piVar6) * 0x10;
        puVar7 = (undefined4 *)malloc(iVar9);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)func_080D3BC0(iVar9);
        }
      }
      puVar8 = puVar7;
      for (puVar5 = (undefined4 *)*piStack_28; puVar5 != puStack_24; puVar5 = puVar5 + 4) {
        if (puVar8 != (undefined4 *)0x0) {
          uVar2 = puVar5[1];
          uVar11 = puVar5[2];
          *puVar8 = *puVar5;
          puVar8[1] = uVar2;
          puVar8[2] = uVar11;
          puVar8[3] = puVar5[3];
        }
        puVar8 = puVar8 + 4;
      }
      iVar3 = iStack_34;
      if (iStack_34 == 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = uStack_48;
          puVar8[1] = uStack_44;
          puVar8[2] = uStack_40;
          puVar8[3] = uStack_3c;
        }
        puVar8 = puVar8 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = uStack_48;
            puVar8[1] = uStack_44;
            puVar8[2] = uStack_40;
            puVar8[3] = uStack_3c;
          }
          puVar8 = puVar8 + 4;
        }
      }
      for (iVar3 = *piStack_28; iVar3 != piStack_28[1]; iVar3 = iVar3 + 0x10) {
      }
      if (*piStack_28 != 0) {
        free();
      }
      *piStack_28 = (int)puVar7;
      piStack_28[1] = (int)puVar8;
      piStack_28[3] = iVar9 + (int)puVar7;
    }
    else {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uStack_48;
        puVar7[1] = uStack_44;
        puVar7[2] = uStack_40;
        puVar7[3] = uStack_3c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  if ((char)param_1[0x2e] != '\0') {
    if (*(int *)(*param_1 + 0x88) == 3) {
      func_0805E8F0(param_1 + 0x22);
    }
    piVar6 = (int *)param_1[0x22];
    func_0x080d3918(&iStack_68,piVar6,
                    *(undefined2 *)(param_1[0x23] + (uint)*(ushort *)(param_1 + 0x25) * 4),
                    *(undefined4 *)(*piVar6 + 0x10));
    uStack_80 = param_1[0x28];
    iStack_78 = param_1[0x2a];
    uStack_74 = param_1[0x2b];
    iStack_70 = param_1[0x2c];
    uStack_6c = param_1[0x2d];
    iStack_84 = param_1[0x21];
    uStack_7c._2_2_ = (undefined2)((uint)param_1[0x29] >> 0x10);
    uStack_7c = CONCAT22(uStack_7c._2_2_,1);
    uVar1 = func_080074C0(param_1 + 5,param_1[6]);
    uStack_80 = CONCAT22(uStack_80._2_2_,uVar1);
    uVar1 = func_08007D4C(param_1 + 3,param_1[4]);
    uStack_80 = CONCAT22(uVar1,(undefined2)uStack_80);
    uStack_6c = CONCAT31(uStack_6c._1_3_,1);
    uVar2 = func_0x08008920(*param_1);
    uVar1 = 0;
    if (iStack_68 != 0) {
      uVar1 = uStack_64;
    }
    func_0805E99C(uVar2,iStack_68,uVar1,&iStack_84);
    piVar6 = (int *)func_0x08008910(*param_1);
    iVar9 = iStack_60;
    iVar3 = func_08007D4C(param_1 + 3,param_1[4]);
    uVar1 = 0;
    if (iStack_60 != 0) {
      uVar1 = uStack_5c;
    }
    func_08008F0C(&uStack_48,iVar9,iVar3 * 0x20 + _DAT_080cea88,uVar1);
    puVar7 = (undefined4 *)piVar6[1];
    if (puVar7 == (undefined4 *)piVar6[3]) {
      iStack_2c = 1;
      iStack_30 = (int)puVar7 - *piVar6 >> 4;
      piVar4 = &iStack_30;
      if (iStack_30 == 0) {
        piVar4 = &iStack_2c;
      }
      if (iStack_30 + *piVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_30 + *piVar4) * 0x10;
        puVar5 = (undefined4 *)malloc(iVar9);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)func_080D3BC0(iVar9);
        }
      }
      puVar10 = puVar5;
      for (puVar8 = (undefined4 *)*piVar6; puVar8 != puVar7; puVar8 = puVar8 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar2 = puVar8[1];
          uVar11 = puVar8[2];
          *puVar10 = *puVar8;
          puVar10[1] = uVar2;
          puVar10[2] = uVar11;
          puVar10[3] = puVar8[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar3 = iStack_2c;
      if (iStack_2c == 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_48;
          puVar10[1] = uStack_44;
          puVar10[2] = uStack_40;
          puVar10[3] = uStack_3c;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uStack_48;
            puVar10[1] = uStack_44;
            puVar10[2] = uStack_40;
            puVar10[3] = uStack_3c;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar3 = *piVar6; iVar3 != piVar6[1]; iVar3 = iVar3 + 0x10) {
      }
      puStack_24 = puVar5;
      if (*piVar6 != 0) {
        free();
      }
      *piVar6 = (int)puStack_24;
      piVar6[1] = (int)puVar10;
      piVar6[3] = (int)puStack_24 + iVar9;
    }
    else {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uStack_48;
        puVar7[1] = uStack_44;
        puVar7[2] = uStack_40;
        puVar7[3] = uStack_3c;
      }
      piVar6[1] = piVar6[1] + 0x10;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CEB5C @ 0x080CEB5C
// =============================================================================
undefined4 func_080CEB5C(int param_1,int param_2)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xbc) = param_2;
  func_080CE510(param_1,param_2 + 1,_DAT_080ceb7c,0x20,0,0x20);
  return in_lr;
}

// =============================================================================
// Function: func_080CEB80 @ 0x080CEB80
// =============================================================================
undefined8 func_080CEB80(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0xbc);
  if (uVar1 < 7) {
    uVar1 = uVar1 + 1;
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xbc) = uVar1;
  func_080CE510(param_1,*(int *)(param_1 + 0xbc) + 1,_DAT_080cebbc,0x20,0,0x20);
  return CONCAT44(in_lr,*(int *)(param_1 + 0xbc));
}

// =============================================================================
// Function: func_080CEBC0 @ 0x080CEBC0
// =============================================================================
undefined8 func_080CEBC0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    iVar1 = 7;
  }
  else {
    iVar1 = iVar1 + -1;
  }
  *(int *)(param_1 + 0xbc) = iVar1;
  func_080CE510(param_1,*(int *)(param_1 + 0xbc) + 1,_DAT_080cebfc,0x20,0,0x20);
  return CONCAT44(in_lr,*(int *)(param_1 + 0xbc));
}

// =============================================================================
// Function: func_080CEC00 @ 0x080CEC00
// =============================================================================
undefined8 func_080CEC00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = param_2;
  func_0805E6CC(param_1 + 1,_DAT_080cec80);
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  func_0805E824(param_1 + 0xe,param_1 + 1,1,0x100);
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  func_08007874(param_1 + 0x1b);
  uVar1 = func_08007B54(param_1 + 0x1b,4);
  param_1[0x1c] = uVar1;
  func_0x08007128(param_1 + 0x1d);
  uVar1 = func_0800736C(param_1 + 0x1d);
  param_1[0x1e] = uVar1;
  param_1[0x1f] = 0x12;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CEC84 @ 0x080CEC84
// =============================================================================
undefined4 func_080CEC84(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  byte bStack_18;
  byte bStack_17;
  
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  do {
    iVar1 = func_0805E8F0(param_1 + 0xe);
  } while (-1 < iVar1 * 0x20000000);
  func_080CE120(&bStack_18,*param_1,param_2);
  *(ushort *)(param_1 + 0xd) = bStack_18 + 8;
  *(ushort *)((int)param_1 + 0x36) = (ushort)bStack_17;
  param_1[0x1f] = param_2;
  param_1[0x20] = param_3;
  return in_lr;
}

// =============================================================================
// Function: func_080CFA38 @ 0x080CFA38
// =============================================================================
undefined8 func_080CFA38(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 in_lr;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 uStack_20;
  undefined1 uStack_1f;
  
  *param_2 = 0;
  uStack_28 = param_3;
  iVar2 = func_0x0800f09c(&uStack_28);
  if (iVar2 == 0) {
    cVar1 = func_0x0800f11c(&uStack_28);
    if (cVar1 == '\0') {
      func_0800F0A4(auStack_24,&uStack_28);
      puVar6 = (undefined1 *)func_0800DDD4(auStack_24);
      goto LAB_080cfb18;
    }
    func_0800F0A4(auStack_24,&uStack_28);
    uVar3 = func_0800DCB8(auStack_24);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if (iVar2 != 1) goto LAB_080cfb18;
    cVar1 = func_0x0800f11c(&uStack_28);
    if (cVar1 == '\0') {
      uStack_1f = func_0800F0E8(&uStack_28);
      puVar6 = (undefined1 *)func_0800DFD4();
      goto LAB_080cfb18;
    }
    uStack_20 = func_0800F0E8(&uStack_28);
    uVar3 = func_0800DF58();
  }
  uVar4 = strlen();
  if (99 < uVar4) {
    uVar4 = 99;
  }
  memcpy(param_2,uVar3,uVar4);
  param_2[uVar4] = 0;
  uVar3 = *_DAT_080cfb00;
  iVar2 = strlen(param_2);
  uVar4 = 99 - iVar2;
  puVar6 = param_2;
  if (uVar4 != 0) {
    uVar5 = strlen(uVar3);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    memcpy(param_2 + iVar2,uVar3,uVar5);
    (param_2 + iVar2)[uVar5] = 0;
  }
LAB_080cfb18:
  return CONCAT44(in_lr,puVar6);
}

// =============================================================================
// Function: func_080CFB28 @ 0x080CFB28
// =============================================================================
undefined8 func_080CFB28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  func_080A4A94();
  *(undefined4 *)(param_1 + 0x90) = _DAT_080cfb58;
  iVar1 = param_1 + 0x94;
  iVar2 = 0x53;
  do {
    func_0x08009f8c(iVar1);
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080CFC7C @ 0x080CFC7C
// =============================================================================
undefined4 func_080CFC7C(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  
  func_080A5EA0();
  if (*(int *)(param_1 + 4) == 0x3e) {
    func_08008F0C(&uStack_44,_DAT_080cfcc8,_DAT_080cfccc,0xe60);
    puVar4 = (undefined4 *)param_2[1];
    if (puVar4 == (undefined4 *)param_2[3]) {
      iStack_30 = 1;
      puVar5 = (undefined4 *)*param_2;
      iStack_34 = (int)puVar4 - (int)puVar5 >> 4;
      piVar1 = &iStack_34;
      if (iStack_34 == 0) {
        piVar1 = &iStack_30;
      }
      if (iStack_34 + *piVar1 == 0) {
        puVar2 = (undefined4 *)0x0;
        iVar7 = 0;
        puStack_24 = puVar2;
      }
      else {
        iVar7 = (iStack_34 + *piVar1) * 0x10;
        puVar2 = (undefined4 *)malloc(iVar7);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)func_080D3BC0(iVar7);
        }
        puVar5 = (undefined4 *)*param_2;
        puStack_24 = puVar2;
      }
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        if (puVar2 != (undefined4 *)0x0) {
          uVar8 = puVar5[1];
          uVar9 = puVar5[2];
          *puVar2 = *puVar5;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = puVar5[3];
        }
        puVar2 = puVar2 + 4;
      }
      iVar3 = iStack_30;
      if (iStack_30 == 1) {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uStack_44;
          puVar2[1] = uStack_40;
          puVar2[2] = uStack_3c;
          puVar2[3] = uStack_38;
        }
        puVar2 = puVar2 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = uStack_44;
            puVar2[1] = uStack_40;
            puVar2[2] = uStack_3c;
            puVar2[3] = uStack_38;
          }
          puVar2 = puVar2 + 4;
        }
      }
      iVar6 = *param_2;
      for (iVar3 = iVar6; iVar3 != param_2[1]; iVar3 = iVar3 + 0x10) {
      }
      if (iVar6 != 0) {
        free(iVar6);
      }
      *param_2 = (int)puStack_24;
      param_2[1] = (int)puVar2;
      param_2[3] = (int)puStack_24 + iVar7;
    }
    else {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uStack_44;
        puVar4[1] = uStack_40;
        puVar4[2] = uStack_3c;
        puVar4[3] = uStack_38;
      }
      param_2[1] = param_2[1] + 0x10;
    }
    func_08008F0C(&uStack_44,_DAT_080cfdc8,_DAT_080cfdcc,&UNK_000011e0);
    puVar4 = (undefined4 *)param_2[1];
    if (puVar4 == (undefined4 *)param_2[3]) {
      iStack_28 = 1;
      puVar5 = (undefined4 *)*param_2;
      iStack_2c = (int)puVar4 - (int)puVar5 >> 4;
      piVar1 = &iStack_2c;
      if (iStack_2c == 0) {
        piVar1 = &iStack_28;
      }
      if (iStack_2c + *piVar1 == 0) {
        puVar2 = (undefined4 *)0x0;
        iVar7 = 0;
        puStack_24 = puVar2;
      }
      else {
        iVar7 = (iStack_2c + *piVar1) * 0x10;
        puVar2 = (undefined4 *)malloc(iVar7);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)func_080D3BC0(iVar7);
        }
        puVar5 = (undefined4 *)*param_2;
        puStack_24 = puVar2;
      }
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        if (puVar2 != (undefined4 *)0x0) {
          uVar8 = puVar5[1];
          uVar9 = puVar5[2];
          *puVar2 = *puVar5;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = puVar5[3];
        }
        puVar2 = puVar2 + 4;
      }
      iVar3 = iStack_28;
      if (iStack_28 == 1) {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uStack_44;
          puVar2[1] = uStack_40;
          puVar2[2] = uStack_3c;
          puVar2[3] = uStack_38;
        }
        puVar2 = puVar2 + 4;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = uStack_44;
            puVar2[1] = uStack_40;
            puVar2[2] = uStack_3c;
            puVar2[3] = uStack_38;
          }
          puVar2 = puVar2 + 4;
        }
      }
      iVar6 = *param_2;
      for (iVar3 = iVar6; iVar3 != param_2[1]; iVar3 = iVar3 + 0x10) {
      }
      if (iVar6 != 0) {
        free(iVar6);
      }
      *param_2 = (int)puStack_24;
      param_2[1] = (int)puVar2;
      param_2[3] = (int)puStack_24 + iVar7;
    }
    else {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uStack_44;
        puVar4[1] = uStack_40;
        puVar4[2] = uStack_3c;
        puVar4[3] = uStack_38;
      }
      param_2[1] = param_2[1] + 0x10;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080CFEA8 @ 0x080CFEA8
// =============================================================================
undefined4 func_080CFEA8(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar2 = func_0x080a4698(*(undefined4 *)(param_1 + 4));
  uVar3 = (uint)*(ushort *)(iVar2 + 0x20);
  iVar2 = func_0800AF20(param_4);
  if (iVar2 != 0) {
    memcpy(param_3 * uVar3 * 2 + param_2 * 2 + *(int *)(param_1 + 0x10),iVar2,4);
    memcpy((param_3 + 1) * uVar3 * 2 + param_2 * 2 + *(int *)(param_1 + 0x10),iVar2 + 4,4);
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  if (param_5 != 0) {
    iVar2 = param_2 * 2;
    memcpy((param_3 + -1) * uVar3 * 2 + iVar2 + *(int *)(param_1 + 0x18),param_5,4);
    memcpy(param_3 * uVar3 * 2 + iVar2 + *(int *)(param_1 + 0x14),param_5 + 4,4);
    memcpy(uVar3 * (param_3 + 1) * 2 + iVar2 + *(int *)(param_1 + 0x14),param_5 + 8,4);
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  bVar1 = Field_IsPlotTilled(param_4);
  pbVar5 = (byte *)((param_2 + param_3 * uVar3) * 4 + *(int *)(param_1 + 0x2c));
  pbVar4 = (byte *)((uVar3 * (param_3 + 1) + param_2) * 4 + *(int *)(param_1 + 0x2c));
  bVar1 = bVar1 & 1;
  pbVar4[4] = pbVar4[4] & 0xfe | bVar1;
  *pbVar4 = *pbVar4 & 0xfe | bVar1;
  pbVar5[4] = pbVar5[4] & 0xfe | bVar1;
  *pbVar5 = *pbVar5 & 0xfe | bVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080CFFC0 @ 0x080CFFC0
// =============================================================================
undefined4 func_080CFFC0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x94 + (param_2 + param_3 * 0xc) * 4) = *param_4;
  iVar3 = param_3 + -1;
  bVar1 = false;
  if ((((-1 < param_2) && (-1 < iVar3)) && (param_2 < 0xc)) && (iVar3 < 7)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = param_1 + 0x94 + (param_2 + iVar3 * 0xc) * 4;
  }
  else {
    iVar3 = 0;
  }
  iVar8 = param_1 + 0x94;
  iVar4 = param_3 + -1;
  iVar7 = param_2 << 1;
  if (iVar3 != 0) {
    iVar3 = (param_2 + iVar4 * 0xc) * 4 + iVar8;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < param_3)) && ((param_2 < 0xc && (param_3 < 7)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar7 = iVar8 + (param_2 + param_3 * 0xc) * 4;
    }
    else {
      iVar7 = 0;
    }
    iVar6 = param_3 + -2;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < iVar6)) && ((param_2 < 0xc && (iVar6 < 7)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar6 = iVar8 + (param_2 + iVar6 * 0xc) * 4;
    }
    else {
      iVar6 = 0;
    }
    uVar2 = func_0800AF5C(iVar3,iVar7,iVar6);
    iVar7 = param_2 * 2;
    func_080CFEA8(param_1,iVar7,iVar4 * 2 + 7,iVar3,uVar2);
  }
  iVar3 = (param_2 + param_3 * 0xc) * 4 + iVar8;
  iVar6 = param_3 + 1;
  bVar1 = false;
  if ((((-1 < param_2) && (-1 < iVar6)) && (param_2 < 0xc)) && (iVar6 < 7)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = iVar8 + (param_2 + iVar6 * 0xc) * 4;
  }
  else {
    iVar5 = 0;
  }
  bVar1 = false;
  if (((-1 < param_2) && (-1 < iVar4)) && ((param_2 < 0xc && (iVar4 < 7)))) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar4 = iVar8 + (param_2 + iVar4 * 0xc) * 4;
  }
  else {
    iVar4 = 0;
  }
  uVar2 = func_0800AF5C(iVar3,iVar5,iVar4);
  func_080CFEA8(param_1,iVar7,param_3 * 2 + 7,iVar3,uVar2);
  bVar1 = false;
  if (((-1 < param_2) && (-1 < iVar6)) && ((param_2 < 0xc && (iVar6 < 7)))) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = iVar8 + (param_2 + iVar6 * 0xc) * 4;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    iVar3 = (param_2 + iVar6 * 0xc) * 4 + iVar8;
    iVar4 = param_3 + 2;
    bVar1 = false;
    if ((((-1 < param_2) && (-1 < iVar4)) && (param_2 < 0xc)) && (iVar4 < 7)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = iVar8 + (param_2 + iVar4 * 0xc) * 4;
    }
    else {
      iVar4 = 0;
    }
    bVar1 = false;
    if (((-1 < param_2) && (-1 < param_3)) && ((param_2 < 0xc && (param_3 < 7)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar8 = iVar8 + (param_2 + param_3 * 0xc) * 4;
    }
    else {
      iVar8 = 0;
    }
    uVar2 = func_0800AF5C(iVar3,iVar4,iVar8);
    func_080CFEA8(param_1,iVar7,iVar6 * 2 + 7,iVar3,uVar2);
  }
  return in_lr;
}

// =============================================================================
// Function: malloc @ 0x080D01F8
// =============================================================================
undefined8 malloc(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = param_1 + 3U & 0xfffffffc;
  puVar2 = (uint *)*_DAT_080d0244;
  if (puVar2 != (uint *)0x0) {
    do {
      if ((puVar2[1] == 0) && (uVar1 = *puVar2, uVar4 <= uVar1)) {
        if (uVar4 + 0x20 <= uVar1) {
          uVar3 = (int)puVar2 + uVar4 + 0x10;
          *(uint *)((int)puVar2 + uVar4 + 0x10) = (uVar1 - 0x10) - uVar4;
          *(undefined4 *)((int)puVar2 + uVar4 + 0x14) = 0;
          *(uint **)((int)puVar2 + uVar4 + 0x18) = puVar2;
          *(uint *)((int)puVar2 + uVar4 + 0x1c) = puVar2[3];
          if (puVar2[3] != 0) {
            *(uint *)(puVar2[3] + 8) = uVar3;
          }
          *puVar2 = uVar4;
          puVar2[3] = uVar3;
        }
        puVar2[1] = 1;
        break;
      }
      puVar2 = (uint *)puVar2[3];
    } while (puVar2 != (uint *)0x0);
    if (puVar2 != (uint *)0x0) {
      puVar2 = puVar2 + 4;
      goto LAB_080d025a;
    }
  }
  puVar2 = (uint *)0x0;
LAB_080d025a:
  return CONCAT44(in_lr,puVar2);
}

// =============================================================================
// Function: free @ 0x080D0260
// =============================================================================
undefined4 free(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + -0x10);
    piVar1 = *(int **)(param_1 + -8);
    if ((piVar1 != (int *)0x0) && (piVar1[1] == 0)) {
      *piVar1 = *piVar1 + 0x10 + *piVar2;
      piVar1[3] = *(int *)(param_1 + -4);
      piVar2 = piVar1;
      if (*(int *)(param_1 + -4) != 0) {
        *(int **)(*(int *)(param_1 + -4) + 8) = piVar1;
      }
    }
    piVar1 = (int *)piVar2[3];
    if ((piVar1 != (int *)0x0) && (piVar1[1] == 0)) {
      *piVar2 = *piVar2 + 0x10 + *piVar1;
      piVar2[3] = piVar1[3];
      if (piVar1[3] != 0) {
        *(int **)(piVar1[3] + 8) = piVar2;
      }
    }
    piVar2[1] = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D02B8 @ 0x080D02B8
// =============================================================================
undefined8 func_080D02B8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + -0x10);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D02CC @ 0x080D02CC
// =============================================================================
undefined4 func_080D02CC(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = _DAT_080d02e8;
  *_DAT_080d02e8 = (int)param_1;
  *param_1 = 0;
  func_0x080d0b88();
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D02F0 @ 0x080D02F0
// =============================================================================
undefined4 func_080D02F0(void)

{
  int *piVar1;
  undefined4 in_lr;
  int aiStack_24 [8];
  undefined4 uStack_4;
  
  piVar1 = (int *)*_DAT_080d033c;
  aiStack_24[0] = *piVar1;
  uStack_4 = in_lr;
  if (aiStack_24[0] == 0) {
    *piVar1 = 1;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 1;
    piVar1[0x60] = 0;
    piVar1[0x61] = 0;
    piVar1[0x5f] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    func_080D0BA8(aiStack_24);
    func_080D0B14(0,0);
    func_080D0ABC();
  }
  return uStack_4;
}

// =============================================================================
// Function: func_080D0340 @ 0x080D0340
// =============================================================================
undefined4 func_080D0340(void)

{
  undefined4 in_lr;
  
  if (*(int *)*_DAT_080d0358 != 0) {
    *(int *)*_DAT_080d0358 = 0;
    func_080D0AE0();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D035C @ 0x080D035C
// =============================================================================
undefined4 func_080D035C(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar1 = _DAT_080d039c;
  piVar3 = (int *)*_DAT_080d039c;
  if (*piVar3 != 0) {
    piVar3[7] = piVar3[0x61];
    if (*(int *)*_DAT_080d03a0 == 0) {
      iVar2 = func_080D0C10();
      if ((iVar2 == 0) && (*(int *)(*piVar1 + 0x180) == 0)) {
        func_080D0BE0();
        *(undefined4 *)(*piVar1 + 0x10) = 0;
      }
      else {
        iVar2 = *_DAT_080d03f0;
        if (*(int *)(iVar2 + 0x14) != 0) {
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x180);
          *(undefined4 *)(iVar2 + 0x180) = 0;
          func_080D0C2C();
        }
      }
    }
    iVar2 = *_DAT_080d03f0;
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    if (10 < *(uint *)(iVar2 + 0xc)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
      if (*(int *)*_DAT_080d03f4 != 0) {
        if (*(int *)*_DAT_080d03f4 == 1) {
          func_080D0B14(1,0);
        }
        else {
          func_080D0B14(1,1);
        }
      }
    }
    piVar1 = _DAT_080d043c;
    iVar2 = *_DAT_080d043c;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if ((1 < *(uint *)*_DAT_080d0440) && (0xb4 < *(uint *)(iVar2 + 0x10))) {
      func_080D0A94(0xb);
      iVar2 = *piVar1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 10;
      *(undefined4 *)(iVar2 + 0x180) = 0;
      func_080D0C2C();
    }
    return in_lr;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D0454 @ 0x080D0454
// =============================================================================
undefined4 func_080D0454(void)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 auStack_28 [4];
  int iStack_18;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  piVar1 = _DAT_080d048c;
  *(undefined4 *)(*_DAT_080d048c + 0x14) = 1;
  auStack_28[0] = 1;
  func_080D0BA8(auStack_28);
  auStack_28[0] = 3;
  iStack_18 = *piVar1 + 0x24;
  uStack_10 = 2;
  uStack_c = 0;
  func_080D0BA8(auStack_28);
  return in_lr;
}

// =============================================================================
// Function: func_080D0490 @ 0x080D0490
// =============================================================================
undefined4 func_080D0490(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = _DAT_080d04f0;
  *(undefined4 *)(*_DAT_080d04f0 + 0x14) = 2;
  func_080D0BA8();
  func_080D0BA8();
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(uint *)(iVar2 + 0x20) = param_2 + 1U >> 1;
  *(undefined4 *)(iVar2 + 0x184) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D04F4 @ 0x080D04F4
// =============================================================================
undefined4 func_080D04F4(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = _DAT_080d0554;
  *(undefined4 *)(*_DAT_080d0554 + 0x14) = 3;
  func_080D0BA8();
  func_080D0BA8();
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(uint *)(iVar2 + 0x20) = param_2 + 1U >> 1;
  *(undefined4 *)(iVar2 + 0x184) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D0558 @ 0x080D0558
// =============================================================================
undefined4 func_080D0558(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = _DAT_080d05d8;
  *(undefined4 *)(*_DAT_080d05d8 + 0x14) = 4;
  func_080D0BA8();
  func_080D0BA8();
  func_080D0BA8();
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(uint *)(iVar2 + 0x20) = (param_2 + 1U >> 1) + (param_4 + 1U >> 1);
  *(undefined4 *)(iVar2 + 0x184) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D05DC @ 0x080D05DC
// =============================================================================
undefined4 func_080D05DC(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 auStack_30 [4];
  int iStack_20;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  piVar1 = _DAT_080d0640;
  iVar2 = *_DAT_080d0640;
  *(undefined4 *)(iVar2 + 0x14) = 5;
  if (*(int *)(iVar2 + 0x30) != 0) {
    auStack_30[0] = 1;
    func_080D0BA8(auStack_30);
  }
  auStack_30[0] = 4;
  iStack_20 = *piVar1 + 0x24;
  uStack_18 = 2;
  uStack_14 = 0;
  func_080D0BA8();
  auStack_30[0] = 3;
  iStack_20 = *piVar1 + 0x2c;
  uStack_18 = 2;
  uStack_14 = 0;
  func_080D0BA8();
  auStack_30[0] = 2;
  iStack_20 = *piVar1 + 0x28;
  uStack_18 = 2;
  uStack_14 = 0;
  func_080D0BA8();
  return in_lr;
}

// =============================================================================
// Function: func_080D0644 @ 0x080D0644
// =============================================================================
undefined4 func_080D0644(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = _DAT_080d0674;
  *(char *)(*_DAT_080d0674 + 0x28) = (char)param_1;
  *(char *)(*piVar1 + 0x29) = (char)((uint)param_1 >> 8);
  *(char *)(*piVar1 + 0x2a) = (char)((uint)param_1 >> 0x10);
  *(char *)(*piVar1 + 0x2b) = (char)((uint)param_1 >> 0x18);
  *(undefined4 *)(*piVar1 + 0x30) = param_2;
  func_080D05DC();
  return in_lr;
}

// =============================================================================
// Function: func_080D06A8 @ 0x080D06A8
// =============================================================================
undefined4 func_080D06A8(void)

{
  undefined4 in_lr;
  
  func_080D0A94(0xb);
  return in_lr;
}

// =============================================================================
// Function: func_080D06B4 @ 0x080D06B4
// =============================================================================
undefined8 func_080D06B4(void)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(int *)(*_DAT_080d06cc + 0x14) == 0));
}

// =============================================================================
// Function: func_080D06DC @ 0x080D06DC
// =============================================================================
undefined8 func_080D06DC(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*_DAT_080d06f8 + 0x20);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x080d0eda(*(int *)(*_DAT_080d06f8 + 0x1c) * 100,iVar2);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D0704 @ 0x080D0704
// =============================================================================
undefined4 func_080D0704(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  iVar2 = 0;
  uVar1 = *_DAT_080d077c;
  if (*(int *)(*_DAT_080d0780 + 0x17c) == 0) {
    if ((uVar1 & 2) != 0) {
      uStack_10 = *_DAT_080d0784;
      iVar2 = func_080D078C(&uStack_10);
    }
    if ((iVar2 == 0) && ((uVar1 & 4) != 0)) {
      iVar2 = func_080D091C();
    }
    if ((uVar1 & 1) != 0) {
      func_080D0A14();
    }
  }
  if (iVar2 != 0) {
    *_DAT_080d0788 = 0;
    func_0x080d0a54(iVar2);
  }
  *_DAT_080d077c = uVar1;
  iVar2 = *_DAT_080d0780;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D078C @ 0x080D078C
// =============================================================================
undefined8 func_080D078C(int *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  uint uStack_14;
  
  piVar1 = _DAT_080d07ac;
  if (4 < *(uint *)*_DAT_080d07ac) {
    uVar4 = 9;
    goto LAB_080d0912;
  }
  switch(*(uint *)(*(uint *)*_DAT_080d07ac * 4 + _DAT_080d07b0) & 0xfffffffe) {
  case 0x80d07c8:
    if ((1 < *(uint *)(*_DAT_080d07ac + 4)) && (*(uint *)(*_DAT_080d07ac + 4) == 2)) {
      if (*param_1 != *(int *)(*_DAT_080d07e8 + 8)) {
        uVar4 = 1;
        goto LAB_080d0912;
      }
      *_DAT_080d07f8 = 0x30;
LAB_080d07f2:
      func_0x080d0a74();
    }
    break;
  case 0x80d07fc:
    iVar6 = *_DAT_080d07ac;
    iVar2 = *(int *)(iVar6 + 4);
    if (iVar2 == 1) {
LAB_080d0836:
      uVar4 = 7;
      goto LAB_080d0912;
    }
    if (iVar2 == 0) {
      if ((char)*param_1 == 'B') {
        if ((uint)*(ushort *)((int)param_1 + 2) != *(uint *)(iVar6 + 0x18)) {
LAB_080d0860:
          uVar4 = 4;
          goto LAB_080d0912;
        }
        bVar5 = 0x43;
        goto LAB_080d08ec;
      }
      if ((char)*param_1 == 'A') {
        uVar4 = 5;
        goto LAB_080d0912;
      }
    }
    else if (iVar2 == 2) {
      if ((char)*param_1 == 'F') goto LAB_080d07f2;
      goto LAB_080d0836;
    }
    break;
  case 0x80d083a:
    iVar6 = *_DAT_080d07ac;
    iVar2 = *(int *)(iVar6 + 4);
    if (iVar2 == 1) {
      if (*(uint *)(iVar6 + 8) < *(uint *)(iVar6 + 0x18)) {
        if (((char)*param_1 == 'D') &&
           ((uint)*(byte *)((int)param_1 + 1) == (*(uint *)(iVar6 + 8) & 0xff))) {
          pcVar3 = (char *)(*(int *)(iVar6 + 8) * 2 + *(int *)(iVar6 + 0x10));
          *pcVar3 = *(char *)((int)param_1 + 2);
          pcVar3[1] = *(char *)((int)param_1 + 3);
          iVar2 = *piVar1;
          *(short *)(iVar2 + 0x1c) =
               *(short *)(*(int *)(iVar2 + 8) * 2 + *(int *)(iVar2 + 0x10)) +
               *(short *)(iVar2 + 0x1c);
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
          *(int *)(*_DAT_080d08cc + 0x184) = *(int *)(*_DAT_080d08cc + 0x184) + 1;
          break;
        }
      }
      else if ((char)*param_1 == 'E') {
        if (*(short *)(iVar6 + 0x1c) != *(short *)((int)param_1 + 2)) {
          uVar4 = 3;
          goto LAB_080d0912;
        }
        bVar5 = 0x46;
        goto LAB_080d08ec;
      }
LAB_080d0908:
      uVar4 = 8;
      goto LAB_080d0912;
    }
    if (iVar2 == 0) {
      if ((char)*param_1 == 'A') {
        if ((uint)*(ushort *)((int)param_1 + 2) != *(uint *)(iVar6 + 0x18)) goto LAB_080d0860;
        bVar5 = 0x43;
LAB_080d08ec:
        uStack_14 = (uint)bVar5;
        *_DAT_080d0904 = uStack_14;
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      }
      else if ((char)*param_1 == 'B') {
        uVar4 = 6;
        goto LAB_080d0912;
      }
    }
    else if (iVar2 == 2) goto LAB_080d0908;
  }
  uVar4 = 0;
LAB_080d0912:
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_080D091C @ 0x080D091C
// =============================================================================
undefined8 func_080D091C(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  if (*(uint *)*_DAT_080d0938 < 5) {
    switch(*(uint *)(*(uint *)*_DAT_080d0938 * 4 + _DAT_080d093c) & 0xfffffffe) {
    case 0x80d0954:
      iVar2 = *_DAT_080d0938;
      if (*(int *)(iVar2 + 4) == 1) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      break;
    case 0x80d0964:
      piVar4 = (int *)*_DAT_080d0938;
      if (piVar4[1] == 1) {
        if ((uint)piVar4[2] < (uint)piVar4[6]) {
          puVar3 = (undefined1 *)(piVar4[2] * 2 + piVar4[4]);
          uStack_10._0_3_ = CONCAT12(*puVar3,CONCAT11((char)piVar4[2],0x44));
          uStack_10 = CONCAT13(puVar3[1],(undefined3)uStack_10);
          *(short *)(piVar4 + 7) = *(short *)(piVar4[2] * 2 + piVar4[4]) + (short)piVar4[7];
          *_DAT_080d09c8 = uStack_10;
          piVar4[2] = piVar4[2] + 1;
          if (*piVar4 != 4) {
            *(int *)(*_DAT_080d09cc + 0x184) = *(int *)(*_DAT_080d09cc + 0x184) + 1;
          }
        }
        else {
          uStack_10._0_3_ = CONCAT12((char)(short)piVar4[7],0x45);
          uStack_10 = CONCAT13((char)((ushort)(short)piVar4[7] >> 8),(undefined3)uStack_10);
          *_DAT_080d09f0 = uStack_10;
          piVar4[1] = piVar4[1] + 1;
        }
      }
      break;
    case 0x80d09f4:
      if ((1 < *(uint *)(*_DAT_080d0938 + 4)) && (*(uint *)(*_DAT_080d0938 + 4) == 2)) {
        func_0x080d0a74();
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 9;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D0A14 @ 0x080D0A14
// =============================================================================
undefined4 func_080D0A14(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 in_lr;
  
  puVar1 = _DAT_080d0a4c;
  piVar2 = (int *)*_DAT_080d0a44;
  if ((*piVar2 == 1) && ((uint)piVar2[1] < 3)) {
    *_DAT_080d0a4c = *(undefined4 *)(*_DAT_080d0a50 + 4);
    *(undefined2 *)(puVar1 + 1) = 0x20;
    piVar2[1] = piVar2[1] + 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D0A94 @ 0x080D0A94
// =============================================================================
undefined4 func_080D0A94(void)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = _DAT_080d0ab8;
  *(undefined4 *)(*_DAT_080d0ab8 + 0x17c) = 1;
  func_0x080d0a54();
  *(undefined4 *)(*piVar1 + 0x17c) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D0ABC @ 0x080D0ABC
// =============================================================================
undefined4 func_080D0ABC(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d0ad8;
  uVar1 = *_DAT_080d0ad8;
  *_DAT_080d0ad8 = 0;
  *_DAT_080d0adc = *_DAT_080d0adc | 0x80;
  *puVar2 = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080D0AE0 @ 0x080D0AE0
// =============================================================================
undefined4 func_080D0AE0(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d0b04;
  uVar1 = *_DAT_080d0b04;
  *_DAT_080d0b04 = 0;
  *_DAT_080d0b08 = (ushort)_DAT_080d0b0c & *_DAT_080d0b08;
  *_DAT_080d0b10 = 0x80;
  *puVar2 = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080D0B14 @ 0x080D0B14
// =============================================================================
undefined4 func_080D0B14(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  uVar1 = *_DAT_080d0b44;
  *_DAT_080d0b44 = 0;
  if (param_1 != 0) {
    *_DAT_080d0b48 = 0x8000;
  }
  *_DAT_080d0b48 = 0xc000;
  if (param_2 == 0) {
    *_DAT_080d0b4c = 0;
  }
  else {
    *_DAT_080d0b78 = 0x30;
  }
  puVar2 = _DAT_080d0b80;
  *_DAT_080d0b80 = 0;
  *(undefined2 *)(puVar2 + -5) = 0x47;
  *(undefined2 *)((int)puVar2 + 0xae) = 0x80;
  *_DAT_080d0b84 = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080D0BA8 @ 0x080D0BA8
// =============================================================================
undefined4 func_080D0BA8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *_DAT_080d0bdc;
  uVar1 = func_0x080d0f4e(*(int *)(iVar3 + 0x38) + 1,10);
  *(undefined4 *)(iVar3 + 0x38) = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = iVar3 + *(int *)(iVar3 + 0x38) * 0x20;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)(iVar3 + 0x3c) = *param_1;
  *(undefined4 *)(iVar3 + 0x40) = uVar1;
  *(undefined4 *)(iVar3 + 0x44) = uVar2;
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  *(undefined4 *)(iVar3 + 0x48) = param_1[3];
  *(undefined4 *)(iVar3 + 0x4c) = uVar1;
  *(undefined4 *)(iVar3 + 0x50) = uVar2;
  uVar1 = param_1[7];
  *(undefined4 *)(iVar3 + 0x54) = param_1[6];
  *(undefined4 *)(iVar3 + 0x58) = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080D0BE0 @ 0x080D0BE0
// =============================================================================
undefined4 func_080D0BE0(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *_DAT_080d0c08;
  if (*(int *)(iVar2 + 0x34) != *(int *)(iVar2 + 0x38)) {
    iVar1 = func_0x080d0f4e(*(int *)(iVar2 + 0x34) + 1,10);
    *(int *)(iVar2 + 0x34) = iVar1;
    *_DAT_080d0c0c = iVar2 + iVar1 * 0x20 + 0x3c;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D0C10 @ 0x080D0C10
// =============================================================================
undefined8 func_080D0C10(void)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(int *)(*_DAT_080d0c28 + 0x34) == *(int *)(*_DAT_080d0c28 + 0x38)));
}

// =============================================================================
// Function: func_080D0C2C @ 0x080D0C2C
// =============================================================================
undefined4 func_080D0C2C(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *_DAT_080d0c60;
  iVar1 = func_0x080d0f4e(*(int *)(iVar2 + 0x34) + 1,10);
  *(int *)(iVar2 + 0x38) = iVar1;
  *(undefined4 *)(iVar2 + 0x3c + iVar1 * 0x20) = 0;
  *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x38);
  *_DAT_080d0c64 = iVar2 + *(int *)(iVar2 + 0x38) * 0x20 + 0x3c;
  return in_lr;
}

// =============================================================================
// Function: func_080D0CB4 @ 0x080D0CB4
// =============================================================================
undefined8 func_080D0CB4(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((*param_2 == *(char *)(param_1 + 2)) && (param_2[1] == *(char *)(param_1 + 3))) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D0CD4 @ 0x080D0CD4
// =============================================================================
undefined8 func_080D0CD4(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (param_1 <= _DAT_080d0d08) {
    uVar2 = (int)(param_1 & 0xff00) >> 8;
    if (((((param_1 & 0xff) - 0x40 < 0xbd) && (0x80 < uVar2)) && (uVar2 < 0xeb)) &&
       (0x3f < uVar2 - 0xa0)) {
      if (uVar2 < 0xa0) {
        iVar1 = -0x81;
      }
      else {
        iVar1 = -0xc1;
      }
      iVar1 = (uVar2 + iVar1) * 0xbd + ((param_1 & 0xff) - 0x40);
      goto LAB_080d0d22;
    }
  }
  iVar1 = -1;
LAB_080d0d22:
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_080D0D28 @ 0x080D0D28
// =============================================================================
undefined8 func_080D0D28(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  if (param_2 - 0xb1U < 0x13) {
    switch(*(uint *)(PTR_case_080D0D4C_080d0d48 + (param_2 - 0xb1U) * 4) & 0xfffffffe) {
    case 0x80d0d4c:
    case 0x80d0d98:
      uVar1 = _DAT_080d0d9c;
      break;
    case 0x80d0da0:
      uVar1 = _DAT_080d0da4;
      break;
    case 0x80d0da8:
      uVar1 = _DAT_080d0dac;
      break;
    case 0x80d0db0:
      uVar1 = _DAT_080d0db4;
      break;
    case 0x80d0db8:
      uVar1 = _DAT_080d0dbc;
      break;
    case 0x80d0dc0:
      uVar1 = _DAT_080d0dc4;
      break;
    case 0x80d0dc8:
      uVar1 = _DAT_080d0dcc;
      break;
    case 0x80d0dd0:
      uVar1 = _DAT_080d0dd4;
      break;
    case 0x80d0dd8:
      uVar1 = _DAT_080d0ddc;
      break;
    case 0x80d0de0:
      uVar1 = _DAT_080d0de4;
      break;
    case 0x80d0de8:
      uVar1 = _DAT_080d0dec;
      break;
    case 0x80d0df0:
      uVar1 = _DAT_080d0df4;
      break;
    case 0x80d0df8:
      uVar1 = _DAT_080d0dfc;
      break;
    case 0x80d0e00:
      uVar1 = _DAT_080d0e04;
      break;
    case 0x80d0e08:
      uVar1 = _DAT_080d0e18;
      break;
    case 0x80d0e20:
      goto case_080D0E20;
    }
    func_0x080d3914(uVar1,param_1,_DAT_080d0e1c);
    iVar2 = 1;
  }
  else {
case_080D0E20:
    iVar3 = -1;
    if (0 < param_2) {
      if (param_2 < 0x100) {
        iVar4 = 1;
        iVar3 = (int)*(short *)(param_2 * 2 + _DAT_080d0e38);
      }
      else if ((param_2 <= _DAT_080d0e78) &&
              (iVar2 = func_080D0CD4(param_2), iVar3 = -1, -1 < iVar2)) {
        iVar3 = (int)*(short *)(iVar2 * 2 + _DAT_080d0e7c);
        iVar4 = 2;
      }
    }
    if (param_1 != 0) {
      if (iVar3 < 0) {
        memset(param_1,0,0x80);
      }
      else if (iVar4 == 1) {
        func_0x080d3914(iVar3 * 0xc + _DAT_080d0e9c,param_1,_DAT_080d0ea0);
      }
      else {
        func_0x080d3914(iVar3 * 0x18 + _DAT_080d0e80,param_1,_DAT_080d0e84);
      }
    }
    iVar2 = 0;
    if (-1 < iVar3) {
      iVar2 = iVar4;
    }
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_080D0EC0 @ 0x080D0EC0
// =============================================================================
longlong func_080D0EC0(void)

{
  uint in_lr;
  
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_080D0F60 @ 0x080D0F60
// =============================================================================
uint func_080D0F60(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  for (; (param_2 < 0x10000000 && (param_2 < param_1)); param_2 = param_2 << 4) {
    param_4 = param_4 << 4;
  }
  for (; (param_2 < 0x80000000 && (param_2 < param_1)); param_2 = param_2 << 1) {
    param_4 = param_4 << 1;
  }
  while( true ) {
    uVar1 = 0;
    if (param_2 <= param_1) {
      param_1 = param_1 - param_2;
    }
    if (param_2 >> 1 <= param_1) {
      param_1 = param_1 - (param_2 >> 1);
      uVar1 = param_4 >> 1 | param_4 << 0x1f;
    }
    if (param_2 >> 2 <= param_1) {
      param_1 = param_1 - (param_2 >> 2);
      uVar1 = uVar1 | param_4 >> 2 | param_4 << 0x1e;
    }
    if (param_2 >> 3 <= param_1) {
      param_1 = param_1 - (param_2 >> 3);
      uVar1 = uVar1 | param_4 << 0x1d;
    }
    if ((param_1 == 0) || (param_4 >> 4 == 0)) break;
    param_2 = param_2 >> 4;
    param_4 = param_4 >> 4;
  }
  uVar1 = uVar1 & 0xe0000000;
  if (uVar1 != 0) {
    if ((uVar1 & param_4 << 0x1d) != 0) {
      param_1 = param_1 + (param_2 >> 3);
    }
    if ((uVar1 & (param_4 >> 2 | param_4 << 0x1e)) != 0) {
      param_1 = param_1 + (param_2 >> 2);
    }
    if ((uVar1 & (param_4 >> 1 | param_4 << 0x1f)) != 0) {
      param_1 = param_1 + (param_2 >> 1);
    }
    return param_1;
  }
  return param_1;
}

// =============================================================================
// Function: func_080D10F0 @ 0x080D10F0
// =============================================================================
void func_080D10F0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint unaff_r4;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r7;
  int iVar9;
  uint uVar10;
  
  puVar2 = (undefined4 *)(unaff_r7 + 0x20);
  iVar9 = 1 << (unaff_r4 & 0xff);
  do {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2 = puVar2 + 2;
    iVar7 = iVar9 + -2;
    bVar1 = 1 < iVar9;
    iVar9 = iVar7;
  } while (iVar7 != 0 && bVar1);
  iVar9 = 0x20;
  uVar6 = 0;
  uVar10 = 0;
  iVar7 = unaff_r4 << 1;
  do {
    uVar6 = uVar6 << 1;
    func_080D11A4();
    for (uVar5 = unaff_r4; uVar5 != 0; uVar5 = uVar5 - 1) {
      iVar3 = 0x20;
      for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
        iVar4 = (uVar6 >> (uVar8 & 0xff) & 1) * 2 + iVar3;
        iVar3 = (int)*(short *)(unaff_r7 + iVar4);
        if (iVar3 < 0) {
          iVar3 = iVar9 + 4;
          *(short *)(unaff_r7 + iVar4) = (short)iVar3;
          iVar9 = iVar3;
        }
      }
      func_080D11A4();
      *(ushort *)(unaff_r7 + (uVar6 & 1) * 2 + iVar3) = ~(ushort)unaff_r4;
      uVar6 = uVar6 + 1;
    }
    uVar10 = uVar10 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}

// =============================================================================
// Function: func_080D116E @ 0x080D116E
// =============================================================================
void func_080D116E(void)

{
  func_0x080d1186();
  func_0x080d1186();
  return;
}

// =============================================================================
// Function: func_080D117E @ 0x080D117E
// =============================================================================
void func_080D117E(void)

{
  func_0x080d1186();
  return;
}

// =============================================================================
// Function: func_080D11A4 @ 0x080D11A4
// =============================================================================
int func_080D11A4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  
  if (-1 < param_4 - unaff_r4) {
    return param_1;
  }
  return param_1 + 4;
}

// =============================================================================
// Function: func_080D1204 @ 0x080D1204
// =============================================================================
void func_080D1204(undefined4 param_1,int param_2)

{
  int extraout_r1;
  short unaff_r4;
  int unaff_r8;
  code *unaff_r9;
  short unaff_r10;
  
  param_2 = unaff_r8 - param_2;
  do {
    (*unaff_r9)();
    if (-1 < (extraout_r1 + 1) * -0x80000000) {
      unaff_r4 = unaff_r4 * 0x100 + unaff_r10;
      *(short *)(extraout_r1 + 1) = unaff_r4;
    }
    param_2 = param_2 + -1;
    unaff_r10 = unaff_r4;
  } while (param_2 != 0);
  return;
}

// =============================================================================
// Function: func_080D1224 @ 0x080D1224
// =============================================================================
void func_080D1224(void)

{
  short sVar1;
  int extraout_r1;
  short *psVar2;
  int iVar3;
  short *unaff_r8;
  code *unaff_r9;
  short unaff_r10;
  short sVar4;
  
  func_080D14EC();
  do {
    func_080D11A4();
    func_080D11A4();
    iVar3 = 7;
    sVar1 = 6;
    sVar4 = unaff_r10;
    do {
      unaff_r10 = sVar1;
      (*unaff_r9)();
      psVar2 = (short *)(extraout_r1 + 1);
      if (-1 < (int)psVar2 * -0x80000000) {
        unaff_r10 = unaff_r10 * 0x100 + sVar4;
        *psVar2 = unaff_r10;
      }
      iVar3 = iVar3 + -1;
      sVar1 = unaff_r10;
      sVar4 = unaff_r10;
    } while (iVar3 != 0);
  } while (psVar2 < unaff_r8);
  return;
}

// =============================================================================
// Function: func_080D129A @ 0x080D129A
// =============================================================================
void func_080D129A(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  ushort *extraout_r1;
  ushort *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int unaff_r7;
  undefined2 *unaff_r8;
  code *unaff_r9;
  uint unaff_r10;
  undefined8 uVar11;
  
  puVar4 = (uint *)func_080D14EC();
  uVar7 = _DAT_080d1510;
  while( true ) {
    iVar9 = param_4 + -1;
    if (param_4 + -1 < 0) {
      param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar9 = param_4 + 0x1f;
    }
    param_4 = iVar9;
    uVar3 = param_3 & 0x80000000;
    param_3 = param_3 << 1;
    if (uVar3 != 0) break;
    uVar11 = (*unaff_r9)(puVar4);
    puVar4 = (uint *)uVar11;
    puVar6 = (undefined2 *)((int)((ulonglong)uVar11 >> 0x20) + 1);
    if (-1 < (int)puVar6 * -0x80000000) {
      uVar7 = uVar7 * 0x100 + unaff_r10;
      *puVar6 = (short)uVar7;
    }
    unaff_r10 = uVar7;
    if (unaff_r8 <= puVar6) {
      return;
    }
  }
  func_080D11A4();
  bVar2 = *(byte *)(unaff_r7 + 0xe);
  func_080D11A4();
  uVar7 = (uint)*(ushort *)(unaff_r7 + 0xc) + (uint)bVar2;
  func_080D11A4();
  iVar9 = 7;
  if (uVar7 == 1) {
    if (-1 < (int)extraout_r1 << 0x1f) {
      uVar7 = (uint)(*extraout_r1 >> 8) | (uint)(*extraout_r1 >> 8) << 8;
      puVar5 = extraout_r1;
      do {
        puVar5 = puVar5 + 1;
        iVar10 = iVar9;
LAB_080d14de:
        *puVar5 = (ushort)uVar7;
        iVar9 = iVar10 + -2;
      } while (iVar9 != 0 && 1 < iVar10);
      return;
    }
    uVar7 = unaff_r10 << 8 | unaff_r10;
    puVar5 = (ushort *)((int)extraout_r1 + 1);
    iVar10 = 8;
    goto LAB_080d14de;
  }
  if ((uVar7 & 1) == 0) {
    puVar8 = (ushort *)((int)extraout_r1 - uVar7);
    puVar5 = extraout_r1;
    if (((uint)puVar8 & 1) != 0) {
      puVar8 = (ushort *)((int)puVar8 + 1);
      puVar5 = (ushort *)((int)extraout_r1 + 1);
      *puVar5 = *puVar8 & 0xff00 | (ushort)unaff_r10;
      iVar9 = 6;
    }
    do {
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar8;
      iVar10 = iVar9 + -2;
      bVar1 = 1 < iVar9;
      iVar9 = iVar10;
    } while (iVar10 != 0 && bVar1);
    return;
  }
  puVar8 = (ushort *)((int)extraout_r1 - uVar7);
  puVar5 = extraout_r1;
  if (((uint)puVar8 & 1) != 0) {
    puVar8 = (ushort *)((int)puVar8 + 1);
    unaff_r10 = (uint)(*puVar8 >> 8);
    puVar5 = (ushort *)((int)extraout_r1 + 1);
    iVar9 = 6;
  }
  puVar6 = (undefined2 *)((int)puVar5 + -1);
  do {
    puVar8 = puVar8 + 1;
    uVar7 = (uint)*puVar8 << 8 | unaff_r10;
    puVar6 = puVar6 + 1;
    *puVar6 = (short)uVar7;
    unaff_r10 = uVar7 >> 0x10;
    iVar10 = iVar9 + -2;
    bVar1 = 1 < iVar9;
    iVar9 = iVar10;
  } while (iVar10 != 0 && bVar1);
  return;
}

// =============================================================================
// Function: func_080D12EC @ 0x080D12EC
// =============================================================================
void func_080D12EC(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  ushort *extraout_r1;
  ushort *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int unaff_r7;
  undefined2 *unaff_r8;
  code *unaff_r9;
  uint unaff_r10;
  undefined8 uVar11;
  
  puVar4 = (uint *)func_080D14EC();
  uVar7 = _DAT_080d1514;
  while( true ) {
    iVar10 = param_4 + -1;
    if (param_4 + -1 < 0) {
      param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar10 = param_4 + 0x1f;
    }
    param_4 = iVar10;
    uVar3 = param_3 & 0x80000000;
    param_3 = param_3 << 1;
    if (uVar3 != 0) break;
    uVar11 = (*unaff_r9)(puVar4);
    puVar4 = (uint *)uVar11;
    puVar6 = (undefined2 *)((int)((ulonglong)uVar11 >> 0x20) + 1);
    if (-1 < (int)puVar6 * -0x80000000) {
      uVar7 = uVar7 * 0x100 + unaff_r10;
      *puVar6 = (short)uVar7;
    }
    unaff_r10 = uVar7;
    if (unaff_r8 <= puVar6) {
      return;
    }
  }
  func_080D11A4();
  bVar2 = *(byte *)(unaff_r7 + 0x12);
  func_080D11A4();
  uVar7 = (uint)*(ushort *)(unaff_r7 + 0x10) + (uint)bVar2;
  func_080D11A4();
  iVar10 = 7;
  if (uVar7 == 1) {
    if ((int)extraout_r1 << 0x1f < 0) {
      uVar7 = unaff_r10 << 8 | unaff_r10;
      puVar5 = (ushort *)((int)extraout_r1 + 1);
      iVar9 = 8;
      while( true ) {
        *puVar5 = (ushort)uVar7;
        iVar10 = iVar9 + -2;
        if (iVar10 == 0 || iVar9 < 2) break;
LAB_080d14dc:
        puVar5 = puVar5 + 1;
        iVar9 = iVar10;
      }
      return;
    }
    uVar7 = (uint)(*extraout_r1 >> 8) | (uint)(*extraout_r1 >> 8) << 8;
    puVar5 = extraout_r1;
    goto LAB_080d14dc;
  }
  if ((uVar7 & 1) == 0) {
    puVar8 = (ushort *)((int)extraout_r1 - uVar7);
    puVar5 = extraout_r1;
    if (((uint)puVar8 & 1) != 0) {
      puVar8 = (ushort *)((int)puVar8 + 1);
      puVar5 = (ushort *)((int)extraout_r1 + 1);
      *puVar5 = *puVar8 & 0xff00 | (ushort)unaff_r10;
      iVar10 = 6;
    }
    do {
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar8;
      iVar9 = iVar10 + -2;
      bVar1 = 1 < iVar10;
      iVar10 = iVar9;
    } while (iVar9 != 0 && bVar1);
    return;
  }
  puVar8 = (ushort *)((int)extraout_r1 - uVar7);
  puVar5 = extraout_r1;
  if (((uint)puVar8 & 1) != 0) {
    puVar8 = (ushort *)((int)puVar8 + 1);
    unaff_r10 = (uint)(*puVar8 >> 8);
    puVar5 = (ushort *)((int)extraout_r1 + 1);
    iVar10 = 6;
  }
  puVar6 = (undefined2 *)((int)puVar5 + -1);
  do {
    puVar8 = puVar8 + 1;
    uVar7 = (uint)*puVar8 << 8 | unaff_r10;
    puVar6 = puVar6 + 1;
    *puVar6 = (short)uVar7;
    unaff_r10 = uVar7 >> 0x10;
    iVar9 = iVar10 + -2;
    bVar1 = 1 < iVar10;
    iVar10 = iVar9;
  } while (iVar9 != 0 && bVar1);
  return;
}

// =============================================================================
// Function: func_080D139C @ 0x080D139C
// =============================================================================
void func_080D139C(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort unaff_r4;
  ushort *puVar6;
  int iVar7;
  int unaff_r7;
  ushort *unaff_r8;
  code *unaff_r9;
  undefined8 uVar8;
  
  puVar4 = (uint *)func_080D14EC();
  do {
    iVar7 = param_4 + -1;
    if (param_4 + -1 < 0) {
      param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = param_4 + 0x1f;
    }
    param_4 = iVar7;
    uVar3 = param_3 & 0x80000000;
    param_3 = param_3 << 1;
    if (uVar3 == 0) {
      (*unaff_r9)();
      uVar8 = (*unaff_r9)();
      puVar4 = (uint *)uVar8;
      unaff_r4 = unaff_r4 << 8 | unaff_r4;
      puVar5 = (ushort *)((int)((ulonglong)uVar8 >> 0x20) + 2);
      *puVar5 = unaff_r4;
    }
    else {
      func_080D11A4(puVar4);
      bVar1 = *(byte *)(unaff_r7 + 0xe);
      func_080D11A4();
      uVar2 = *(ushort *)(unaff_r7 + 0xc);
      uVar8 = func_080D11A4();
      puVar5 = (ushort *)((ulonglong)uVar8 >> 0x20);
      puVar4 = (uint *)uVar8;
      iVar7 = 5;
      puVar6 = puVar5 + -((uint)uVar2 + (uint)bVar1);
      do {
        puVar6 = puVar6 + 1;
        unaff_r4 = *puVar6;
        puVar5 = puVar5 + 1;
        *puVar5 = unaff_r4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  } while (puVar5 < unaff_r8);
  return;
}

// =============================================================================
// Function: func_080D145E @ 0x080D145E
// =============================================================================
void func_080D145E(undefined4 param_1,ushort *param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint unaff_r5;
  ushort *puVar4;
  int unaff_r6;
  int iVar5;
  int iVar6;
  uint unaff_r10;
  
  if (unaff_r5 == 1) {
    if ((int)param_2 << 0x1f < 0) {
      uVar3 = unaff_r10 << 8 | unaff_r10;
      param_2 = (ushort *)((int)param_2 + 1);
      iVar6 = unaff_r6 + 1;
      while( true ) {
        *param_2 = (ushort)uVar3;
        unaff_r6 = iVar6 + -2;
        if (unaff_r6 == 0 || iVar6 < 2) break;
LAB_080d14dc:
        param_2 = param_2 + 1;
        iVar6 = unaff_r6;
      }
      return;
    }
    uVar3 = (uint)(*param_2 >> 8) | (uint)(*param_2 >> 8) << 8;
    goto LAB_080d14dc;
  }
  if ((unaff_r5 & 1) == 0) {
    puVar4 = (ushort *)((int)param_2 - unaff_r5);
    iVar6 = unaff_r6;
    if (((uint)puVar4 & 1) != 0) {
      puVar4 = (ushort *)((int)puVar4 + 1);
      param_2 = (ushort *)((int)param_2 + 1);
      *param_2 = *puVar4 & 0xff00 | (ushort)unaff_r10;
      iVar6 = unaff_r6 + -1;
      if (unaff_r6 + -1 == 0) {
        return;
      }
    }
    do {
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
      *param_2 = *puVar4;
      iVar5 = iVar6 + -2;
      bVar1 = 1 < iVar6;
      iVar6 = iVar5;
    } while (iVar5 != 0 && bVar1);
    return;
  }
  puVar4 = (ushort *)((int)param_2 - unaff_r5);
  if (((uint)puVar4 & 1) != 0) {
    puVar4 = (ushort *)((int)puVar4 + 1);
    unaff_r10 = (uint)(*puVar4 >> 8);
    param_2 = (ushort *)((int)param_2 + 1);
    unaff_r6 = unaff_r6 + -1;
    if (unaff_r6 == 0) {
      return;
    }
  }
  puVar2 = (undefined2 *)((int)param_2 + -1);
  do {
    puVar4 = puVar4 + 1;
    uVar3 = (uint)*puVar4 << 8 | unaff_r10;
    puVar2 = puVar2 + 1;
    *puVar2 = (short)uVar3;
    unaff_r10 = uVar3 >> 0x10;
    iVar6 = unaff_r6 + -2;
    bVar1 = 1 < unaff_r6;
    unaff_r6 = iVar6;
  } while (iVar6 != 0 && bVar1);
  return;
}

// =============================================================================
// Function: func_080D14EC @ 0x080D14EC
// =============================================================================
void func_080D14EC(void)

{
  int unaff_r5;
  short sVar1;
  int unaff_r7;
  
  sVar1 = 1;
  do {
    func_080D11A4();
    *(undefined1 *)(unaff_r7 + 6) = 5;
    *(short *)(unaff_r7 + 4) = sVar1;
    unaff_r7 = unaff_r7 + 4;
    sVar1 = sVar1 + 0x20;
    unaff_r5 = unaff_r5 + -1;
  } while (unaff_r5 != 0);
  return;
}

// =============================================================================
// Function: func_080D1F20 @ 0x080D1F20
// =============================================================================
undefined8 func_080D1F20(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 unaff_r9;
  undefined4 in_lr;
  bool bVar18;
  
  iVar6 = *_DAT_080d2118;
  param_3[4] = *(byte *)(param_1 + _DAT_080d211c);
  pbVar8 = *(byte **)(param_3 + 0x40);
  if (*pbVar8 < 0x80) {
    param_3[5] = *pbVar8;
    pbVar9 = pbVar8 + 1;
    if (*pbVar9 < 0x80) {
      param_3[6] = *pbVar9;
      pbVar9 = pbVar8 + 2;
      if (*pbVar9 < 0x80) {
        param_3[4] = param_3[4] + *pbVar9;
        pbVar9 = pbVar8 + 3;
      }
    }
    *(byte **)(param_3 + 0x40) = pbVar9;
  }
  bVar5 = 0;
  pbVar8 = param_3 + 0x24;
  bVar1 = *pbVar8;
  if ((bVar1 & 0xc0) == 0) {
    bVar7 = param_3[5];
  }
  else {
    bVar7 = param_3[5];
    uVar10 = (uint)bVar7;
    if ((bVar1 & 0x40) != 0) {
      uVar10 = (uint)*(byte *)(*(int *)(param_3 + 0x2c) + uVar10);
    }
    pbVar8 = (byte *)(uVar10 * 0xc + *(int *)(param_3 + 0x28));
    if ((*pbVar8 & 0xc0) != 0) goto LAB_080d2106;
    if ((bVar1 & 0x80) != 0) {
      if ((pbVar8[3] & 0x80) != 0) {
        bVar5 = (pbVar8[3] + 0x40) * '\x02';
      }
      bVar7 = pbVar8[1];
    }
  }
  uVar10 = (uint)param_3[0x1d] + (uint)*(byte *)(param_2 + 9);
  if (0xff < uVar10) {
    uVar10 = 0xff;
  }
  bVar1 = *pbVar8;
  if ((bVar1 & 7) == 0) {
    bVar3 = false;
    pbVar15 = (byte *)(iVar6 + 0x50);
    uVar11 = (uint)*(byte *)(iVar6 + 6);
    uVar16 = uVar10;
    pbVar9 = param_3;
    pbVar4 = (byte *)0x0;
    do {
      pbVar14 = pbVar15;
      if ((*pbVar15 & 199) == 0) goto LAB_080d2060;
      pbVar14 = pbVar4;
      if ((*pbVar15 & 0x40) == 0) {
        if (!bVar3) goto LAB_080d2038;
        goto LAB_080d2054;
      }
      if (bVar3) {
LAB_080d2038:
        uVar12 = (uint)pbVar15[0x13];
        if (uVar12 < uVar16) {
          uVar16 = uVar12;
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          goto LAB_080d2052;
        }
        if (uVar12 <= uVar16) {
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          bVar18 = pbVar9 <= pbVar4;
          if ((pbVar9 < pbVar4) || (pbVar4 = pbVar9, bVar18)) goto LAB_080d2052;
        }
      }
      else {
        bVar3 = true;
        uVar16 = (uint)pbVar15[0x13];
        pbVar4 = *(byte **)(pbVar15 + 0x2c);
LAB_080d2052:
        pbVar9 = pbVar4;
        pbVar14 = pbVar15;
      }
LAB_080d2054:
      pbVar15 = pbVar15 + 0x40;
      uVar12 = uVar11 - 1;
      bVar18 = 0 < (int)uVar11;
      uVar11 = uVar12;
      pbVar4 = pbVar14;
    } while (uVar12 != 0 && bVar18);
    if (pbVar14 == (byte *)0x0) goto LAB_080d2106;
  }
  else {
    if (*(int *)(iVar6 + 0x1c) == 0) goto LAB_080d2106;
    pbVar14 = (byte *)(*(int *)(iVar6 + 0x1c) + ((bVar1 & 7) - 1) * 0x40);
    if (((((*pbVar14 & 199) != 0) && ((*pbVar14 & 0x40) == 0)) && (uVar10 <= pbVar14[0x13])) &&
       ((pbVar14[0x13] != uVar10 || (*(byte **)(pbVar14 + 0x2c) < param_3)))) goto LAB_080d2106;
  }
LAB_080d2060:
  func_080D262C(pbVar14);
  pbVar14[0x30] = 0;
  pbVar14[0x31] = 0;
  pbVar14[0x32] = 0;
  pbVar14[0x33] = 0;
  iVar13 = *(int *)(param_3 + 0x20);
  *(int *)(pbVar14 + 0x34) = iVar13;
  if (iVar13 != 0) {
    *(byte **)(iVar13 + 0x30) = pbVar14;
  }
  *(byte **)(param_3 + 0x20) = pbVar14;
  *(byte **)(pbVar14 + 0x2c) = param_3;
  bVar2 = param_3[0x1b];
  param_3[0x1c] = bVar2;
  if (bVar2 != 0) {
    func_0x080d2160(bVar2,param_3);
  }
  func_0x080d2bf8(param_2,param_3);
  *(undefined4 *)(pbVar14 + 0x10) = *(undefined4 *)(param_3 + 4);
  pbVar14[0x13] = (byte)uVar10;
  pbVar14[8] = bVar7;
  pbVar14[0x14] = bVar5;
  pbVar14[1] = *pbVar8;
  uVar17 = *(undefined4 *)(pbVar8 + 4);
  *(undefined4 *)(pbVar14 + 0x24) = uVar17;
  *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + 8);
  *(undefined2 *)(pbVar14 + 0xc) = *(undefined2 *)(param_3 + 0x1e);
  func_0x080d1ef0();
  iVar13 = (uint)pbVar14[8] + (int)(char)param_3[8];
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  if ((bVar1 & 7) == 0) {
    uVar17 = func_080D21B0(uVar17,iVar13,param_3[9]);
  }
  else {
    pbVar14[0x1e] = pbVar8[2];
    bVar5 = pbVar8[3];
    if (((bVar5 & 0x80) != 0) || ((bVar5 & 0x70) == 0)) {
      bVar5 = 8;
    }
    pbVar14[0x1f] = bVar5;
    uVar17 = func_0x080d1e9c(bVar1 & 7,iVar13,param_3[9],*(undefined4 *)(iVar6 + 0x30));
  }
  *(undefined4 *)(pbVar14 + 0x20) = uVar17;
  *pbVar14 = 0x80;
  *param_3 = *param_3 & 0xf0;
LAB_080d2106:
  return CONCAT44(unaff_r9,in_lr);
}

// =============================================================================
// Function: func_080D22CC @ 0x080D22CC
// =============================================================================
undefined4 func_080D22CC(void)

{
  undefined4 in_lr;
  
  func_0x080d15a4();
  return in_lr;
}

// =============================================================================
// Function: func_080D2304 @ 0x080D2304
// =============================================================================
undefined4 func_080D2304(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + _DAT_080d2334);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + _DAT_080d2330);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if (((short)piVar2[1] == 0) || (piVar2[1] < 0)) {
      func_080D2A0C(piVar2,*piVar2);
    }
  }
  else {
    func_080D2A0C(piVar2,iVar3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D2350 @ 0x080D2350
// =============================================================================
undefined4 func_080D2350(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + _DAT_080d2380);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + _DAT_080d237c);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if ((short)piVar2[1] == 0) {
      func_080D2A0C(piVar2,*piVar2);
    }
    else if (piVar2[1] < 0) {
      func_0x080d2218(piVar2);
    }
  }
  else {
    func_080D2A0C(piVar2,iVar3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D240C @ 0x080D240C
// =============================================================================
undefined4 func_080D240C(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d2434;
  for (uVar1 = _DAT_080d2430 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x080d2af0(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D2438 @ 0x080D2438
// =============================================================================
undefined4 func_080D2438(void)

{
  undefined4 in_lr;
  
  func_0x080d2218();
  return in_lr;
}

// =============================================================================
// Function: func_080D2444 @ 0x080D2444
// =============================================================================
undefined4 func_080D2444(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d246c;
  for (uVar1 = _DAT_080d2468 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x080d2218(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D2470 @ 0x080D2470
// =============================================================================
undefined4 func_080D2470(undefined4 param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  func_0x080d2234(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080D24C8 @ 0x080D24C8
// =============================================================================
undefined4 func_080D24C8(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x2c);
  if (uVar2 != 0) {
    do {
      if (((*pbVar1 & 0x80) != 0) && ((*pbVar1 & 0x40) != 0)) {
        func_080D2640(pbVar1);
        *pbVar1 = 0x80;
        pbVar1[0xf] = 2;
        pbVar1[0x13] = 0x40;
        pbVar1[0x19] = 0x16;
        pbVar1[0x24] = 1;
      }
      uVar2 = uVar2 - 1;
      pbVar1 = pbVar1 + 0x50;
    } while (0 < (int)uVar2);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D2510 @ 0x080D2510
// =============================================================================
undefined4 func_080D2510(int param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 uStack_14;
  
  *_DAT_080d25d8 = 0x8f;
  puVar1 = _DAT_080d25dc;
  *_DAT_080d25dc = 0;
  puVar2 = _DAT_080d25e0;
  *_DAT_080d25e0 = 8;
  puVar2[6] = 8;
  puVar2[0x16] = 8;
  puVar2[2] = 0x80;
  puVar2[10] = 0x80;
  puVar2[0x1a] = 0x80;
  puVar2[0xd] = 0;
  *(undefined1 *)puVar1 = 0x77;
  piVar4 = (int *)*_DAT_080d25e4;
  iVar5 = *piVar4;
  if (iVar5 == _DAT_080d25e8) {
    *piVar4 = iVar5 + 1;
    iVar3 = _DAT_080d25ec;
    *(undefined4 *)(_DAT_080d25ec + 0x20) = _DAT_080d25f0;
    *(undefined4 *)(iVar3 + 0x44) = _DAT_080d25f4;
    *(undefined4 *)(iVar3 + 0x4c) = _DAT_080d25f8;
    *(undefined4 *)(iVar3 + 0x70) = _DAT_080d25fc;
    *(undefined4 *)(iVar3 + 0x74) = _DAT_080d2600;
    *(undefined4 *)(iVar3 + 0x78) = _DAT_080d2604;
    *(undefined4 *)(iVar3 + 0x7c) = _DAT_080d2608;
    *(undefined4 *)(iVar3 + 0x80) = _DAT_080d260c;
    *(undefined4 *)(iVar3 + 0x84) = _DAT_080d2610;
    piVar4[7] = param_1;
    piVar4[10] = _DAT_080d2614;
    piVar4[0xb] = _DAT_080d2618;
    piVar4[0xc] = _DAT_080d261c;
    *(char *)(piVar4 + 3) = (char)_DAT_080d2620;
    uStack_14 = 0;
    func_0x080d3750(&uStack_14,param_1,_DAT_080d2624);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 0x1c) = 0x11;
    *(undefined1 *)(param_1 + 0x41) = 2;
    *(undefined1 *)(param_1 + 0x5c) = 0x22;
    *(undefined1 *)(param_1 + 0x81) = 3;
    *(undefined1 *)(param_1 + 0x9c) = 0x44;
    *(undefined1 *)(param_1 + 0xc1) = 4;
    *(undefined1 *)(param_1 + 0xdc) = 0x88;
    *piVar4 = iVar5;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D262C @ 0x080D262C
// =============================================================================
undefined4 func_080D262C(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_0x080d3910(param_1,*_DAT_080d263c);
  return in_lr;
}

// =============================================================================
// Function: func_080D2640 @ 0x080D2640
// =============================================================================
undefined4 func_080D2640(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_0x080d3910(param_1,*_DAT_080d2650);
  return in_lr;
}

// =============================================================================
// Function: func_080D2654 @ 0x080D2654
// =============================================================================
undefined4 func_080D2654(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  *param_1 = 0;
  if ((*_DAT_080d270c & 0x2000000) != 0) {
    *_DAT_080d270c = _DAT_080d2710;
  }
  if ((*_DAT_080d2714 & 0x2000000) != 0) {
    *_DAT_080d2714 = _DAT_080d2710;
  }
  puVar1 = _DAT_080d2718;
  *_DAT_080d2718 = 0x400;
  puVar1[6] = 0x400;
  puVar1 = _DAT_080d271c;
  *_DAT_080d271c = 0x8f;
  puVar1[-1] = (short)_DAT_080d2720;
  *_DAT_080d2724 = *_DAT_080d2724 & 0x3f | 0x40;
  puVar2 = _DAT_080d2728;
  *_DAT_080d2728 = param_1 + 0xd4;
  puVar2[1] = _DAT_080d272c;
  puVar2[3] = param_1 + 0x260;
  puVar2[4] = _DAT_080d2730;
  *_DAT_080d2734 = param_1;
  uStack_10 = 0;
  func_0x080d3750(&uStack_10,param_1,_DAT_080d2738);
  *(undefined1 *)((int)param_1 + 6) = 8;
  *(undefined1 *)((int)param_1 + 7) = 0xf;
  param_1[0xe] = _DAT_080d273c;
  uVar3 = _DAT_080d2740;
  param_1[10] = _DAT_080d2740;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar3;
  uVar3 = _DAT_080d2744;
  func_0x080d1a34(_DAT_080d2744);
  param_1[0xd] = uVar3;
  func_0x080d274c(0x40000);
  *param_1 = _DAT_080d2748;
  return in_lr;
}

// =============================================================================
// Function: func_080D27F0 @ 0x080D27F0
// =============================================================================
undefined4 func_080D27F0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = (int *)*_DAT_080d287c;
  if (*piVar3 == _DAT_080d2880) {
    *piVar3 = *piVar3 + 1;
    if ((param_1 & 0xff) != 0) {
      *(byte *)((int)piVar3 + 5) = (byte)param_1 & 0x7f;
    }
    if ((param_1 & 0xf00) != 0) {
      *(char *)((int)piVar3 + 6) = (char)((param_1 & 0xf00) >> 8);
      iVar2 = 0xc;
      piVar1 = piVar3 + 0x14;
      do {
        *(undefined1 *)piVar1 = 0;
        iVar2 = iVar2 + -1;
        piVar1 = piVar1 + 0x10;
      } while (iVar2 != 0);
    }
    if ((param_1 & 0xf000) != 0) {
      *(char *)((int)piVar3 + 7) = (char)((param_1 & 0xf000) >> 0xc);
    }
    if ((param_1 & 0xb00000) != 0) {
      *_DAT_080d2884 = *_DAT_080d2884 & 0x3f | (byte)((param_1 & 0x300000) >> 0xe);
    }
    if ((param_1 & 0xf0000) != 0) {
      func_080D28DC();
      func_0x080d274c(param_1 & 0xf0000);
    }
    *piVar3 = _DAT_080d2880;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D28DC @ 0x080D28DC
// =============================================================================
undefined4 func_080D28DC(void)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = (int *)*_DAT_080d293c;
  uStack_4 = in_lr;
  if ((uint)(*piVar2 + _DAT_080d2940) < 2) {
    *piVar2 = *piVar2 + 10;
    if ((*_DAT_080d2944 & 0x2000000) != 0) {
      *_DAT_080d2944 = _DAT_080d2948;
    }
    if ((*_DAT_080d294c & 0x2000000) != 0) {
      *_DAT_080d294c = _DAT_080d2948;
    }
    puVar1 = _DAT_080d2950;
    *_DAT_080d2950 = 0x400;
    puVar1[6] = 0x400;
    uStack_8 = 0;
    func_0x080d3750(&uStack_8,piVar2 + 0xd4,_DAT_080d2954);
  }
  return uStack_4;
}

// =============================================================================
// Function: func_080D2958 @ 0x080D2958
// =============================================================================
undefined4 func_080D2958(void)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = _DAT_080d2990;
  piVar2 = (int *)*_DAT_080d2988;
  iVar3 = *piVar2;
  if (iVar3 != _DAT_080d298c) {
    *_DAT_080d2990 = 0xb600;
    puVar1[6] = 0xb600;
    *(undefined1 *)(piVar2 + 1) = 0;
    *piVar2 = iVar3 + -10;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D2994 @ 0x080D2994
// =============================================================================
undefined4 func_080D2994(int param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (param_3 != 0) {
    if (0x10 < param_3) {
      param_3 = 0x10;
    }
    piVar2 = (int *)*_DAT_080d2a00;
    if (*piVar2 == _DAT_080d2a04) {
      *piVar2 = *piVar2 + 1;
      func_080D2640(param_1);
      *(undefined1 **)(param_1 + 0x2c) = param_2;
      *(byte *)(param_1 + 8) = param_3;
      *(undefined4 *)(param_1 + 4) = 0x80000000;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *param_2 = 0;
        param_2 = param_2 + 0x50;
      }
      if (piVar2[8] != 0) {
        *(int *)(param_1 + 0x38) = piVar2[8];
        *(int *)(param_1 + 0x3c) = piVar2[9];
        piVar2[8] = 0;
      }
      piVar2[9] = param_1;
      piVar2[8] = _DAT_080d2a08;
      iVar1 = _DAT_080d2a04;
      *piVar2 = _DAT_080d2a04;
      *(int *)(param_1 + 0x34) = iVar1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D2A0C @ 0x080D2A0C
// =============================================================================
void func_080D2A0C(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1[0xd] != _DAT_080d2aec) ||
     (((bVar1 = param_2[2], *(char *)((int)param_1 + 0xb) != '\0' &&
       (((*param_1 != 0 && ((*(byte *)param_1[0xb] & 0x40) != 0)) ||
        (((short)param_1[1] != 0 && (-1 < param_1[1])))))) &&
      (bVar1 = param_2[2], bVar1 < *(byte *)((int)param_1 + 9))))) goto LAB_080d2ae2;
  param_1[0xd] = param_1[0xd] + 1;
  param_1[1] = 0;
  *param_1 = (int)param_2;
  param_1[0xc] = *(int *)(param_2 + 4);
  *(byte *)((int)param_1 + 9) = bVar1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 0x96;
  *(undefined2 *)(param_1 + 8) = 0x96;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)param_1[0xb];
  if (*param_2 == 0) {
LAB_080d2aae:
    if (iVar3 < (int)(uint)*(byte *)(param_1 + 2)) {
      do {
        func_0x080d1eac(param_1,puVar2);
        *puVar2 = 0;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 0x50;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
    }
  }
  else if ((char)param_1[2] != '\0') {
    do {
      func_0x080d1eac(param_1,puVar2);
      *puVar2 = 0xc0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x40) = *(undefined4 *)(param_2 + iVar3 * 4 + 8);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x50;
      if ((int)(uint)*param_2 <= iVar3) break;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
    goto LAB_080d2aae;
  }
  if ((param_2[3] & 0x80) != 0) {
    func_080D27F0(param_2[3]);
  }
  param_1[0xd] = _DAT_080d2aec;
LAB_080d2ae2:
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080D2DA4 @ 0x080D2DA4
// =============================================================================
undefined4 func_080D2DA4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar1 < bVar2) {
    if (bVar2 >> 1 < bVar1) goto LAB_080d2dd0;
    *(undefined1 *)(param_1 + 0x1b) = 0xf0;
LAB_080d2dde:
    uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4;
    *(char *)(param_1 + 10) = (char)uVar4;
    if (uVar4 < 0x10) goto LAB_080d2df0;
    uVar3 = 0xf;
  }
  else {
    if (bVar2 <= bVar1 >> 1) {
      *(undefined1 *)(param_1 + 0x1b) = 0xf;
      goto LAB_080d2dde;
    }
LAB_080d2dd0:
    *(undefined1 *)(param_1 + 0x1b) = 0xff;
    uVar3 = (undefined1)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4);
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
LAB_080d2df0:
  *(char *)(param_1 + 0x19) =
       (char)((int)((uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 6) + 0xf) >> 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1b);
  return in_lr;
}

// =============================================================================
// Function: func_080D2E0C @ 0x080D2E0C
// =============================================================================
undefined4 func_080D2E0C(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *extraout_r1;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  undefined4 in_lr;
  uint uStack_3c;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  
  iVar3 = *_DAT_080d2e2c;
  if (*(char *)(iVar3 + 10) == '\0') {
    *(undefined1 *)(iVar3 + 10) = 0xe;
  }
  else {
    *(char *)(iVar3 + 10) = *(char *)(iVar3 + 10) + -1;
  }
  uVar13 = 1;
  pbVar12 = *(byte **)(iVar3 + 0x1c);
  do {
    bVar2 = *pbVar12;
    pbVar7 = (byte *)(uint)bVar2;
    if ((bVar2 & 199) != 0) {
      pbStack_34 = _DAT_080d2e90;
      pbStack_30 = _DAT_080d2e98;
      pbVar11 = _DAT_080d2e94;
      if (uVar13 == 2) {
LAB_080d2ec4:
        pbStack_2c = pbStack_34 + 0xb;
        pbVar9 = pbStack_30 + 4;
      }
      else {
        pbStack_34 = _DAT_080d2f1c;
        pbStack_30 = _DAT_080d2f24;
        pbVar11 = _DAT_080d2f20;
        if ((int)uVar13 < 3) {
          if (uVar13 != 1) goto LAB_080d2ec4;
          pbStack_34 = _DAT_080d2e78;
          pbStack_30 = _DAT_080d2e80;
          pbStack_2c = _DAT_080d2e78 + 4;
          pbVar9 = _DAT_080d2e80 + 2;
          pbVar11 = _DAT_080d2e7c;
        }
        else {
          if (uVar13 != 3) goto LAB_080d2ec4;
          pbStack_34 = _DAT_080d2eb0;
          pbStack_30 = _DAT_080d2eb8;
          pbStack_2c = _DAT_080d2eb0 + 4;
          pbVar9 = _DAT_080d2eb8 + 2;
          pbVar11 = _DAT_080d2eb4;
        }
      }
      uStack_3c = (uint)*(byte *)(iVar3 + 10);
      bVar14 = *pbStack_30;
      pbVar4 = (byte *)(uint)bVar14;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 4) == 0) {
          pbVar11 = pbVar12 + 0x40;
          if ((bVar2 & 0x40) == 0) goto LAB_080d3034;
          if ((bVar2 & 3) == 0) goto LAB_080d3034;
          pbVar11 = (byte *)0x0;
          *pbVar12 = bVar2 & 0xfc;
          pbVar12[0xb] = pbVar12[7];
          if (pbVar12[7] == 0) {
LAB_080d3066:
            iVar5 = (uint)pbVar12[10] * (uint)pbVar12[0xc] + 0xff;
            pbVar7 = (byte *)0x0;
            pbVar12[9] = (byte)((uint)iVar5 >> 8);
            if ((iVar5 >> 8 & 0xffU) != 0) {
              *pbVar12 = *pbVar12 | 4;
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
              if (uVar13 != 3) {
                bVar14 = 8;
              }
              goto LAB_080d313a;
            }
            goto LAB_080d2fe6;
          }
          pbVar7 = (byte *)(uint)pbVar12[0x1d];
          pbVar12[0x1d] = pbVar12[0x1d] | 1;
          if (uVar13 != 3) {
            pbVar11 = (byte *)(uint)pbVar12[7];
            pbVar4 = pbVar11;
          }
          goto LAB_080d3128;
        }
        bVar2 = pbVar12[0xd];
        pbVar12[0xd] = (byte)(bVar2 - 1);
        pbVar7 = (byte *)(uVar13 + 1);
        if (0 < (int)((bVar2 - 1) * 0x1000000)) goto LAB_080d313a;
LAB_080d2fe6:
        func_0x080d2d54(uVar13 & 0xff,pbVar7);
        *pbVar12 = 0;
      }
      else {
        pbVar7 = pbVar12 + 0x40;
        if ((bVar2 & 0x40) != 0) goto LAB_080d2fe6;
        *pbVar12 = 3;
        pbVar12[0x1d] = 3;
        func_080D2DA4(pbVar12);
        if (uVar13 == 2) {
LAB_080d2f34:
          *pbVar11 = pbVar12[0x1e] + (char)*(undefined4 *)(pbVar12 + 0x24) * '@';
LAB_080d2f94:
          pbVar4 = (byte *)(pbVar12[4] + 8);
          bVar2 = 0;
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0x40;
          }
LAB_080d2fa2:
          pbVar12[0x1a] = bVar2;
        }
        else {
          if ((int)uVar13 < 3) {
            if (uVar13 == 1) {
              *pbStack_34 = pbVar12[0x1f];
              goto LAB_080d2f34;
            }
LAB_080d2f88:
            *pbVar11 = pbVar12[0x1e];
            *pbStack_2c = (byte)(*(int *)(pbVar12 + 0x24) << 3);
            goto LAB_080d2f94;
          }
          if (uVar13 != 3) goto LAB_080d2f88;
          if (*(int *)(pbVar12 + 0x24) != *(int *)(pbVar12 + 0x28)) {
            *pbStack_34 = 0x40;
            puVar1 = _DAT_080d2f7c;
            puVar10 = *(undefined4 **)(pbVar12 + 0x24);
            *_DAT_080d2f7c = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            *(undefined4 **)(pbVar12 + 0x28) = puVar10;
          }
          *pbStack_34 = bVar2 & 0x40;
          *pbVar11 = pbVar12[0x1e];
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0xc0;
            goto LAB_080d2fa2;
          }
          pbVar12[0x1a] = 0x80;
        }
        pbVar11 = (byte *)0x0;
        pbVar12[0xb] = pbVar12[4];
        pbVar7 = pbVar12 + 0x40;
        if (pbVar12[4] == 0) goto LAB_080d30fa;
        pbVar12[9] = 0;
LAB_080d3128:
        bVar14 = (byte)pbVar4;
        pbVar12[0xb] = pbVar12[0xb] - 1;
        if (uStack_3c == 0) {
          uStack_3c = 0xffffffff;
LAB_080d3034:
          bVar14 = (byte)pbVar4;
          if (pbVar12[0xb] == 0) {
            if (uVar13 == 3) {
              pbVar7 = (byte *)(uint)pbVar12[0x1d];
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
            }
            func_080D2DA4(pbVar12,pbVar7,pbVar11);
            pbVar11 = (byte *)(uint)*pbVar12;
            if ((*pbVar12 & 3) == 0) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              pbVar7 = &UNK_000000ff;
              if (0 < (int)((bVar2 - 1) * 0x1000000)) {
                bVar2 = pbVar12[7];
                goto LAB_080d3126;
              }
              goto LAB_080d3066;
            }
            pbVar7 = extraout_r1;
            if (((uint)pbVar11 & 3) == 1) {
LAB_080d309e:
              pbVar12[9] = pbVar12[0x19];
              bVar2 = 7;
            }
            else if (((uint)pbVar11 & 3) == 2) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              iVar5 = (bVar2 - 1) * 0x1000000;
              pbVar11 = (byte *)(uint)pbVar12[0x19];
              pbVar7 = (byte *)((int)pbVar11 * 0x1000000);
              if (iVar5 + (int)pbVar11 * -0x1000000 == 0 || iVar5 < (int)pbVar7) {
LAB_080d30be:
                bVar14 = (byte)pbVar4;
                if (pbVar12[6] != 0) {
                  *pbVar12 = *pbVar12 - 1;
                  pbVar11 = (byte *)(uint)pbVar12[0x1d];
                  pbVar12[0x1d] = pbVar12[0x1d] | 1;
                  if (uVar13 != 3) {
                    pbVar4 = &SupervisorCall;
                  }
                  goto LAB_080d309e;
                }
                *pbVar12 = *pbVar12 & 0xfc;
                goto LAB_080d3066;
              }
              bVar2 = pbVar12[5];
            }
            else {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 + 1);
              pbVar7 = &UNK_000000ff;
              pbVar11 = (byte *)(uint)pbVar12[10];
              if (pbVar11 <= (byte *)(bVar2 + 1 & 0xff)) {
LAB_080d30fa:
                pbVar11 = (byte *)0x0;
                *pbVar12 = *pbVar12 - 1;
                pbVar12[0xb] = pbVar12[5];
                pbVar7 = (byte *)0x0;
                if (pbVar12[5] == 0) goto LAB_080d30be;
                pbVar7 = (byte *)(uint)pbVar12[0x1d];
                pbVar12[0x1d] = pbVar12[0x1d] | 1;
                pbVar12[9] = pbVar12[10];
                if (uVar13 != 3) {
                  pbVar11 = (byte *)(uint)pbVar12[5];
                  pbVar4 = pbVar11;
                }
                goto LAB_080d3128;
              }
              bVar2 = pbVar12[4];
            }
LAB_080d3126:
            pbVar12[0xb] = bVar2;
          }
          goto LAB_080d3128;
        }
LAB_080d313a:
        if ((pbVar12[0x1d] & 2) != 0) {
          if (((int)uVar13 < 4) && ((pbVar12[1] & 8) != 0)) {
            if (*_DAT_080d3164 < 0x40) {
              uVar6 = *(int *)(pbVar12 + 0x20) + 2;
              uVar8 = _DAT_080d3168;
            }
            else {
              if (0x7f < *_DAT_080d3164) goto LAB_080d317a;
              uVar6 = *(int *)(pbVar12 + 0x20) + 1;
              uVar8 = _DAT_080d3188;
            }
            *(uint *)(pbVar12 + 0x20) = uVar6 & uVar8;
          }
LAB_080d317a:
          if (uVar13 == 4) {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20) | *pbStack_2c & 8;
          }
          else {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20);
          }
          bVar2 = pbVar12[0x21] + (pbVar12[0x1a] & 0xc0);
          pbVar12[0x1a] = bVar2;
          *pbVar9 = bVar2;
        }
        if ((pbVar12[0x1d] & 1) != 0) {
          *_DAT_080d31fc = *_DAT_080d31fc & ~pbVar12[0x1c] | pbVar12[0x1b];
          if (uVar13 == 3) {
            *pbStack_30 = *(byte *)((uint)pbVar12[9] + _DAT_080d3200);
            if ((pbVar12[0x1a] & 0x80) != 0) {
              *pbStack_34 = 0x80;
              *pbVar9 = pbVar12[0x1a];
              pbVar12[0x1a] = pbVar12[0x1a] & 0x7f;
            }
          }
          else {
            *pbStack_30 = pbVar12[9] * '\x10' + (bVar14 & 0xf);
            *pbVar9 = pbVar12[0x1a] | 0x80;
            if ((uVar13 == 1) && ((*pbStack_34 & 8) == 0)) {
              *pbVar9 = pbVar12[0x1a] | 0x80;
            }
          }
        }
      }
      pbVar12[0x1d] = 0;
    }
    uVar13 = uVar13 + 1;
    pbVar12 = pbVar12 + 0x40;
    if (4 < (int)uVar13) {
      return in_lr;
    }
  } while( true );
}

