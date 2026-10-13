// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: FARM_SIMULATION (75 functions)
// Description: Farm state manager, field grid (43x25), soil tilling, watering and crop growth
// =============================================================================

#include "../../include/farm/farm.h"

// =============================================================================
// Function: func_0800901C @ 0x0800901C
// =============================================================================
undefined4 func_0800901C(int *param_1)

{
  uint uVar1;
  undefined1 **ppuVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 *puStack_1c;
  uint uStack_18;
  
  ppuVar2 = (undefined1 **)param_1[1];
  if (*param_1 == 1) {
    ppuVar2 = &puStack_1c;
    puStack_1c = (undefined1 *)param_1[1];
  }
  uVar4 = param_1[3];
  iVar5 = param_1[2];
  if ((uVar4 & 0x4000000) == 0) {
    func_0x080d3750(ppuVar2,iVar5,uVar4);
  }
  else {
    uVar1 = _DAT_0800907c & uVar4 & 7;
    iVar3 = (_DAT_0800907c & uVar4) - uVar1;
    if ((iVar3 != 0) || (uVar1 == 0)) {
      uStack_18 = uVar1;
      func_0x080d374c(ppuVar2,iVar5,uVar4 - uVar1);
      iVar5 = iVar5 + iVar3 * 4;
      if ((uVar4 & 0x1000000) == 0) {
        ppuVar2 = (undefined1 **)((int)ppuVar2 + iVar3 * 4);
      }
      if (uStack_18 == 0) {
        return in_lr;
      }
    }
    func_0x080d3750(ppuVar2,iVar5,uVar4 - iVar3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08009094 @ 0x08009094
// =============================================================================
undefined4 func_08009094(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 **ppuVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 *puStack_24;
  int iStack_20;
  
  do {
    if (param_1 == param_2) {
      return in_lr;
    }
    ppuVar3 = (undefined1 **)param_1[1];
    if (*param_1 == 1) {
      ppuVar3 = &puStack_24;
      puStack_24 = (undefined1 *)param_1[1];
    }
    uVar5 = param_1[3];
    iVar2 = param_1[2];
    if ((uVar5 & 0x4000000) == 0) {
      func_0x080d3750(ppuVar3,iVar2,uVar5);
    }
    else {
      uVar1 = _DAT_08009108 & uVar5 & 7;
      iVar4 = (_DAT_08009108 & uVar5) - uVar1;
      if ((iVar4 != 0) || (uVar1 == 0)) {
        iStack_20 = iVar2;
        func_0x080d374c(ppuVar3,iVar2,uVar5 - uVar1);
        iVar2 = iStack_20 + iVar4 * 4;
        if ((uVar5 & 0x1000000) == 0) {
          ppuVar3 = (undefined1 **)((int)ppuVar3 + iVar4 * 4);
        }
        if (uVar1 == 0) goto LAB_08009116;
      }
      func_0x080d3750(ppuVar3,iVar2,uVar5 - iVar4);
    }
LAB_08009116:
    param_1 = param_1 + 4;
  } while( true );
}

// =============================================================================
// Function: func_08009140 @ 0x08009140
// =============================================================================
undefined8 func_08009140(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0800912c();
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08009158 @ 0x08009158
// =============================================================================
void func_08009158(undefined2 *param_1)

{
  undefined2 uVar1;
  
  uVar1 = func_0x0800912c();
  *param_1 = uVar1;
  return;
}

// =============================================================================
// Function: func_08009168 @ 0x08009168
// =============================================================================
undefined8 func_08009168(undefined2 *param_1)

{
  undefined4 in_lr;
  
  func_08009140();
  param_1[2] = *param_1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800917C @ 0x0800917C
// =============================================================================
undefined8 func_0800917C(undefined2 *param_1)

{
  undefined4 in_lr;
  
  func_0x08009154();
  param_1[2] = *param_1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08009190 @ 0x08009190
// =============================================================================
void func_08009190(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = func_08009158();
  param_1[2] = uVar2 & ~uVar1;
  return;
}

// =============================================================================
// Function: func_080091A4 @ 0x080091A4
// =============================================================================
undefined8 func_080091A4(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  func_08009168();
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)(param_1 + 0xc) = param_3;
  for (puVar1 = (undefined2 *)(param_1 + 0xe); puVar1 != (undefined2 *)(param_1 + 0x22);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080091E8 @ 0x080091E8
// =============================================================================
undefined8 func_080091E8(int param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  func_0800917C();
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 10) = 0x1e;
  *(undefined2 *)(param_1 + 0xc) = 4;
  for (puVar1 = (undefined2 *)(param_1 + 0xe); puVar1 != (undefined2 *)(param_1 + 0x22);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08009224 @ 0x08009224
// =============================================================================
undefined8 func_08009224(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  func_0800917C(param_1,param_4);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)(param_1 + 0xc) = param_3;
  for (puVar1 = (undefined2 *)(param_1 + 0xe); puVar1 != (undefined2 *)(param_1 + 0x22);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08009268 @ 0x08009268
// =============================================================================
undefined8 func_08009268(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar5 = func_08009190();
  uVar1 = *param_1;
  uVar2 = param_1[6];
  uVar3 = param_1[5];
  uVar8 = 0;
  uVar7 = 0x200;
  puVar6 = param_1 + 0x10;
  do {
    if ((uVar1 & uVar7) != 0) {
      if ((uVar5 & uVar7) == 0) {
        uVar4 = *puVar6;
        if ((int)(short)uVar4 == (uint)uVar3) {
          uVar8 = uVar8 | uVar7;
          uVar4 = uVar4 - uVar2;
        }
        else {
          uVar4 = uVar4 + 1;
        }
      }
      else {
        uVar8 = uVar8 | uVar7;
        uVar4 = 0;
      }
      *puVar6 = uVar4;
    }
    puVar6 = puVar6 + -1;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  param_1[4] = (ushort)uVar8;
  return CONCAT44(in_lr,uVar8);
}

// =============================================================================
// Function: func_080092C8 @ 0x080092C8
// =============================================================================
undefined4 func_080092C8(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  uVar4 = 0x200;
  puVar3 = param_1 + 0x10;
  uVar2 = param_1[5];
  do {
    if ((uVar1 & uVar4) != 0) {
      *puVar3 = *puVar3 + (param_2 - uVar2);
    }
    puVar3 = puVar3 + -1;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  param_1[5] = param_2;
  return in_lr;
}

// =============================================================================
// Function: func_08009300 @ 0x08009300
// =============================================================================
undefined8 func_08009300(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)func_080005D4(0x10);
  *puVar1 = param_2;
  *(undefined2 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined2 *)((int)puVar1 + 0xe) = 0;
  *param_1 = (int)puVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08009324 @ 0x08009324
// =============================================================================
undefined4 func_08009324(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_08000608(*param_1);
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800934C @ 0x0800934C
// =============================================================================
undefined4 func_0800934C(int *param_1,short param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *param_1;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  *(short *)(iVar1 + 4) = -param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(byte *)(iVar1 + 0xc) =
       (byte)((byte)((uint)-param_4 >> 0x18) | (byte)((uint)param_4 >> 0x18)) >> 7;
  *(short *)(iVar1 + 0xe) = (short)_DAT_08009374;
  return in_lr;
}

// =============================================================================
// Function: func_08009378 @ 0x08009378
// =============================================================================
undefined4 func_08009378(int *param_1,short param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *param_1;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  *(short *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(byte *)(iVar1 + 0xc) =
       (byte)((byte)((uint)-param_4 >> 0x18) | (byte)((uint)param_4 >> 0x18)) >> 7;
  *(undefined2 *)(iVar1 + 0xe) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080093AC @ 0x080093AC
// =============================================================================
undefined8 func_080093AC(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ushort uVar9;
  int iVar10;
  undefined4 in_lr;
  
  piVar8 = (int *)*param_1;
  iVar10 = (int)(short)piVar8[1];
  if (iVar10 == 0) {
    uVar4 = 0;
    goto LAB_0800949e;
  }
  uVar7 = (uint)*(ushort *)((int)piVar8 + 0xe);
  iVar2 = piVar8[2];
  if (iVar2 != 0) {
    uVar9 = 0;
    if (iVar2 == 1) {
      uVar9 = 0x80;
    }
    else if (iVar2 == 2) {
      uVar9 = 0xc0;
    }
    iVar2 = *piVar8;
    puVar3 = _DAT_080093f4;
    if (iVar2 != 0) {
      puVar3 = (ushort *)(iVar2 + 0x50);
    }
    *puVar3 = (ushort)_DAT_080093f8 & *puVar3 | uVar9;
    psVar5 = _DAT_08009408;
    if (iVar2 != 0) {
      psVar5 = (short *)(iVar2 + 0x54);
    }
    if (_DAT_0800940c < uVar7) {
      sVar1 = 0x10;
    }
    else if (uVar7 == 0) {
      sVar1 = 0;
    }
    else {
      sVar1 = (short)(uVar7 * 0xf >> 0x10) + 1;
    }
    *psVar5 = sVar1;
  }
  if ((char)piVar8[3] != '\0') {
    if (_DAT_08009434 < uVar7) {
      uVar6 = 0xf;
    }
    else if (uVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uVar7 * 0xe >> 0x10) + 1;
    }
    uVar6 = uVar6 | uVar6 << 4;
    puVar3 = _DAT_0800946c;
    if (*piVar8 != 0) {
      puVar3 = (ushort *)(*piVar8 + 0x4c);
    }
    *puVar3 = (ushort)uVar6 | (ushort)(uVar6 << 8);
  }
  if (iVar10 < 0) {
    if (uVar7 == 0) goto LAB_08009478;
  }
  else if (uVar7 == _DAT_08009470) {
LAB_08009478:
    uVar4 = 0;
    *(undefined2 *)(piVar8 + 1) = 0;
    goto LAB_0800949e;
  }
  iVar10 = uVar7 + iVar10;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (_DAT_08009498 < iVar10) {
    iVar10 = _DAT_08009498;
  }
  *(short *)((int)piVar8 + 0xe) = (short)iVar10;
  uVar4 = 1;
LAB_0800949e:
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_080094AC @ 0x080094AC
// =============================================================================
void func_080094AC(int param_1)

{
  func_080093AC(param_1 + 0xc);
  return;
}

// =============================================================================
// Function: func_080094B8 @ 0x080094B8
// =============================================================================
undefined4 func_080094B8(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 8) = _DAT_080094dc;
  func_08009324(param_1 + 0xc,2);
  func_080098AC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080094E0 @ 0x080094E0
// =============================================================================
undefined8 func_080094E0(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = func_0x080094a4(param_1 + 0xc);
  return CONCAT44(in_lr,(uint)(-(int)sVar1 | (int)sVar1) >> 0x1f);
}

// =============================================================================
// Function: func_080094F8 @ 0x080094F8
// =============================================================================
undefined8 func_080094F8(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = func_0x080094a4(param_1 + 0xc);
  return CONCAT44(in_lr,(int)sVar1);
}

// =============================================================================
// Function: func_08009508 @ 0x08009508
// =============================================================================
undefined8 func_08009508(int param_1,short param_2)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = func_0x080093a0(param_1 + 0xc,(int)param_2);
  return CONCAT44(in_lr,(int)sVar1);
}

// =============================================================================
// Function: func_0800951C @ 0x0800951C
// =============================================================================
undefined4 func_0800951C(int param_1,short param_2)

{
  undefined4 in_lr;
  
  func_08009378(param_1 + 0xc,(int)param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0800952C @ 0x0800952C
// =============================================================================
undefined4 func_0800952C(int param_1,short param_2)

{
  undefined4 in_lr;
  
  func_0800934C(param_1 + 0xc,(int)param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0800953C @ 0x0800953C
// =============================================================================
void func_0800953C(int param_1)

{
  func_0x08009344(param_1 + 0xc);
  return;
}

// =============================================================================
// Function: func_08009548 @ 0x08009548
// =============================================================================
undefined8 func_08009548(undefined4 *param_1)

{
  undefined4 in_lr;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = _DAT_08009568;
  func_08009300(param_1 + 3);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800956C @ 0x0800956C
// =============================================================================
undefined4 func_0800956C(undefined4 param_1)

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
// Function: func_0800959C @ 0x0800959C
// =============================================================================
undefined4 func_0800959C(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 8) = _DAT_080095bc;
  func_0800956C(param_1);
  func_0x080098dc(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080095C0 @ 0x080095C0
// =============================================================================
undefined4 func_080095C0(undefined4 param_1,undefined4 param_2)

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
// Function: func_080095FC @ 0x080095FC
// =============================================================================
undefined4 func_080095FC(undefined4 param_1,undefined4 param_2)

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
// Function: func_08009638 @ 0x08009638
// =============================================================================
undefined4 func_08009638(undefined4 param_1,undefined4 param_2)

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
// Function: func_08009674 @ 0x08009674
// =============================================================================
undefined4 func_08009674(undefined4 param_1,undefined4 param_2)

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
// Function: func_080096B0 @ 0x080096B0
// =============================================================================
undefined8 func_080096B0(undefined4 *param_1)

{
  undefined4 in_lr;
  undefined2 auStack_c [2];
  
  auStack_c[0] = 0;
  func_0x080d3750(auStack_c,param_1,_DAT_080096ec);
  *param_1 = 0x80;
  *(undefined2 *)(param_1 + 8) = 0x100;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0x100;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  *(undefined2 *)((int)param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0x100;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080096F0 @ 0x080096F0
// =============================================================================
undefined4 func_080096F0(int param_1)

{
  undefined4 in_lr;
  
  func_08008E64(param_1,0x4000000,0x54);
  *_DAT_0800970c = *(undefined2 *)(param_1 + 0x54);
  return in_lr;
}

// =============================================================================
// Function: func_08009710 @ 0x08009710
// =============================================================================
undefined4 func_08009710(int param_1)

{
  undefined4 in_lr;
  
  func_0x080d374c(param_1,0x4000000,0x10);
  func_0x080d3750(param_1 + 0x40,_DAT_08009738,_DAT_0800973c);
  *_DAT_08009740 = *(undefined2 *)(param_1 + 0x14);
  return in_lr;
}

// =============================================================================
// Function: func_08009744 @ 0x08009744
// =============================================================================
undefined8 func_08009744(byte *param_1,byte param_2,byte param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  param_1[1] = param_2 & 0x7f;
  *param_1 = param_2 & 0x7f;
  param_1[3] = param_3 & 0x1f;
  param_1[2] = param_3 & 0x1f;
  pbVar1 = param_1 + 4;
  pbVar2 = param_1 + _DAT_08009778;
  do {
    pbVar1[1] = 2;
    pbVar1 = pbVar1 + 8;
  } while (pbVar1 != pbVar2);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800977C @ 0x0800977C
// =============================================================================
undefined4 func_0800977C(int param_1)

{
  undefined4 in_lr;
  
  func_08008E64(param_1 + 4,0x7000000,0x400);
  return in_lr;
}

// =============================================================================
// Function: func_08009790 @ 0x08009790
// =============================================================================
undefined4 func_08009790(int param_1)

{
  undefined4 in_lr;
  
  func_0x080d374c(param_1 + 4,0x7000000,0x100);
  return in_lr;
}

// =============================================================================
// Function: func_080097A4 @ 0x080097A4
// =============================================================================
undefined4 func_080097A4(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar4 = _DAT_0800982c;
  pbVar6 = param_1 + 4;
  puVar7 = (undefined4 *)0x7000000;
  bVar1 = *param_1;
  uVar8 = 0;
  do {
    puVar3 = _DAT_08009830;
    for (pbVar5 = param_1 + 4; _DAT_08009830 = puVar3, pbVar5 != param_1 + (uint)bVar1 * 8 + 4;
        pbVar5 = pbVar5 + 8) {
      uVar2 = *(ushort *)(pbVar5 + 4);
      if ((uVar2 & 0xc00) == uVar8) {
        *puVar7 = *(undefined4 *)pbVar5;
        *(ushort *)(puVar7 + 1) = uVar2;
        *(undefined2 *)((int)puVar7 + 6) = *(undefined2 *)(pbVar6 + 6);
        pbVar6 = pbVar6 + 8;
        puVar7 = puVar7 + 2;
      }
      puVar3 = _DAT_08009830;
    }
    uVar8 = uVar8 + 0x400;
  } while (uVar8 <= uVar4);
  for (; puVar7 != puVar3; puVar7 = puVar7 + 2) {
    *puVar7 = 0x200;
    *(undefined2 *)((int)puVar7 + 6) = *(undefined2 *)(pbVar6 + 6);
    pbVar6 = pbVar6 + 8;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08009834 @ 0x08009834
// =============================================================================
undefined4 func_08009834(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  if ((uint)bVar2 < (uint)bVar1) {
    pbVar3 = param_1 + (uint)bVar2 * 8 + 4;
    do {
      pbVar3[1] = 2;
      pbVar3 = pbVar3 + 8;
    } while (pbVar3 != param_1 + (uint)bVar1 * 8 + 4);
  }
  *param_1 = bVar2;
  param_1[2] = param_1[3];
  return in_lr;
}

// =============================================================================
// Function: func_08009864 @ 0x08009864
// =============================================================================
undefined4 func_08009864(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_0800977C();
  func_08009834(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08009878 @ 0x08009878
// =============================================================================
undefined4 func_08009878(int param_1)

{
  undefined4 in_lr;
  
  func_0x080d374c(param_1 + 4,0x7000000,0x100);
  func_08009834(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08009898 @ 0x08009898
// =============================================================================
undefined4 func_08009898(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_080097A4();
  func_08009834(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_080098AC @ 0x080098AC
// =============================================================================
undefined4 func_080098AC(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  param_1[2] = _DAT_080098d4;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1[1];
    *(undefined4 **)param_1[1] = puVar1;
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08009908 @ 0x08009908
// =============================================================================
undefined8 func_08009908(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  while (iVar2 = iVar3, iVar2 != param_1 + 0x10) {
    iVar3 = *(int *)(iVar2 + 4);
    cVar1 = func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 8) + 8));
    if (cVar1 == '\0') {
      func_0x080d3914(param_1,iVar2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
    }
  }
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_08009940 @ 0x08009940
// =============================================================================
undefined4 func_08009940(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2[1];
    *(undefined4 **)param_2[1] = puVar1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *puVar1 = param_2;
  *param_2 = puVar1;
  param_2[1] = param_1 + 0x10;
  *(undefined4 **)(param_1 + 0x10) = param_2 + 1;
  return in_lr;
}

// =============================================================================
// Function: func_08009968 @ 0x08009968
// =============================================================================
undefined4 func_08009968(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2[1];
    *(undefined4 **)param_2[1] = puVar1;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08009984 @ 0x08009984
// =============================================================================
undefined4 func_08009984(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  while (puVar1 != (undefined4 *)(param_1 + 0x10)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  *(int *)(param_1 + 0xc) = param_1 + 0x10;
  *(int *)(param_1 + 0x10) = param_1 + 0xc;
  return in_lr;
}

// =============================================================================
// Function: func_080099EC @ 0x080099EC
// =============================================================================
undefined8 func_080099EC(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(int *)(param_1 + 0xc) == param_1 + 0x10));
}

// =============================================================================
// Function: func_08009A48 @ 0x08009A48
// =============================================================================
undefined8 func_08009A48(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = strlen(param_2);
  if (0xc < uVar1) {
    uVar1 = 0xc;
  }
  memcpy(param_1,param_2,uVar1);
  *(undefined1 *)(param_1 + uVar1) = 0;
  *(ushort *)(param_1 + 0x10) = (ushort)_DAT_08009acc & *(ushort *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xeb | 8;
  ShippingBin_Init(param_1 + 0x40);
  Coop_Init(param_1 + 0x1e0);
  Barn_Init(param_1 + 0x3fc);
  func_0x0800cdbc(param_1 + _DAT_08009ad0);
  iVar2 = param_1 + _DAT_08009ad4;
  iVar3 = _DAT_08009ad8;
  do {
    func_0x08009f8c(iVar2);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Farm_GetFieldState @ 0x08009B00
// =============================================================================
undefined8 Farm_GetFieldState(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0;
  if ((int)((uint)*(byte *)(param_1 + 0x11) * 0x20000000) < 0) {
    iVar1 = param_1 + 0x14;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: Farm_HasHorse @ 0x08009B20
// =============================================================================
undefined8 Farm_HasHorse(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar3 = 0;
    puVar2 = (uint *)(iVar4 + param_1 + _DAT_08009b44);
    do {
      if (((*puVar2 & 0xfff) >> 8 != 0) && ((*puVar2 & 0xff) >> 2 == 0x1a)) {
        uVar1 = 1;
        goto LAB_08009b5a;
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x2b);
    iVar4 = iVar4 + 0xac;
    uVar5 = uVar5 + 1;
    if (0x18 < uVar5) {
      uVar1 = 0;
LAB_08009b5a:
      return CONCAT44(in_lr,uVar1);
    }
  } while( true );
}

// =============================================================================
// Function: Farm_AddLumber @ 0x08009B68
// =============================================================================
undefined4 Farm_AddLumber(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_08009ba0;
  uStack_10 = (*(ushort *)(param_1 + 0x10) & 0x3ff) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_08009ba0) {
    puVar1 = &uStack_10;
  }
  *(ushort *)(param_1 + 0x10) =
       (ushort)_DAT_08009ba8 & *(ushort *)(param_1 + 0x10) | (ushort)*puVar1 & (ushort)_DAT_08009ba4
  ;
  return in_lr;
}

// =============================================================================
// Function: Farm_TakeLumber @ 0x08009BAC
// =============================================================================
undefined4 Farm_TakeLumber(int param_1,uint param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if (param_2 < (uVar1 & 0x3ff)) {
    uVar1 = (ushort)_DAT_08009be0 & uVar1 |
            (short)(uVar1 & 0x3ff) - (short)param_2 & (ushort)_DAT_08009bdc;
  }
  else {
    uVar1 = (ushort)_DAT_08009bc0 & uVar1;
  }
  *(ushort *)(param_1 + 0x10) = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_08009BE4 @ 0x08009BE4
// =============================================================================
undefined4 func_08009BE4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x11) * 0x20000000)) {
    if (param_1 + 0x14 != 0) {
      func_080D684C(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x1c);
      *(byte *)(param_1 + 0x31) =
           *(byte *)(param_1 + 0x31) & 0xfc | *(byte *)(param_2 + 0x1d) & 1 |
           *(byte *)(param_2 + 0x1d) & 2;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x20);
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08009C3C @ 0x08009C3C
// =============================================================================
void func_08009C3C(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = 0;
  if ((int)((uint)*(byte *)(param_1 + 0x11) * 0x20000000) < 0) {
    iVar1 = param_1 + 0x14;
  }
  (*UNRECOVERED_JUMPTABLE)(iVar1);
  return;
}

// =============================================================================
// Function: func_08009FC8 @ 0x08009FC8
// =============================================================================
undefined8 func_08009FC8(uint *param_1,byte param_2,char param_3,byte param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(byte *)param_1 = param_3 << 2 | param_2 & 3;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | param_4 & 0xf;
  *param_1 = *param_1 & _DAT_0800a010;
  bVar1 = Field_GetPlotState(param_1);
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1 | (bVar1 & 7) << 1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Field_GetPlotState @ 0x0800A014
// =============================================================================
undefined8 Field_GetPlotState(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 1;
  if (((*param_1 & 0xfff) >> 8 != 0) && (uVar1 = ((*param_1 & 0xff) >> 2) - 0x1a, uVar1 < 0xd)) {
    switch(*(uint *)(PTR_case_0800A03C_0800a038 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a03c:
    case 0x800a070:
      uVar2 = 6;
      break;
    case 0x800a074:
      uVar2 = 3;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Field_IsPlotTilled @ 0x0800A07C
// =============================================================================
undefined8 Field_IsPlotTilled(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = (*param_1 & 0xfff) >> 8;
  if (((uVar1 < 2) || (8 < uVar1)) || ((*param_1 & 0xff) >> 2 == 0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Field_GetCropType @ 0x0800A0A4
// =============================================================================
undefined8 Field_GetCropType(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = (*param_1 & 0xfff) >> 8;
  if (((uVar1 < 8) || (uVar1 != 8)) || (uVar1 = ((*param_1 & 0xff) >> 2) - 0x1b, 0xb < uVar1)) {
    uVar2 = 0;
  }
  else {
    switch(*(uint *)(PTR_case_0800A0D0_0800a0cc + uVar1 * 4) & 0xfffffffe) {
    case 0x800a0d0:
    case 0x800a100:
      uVar2 = 0x3cc;
      break;
    case 0x800a106:
      uVar2 = _DAT_0800a10c;
      break;
    case 0x800a110:
      uVar2 = _DAT_0800a114;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800A134 @ 0x0800A134
// =============================================================================
undefined4 func_0800A134(uint *param_1,char param_2,int param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 3 | param_2 << 2;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | (byte)param_3 & 0xf;
  bVar1 = Field_GetPlotState(param_1);
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1 | (bVar1 & 7) << 1;
  if ((param_3 == 8) && ((*param_1 & 3) != 3)) {
    *(byte *)param_1 = (byte)*param_1 & 0xfc;
  }
  return in_lr;
}

// =============================================================================
// Function: Field_TillSoil @ 0x0800A190
// =============================================================================
undefined8 Field_TillSoil(uint *param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  uVar2 = *param_1;
  if ((uVar2 & 3) == 0) {
    if ((uVar2 & 0xfff) >> 8 == 0) {
      bVar1 = 2;
      if (param_2 != '\0') {
        bVar1 = 1;
      }
      *(byte *)param_1 = (byte)*param_1 & 0xfc | bVar1;
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      iVar3 = 1;
    }
    if (iVar3 == 1) {
      uVar2 = func_0x080d11e4();
      uVar2 = uVar2 & 0xff;
      if (uVar2 < 10) {
        iVar3 = 2;
      }
      else if (uVar2 - 10 < 3) {
        iVar3 = 4;
      }
      else if (uVar2 - 0xd < 5) {
        iVar3 = 3;
      }
    }
  }
  else if ((uVar2 & 3) - 1 < 2) {
    uVar2 = (uVar2 & 0xfff) >> 8;
    if (uVar2 == 7) {
      bVar1 = 2;
      if (param_2 != '\0') {
        bVar1 = 1;
      }
      *(byte *)param_1 = (byte)*param_1 & 0xfc | bVar1;
    }
    else if ((7 < uVar2) || (uVar2 != 1)) goto LAB_0800a230;
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
    iVar3 = 1;
  }
LAB_0800a230:
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: Field_PlantSeeds @ 0x0800A238
// =============================================================================
undefined8 Field_PlantSeeds(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *param_1;
  if ((uVar2 & 0xfff) >> 8 == 0) {
    if ((uVar2 & 3) - 1 < 2) {
      *(byte *)param_1 = (byte)*param_1 & 0xfc;
    }
    uVar1 = 1;
    goto LAB_0800a336;
  }
  uVar2 = ((uVar2 & 0xff) >> 2) - 0x16;
  if (0x10 < uVar2) goto case_0800A2BC;
  switch(*(uint *)(PTR_case_0800A278_0800a274 + uVar2 * 4) & 0xfffffffe) {
  case 0x800a278:
  case 0x800a2bc:
case_0800A2BC:
    uVar1 = 0;
    goto LAB_0800a336;
  case 0x800a2c0:
    iVar3 = 0;
    uVar1 = 3;
    break;
  case 0x800a2c6:
    iVar3 = 0;
    uVar1 = 5;
    break;
  case 0x800a2cc:
    iVar3 = 0;
    uVar1 = 6;
    break;
  case 0x800a2d2:
    iVar3 = 3;
    uVar1 = 4;
    break;
  case 0x800a2d8:
    iVar3 = 1;
    uVar1 = 7;
    break;
  case 0x800a2de:
    iVar3 = 2;
    uVar1 = 8;
  }
  uVar2 = param_2 - iVar3;
  if (0 < (int)uVar2) {
    if ((*param_1 & 0xfffff) >> 0x11 <= uVar2) {
      *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1;
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      if ((*param_1 & 3) != 3) {
        *(byte *)param_1 = (byte)*param_1 & 0xfc;
      }
      goto LAB_0800a336;
    }
    *(byte *)((int)param_1 + 2) =
         *(byte *)((int)param_1 + 2) & 0xf1 |
         (byte)((((*param_1 & 0xfffff) >> 0x11) - uVar2 & 7) << 1);
  }
  uVar1 = 2;
LAB_0800a336:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800A33C @ 0x0800A33C
// =============================================================================
undefined8 func_0800A33C(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*param_1 & 0xfff) >> 8 == 0) {
LAB_0800a360:
    uVar2 = 0;
  }
  else {
    uVar1 = (*param_1 & 0xff) >> 2;
    if (uVar1 == 0x17) {
      iVar3 = 0;
      uVar2 = 1;
    }
    else {
      if (((uVar1 < 0x17) || (0x1e < uVar1)) || (uVar1 < 0x1b)) goto LAB_0800a360;
      iVar3 = 1;
      uVar2 = 2;
    }
    uVar1 = param_2 - iVar3;
    if (0 < (int)uVar1) {
      if ((*param_1 & 0xfffff) >> 0x11 <= uVar1) {
        *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1;
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
        if ((*param_1 & 3) != 3) {
          *(byte *)param_1 = (byte)*param_1 & 0xfc;
        }
        goto LAB_0800a3c2;
      }
      *(byte *)((int)param_1 + 2) =
           *(byte *)((int)param_1 + 2) & 0xf1 |
           (byte)((((*param_1 & 0xfffff) >> 0x11) - uVar1 & 7) << 1);
    }
    uVar2 = 3;
  }
LAB_0800a3c2:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800A3C8 @ 0x0800A3C8
// =============================================================================
undefined8 func_0800A3C8(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *param_1;
  uVar3 = (uVar4 & 0xfff) >> 8;
  if (uVar3 != 0) {
    uVar1 = (uVar4 & 0xff) >> 2;
    if (uVar1 == 0x14) {
      if (uVar3 == 5) {
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 7;
        *param_1 = *param_1 & _DAT_0800a3fc;
        uVar2 = 1;
        goto LAB_0800a432;
      }
    }
    else if ((uVar1 == 0x15) ||
            (((uVar4 & 3) - 1 < 2 &&
             ((((uVar3 == 6 || (uVar3 == 2)) || (uVar3 == 3)) || ((uVar3 == 4 || (uVar3 == 5))))))))
    {
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      uVar2 = 2;
      goto LAB_0800a432;
    }
  }
  uVar2 = 0;
LAB_0800a432:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800A438 @ 0x0800A438
// =============================================================================
undefined8 func_0800A438(uint *param_1)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = (*param_1 & 3) == 1;
  if (bVar1) {
    *(byte *)param_1 = (byte)*param_1 & 0xfc | 2;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

// =============================================================================
// Function: func_0800A460 @ 0x0800A460
// =============================================================================
undefined4 func_0800A460(uint *param_1,char param_2)

{
  undefined4 in_lr;
  
  if (((*param_1 & 3) - 1 < 2) && ((*param_1 & 0xfff) >> 8 == 0)) {
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 1;
    *(byte *)param_1 = (byte)*param_1 & 3 | param_2 << 2;
    *param_1 = *param_1 & _DAT_0800a4a0;
  }
  return in_lr;
}

// =============================================================================
// Function: Field_HarvestCrop @ 0x0800A4A4
// =============================================================================
undefined8 Field_HarvestCrop(undefined **param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  uint3 uStack_14;
  undefined1 auStack_10 [4];
  
  iVar4 = _DAT_0800a680;
  uVar3 = *param_2;
  uVar2 = (uVar3 & 0xfff) >> 8;
  if (uVar2 == 5) {
    uVar2 = ((uVar3 & 0xff) >> 2) - 2;
    if (uVar2 < 0x13) {
      switch(*(uint *)(PTR_case_0800A4D8_0800a4d4 + uVar2 * 4) & 0xfffffffe) {
      case 0x800a4d8:
        param_1 = &PTR_case_0800A918_0800a894;
      case 0x800a524:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 2;
        uVar2 = *param_2 & _DAT_0800a540 | 0x4000;
        break;
      case 0x800a544:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 3;
        uVar2 = *param_2 & _DAT_0800a560 | 0x6000;
        break;
      case 0x800a564:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a580 | 0x6000;
        break;
      case 0x800a584:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a5a0 | 0xb000;
        break;
      case 0x800a5a4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a5c0 | 0xf000;
        break;
      case 0x800a5c4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 3;
        uVar2 = *param_2 & _DAT_0800a5e0 | 0x6000;
        break;
      case 0x800a5e4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 2;
        uVar2 = *param_2 & _DAT_0800a600 | 0x3000;
        break;
      case 0x800a604:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a620 | 0x5000;
        break;
      case 0x800a624:
        goto case_0800A624;
      case 0x800a678:
        goto case_0800A678;
      }
    }
    else {
case_0800A624:
      *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0;
      uVar2 = *param_2 & _DAT_0800a63c;
    }
    *param_2 = uVar2;
    iVar4 = _DAT_0800a640;
LAB_0800a662:
    uVar2 = (*param_2 & 0xff) >> 2;
    sVar1 = *(short *)(uVar2 * 0xc + iVar4 + 10);
    if (sVar1 != 0xff) {
      if (uVar2 < 0xf) {
        func_0x0800dca8(&uStack_14);
        func_0800F004(param_1,(uint)uStack_14);
      }
      else {
        func_0x0800df50(auStack_10,sVar1);
        func_0800F040(param_1,auStack_10[0]);
      }
      goto LAB_0800a6be;
    }
  }
  else if (uVar2 == 8) {
    if (*(short *)(((uVar3 & 0xff) >> 2) * 0xc + _DAT_0800a680 + 10) != 0xff) {
      *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0;
    }
    goto LAB_0800a662;
  }
case_0800A678:
  func_0x0800efec(param_1);
LAB_0800a6be:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Field_CanPlaceItem @ 0x0800A6C8
// =============================================================================
undefined8 Field_CanPlaceItem(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*param_1 & 0xfff) >> 8 == 0) && (iVar1 = func_0x0800df54(param_2), 0x30 < iVar1)) &&
     ((iVar1 < 0x33 || ((iVar1 < 0x5b && (0x58 < iVar1)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: Field_PlaceItem @ 0x0800A6F4
// =============================================================================
undefined4 Field_PlaceItem(uint *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  cVar1 = Field_CanPlaceItem();
  if (cVar1 != '\0') {
    iVar3 = func_0x0800df54(param_2);
    if (iVar3 == 0x32) {
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x5c;
    }
    else if (iVar3 < 0x33) {
      if (iVar3 != 0x31) {
        return in_lr;
      }
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x58;
    }
    else if (iVar3 == 0x59) {
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x60;
    }
    else {
      if (iVar3 != 0x5a) {
        return in_lr;
      }
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x68;
    }
    *(byte *)param_1 = bVar4 | bVar2;
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 8;
    if ((*param_1 & 3) != 3) {
      *(byte *)param_1 = (byte)*param_1 & 0xfc;
    }
    bVar2 = Field_GetPlotState(param_1);
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1 | (bVar2 & 7) << 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800A78C @ 0x0800A78C
// =============================================================================
undefined8 func_0800A78C(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*param_1 & 0xfff) >> 8 == 0) || (uVar1 = (*param_1 & 0xff) >> 2, 0x26 < uVar1)) ||
     (uVar1 < 0x1b)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800A7B0 @ 0x0800A7B0
// =============================================================================
undefined4 func_0800A7B0(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (((*param_1 & 0xfff) >> 8 == 1) && (uVar1 = (*param_1 & 0xff) >> 2, uVar1 < 0x14)) {
    switch(*(uint *)(PTR_case_0800A7DC_0800a7d8 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a7dc:
      break;
    case 0x800a836:
      if ((*param_3 & 3) == 1) goto LAB_0800a856;
      goto LAB_0800a84c;
    case 0x800a842:
      if ((*param_3 & 3) != 2) goto LAB_0800a84c;
      goto LAB_0800a856;
    }
    if ((*param_3 & 3) != 0) {
LAB_0800a84c:
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
    }
  }
LAB_0800a856:
  if (((*param_1 & 0xfff) >> 8 == 0) || (uVar1 = (*param_1 & 0xff) >> 2, 0x26 < uVar1)) {
case_0800A9B2:
    if ((*param_1 & 3) == 2) {
      *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
    }
  }
  else {
    switch(*(uint *)(PTR_case_0800A87C_0800a878 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a87c:
      break;
    case 0x800a94c:
      if (((*param_3 & 3) == 3) || (uVar1 = *param_1, (uVar1 & 0xfff) >> 8 == 5))
      goto case_0800A9B2;
      uVar5 = _DAT_0800a9f0 & uVar1;
      uVar1 = uVar5 | (((uVar1 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *param_1 = uVar1;
      uVar5 = (uVar5 & 0xfff) >> 8;
      if (uVar5 == 7) {
        uVar5 = 1;
      }
      goto LAB_0800a97e;
    case 0x800a9b2:
      goto case_0800A9B2;
    }
    uVar5 = *param_1;
    uVar1 = (uVar5 & 0xfff) >> 8;
    if ((uVar1 == 0) || (4 < uVar1)) goto case_0800A9B2;
    if ((uVar5 & 3) == 2) {
      uVar4 = _DAT_0800a948 & uVar5;
      uVar1 = uVar4 | (((uVar5 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *param_1 = uVar1;
      uVar5 = (uVar4 & 0xfff) >> 8;
LAB_0800a97e:
      iVar3 = ((uVar1 & 0xff) >> 2) * 0x54;
      if (uVar5 != *(uint *)(((uVar1 & 0x1ffff) >> 0xc) * 4 + iVar3 + _DAT_0800a9f4)) {
        *(byte *)((int)param_1 + 1) =
             *(byte *)((int)param_1 + 1) & 0xf0 |
             (byte)*(undefined4 *)(((uVar1 & 0x1ffff) >> 0xc) * 4 + iVar3 + _DAT_0800a9f4) & 0xf;
      }
      goto case_0800A9B2;
    }
  }
  pbVar2 = _DAT_0800aa00;
  if ((param_2 != 3) &&
     (((param_2 < 4 || (pbVar2 = _DAT_0800aa30, param_2 != 4)) &&
      (pbVar2 = (byte *)((*param_3 & 3) * 0x10 + _DAT_0800a9f8), param_2 == 0)))) {
    pbVar2 = pbVar2 + 8;
  }
  uVar5 = *param_1;
  uVar1 = (uVar5 & 0xfff) >> 8;
  if (uVar1 == 0) {
    uVar5 = uVar5 & 3;
    if ((uVar5 == 0) || (uVar5 == 3)) {
      iVar3 = func_0x080d11e4();
      uVar1 = iVar3 >> 3 & 0xff;
      uVar5 = (uint)pbVar2[4];
      if (uVar5 <= uVar1) {
        if (uVar1 < pbVar2[5] + uVar5) {
          uVar6 = 0x16;
        }
        else {
          if ((uint)pbVar2[6] + (uint)pbVar2[5] + uVar5 <= uVar1) goto LAB_0800aad2;
          uVar6 = 0x17;
        }
        goto LAB_0800aab6;
      }
    }
    else {
      if (uVar5 != 1) goto LAB_0800aad2;
      iVar3 = func_0x080d11e4();
      uVar1 = iVar3 >> 3 & 0xff;
      uVar5 = (uint)pbVar2[1];
      if (uVar1 < uVar5) {
        func_0x0800a120(param_1,0);
        goto LAB_0800aad2;
      }
      if (pbVar2[2] + uVar5 <= uVar1) {
        if (uVar1 < (uint)pbVar2[3] + (uint)pbVar2[2] + uVar5) {
          func_0800A134(param_1,0x16,8);
        }
        goto LAB_0800aad2;
      }
    }
    uVar6 = 0x15;
  }
  else {
    if (uVar1 == 1) {
      iVar3 = func_0x080d11e4();
      if ((iVar3 >> 3 & 0xffU) < (uint)pbVar2[7]) {
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      }
      goto LAB_0800aad2;
    }
    if (((uVar5 & 0xff) >> 2 != 0x18) ||
       (iVar3 = func_0x080d11e4(), (uint)*pbVar2 <= (iVar3 >> 3 & 0xffU))) goto LAB_0800aad2;
    uVar6 = 0x19;
  }
LAB_0800aab6:
  func_0800A134(param_1,uVar6,8);
LAB_0800aad2:
  if (param_2 == 0) {
    if ((*param_1 & 3) == 2) {
      func_0x0800a120(param_1,1);
    }
  }
  else if ((*param_1 & 3) == 1) {
    func_0x0800a120(param_1,2);
  }
  return in_lr;
}

// =============================================================================
// Function: Field_SeasonChangeClear @ 0x0800AB08
// =============================================================================
undefined4 Field_SeasonChangeClear(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar3 = *param_1;
    if ((uVar3 & 0xfff) >> 8 == 0) {
      return in_lr;
    }
    uVar2 = (uVar3 & 0xff) >> 2;
    if (0x26 < uVar2) {
      return in_lr;
    }
    switch(*(uint *)(PTR_case_0800AC7C_0800ac78 + uVar2 * 4) & 0xfffffffe) {
    case 0x800ac7c:
      break;
    case 0x800ae16:
case_0800AE16:
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((uVar3 & 0xfff) >> 8 != 1) goto LAB_0800adf8;
LAB_0800adec:
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
  }
  else {
    if (param_2 < 2) {
      if (param_2 != 0) {
        return in_lr;
      }
      func_0x0800a120(param_1,0);
      if (((*param_1 & 0xfff) >> 8 != 0) && (uVar3 = (*param_1 & 0xff) >> 2, uVar3 < 0x27)) {
        switch(*(uint *)(PTR_case_0800AB54_0800ab50 + uVar3 * 4) & 0xfffffffe) {
        case 0x800ab54:
          param_1 = (uint *)&stack0x00000090;
        case 0x800abf0:
          *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 7;
          *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
          *param_1 = *param_1 & _DAT_0800ac18;
          break;
        case 0x800ac1c:
          *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
        }
      }
      if ((_DAT_0800ac50 & (ushort)*param_1) != 0) {
        return in_lr;
      }
      iVar1 = func_0x080d11e4();
      if (9 < (iVar1 >> 3 & 0xffU)) {
        return in_lr;
      }
      func_0800A134(param_1,0x15,8);
      return in_lr;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return in_lr;
      }
      *(byte *)param_1 = (byte)*param_1 | 3;
      if ((*param_1 & 0xfff) >> 8 == 0) {
        return in_lr;
      }
      uVar3 = (*param_1 & 0xff) >> 2;
      if (0x26 < uVar3) {
        return in_lr;
      }
      switch(*(uint *)(PTR_case_0800AE58_0800ae54 + uVar3 * 4) & 0xfffffffe) {
      case 0x800ae58:
        break;
      case 0x800af10:
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
        return in_lr;
      case 0x800af1a:
        return in_lr;
      }
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 7;
      *param_1 = *param_1 & _DAT_0800af0c;
      return in_lr;
    }
    uVar3 = *param_1;
    if ((uVar3 & 0xfff) >> 8 == 0) {
      return in_lr;
    }
    uVar2 = (uVar3 & 0xff) >> 2;
    if (0x26 < uVar2) {
      return in_lr;
    }
    switch(*(uint *)(PTR_case_0800AD48_0800ad44 + uVar2 * 4) & 0xfffffffe) {
    case 0x800ad48:
      break;
    case 0x800ae16:
      goto case_0800AE16;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((uVar3 & 0xfff) >> 8 == 1) goto LAB_0800adec;
LAB_0800adf8:
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 6;
  }
  *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
case_0800AF1A:
  return in_lr;
}

// =============================================================================
// Function: func_0800AF20 @ 0x0800AF20
// =============================================================================
undefined8 func_0800AF20(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *param_1 & 3;
  uVar2 = _DAT_0800af48;
  if (uVar1 != 1) {
    if (uVar1 < 2) {
      uVar2 = _DAT_0800af40;
      if (uVar1 == 0) goto LAB_0800af56;
    }
    else {
      uVar2 = _DAT_0800af50;
      if (uVar1 == 2) goto LAB_0800af56;
    }
    uVar2 = 0;
  }
LAB_0800af56:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800AF5C @ 0x0800AF5C
// =============================================================================
undefined8 func_0800AF5C(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  puVar6 = &stack0xffffffec;
  uVar3 = (*param_1 & 0xff) >> 2;
  uVar5 = 0xff;
  uVar1 = (*param_1 & 0xfff) >> 8;
  iVar2 = _DAT_0800af8c;
  if ((uVar1 == 0) || (iVar2 = _DAT_0800af98, uVar1 == 1)) goto LAB_0800b0d4;
  if (uVar3 == 0x14) {
    if (uVar1 == 7) {
      uVar5 = 0xc;
    }
    else {
      if (uVar1 == 4) {
        uVar5 = 4;
      }
      else if (uVar1 < 5) {
        if (uVar1 == 3) {
          uVar5 = 0;
        }
      }
      else if (uVar1 == 5) {
        uVar5 = 8;
      }
      if ((((param_2 == (uint *)0x0) || ((*param_2 & 0xff) >> 2 != 0x14)) ||
          (uVar1 = (*param_2 & 0xfff) >> 8, uVar1 == 7)) ||
         (uVar4 = (*param_1 & 0xfff) >> 8, uVar1 < uVar4)) {
        if (((param_3 == (uint *)0x0) || ((*param_3 & 0xff) >> 2 != 0x14)) ||
           ((uVar1 = (*param_3 & 0xfff) >> 8, uVar1 == 7 || (uVar1 < (*param_1 & 0xfff) >> 8))))
        goto case_0800B0CC;
        uVar5 = uVar5 + 1;
      }
      else if (((param_3 == (uint *)0x0) || ((*param_3 & 0xff) >> 2 != 0x14)) ||
              ((uVar1 = (*param_3 & 0xfff) >> 8, uVar1 == 7 || (uVar1 < uVar4)))) {
        uVar5 = uVar5 + 2;
      }
      else {
        uVar5 = uVar5 + 3;
      }
      uVar5 = uVar5 & 0xff;
    }
  }
  else if (uVar1 - 2 < 7) {
    switch(*(uint *)(PTR_case_0800AFB8_0800afb4 + (uVar1 - 2) * 4) & 0xfffffffe) {
    case 0x800afb8:
      puVar6 = &stack0x0000000c;
    case 0x800afd4:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 4);
      break;
    case 0x800afe6:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 5);
      break;
    case 0x800aff8:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 6);
      break;
    case 0x800b00a:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 7);
      break;
    case 0x800b01c:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 8);
      break;
    case 0x800b02e:
      uVar5 = 1;
      if ((*param_1 & 3) != 3) {
        uVar5 = 0;
      }
    }
  }
case_0800B0CC:
  iVar2 = uVar5 * 0xc + *(int *)(uVar3 * 0xc + _DAT_0800af88);
LAB_0800b0d4:
  return CONCAT44(*(undefined4 *)(puVar6 + 0x10),iVar2);
}

