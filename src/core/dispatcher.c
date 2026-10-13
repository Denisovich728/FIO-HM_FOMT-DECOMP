// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: DISPATCHER_AND_SRAM (32 functions)
// Description: Central call dispatcher, GBA BIOS indirect handlers and SRAM save proxies
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: SramProxy_ReadSaveData @ 0x080002E0
// =============================================================================
undefined8 SramProxy_ReadSaveData(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_34 [32];
  uint uStack_14;
  uint uStack_10;
  
  func_080006E4(param_1,auStack_34,0,0x20);
  puVar1 = _DAT_08000324;
  uStack_14 = (uint)*_DAT_08000324;
  if (uStack_14 == 0) {
    func_080006E4(param_1,&uStack_14,0x20,4);
    uStack_10 = (uint)*puVar1;
    if ((uStack_10 == 0) && (func_080006E4(param_1,&uStack_10,0x24,4), *puVar1 == 0)) {
      uVar2 = 0;
      iVar3 = memcmp(auStack_34,_DAT_08000354,0x20);
      if ((iVar3 == 0) && (((uStack_14 & 3) == uStack_14 && (uStack_10 < 2)))) {
        uVar2 = 1;
      }
      goto LAB_0800034c;
    }
  }
  uVar2 = 0;
LAB_0800034c:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: SramProxy_WriteSaveData @ 0x08000358
// =============================================================================
undefined4 SramProxy_WriteSaveData(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  
  func_080006A4(param_1,0,_DAT_08000398,0x20);
  puVar1 = _DAT_0800039c;
  uStack_10 = (uint)*_DAT_0800039c;
  if (uStack_10 == 0) {
    func_080006A4(param_1,0x20,&uStack_10,4);
    if (*puVar1 == 0) {
      func_080006A4(param_1,0x24,&uStack_10,4);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: SramProxy_VerifyChecksum @ 0x080003A0
// =============================================================================
undefined8 SramProxy_VerifyChecksum(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  cVar1 = SramProxy_ReadSaveData();
  if (cVar1 != '\0') {
    uStack_c = 0;
    func_080006E4(param_1,&uStack_c,0x20,4);
    if (*_DAT_080003cc == 0) goto LAB_080003d2;
  }
  uStack_c = 0;
LAB_080003d2:
  return CONCAT44(in_lr,uStack_c);
}

// =============================================================================
// Function: func_080003E8 @ 0x080003E8
// =============================================================================
undefined4 func_080003E8(undefined4 param_1,uint param_2)

{
  undefined4 in_lr;
  uint uStack_10;
  
  uStack_10 = 0;
  func_080006E4(param_1,&uStack_10,0x20,4);
  if (*_DAT_08000428 == 0) {
    uStack_10 = uStack_10 | 1 << (param_2 & 0xff);
    func_080006A4(param_1,0x20,&uStack_10,4);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800042C @ 0x0800042C
// =============================================================================
undefined4 func_0800042C(undefined4 param_1,uint param_2)

{
  undefined4 in_lr;
  uint uStack_10;
  
  uStack_10 = 0;
  func_080006E4(param_1,&uStack_10,0x20,4);
  if (*_DAT_0800046c == 0) {
    uStack_10 = uStack_10 & ~(1 << (param_2 & 0xff));
    func_080006A4(param_1,0x20,&uStack_10,4);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08000470 @ 0x08000470
// =============================================================================
undefined4 func_08000470(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_2;
  uStack_4 = in_lr;
  func_080006A4(param_1,0x24,&uStack_8,4);
  return uStack_4;
}

// =============================================================================
// Function: func_08000488 @ 0x08000488
// =============================================================================
undefined8 func_08000488(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  cVar1 = SramProxy_ReadSaveData();
  if (cVar1 != '\0') {
    uStack_c = 0;
    func_080006E4(param_1,&uStack_c,0x24,4);
    if (*_DAT_080004b4 == 0) goto LAB_080004ba;
  }
  uStack_c = 0;
LAB_080004ba:
  return CONCAT44(in_lr,uStack_c);
}

// =============================================================================
// Function: Interrupt_InitVBlank @ 0x080004C4
// =============================================================================
undefined4 Interrupt_InitVBlank(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  Interrupt_WaitForVBlank(_DAT_080004e8);
  *_DAT_080004ec = _DAT_080004f0;
  uVar1 = 0;
  do {
    func_0x080d100c(uVar1,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xe);
  return in_lr;
}

// =============================================================================
// Function: Interrupt_EnableHBlank @ 0x080004F4
// =============================================================================
ulonglong Interrupt_EnableHBlank(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(param_1 << 0x10,_DAT_08000508);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: Interrupt_SetMasterEnable @ 0x0800050C
// =============================================================================
ulonglong Interrupt_SetMasterEnable(undefined2 param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *_DAT_08000524 = param_1;
  uVar1 = Interrupt_EnableHBlank();
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: Interrupt_WaitForVBlank @ 0x08000528
// =============================================================================
ulonglong Interrupt_WaitForVBlank(undefined2 param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(param_1,_DAT_0800053c);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: func_08000540 @ 0x08000540
// =============================================================================
ulonglong func_08000540(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d101c(param_1,param_2);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: func_08000554 @ 0x08000554
// =============================================================================
undefined4 func_08000554(undefined2 param_1)

{
  undefined4 in_lr;
  
  func_0x080d3754(0,param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08000568 @ 0x08000568
// =============================================================================
undefined4 func_08000568(undefined2 param_1)

{
  undefined4 in_lr;
  
  func_0x080d3754(1,param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08000584 @ 0x08000584
// =============================================================================
void func_08000584(void)

{
  func_080005D4();
  return;
}

// =============================================================================
// Function: func_08000590 @ 0x08000590
// =============================================================================
undefined4 func_08000590(void)

{
  undefined4 in_lr;
  
  func_08000608();
  return in_lr;
}

// =============================================================================
// Function: func_0800059C @ 0x0800059C
// =============================================================================
void func_0800059C(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    iVar1 = malloc(param_1);
    if (iVar1 != 0) {
LAB_080005be:
      (*UNRECOVERED_JUMPTABLE)(iVar1);
      return;
    }
    if (*_DAT_080005b8 == 0) {
      iVar1 = 0;
      goto LAB_080005be;
    }
    func_0x080d390c();
  } while( true );
}

// =============================================================================
// Function: func_080005D4 @ 0x080005D4
// =============================================================================
undefined8 func_080005D4(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = func_0800059C();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_080005E4 @ 0x080005E4
// =============================================================================
void func_080005E4(void)

{
  func_080005D4();
  return;
}

// =============================================================================
// Function: func_080005F0 @ 0x080005F0
// =============================================================================
void func_080005F0(void)

{
  func_0800059C();
  return;
}

// =============================================================================
// Function: func_080005FC @ 0x080005FC
// =============================================================================
void func_080005FC(void)

{
  func_080005F0();
  return;
}

// =============================================================================
// Function: func_08000608 @ 0x08000608
// =============================================================================
undefined4 func_08000608(void)

{
  undefined4 in_lr;
  
  free();
  return in_lr;
}

// =============================================================================
// Function: func_08000614 @ 0x08000614
// =============================================================================
undefined4 func_08000614(void)

{
  undefined4 in_lr;
  
  func_08000608();
  return in_lr;
}

// =============================================================================
// Function: func_08000620 @ 0x08000620
// =============================================================================
undefined4 func_08000620(void)

{
  undefined4 in_lr;
  
  free();
  return in_lr;
}

// =============================================================================
// Function: func_0800062C @ 0x0800062C
// =============================================================================
undefined4 func_0800062C(void)

{
  undefined4 in_lr;
  
  func_08000620();
  return in_lr;
}

// =============================================================================
// Function: SramProxy_LoadGlobalSettings @ 0x08000640
// =============================================================================
undefined8 SramProxy_LoadGlobalSettings(undefined4 param_1)

{
  undefined4 in_lr;
  
  if (*_DAT_0800065c == '\0') {
    *_DAT_0800065c = '\x01';
    *_DAT_08000660 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08000664 @ 0x08000664
// =============================================================================
undefined8 func_08000664(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  uVar1 = 0;
  do {
    auStack_18[uVar1] = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  uVar1 = 0;
  do {
    func_080006A4(param_1,uVar1,auStack_18,8);
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x8000);
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_080006A4 @ 0x080006A4
// =============================================================================
undefined8 func_080006A4(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = 0;
  *_DAT_080006e0 = 0;
  if (param_4 != 0) {
    iVar2 = func_080D38D4(param_3,param_2 | 0xe000000);
    if (iVar2 != 0) {
      func_08000728(param_1,0x100);
    }
    uVar1 = (uint)(iVar2 == 0);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080006E4 @ 0x080006E4
// =============================================================================
undefined8 func_080006E4(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 in_lr;
  
  *_DAT_08000708 = 0;
  if (param_4 != 0) {
    func_080D379C(param_3 | 0xe000000,param_2);
  }
  return CONCAT44(in_lr,(uint)(param_4 != 0));
}

// =============================================================================
// Function: func_08000714 @ 0x08000714
// =============================================================================
void func_08000714(int param_1)

{
  func_0x080d100c((*(byte *)(param_1 + 4) & 3) + 3);
  return;
}

// =============================================================================
// Function: func_08000728 @ 0x08000728
// =============================================================================
undefined4 func_08000728(undefined4 param_1,ushort param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (param_2 == 0x10) {
    uVar2 = *_DAT_080007c8;
    uVar3 = 0x10;
    puVar1 = _DAT_080007c8;
  }
  else if (param_2 < 0x11) {
    if (param_2 == 2) {
      uVar2 = *_DAT_08000788;
      uVar3 = 2;
      puVar1 = _DAT_08000788;
    }
    else if (param_2 < 3) {
      if (param_2 != 1) {
        return in_lr;
      }
      uVar2 = *_DAT_0800077c;
      uVar3 = 1;
      puVar1 = _DAT_0800077c;
    }
    else if (param_2 == 4) {
      uVar2 = *_DAT_080007a4;
      uVar3 = 4;
      puVar1 = _DAT_080007a4;
    }
    else {
      if (param_2 != 8) {
        return in_lr;
      }
      uVar2 = *_DAT_080007bc;
      uVar3 = 8;
      puVar1 = _DAT_080007bc;
    }
  }
  else if (param_2 == 0x80) {
    uVar2 = *_DAT_080007e8;
    uVar3 = 0x80;
    puVar1 = _DAT_080007e8;
  }
  else {
    if (0x80 < param_2) {
      if ((param_2 != 0x100) && (param_2 != 0x200)) {
        return in_lr;
      }
      *_DAT_08000798 = param_2 | *_DAT_08000798;
      return in_lr;
    }
    if (param_2 == 0x20) {
      uVar2 = *_DAT_080007b0;
      uVar3 = 0x20;
      puVar1 = _DAT_080007b0;
    }
    else {
      if (param_2 != 0x40) {
        return in_lr;
      }
      uVar2 = *_DAT_080007d4;
      uVar3 = 0x40;
      puVar1 = _DAT_080007d4;
    }
  }
  *puVar1 = uVar2 | uVar3;
  return in_lr;
}

// =============================================================================
// Function: func_080007EC @ 0x080007EC
// =============================================================================
undefined4 func_080007EC(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_08000808;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

