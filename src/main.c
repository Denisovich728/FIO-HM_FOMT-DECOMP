// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: MAIN (3 functions)
// Description: Boot vectors, crt0 startup and AgbMain primary loop
// =============================================================================

#include "../include/global.h"

// =============================================================================
// Function: GBA_Header_Boot @ 0x08000000
// =============================================================================
/* GBA Cartridge Boot Vector */

void GBA_Header_Boot(void)

{
  uint uVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  
  software_interrupt(0x10000);
  REG_DMA3DAD = uRam0800015c;
  uVar1 = (iRam08000160 - uRam0800015c) + 3 >> 2;
  if (uVar1 != 0) {
    REG_DMA3SAD = uRam08000164;
    Ram040000dc = uVar1 | 0x84000000;
  }
  (*pcRam08000170)(_ASSET_BLOCK_08000168,iRam0800016c - _ASSET_BLOCK_08000168);
  piVar2 = piRam08000174 + 1;
  bVar3 = *piRam08000174 == 0;
  while( true ) {
    if (!bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)*piVar2;
      bVar3 = UNRECOVERED_JUMPTABLE == (code *)0x0;
      piVar2 = piVar2 + 1;
    }
    if (!bVar3) break;
    if (bVar3) {
      (*pcRam08000178)();
      return;
    }
  }
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: crt0_entry @ 0x080000C0
// =============================================================================
/* C Runtime Entry Point */

void crt0_entry(void)

{
  uint uVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  
  software_interrupt(0x10000);
  REG_DMA3DAD = uRam0800015c;
  uVar1 = (iRam08000160 - uRam0800015c) + 3 >> 2;
  if (uVar1 != 0) {
    REG_DMA3SAD = uRam08000164;
    Ram040000dc = uVar1 | 0x84000000;
  }
  (*pcRam08000170)(_ASSET_BLOCK_08000168,iRam0800016c - _ASSET_BLOCK_08000168);
  piVar2 = piRam08000174 + 1;
  bVar3 = *piRam08000174 == 0;
  while( true ) {
    if (!bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)*piVar2;
      bVar3 = UNRECOVERED_JUMPTABLE == (code *)0x0;
      piVar2 = piVar2 + 1;
    }
    if (!bVar3) break;
    if (bVar3) {
      (*pcRam08000178)();
      return;
    }
  }
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: MainLoop_Callback @ 0x08000240
// =============================================================================
void MainLoop_Callback(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  Interrupt_WaitForVBlank(_DAT_080002c8);
  iVar3 = _DAT_080002d0;
  REG_DISPCNT = 0x80;
  REG_SOUNDCNT_X._0_1_ = 0;
  uVar1 = *_DAT_080002cc;
  while ((~uVar1 & 0xf) != 0) {
    uVar1 = *_DAT_080002cc;
  }
  uVar1 = (ushort)_DAT_080002d4;
  *(ushort *)(_DAT_080002d0 + 10) = uVar1 & *(ushort *)(_DAT_080002d0 + 10);
  uVar2 = (ushort)_DAT_080002d8;
  *(ushort *)(iVar3 + 10) = uVar2 & *(ushort *)(iVar3 + 10);
  *(ushort *)(iVar3 + 0x16) = uVar1 & *(ushort *)(iVar3 + 0x16);
  *(ushort *)(iVar3 + 0x16) = uVar2 & *(ushort *)(iVar3 + 0x16);
  *(ushort *)(iVar3 + 0x22) = uVar1 & *(ushort *)(iVar3 + 0x22);
  *(ushort *)(iVar3 + 0x22) = uVar2 & *(ushort *)(iVar3 + 0x22);
  iVar3 = _DAT_080002dc;
  *(ushort *)(_DAT_080002dc + 10) = uVar1 & *(ushort *)(_DAT_080002dc + 10);
  *(ushort *)(iVar3 + 10) = uVar2 & *(ushort *)(iVar3 + 10);
  func_0x080d375c(0xff);
  do {
  } while( true );
}

