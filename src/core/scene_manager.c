// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: SCENE_MANAGER (19 functions)
// Description: Scene management, title sequence, intro cutscenes and new game initialization
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: Scene_Destructor @ 0x0800080C
// =============================================================================
undefined4 Scene_Destructor(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_08000828;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800082C @ 0x0800082C
// =============================================================================
undefined4 func_0800082C(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_lr;
  int *piStack_2c;
  int *piStack_28;
  int **ppiStack_24;
  int *piStack_20;
  int **ppiStack_1c;
  int *piStack_18;
  
  if (*param_1 != 0) {
    do {
      func_0x080d3914(&piStack_2c,(int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0xc));
      piVar1 = piStack_2c;
      piStack_20 = piStack_2c;
      piStack_2c = (int *)0x0;
      piVar2 = (int *)*param_1;
      ppiStack_24 = &piStack_2c;
      if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
      }
      *param_1 = 0;
      if (piVar1 == (int *)0x0) break;
      func_0x080d3914(&piStack_28,piVar1,*(undefined4 *)(*piVar1 + 0xc));
      piVar2 = piStack_28;
      piStack_18 = piStack_28;
      piStack_28 = (int *)0x0;
      piStack_2c = (int *)0x0;
      piVar3 = (int *)*param_1;
      ppiStack_1c = &piStack_28;
      if ((piVar2 != piVar3) && (piVar3 != (int *)0x0)) {
        func_0x080d3914(piVar3,3,*(undefined4 *)(*piVar3 + 8));
      }
      *param_1 = (int)piVar2;
      if (piStack_2c != (int *)0x0) {
        func_0x080d3914(piStack_2c,3,*(undefined4 *)(*piStack_2c + 8));
      }
      if (piVar1 != (int *)0x0) {
        func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
      }
    } while (*param_1 != 0);
  }
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    func_0x080d3914(param_1,3,*(undefined4 *)(*param_1 + 8));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08000D64 @ 0x08000D64
// =============================================================================
undefined8 func_08000D64(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = (int *)(param_2 + _DAT_08000d80);
LAB_08000d72:
  iVar1 = *piVar3;
  if (iVar1 != 0) goto code_r0x08000d78;
  func_08000E1C(param_2);
  iVar1 = 1;
  goto LAB_08000d9a;
code_r0x08000d78:
  if (iVar1 == 1) {
    iVar1 = func_08000FF8(param_2);
    if (iVar1 == 1) {
      if (*(char *)(param_2 + _DAT_08000dd8) == '\0') {
        puVar2 = (undefined4 *)func_080005D4(4);
        *puVar2 = _DAT_08000ddc;
        *param_1 = puVar2;
      }
      else {
        puVar2 = (undefined4 *)func_080005D4(4);
        *puVar2 = _DAT_08000e18;
        *param_1 = puVar2;
      }
      return CONCAT44(in_lr,param_1);
    }
    iVar1 = 0;
LAB_08000d9a:
    *piVar3 = iVar1;
  }
  goto LAB_08000d72;
}

// =============================================================================
// Function: func_08000E1C @ 0x08000E1C
// =============================================================================
undefined4 func_08000E1C(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  short *psVar8;
  undefined4 in_lr;
  
  func_08008724();
  func_08000F5C(param_1);
  iVar3 = func_0x08008918(param_1);
  *(undefined2 *)(iVar3 + 0x50) = 0x3f;
  puVar4 = (uint *)func_080005D4(0x10);
  uVar5 = func_0x08008918(param_1);
  bVar2 = false;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = _DAT_08000eb0;
  func_08009300(puVar4 + 3,uVar5);
  func_0800934C(puVar4 + 3,_DAT_08000eb4,1,0);
  iVar3 = func_0x08008940(param_1);
  func_0x080d3914(iVar3,puVar4,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x10));
  *(undefined2 *)(param_1 + _DAT_08000eb8) = 0;
  func_08008B6C(param_1 + 8,0);
  psVar8 = (short *)(param_1 + _DAT_08000eb8);
  do {
    func_080087C8(param_1);
    func_080088B8(param_1);
    sVar1 = *psVar8;
    if (sVar1 == 1) {
      piVar7 = (int *)(param_1 + _DAT_08000f28);
      *piVar7 = *piVar7 + -1;
      uVar6 = func_0x080088cc(param_1);
      if ((uVar6 & 8) != 0) {
        *piVar7 = 0;
      }
      if (*piVar7 < 1) {
        func_08009378(puVar4 + 3,_DAT_08000f2c,1,0);
        iVar3 = func_0x08008940(param_1);
        func_0x080d3914(iVar3,puVar4,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x10));
        *psVar8 = 2;
      }
    }
    else if (sVar1 < 2) {
      if ((sVar1 == 0) && (-1 < (int)(-*puVar4 | *puVar4))) {
        *(undefined4 *)(param_1 + _DAT_08000edc) = 0x78;
        *psVar8 = 1;
      }
    }
    else if ((sVar1 == 2) && (-1 < (int)(-*puVar4 | *puVar4))) {
      bVar2 = true;
    }
  } while (!bVar2);
  if (puVar4 != (uint *)0x0) {
    func_0x080d3914(puVar4,3,*(undefined4 *)(puVar4[2] + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08000F5C @ 0x08000F5C
// =============================================================================
undefined4 func_08000F5C(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  func_08008EB8(0,_DAT_08000fe0,0x20);
  uVar1 = _DAT_08000fe4;
  func_08008EB8(0xffffffff,_DAT_08000fe4,0x800);
  func_0x080d102c(_DAT_08000fe8,0x6000000);
  func_08008E64(_DAT_08000fec,0x5000000,0x20);
  func_0x080d102c(_DAT_08000ff0,uVar1);
  puVar2 = (undefined2 *)func_0x08008918(param_1);
  *puVar2 = 0x840;
  iVar3 = func_0x08008918(param_1);
  *(short *)(iVar3 + 0xe) = (short)_DAT_08000ff4;
  iVar3 = func_0x08008918(param_1);
  *(undefined2 *)(iVar3 + 0x1c) = 0;
  iVar3 = func_0x08008918(param_1);
  *(undefined2 *)(iVar3 + 0x1e) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_08000FF8 @ 0x08000FF8
// =============================================================================
undefined8 func_08000FF8(int param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  int *piVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 in_lr;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  func_08008724();
  func_080019D8(param_1);
  iVar4 = func_0x08008918(param_1);
  *(undefined2 *)(iVar4 + 0x50) = 0x3f;
  puVar5 = (uint *)func_080005D4(0x10);
  uVar6 = func_0x08008918(param_1);
  uVar16 = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = _DAT_0800112c;
  func_08009300(puVar5 + 3,uVar6);
  func_0800934C(puVar5 + 3,_DAT_08001130,1,0);
  iVar4 = func_0x08008940(param_1);
  func_0x080d3914(iVar4,puVar5,*(undefined4 *)(*(int *)(iVar4 + 8) + 0x10));
  func_08008B6C(param_1 + 8,0x23);
  *(undefined2 *)(param_1 + _DAT_08001134) = 0x400;
  iVar4 = _DAT_08001138;
  *(undefined2 *)(param_1 + _DAT_08001138) = 0;
  iVar18 = _DAT_0800113c;
  *(undefined2 *)(param_1 + _DAT_0800113c) = 0;
  *(undefined2 *)(param_1 + iVar4 + 4) = 0x400;
  *(undefined2 *)(param_1 + iVar18 + 0xca) = 3;
  *(undefined2 *)(param_1 + _DAT_08001140) = 0xe0;
  *(undefined1 *)(param_1 + _DAT_08001144) = 0;
  *(undefined1 *)(param_1 + iVar4 + 6) = 0;
  uVar17 = 0;
  iVar18 = 0;
  iVar4 = 0;
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  do {
    func_0x080d11e4();
    func_080087C8(param_1);
    func_080088B8(param_1);
    if (iStack_30 == 0) {
      bVar2 = false;
      uVar7 = func_0x080088cc(param_1);
      if ((((uVar7 & 1) != 0) || (uVar7 = func_0x080088cc(param_1), (uVar7 & 2) != 0)) ||
         (uVar7 = func_0x080088cc(param_1), (uVar7 & 8) != 0)) {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined2 *)(param_1 + _DAT_08001148) = 0xb;
      }
    }
    uVar7 = (int)((*(ushort *)(param_1 + _DAT_08001148) - 3) * 0x10000) >> 0x10;
    if (uVar7 < 0xe) {
      switch(*(uint *)(uVar7 * 4 + _DAT_0800114c) & 0xfffffffe) {
      case 0x8001188:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          *(undefined2 *)(param_1 + _DAT_080011a0) = 4;
        }
        break;
      case 0x80011a4:
        puVar13 = (ushort *)(param_1 + _DAT_08001204);
        uVar1 = *puVar13;
        *puVar13 = (ushort)(uVar1 - 1);
        if ((int)((uVar1 - 1) * 0x10000) < 0) {
          *puVar13 = 0;
        }
        piVar14 = (int *)(param_1 + _DAT_08001208);
        iVar8 = *piVar14 + _DAT_0800120c;
        *piVar14 = iVar8;
        if (iVar8 <= _DAT_08001210) {
          *piVar14 = _DAT_08001210 + 1;
        }
        if ((*puVar13 == 0) && (*piVar14 == 0x700000)) {
          func_0805E860(param_1 + _DAT_08001214,0x194);
          *(undefined4 *)(param_1 + _DAT_08001218) = 0x5a;
          *(undefined2 *)(param_1 + _DAT_0800121c) = 5;
        }
        break;
      case 0x8001220:
        iVar8 = *(int *)(param_1 + _DAT_08001240) + -1;
        *(int *)(param_1 + _DAT_08001240) = iVar8;
        if (iVar8 == 0x1e) {
          func_0805E860(param_1 + _DAT_0800127c,_DAT_08001280);
        }
        else if (iVar8 == 0x3c) {
          func_0805E860(param_1 + _DAT_08001244,0x192);
        }
        if (*(int *)(param_1 + _DAT_08001284) < 1) {
          func_0805E860(param_1 + _DAT_0800127c,_DAT_08001288);
          func_08008B6C(param_1 + 0xc,0x67);
          *(undefined2 *)(param_1 + _DAT_0800128c) = 6;
        }
        break;
      case 0x8001290:
        if ((int)((uint)*(byte *)(param_1 + _DAT_080012b8) * 0x20000000) < 0) {
          func_0805E860(param_1 + _DAT_080012bc,_DAT_080012c0);
          iVar18 = 1;
          iVar4 = 1;
          *(undefined2 *)(param_1 + _DAT_080012c4) = 7;
        }
        break;
      case 0x80012c8:
        piVar14 = (int *)(param_1 + _DAT_08001300);
        iVar8 = *piVar14 + _DAT_08001304;
        *piVar14 = iVar8;
        if (iVar8 < 0x800001) {
          *(undefined4 *)(param_1 + _DAT_08001308) = 0x3c;
          func_0805E860(param_1 + _DAT_0800130c,0x1c2);
          uVar16 = 1;
          *piVar14 = 0x800000;
          *(undefined2 *)(param_1 + _DAT_08001310) = 8;
        }
        break;
      case 0x8001314:
        iVar8 = *(int *)(param_1 + _DAT_08001330) + -1;
        *(int *)(param_1 + _DAT_08001330) = iVar8;
        if (iVar8 < 1) {
          *(undefined2 *)(param_1 + _DAT_08001334) = 9;
        }
        break;
      case 0x8001338:
        piVar14 = (int *)(param_1 + _DAT_08001368);
        iVar8 = *piVar14;
        *piVar14 = iVar8 + 0x18000;
        if (-1 < iVar8 + 0x18000) {
          *piVar14 = 0;
          *(undefined1 *)(param_1 + _DAT_0800136c) = 1;
          iStack_2c = 1;
          uVar16 = 3;
          *(undefined2 *)(param_1 + _DAT_08001370) = 10;
        }
        break;
      case 0x8001374:
        psVar11 = (short *)(param_1 + _DAT_080013a0);
        *psVar11 = *psVar11 + -0x10;
        *(short *)(param_1 + _DAT_080013a4) = *(short *)(param_1 + _DAT_080013a4) + -0x10;
        iVar8 = _DAT_080013a8;
        if (*psVar11 == 0x100) goto LAB_08001412;
        break;
      case 0x80013ac:
        *(undefined2 *)(param_1 + _DAT_08001418) = 0;
        *(undefined4 *)(param_1 + _DAT_0800141c) = 0x700000;
        func_0805E860(param_1 + _DAT_08001420,0x192);
        func_0805E860(param_1 + _DAT_08001424,0x338);
        iVar8 = _DAT_08001428;
        *(undefined4 *)(param_1 + _DAT_08001428) = 0x800000;
        iVar10 = _DAT_0800142c;
        iStack_2c = 0;
        uVar16 = 0;
        iVar18 = 2;
        iVar4 = 2;
        *(undefined1 *)(param_1 + _DAT_0800142c) = 9;
        *(undefined4 *)(param_1 + iVar8 + 0xe4) = 0;
        iVar8 = _DAT_08001430;
        *(undefined2 *)(param_1 + _DAT_08001430) = 0x100;
        *(undefined2 *)(param_1 + iVar10 + -2) = 0x100;
        iVar8 = iVar8 + 0xce;
LAB_08001412:
        iStack_30 = 1;
        *(undefined2 *)(param_1 + iVar8) = 0xc;
        break;
      case 0x8001434:
        SramProxy_LoadGlobalSettings(auStack_38);
        iVar10 = SramProxy_VerifyChecksum(auStack_38);
        iVar8 = _DAT_080014cc;
        if (iVar10 == 0) {
          *(undefined1 *)(param_1 + _DAT_08001470) = 1;
          *(undefined1 *)(param_1 + _DAT_08001474) = 0;
          uVar6 = 0x500000;
          *(undefined4 *)(param_1 + _DAT_08001478) = 0x500000;
          func_0805E860(param_1 + _DAT_0800147c,2);
          iVar8 = _DAT_08001480;
        }
        else {
          *(undefined1 *)(param_1 + _DAT_080014cc) = 2;
          *(undefined1 *)(param_1 + _DAT_080014d0) = 1;
          *(undefined4 *)(param_1 + _DAT_080014d4) = 0x180000;
          uVar6 = 0x880000;
          *(undefined4 *)(param_1 + _DAT_080014d8) = 0x880000;
          func_0805E860(param_1 + iVar8 + -0x6d,5);
          iVar8 = _DAT_080014dc;
        }
        *(undefined4 *)(param_1 + iVar8) = uVar6;
        *(undefined4 *)(param_1 + _DAT_080014e0) = _DAT_080014e4;
        *(undefined2 *)(param_1 + _DAT_080014e8) = 0xd;
        break;
      case 0x80014ec:
        if (*(char *)(param_1 + _DAT_08001550) == '\x02') {
          bVar2 = false;
          uVar7 = func_0x080088cc(param_1);
          if (((uVar7 & 0x20) != 0) || (uVar7 = func_0x080088cc(param_1), (uVar7 & 0x10) != 0)) {
            bVar2 = true;
          }
          if (bVar2) {
            bVar9 = *(byte *)(param_1 + _DAT_08001554) ^ 1;
            *(byte *)(param_1 + _DAT_08001554) = bVar9;
            if (bVar9 == 0) {
              func_0805E860(param_1 + _DAT_08001558,2);
              func_0805E860(param_1 + 0x6c00,4);
              uVar6 = 0x180000;
              iVar8 = _DAT_0800155c;
            }
            else {
              func_0805E860(param_1 + _DAT_080015d4,1);
              func_0805E860(param_1 + 0x6c00,5);
              uVar6 = 0x880000;
              iVar8 = _DAT_080015d8;
            }
            *(undefined4 *)(param_1 + iVar8) = uVar6;
            *(undefined4 *)(param_1 + _DAT_080015dc) = 0x708;
            func_08008B6C(param_1 + 0xc,0xcb);
          }
        }
        bVar2 = false;
        uVar7 = func_0x080088cc(param_1);
        if (((uVar7 & 1) != 0) || (uVar7 = func_0x080088cc(param_1), (uVar7 & 8) != 0)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(char *)(param_1 + _DAT_080015e0) == '\0') {
            func_0805E860(param_1 + _DAT_080015d4,3);
          }
          else {
            func_0805E860(param_1 + 0x6c00,6);
          }
          *(undefined4 *)(param_1 + _DAT_0800160c) = 0x3c;
          func_08008B6C(param_1 + 0xc,0xc5);
          *(undefined2 *)(param_1 + _DAT_08001610) = 0xe;
        }
        else {
          iVar10 = *(int *)(param_1 + _DAT_08001628) + -1;
          *(int *)(param_1 + _DAT_08001628) = iVar10;
          iVar8 = _DAT_0800162c;
          if (iVar10 < 1) goto LAB_08001646;
        }
        break;
      case 0x8001630:
        iVar8 = *(int *)(param_1 + _DAT_0800164c) + -1;
        *(int *)(param_1 + _DAT_0800164c) = iVar8;
        if (iVar8 < 1) {
          uStack_28 = 1;
          iVar8 = _DAT_08001650;
LAB_08001646:
          *(undefined2 *)(param_1 + iVar8) = 0xf;
        }
        break;
      case 0x8001654:
        func_08009378(puVar5 + 3,_DAT_0800167c,1,0);
        iVar8 = func_0x08008940(param_1);
        func_0x080d3914(iVar8,puVar5,*(undefined4 *)(*(int *)(iVar8 + 8) + 0x10));
        *(undefined2 *)(param_1 + _DAT_08001680) = 0x10;
        break;
      case 0x8001684:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          iStack_24 = 1;
        }
      }
    }
    if ((iStack_2c != 0) && ((int)((uint)*(byte *)(param_1 + _DAT_080016c8) * 0x20000000) < 0)) {
      func_0805E860(param_1 + _DAT_080016cc,0x192);
      iStack_2c = 0;
    }
    if (uVar16 == 2) {
      if ((int)((uint)*(byte *)(param_1 + _DAT_0800170c) * 0x20000000) < 0) {
        func_08008B88(param_1 + 0xc,0xa9);
      }
    }
    else if (uVar16 < 3) {
      if (uVar16 == 1) {
        func_0805E860(param_1 + _DAT_080016f0,0x370);
        func_08008B6C(param_1 + 0xc,0xa9);
        uVar16 = 2;
      }
    }
    else if ((uVar16 == 3) && ((int)((uint)*(byte *)(param_1 + _DAT_08001738) * 0x20000000) < 0)) {
      func_0805E860(param_1 + _DAT_0800173c,0x338);
      uVar16 = 0;
    }
    if (iVar18 == 1) {
      iVar8 = *(int *)(param_1 + _DAT_08001758);
      if (iVar8 < 0xbc0001) goto LAB_08001760;
      *(int *)(param_1 + _DAT_08001758) = iVar8 + _DAT_0800175c;
    }
    else if (iVar18 == 2) {
LAB_08001760:
      func_0805E860(param_1 + 0x6b00,_DAT_08001788);
      *(undefined4 *)(param_1 + _DAT_0800178c) = 0xbc0000;
      iVar18 = 0;
    }
    if (iVar4 == 1) {
      iVar8 = *(int *)(param_1 + _DAT_080017a8);
      if (_DAT_080017ac < iVar8) goto LAB_080017b0;
      *(int *)(param_1 + _DAT_080017a8) = iVar8 + 0x8000;
    }
    else if (iVar4 == 2) {
LAB_080017b0:
      func_0805E860(param_1 + _DAT_080017e4,_DAT_080017e8);
      *(undefined4 *)(param_1 + _DAT_080017ec) = 0x400000;
      iVar4 = 0;
    }
    iVar8 = _DAT_080018e4;
    uVar7 = (int)((*(byte *)(param_1 + _DAT_080017f0) - 1) * 0x1000000) >> 0x18;
    if (8 < uVar7) goto case_08001952;
    switch(*(uint *)(uVar7 * 4 + _DAT_080017f4) & 0xfffffffe) {
    case 0x800181c:
      piVar14 = (int *)(param_1 + _DAT_08001858);
      iVar8 = *piVar14;
      *piVar14 = iVar8 + 0x10000;
      *(int *)(param_1 + _DAT_0800185c) = iVar8 + 0x10000;
      *(int *)(param_1 + _DAT_08001860) = *(int *)(param_1 + _DAT_08001860) + _DAT_08001864;
      *(int *)(param_1 + _DAT_08001868) = *(int *)(param_1 + _DAT_08001868) + 0x10000;
      if (*piVar14 <= _DAT_0800186c) break;
      uVar3 = 2;
      iVar8 = _DAT_08001870;
      goto LAB_08001950;
    case 0x8001874:
      piVar14 = (int *)(param_1 + _DAT_080018e4);
      iVar10 = *piVar14;
      *piVar14 = iVar10 + 0x10000;
      *(int *)(param_1 + iVar8 + 0x20) = iVar10 + 0x10000;
      *(int *)(param_1 + _DAT_080018e8) = *(int *)(param_1 + _DAT_080018e8) + 0x10000;
      *(int *)(param_1 + _DAT_080018ec) = *(int *)(param_1 + _DAT_080018ec) + _DAT_080018f0;
      if (_DAT_080018f4 < *piVar14) {
        *(undefined1 *)(param_1 + _DAT_080018f8) = 3;
        goto case_080018AE;
      }
      break;
    case 0x80018ae:
case_080018AE:
      *(undefined4 *)(param_1 + _DAT_080018e8) = 0x1c0000;
      *(undefined4 *)(param_1 + _DAT_080018ec) = 0xd40000;
      puVar12 = (undefined4 *)(param_1 + _DAT_080018fc);
      *(undefined4 *)(param_1 + _DAT_080018e4) = 0x940000;
      *puVar12 = 0x940000;
      uVar6 = _DAT_080019c8;
      if (*(char *)(param_1 + _DAT_080018f8) == '\x03') {
        uVar17 = 0x1e;
      }
      else {
        func_0805E860(param_1 + _DAT_080019c4,_DAT_080019c8);
        func_0805E860(param_1 + _DAT_080019cc,uVar6);
        uVar17 = 0;
      }
      *(undefined1 *)(param_1 + _DAT_080019d0) = 4;
    case 0x8001922:
      uVar6 = _DAT_080019c8;
      uVar7 = uVar17 * 0x1000000 - 0x1000000;
      uVar17 = uVar7 >> 0x18;
      if ((int)uVar7 < 0) {
        func_0805E860(param_1 + _DAT_080019c4,_DAT_080019c8);
        func_0805E860(param_1 + _DAT_080019cc,uVar6);
        uVar3 = 5;
        iVar8 = _DAT_080019d0;
LAB_08001950:
        *(undefined1 *)(param_1 + iVar8) = uVar3;
      }
    }
case_08001952:
    iVar8 = func_0x08008918(param_1);
    puVar15 = (undefined2 *)(param_1 + _DAT_080019d4);
    *(undefined2 *)(iVar8 + 0x10) = *puVar15;
    iVar8 = func_0x08008918(param_1);
    *(undefined2 *)(iVar8 + 0x14) = *puVar15;
    iVar8 = func_0x08008918(param_1);
    *(undefined2 *)(iVar8 + 0x18) = *puVar15;
    iVar8 = func_0x08008918(param_1);
    *(undefined2 *)(iVar8 + 0x1c) = *puVar15;
    func_080024E0(param_1);
    if (iStack_24 != 0) {
      if (puVar5 != (uint *)0x0) {
        func_0x080d3914(puVar5,3,*(undefined4 *)(puVar5[2] + 0xc));
      }
      return CONCAT44(in_lr,uStack_28);
    }
  } while( true );
}

// =============================================================================
// Function: func_080019D8 @ 0x080019D8
// =============================================================================
undefined4 func_080019D8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  short *psVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  undefined4 uStack_4;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  undefined2 *puVar28;
  undefined2 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined1 *puVar46;
  
  iVar1 = _DAT_08001dac;
  puVar17 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar18 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar19 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar20 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar21 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar22 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar23 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar24 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar25 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar26 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar27 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar28 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar29 = (undefined2 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar30 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar31 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar32 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar33 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar34 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar35 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar36 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar37 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar38 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar39 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar40 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar41 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar42 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar43 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar44 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar45 = (undefined4 *)(&stack0xffffffe0 + _DAT_08001dac);
  puVar46 = &stack0xffffffe0 + _DAT_08001dac;
  func_08008EB8(0,_DAT_08001db0,0x20);
  func_08008EB8(0xffffffff,_DAT_08001db4,0x1000);
  func_08008EB8(0xffffffff,_DAT_08001db8,0x1000);
  func_08008EB8(0xffffffff,_DAT_08001dbc,0x1000);
  func_08008EB8(0xffffffff,_DAT_08001dc0,0x1000);
  func_0x080d102c(_DAT_08001dc4,0x6000000);
  func_08008E64(_DAT_08001dc8,0x5000000,0x200);
  iVar12 = 0;
  *(undefined1 **)(&stack0xffffffe0 + _DAT_08001dcc + iVar1) = &stack0xfffffff8 + iVar1;
  *(undefined1 **)(&stack0xffffffe0 + _DAT_08001dd0 + iVar1) = &stack0x00000000 + iVar1;
  *(int *)(&stack0xffffffe0 + _DAT_08001dd8 + iVar1) = param_1 + _DAT_08001dd4;
  *(int *)(&stack0x00001000 + iVar1) = param_1 + _DAT_08001ddc;
  *(int *)(&stack0x00000fe0 + iVar1) = param_1 + _DAT_08001de0;
  *(int *)(&stack0xffffffe0 + _DAT_08001de8 + iVar1) = param_1 + _DAT_08001de4;
  *(int *)(&stack0xffffffe0 + _DAT_08001df0 + iVar1) = param_1 + _DAT_08001dec;
  *(int *)(&stack0xffffffe0 + _DAT_08001df8 + iVar1) = param_1 + _DAT_08001df4;
  *(int *)(&stack0xffffffe0 + _DAT_08001e00 + iVar1) = param_1 + _DAT_08001dfc;
  *(int *)(&stack0xffffffe0 + _DAT_08001e08 + iVar1) = param_1 + _DAT_08001e04;
  *(int *)(&stack0xffffffe0 + _DAT_08001e10 + iVar1) = param_1 + _DAT_08001e0c;
  *(int *)(&stack0xffffffe0 + _DAT_08001e18 + iVar1) = param_1 + _DAT_08001e14;
  do {
    func_0x080d102c(*(undefined4 *)(iVar12 * 4 + _DAT_08001e1c),puVar46);
    iVar2 = iVar12 * 0x1000;
    iVar10 = 0;
    iVar12 = iVar12 + 1;
    *(int *)(&stack0xffffffe0 + _DAT_08001e24 + iVar1) = param_1 + _DAT_08001e20;
    *(int *)(&stack0xffffffe0 + _DAT_08001e2c + iVar1) = param_1 + _DAT_08001e28;
    do {
      iVar9 = iVar10 * 0x40;
      iVar5 = iVar10 * 0x80;
      iVar10 = iVar10 + 1;
      puVar13 = (undefined2 *)(&stack0x00000020 + iVar5 + iVar1);
      puVar3 = (undefined2 *)(&stack0xffffffe0 + iVar5 + iVar1);
      iVar9 = iVar9 + iVar2 + 0xc000;
      iVar5 = 0x1f;
      do {
        *(undefined2 *)(iVar9 + 0x6000000) = *puVar3;
        *(undefined2 *)(iVar9 + _DAT_08001e30) = *puVar13;
        puVar13 = puVar13 + 1;
        puVar3 = puVar3 + 1;
        iVar9 = iVar9 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    } while (iVar10 < 0x20);
  } while (iVar12 < 4);
  puVar3 = (undefined2 *)func_0x08008918(param_1);
  *puVar17 = 8000;
  *puVar3 = 8000;
  iVar12 = func_0x08008918(param_1);
  *puVar18 = (short)_DAT_08001e34;
  *(short *)(iVar12 + 8) = (short)_DAT_08001e34;
  iVar12 = func_0x08008918(param_1);
  *puVar19 = (short)_DAT_08001e38;
  *(short *)(iVar12 + 10) = (short)_DAT_08001e38;
  iVar12 = func_0x08008918(param_1);
  *puVar20 = (short)_DAT_08001e3c;
  *(short *)(iVar12 + 0xc) = (short)_DAT_08001e3c;
  iVar12 = func_0x08008918(param_1);
  *puVar21 = (short)_DAT_08001e40;
  *(short *)(iVar12 + 0xe) = (short)_DAT_08001e40;
  iVar12 = func_0x08008918(param_1);
  *puVar22 = 0;
  *(undefined2 *)(iVar12 + 0x10) = 0;
  iVar12 = func_0x08008918(param_1);
  *puVar23 = 0;
  *(undefined2 *)(iVar12 + 0x12) = 0;
  iVar12 = func_0x08008918(param_1);
  *puVar24 = 0;
  *(undefined2 *)(iVar12 + 0x14) = 0;
  iVar12 = func_0x08008918(param_1);
  *puVar25 = 0;
  *(undefined2 *)(iVar12 + 0x16) = 0;
  iVar12 = func_0x08008918(param_1);
  *puVar26 = 0;
  *(undefined2 *)(iVar12 + 0x18) = 0;
  iVar12 = func_0x08008918(param_1);
  *puVar27 = 0;
  *(undefined2 *)(iVar12 + 0x1a) = 0;
  iVar12 = func_0x08008918(param_1);
  *puVar28 = 0;
  *(undefined2 *)(iVar12 + 0x1c) = 0;
  iVar12 = func_0x08008918(param_1);
  *puVar29 = 0;
  *(undefined2 *)(iVar12 + 0x1e) = 0;
  *puVar30 = 0;
  *(undefined2 *)(&stack0xffffffe4 + iVar1) = 0;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
  *(undefined2 *)(&stack0xffffffec + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined2 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined2 *)(*(int *)(&stack0xffffffe0 + _DAT_08001dcc + iVar1) + 4) = 0;
  piVar6 = *(int **)(param_1 + _DAT_08001e44);
  func_0x080d3918(&stack0x00000000 + iVar1,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_08001dd8 + iVar1) +
                   (uint)*(ushort *)((undefined4 *)(param_1 + _DAT_08001e44) + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  puVar16 = *(undefined4 **)(&stack0xffffffe0 + _DAT_08001dd0 + iVar1);
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar31 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  func_08008E64(*(int *)(&stack0xfffffff0 + iVar1) + 0x120,_DAT_08001e48,0xe0);
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(*(int *)(&stack0xffffffe8 + iVar1),_DAT_08001e4c,uVar8);
  iVar12 = _DAT_08001e50;
  uVar7 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar7 = (uint)*(ushort *)(&stack0xffffffec + iVar1);
  }
  psVar15 = (short *)(param_1 + _DAT_08001e50);
  *psVar15 = (short)(uVar7 >> 5);
  *(undefined4 *)(param_1 + _DAT_08001e54) = 0x780000;
  *(undefined4 *)(param_1 + _DAT_08001e58) = _DAT_08001e5c;
  puVar4 = (undefined4 *)(param_1 + iVar12 + -0xa0);
  piVar6 = (int *)*puVar4;
  func_0x080d3918(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0x00001000 + iVar1) + (uint)*(ushort *)(puVar4 + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar32 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(*(int *)(&stack0xffffffe8 + iVar1),*psVar15 * 0x20 + _DAT_08001e4c,uVar8);
  *(undefined4 *)(param_1 + _DAT_08001e60) = 0x780000;
  *(undefined4 *)(param_1 + _DAT_08001e64) = 0x580000;
  puVar4 = (undefined4 *)(param_1 + _DAT_08001e68);
  func_0805E860(puVar4,0x160);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0x00000fe0 + iVar1) + (uint)*(ushort *)(puVar4 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar4 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar33 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + 0x6c80,*(undefined4 *)(param_1 + 0x6c84));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_08001e6c,uVar8);
  *(undefined4 *)(param_1 + _DAT_08001e70) = 0x1080000;
  *(undefined4 *)(param_1 + _DAT_08001e74) = 0x940000;
  puVar4 = (undefined4 *)(param_1 + _DAT_08001e78);
  func_0805E860(puVar4,_DAT_08001e7c);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_08001de8 + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar34 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + _DAT_08002258,*(undefined4 *)(param_1 + _DAT_08002258 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800225c,uVar8);
  *(undefined4 *)(param_1 + _DAT_08002260) = 0x1080000;
  *(undefined4 *)(param_1 + _DAT_08002264) = 0x940000;
  piVar6 = *(int **)(param_1 + _DAT_08002268);
  func_0x080d3918(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_0800226c + iVar1) +
                   (uint)*(ushort *)((undefined4 *)(param_1 + _DAT_08002268) + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar35 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + _DAT_08002270,*(undefined4 *)(param_1 + _DAT_08002270 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800225c,uVar8);
  *(undefined4 *)(param_1 + _DAT_08002274) = 0x280000;
  *(undefined4 *)(param_1 + _DAT_08002278) = 0x540000;
  func_0805E860((undefined4 *)(param_1 + 0x6b00),_DAT_0800227c);
  piVar6 = *(int **)(param_1 + 0x6b00);
  func_0x080d3918(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_08002280 + iVar1) +
                   (uint)*(ushort *)(param_1 + 0x6b0c) * 4),*(undefined4 *)(*piVar6 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar36 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + _DAT_08002284,*(undefined4 *)(param_1 + _DAT_08002284 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800225c,uVar8);
  *(undefined4 *)(param_1 + _DAT_08002288) = 0x1100000;
  *(undefined4 *)(param_1 + _DAT_0800228c) = 0x940000;
  puVar4 = (undefined4 *)(param_1 + _DAT_08002290);
  func_0805E860(puVar4,_DAT_08002294);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_08002298 + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar37 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  *(undefined4 *)(param_1 + _DAT_0800229c) = _DAT_080022a0;
  *(undefined4 *)(param_1 + _DAT_080022a4) = 0x940000;
  puVar4 = (undefined4 *)(param_1 + _DAT_080022a8);
  func_0805E860(puVar4,0x730);
  func_0805E860(param_1 + _DAT_080022ac,0x730);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_080022b0 + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar38 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + _DAT_080022b4,*(undefined4 *)(param_1 + _DAT_080022b4 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800225c,uVar8);
  iVar12 = _DAT_080022b8;
  *(undefined4 *)(param_1 + _DAT_080022b8) = 0x280000;
  *(undefined4 *)(param_1 + _DAT_080022bc) = 0x200000;
  *(undefined4 *)(param_1 + _DAT_080022c0) = 0xc80000;
  *(undefined4 *)(param_1 + iVar12 + 0x24) = 0x200000;
  puVar4 = (undefined4 *)(param_1 + 0x6b80);
  func_0805E860(puVar4,_DAT_080022c4);
  piVar6 = *(int **)(&stack0xffffffe0 + _DAT_080022c8 + iVar1);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)(*piVar6 + (uint)*(ushort *)(param_1 + 0x6b8c) * 4),
                  *(undefined4 *)(*(int *)*puVar4 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar39 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + _DAT_080022cc,*(undefined4 *)(param_1 + _DAT_080022cc + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800225c,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = func_08007D4C(param_1 + _DAT_080022d0,*(undefined4 *)(param_1 + _DAT_080022d0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_080022d4,uVar8);
  func_0805E860(puVar4,_DAT_080022d8);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)(*piVar6 + (uint)*(ushort *)(param_1 + 0x6b8c) * 4),
                  *(undefined4 *)(*(int *)*puVar4 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar40 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = func_08007D4C(param_1 + _DAT_080022dc,*(undefined4 *)(param_1 + _DAT_080022dc + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_080022d4,uVar8);
  func_0805E860(puVar4,_DAT_080022e0);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_080022c8 + iVar1) +
                   (uint)*(ushort *)(param_1 + 0x6b8c) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10))
  ;
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar41 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = func_08007D4C(param_1 + _DAT_080022e4,*(undefined4 *)(param_1 + _DAT_080022e4 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_080022d4,uVar8);
  puVar4 = (undefined4 *)(param_1 + _DAT_080022e8);
  func_0805E860(puVar4,1);
  func_0x080d3918(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_080022ec + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar42 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + 0x6d00,*(undefined4 *)(param_1 + 0x6d04));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800225c,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = func_08007D4C(param_1 + _DAT_080022f0,*(undefined4 *)(param_1 + _DAT_080022f0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800249c,uVar8);
  *(undefined4 *)(param_1 + _DAT_080024a0) = 0x700000;
  func_0805E860((undefined4 *)(param_1 + 0x6c00),4);
  piVar6 = *(int **)(param_1 + 0x6c00);
  func_0x080d3918(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_080024a4 + iVar1) +
                   (uint)*(ushort *)(param_1 + 0x6c0c) * 4),*(undefined4 *)(*piVar6 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar43 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = func_08007D4C(param_1 + _DAT_080024a8,*(undefined4 *)(param_1 + _DAT_080024a8 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800249c,uVar8);
  *(undefined4 *)(param_1 + _DAT_080024ac) = 0x700000;
  piVar6 = *(int **)(param_1 + _DAT_080024b0);
  func_0x080d3918(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + _DAT_080024b4 + iVar1) +
                   (uint)*(ushort *)((undefined4 *)(param_1 + _DAT_080024b0) + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar44 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + _DAT_080024b8,*(undefined4 *)(param_1 + _DAT_080024b8 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_080024bc,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = func_08007D4C(param_1 + _DAT_080024c0,*(undefined4 *)(param_1 + _DAT_080024c0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800249c,uVar8);
  *(undefined4 *)(param_1 + _DAT_080024c4) = 0x780000;
  *(undefined4 *)(param_1 + _DAT_080024c8) = 0x900000;
  func_0805E790(puVar16,param_1 + _DAT_080024cc,0);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar45 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = func_080074C0(param_1 + _DAT_080024d0,*(undefined4 *)(param_1 + _DAT_080024d0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_080024bc,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = func_08007D4C(param_1 + _DAT_080024d4,*(undefined4 *)(param_1 + _DAT_080024d4 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  func_08008E64(uVar11,iVar12 * 0x20 + _DAT_0800249c,uVar8);
  *(undefined4 *)(param_1 + _DAT_080024d8) = 0x780000;
  return *(undefined4 *)((int)&uStack_4 + _DAT_080024dc + iVar1);
}

// =============================================================================
// Function: func_080024E0 @ 0x080024E0
// =============================================================================
undefined4 func_080024E0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 in_lr;
  short sStack_c4;
  short sStack_c2;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  int iStack_a8;
  uint uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
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
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  
  sStack_c4 = 0;
  sStack_c2 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  iStack_a8 = 0;
  uStack_a4 = uStack_a4 & 0xffff0000;
  iStack_a0 = 0;
  uStack_9c = uStack_9c & 0xffff0000;
  uStack_98 = 0;
  uStack_94 = uStack_94 & 0xffff0000;
  uStack_90 = 0;
  uStack_8c = uStack_8c & 0xffff0000;
  puVar6 = (undefined4 *)(param_1 + _DAT_080028e0);
  uVar1 = func_0805E8F0(param_1 + _DAT_080028e4);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + _DAT_080028e8);
  uVar1 = func_0805E8F0(param_1 + _DAT_080028ec);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + _DAT_080028f0);
  uVar1 = func_0805E8F0(param_1 + _DAT_080028f4);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + _DAT_080028f8);
  uVar1 = func_0805E8F0(param_1 + 0x6b00);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + _DAT_080028fc);
  uVar1 = func_0805E8F0(param_1 + _DAT_08002900);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + _DAT_08002904);
  uVar1 = func_0805E8F0(param_1 + _DAT_08002908);
  *puVar6 = uVar1;
  pcVar7 = (char *)(_DAT_0800290c + param_1);
  if (*pcVar7 != '\0') {
    puVar6 = (undefined4 *)(param_1 + _DAT_08002910);
    func_0x080d3918(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + _DAT_08002914) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    uStack_be = func_08007D4C(param_1 + _DAT_08002918,*(undefined4 *)(param_1 + _DAT_08002918 + 4));
    uStack_c0 = func_080074C0(param_1 + _DAT_0800291c,*(undefined4 *)(param_1 + _DAT_0800291c + 4));
    uStack_ac = 1;
    uVar1 = func_0x08008920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    puVar6 = (undefined4 *)(param_1 + _DAT_08002920);
    puVar9 = (undefined4 *)(param_1 + _DAT_08002924);
    uVar1 = func_0805E8F0(puVar9);
    *puVar6 = uVar1;
    func_0x080d3918(&iStack_88,(int *)*puVar9,
                    *(undefined2 *)
                     (*(int *)(param_1 + _DAT_08002928) + (uint)*(ushort *)(puVar9 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar9 + 0x10));
    memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar9 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar9 + 0x1e);
    uStack_be = func_08007D4C(param_1 + _DAT_0800292c,*(undefined4 *)(param_1 + _DAT_0800292c + 4));
    uStack_c0 = func_080074C0(param_1 + 0x6d00,*(undefined4 *)(param_1 + 0x6d04));
    uVar1 = func_0x08008920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (*pcVar7 == '\x02') {
      puVar6 = (undefined4 *)(param_1 + _DAT_08002930);
      uVar1 = func_0805E8F0((undefined4 *)(param_1 + 0x6c00));
      *puVar6 = uVar1;
      piVar2 = *(int **)(param_1 + 0x6c00);
      func_0x080d3918(&iStack_88,piVar2,
                      *(undefined2 *)
                       (*(int *)(param_1 + _DAT_08002934) + (uint)*(ushort *)(param_1 + 0x6c0c) * 4)
                      ,*(undefined4 *)(*piVar2 + 0x10));
      memcpy(&iStack_88,&iStack_88,0x20);
      iStack_a8 = iStack_88;
      uStack_a4 = uStack_84;
      iStack_a0 = iStack_80;
      uStack_9c = uStack_7c;
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      uStack_90 = uStack_70;
      uStack_8c = uStack_6c;
      sStack_c4 = *(short *)(param_1 + 0x6c1a);
      sStack_c2 = *(undefined2 *)(param_1 + 0x6c1e);
      uStack_be = func_08007D4C(param_1 + _DAT_08002938,*(undefined4 *)(param_1 + _DAT_08002938 + 4)
                               );
      uStack_c0 = func_080074C0(param_1 + 0x6d00,*(undefined4 *)(param_1 + 0x6d04));
      uVar1 = func_0x08008920(param_1);
      uVar4 = 0;
      if (iStack_a8 != 0) {
        uVar4 = uStack_a4 & 0xffff;
      }
      func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    }
    puVar6 = (undefined4 *)(param_1 + _DAT_0800293c);
    func_0805E8F0(puVar6);
    func_0x080d3918(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + _DAT_08002940) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
    uStack_be = func_08007D4C(param_1 + _DAT_08002944,*(undefined4 *)(param_1 + _DAT_08002944 + 4));
    uStack_c0 = func_080074C0(param_1 + _DAT_08002948,*(undefined4 *)(param_1 + _DAT_08002948 + 4));
    uVar1 = func_0x08008920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  }
  puVar6 = (undefined4 *)(param_1 + _DAT_0800294c);
  func_0x080d3918(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)
                   (*(int *)(param_1 + _DAT_08002950) + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  uStack_be = 0;
  uStack_c0 = 0;
  uStack_ac = 1;
  uVar1 = func_0x08008920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  if (9 < *(short *)(param_1 + _DAT_08002954)) {
    iVar8 = func_0x08008920(param_1);
    psVar10 = (short *)(param_1 + _DAT_08002958);
    *(short *)(iVar8 + 10) = *psVar10;
    *(short *)(iVar8 + 0x12) = psVar10[1];
    *(short *)(iVar8 + 0x1a) = psVar10[2];
    *(short *)(iVar8 + 0x22) = psVar10[3];
    puVar6 = (undefined4 *)(_DAT_0800295c + param_1);
    func_0x080d3918(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + _DAT_08002960) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    uStack_be = *(undefined2 *)(param_1 + _DAT_08002964);
    uStack_c0 = 0;
    uStack_b3 = 0;
    if ((*psVar10 == 0x100) && (*(short *)(param_1 + _DAT_08002968) == 0x100)) {
      uStack_b0 = 0;
    }
    else {
      uStack_b0 = 1;
    }
    uStack_ac = 1;
  }
  puVar6 = (undefined4 *)(param_1 + _DAT_08002a68);
  func_0x080d3918(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)
                   (*(int *)(param_1 + _DAT_08002a6c) + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + _DAT_08002a70;
  uStack_be = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = func_080074C0(param_1 + 0x6c80,*(undefined4 *)(param_1 + 0x6c84));
  uStack_b0 = 0;
  uStack_ac = 1;
  piStack_38 = (int *)(param_1 + _DAT_08002a78);
  piStack_34 = (int *)(param_1 + _DAT_08002a7c);
  piStack_30 = (int *)(param_1 + _DAT_08002a80);
  piStack_2c = (int *)(param_1 + _DAT_08002a84);
  if ((int)((uint)*(byte *)(param_1 + _DAT_08002a74) * 0x40000000) < 0) {
    piVar2 = (int *)func_0x08008910(param_1);
    iVar11 = iStack_a0;
    iVar8 = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    func_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + _DAT_08002a88,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_64 = 1;
      iStack_68 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_68;
      if (iStack_68 == 0) {
        piVar2 = &iStack_64;
      }
      if (iStack_68 + *piVar2 == 0) {
        piStack_24 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_68 + *piVar2) * 0x10;
        piStack_24 = (int *)malloc(iVar8);
        if (piStack_24 == (int *)0x0) {
          piStack_24 = (int *)func_080D3BC0(iVar8);
        }
      }
      piStack_38 = (int *)(param_1 + _DAT_08002b24);
      piStack_34 = (int *)(param_1 + _DAT_08002b28);
      piStack_30 = (int *)(param_1 + _DAT_08002b2c);
      piStack_2c = (int *)(param_1 + _DAT_08002b30);
      piVar5 = piStack_24;
      for (piVar2 = (int *)*piStack_28; piVar2 != piVar3; piVar2 = piVar2 + 4) {
        if (piVar5 != (int *)0x0) {
          iVar11 = piVar2[1];
          iVar13 = piVar2[2];
          *piVar5 = *piVar2;
          piVar5[1] = iVar11;
          piVar5[2] = iVar13;
          piVar5[3] = piVar2[3];
        }
        piVar5 = piVar5 + 4;
      }
      iVar11 = iStack_64;
      if (iStack_64 == 1) {
        if (piVar5 != (int *)0x0) {
          *piVar5 = iStack_88;
          piVar5[1] = uStack_84;
          piVar5[2] = iStack_80;
          piVar5[3] = uStack_7c;
        }
        piVar5 = piVar5 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar5 != (int *)0x0) {
            *piVar5 = iStack_88;
            piVar5[1] = uStack_84;
            piVar5[2] = iStack_80;
            piVar5[3] = uStack_7c;
          }
          piVar5 = piVar5 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      if (*piStack_28 != 0) {
        free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar5;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = func_0x08008920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  func_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,1);
  puVar6 = (undefined4 *)(param_1 + _DAT_08002c88);
  func_0x080d3918(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)(*piStack_38 + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + _DAT_08002c8c;
  uStack_be = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = func_080074C0(param_1 + _DAT_08002c90,*(undefined4 *)(param_1 + _DAT_08002c90 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + _DAT_08002c94) * 0x40000000) < 0) {
    piVar2 = (int *)func_0x08008910(param_1);
    iVar11 = iStack_a0;
    iVar8 = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    func_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + _DAT_08002c98,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_5c = 1;
      iStack_60 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_60;
      if (iStack_60 == 0) {
        piVar2 = &iStack_5c;
      }
      if (iStack_60 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_60 + *piVar2) * 0x10;
        piVar2 = (int *)malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)func_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_5c;
      if (iStack_5c == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = func_0x08008920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  func_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,0);
  if (*(char *)(param_1 + _DAT_08002e80) != '\0') {
    puVar6 = (undefined4 *)(param_1 + _DAT_08002e84);
    func_0x080d3918(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + _DAT_08002e88) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(short *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    iVar8 = param_1 + _DAT_08002e8c;
    uStack_be = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uStack_c0 = func_080074C0(param_1 + _DAT_08002e90,*(undefined4 *)(param_1 + _DAT_08002e90 + 4));
    uStack_ac = 1;
    if ((int)((uint)*(byte *)(param_1 + _DAT_08002e94) * 0x40000000) < 0) {
      piVar2 = (int *)func_0x08008910(param_1);
      iVar11 = iStack_a0;
      iVar8 = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
      uVar4 = 0;
      if (iStack_a0 != 0) {
        uVar4 = uStack_9c & 0xffff;
      }
      piStack_28 = piVar2;
      func_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + _DAT_08002e98,uVar4);
      piVar3 = (int *)piVar2[1];
      if (piVar3 == (int *)piVar2[3]) {
        iStack_54 = 1;
        iStack_58 = (int)piVar3 - *piStack_28 >> 4;
        piVar2 = &iStack_58;
        if (iStack_58 == 0) {
          piVar2 = &iStack_54;
        }
        if (iStack_58 + *piVar2 == 0) {
          piVar2 = (int *)0x0;
          iVar8 = 0;
        }
        else {
          iVar8 = (iStack_58 + *piVar2) * 0x10;
          piVar2 = (int *)malloc(iVar8);
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)func_080D3BC0(iVar8);
          }
        }
        piVar12 = piVar2;
        for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
          if (piVar12 != (int *)0x0) {
            iVar11 = piVar5[1];
            iVar13 = piVar5[2];
            *piVar12 = *piVar5;
            piVar12[1] = iVar11;
            piVar12[2] = iVar13;
            piVar12[3] = piVar5[3];
          }
          piVar12 = piVar12 + 4;
        }
        iVar11 = iStack_54;
        if (iStack_54 == 1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            if (piVar12 != (int *)0x0) {
              *piVar12 = iStack_88;
              piVar12[1] = uStack_84;
              piVar12[2] = iStack_80;
              piVar12[3] = uStack_7c;
            }
            piVar12 = piVar12 + 4;
          }
        }
        for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
        }
        piStack_24 = piVar2;
        if (*piStack_28 != 0) {
          free();
        }
        *piStack_28 = (int)piStack_24;
        piStack_28[1] = (int)piVar12;
        piStack_28[3] = (int)piStack_24 + iVar8;
      }
      else {
        if (piVar3 != (int *)0x0) {
          *piVar3 = iStack_88;
          piVar3[1] = uStack_84;
          piVar3[2] = iStack_80;
          piVar3[3] = uStack_7c;
        }
        piStack_28[1] = piStack_28[1] + 0x10;
      }
    }
    uVar1 = func_0x08008920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (sStack_c2 == 0x94) {
      func_080035C0(param_1,(int)sStack_c4,0x94,0);
    }
    sStack_c4 = *(short *)(param_1 + _DAT_080030c0 + 0x1a);
    sStack_c2 = *(short *)(param_1 + _DAT_080030c0 + 0x1e);
    uVar1 = func_0x08008920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (sStack_c2 == 0x94) {
      func_080035C0(param_1,(int)sStack_c4,0x94,0);
    }
  }
  puVar6 = (undefined4 *)(param_1 + _DAT_080030c4);
  func_0x080d3918(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)(*piStack_34 + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a) - *(short *)(param_1 + _DAT_080030c8);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + _DAT_080030cc;
  uStack_be = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = func_080074C0(param_1 + _DAT_080030d0,*(undefined4 *)(param_1 + _DAT_080030d0 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + _DAT_080030d4) * 0x40000000) < 0) {
    piVar2 = (int *)func_0x08008910(param_1);
    iVar11 = iStack_a0;
    iVar8 = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    func_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + _DAT_080030d8,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_4c = 1;
      iStack_50 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_50;
      if (iStack_50 == 0) {
        piVar2 = &iStack_4c;
      }
      if (iStack_50 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_50 + *piVar2) * 0x10;
        piVar2 = (int *)malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)func_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_4c;
      if (iStack_4c == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = func_0x08008920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  func_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  func_0x080d3918(&iStack_88,*(int **)(param_1 + 0x6b00),
                  *(undefined2 *)(*piStack_30 + (uint)*(ushort *)(param_1 + 0x6b0c) * 4),
                  *(undefined4 *)(**(int **)(param_1 + 0x6b00) + 0x10));
  memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)(param_1 + 0x6b1a);
  sStack_c2 = *(short *)(param_1 + 0x6b1e);
  uStack_bc = 0;
  iVar8 = param_1 + _DAT_080032b4;
  uStack_be = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = func_080074C0(param_1 + _DAT_080032b8,*(undefined4 *)(param_1 + _DAT_080032b8 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + _DAT_080032bc) * 0x40000000) < 0) {
    piVar2 = (int *)func_0x08008910(param_1);
    iVar11 = iStack_a0;
    iVar8 = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    func_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + _DAT_080032c0,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_44 = 1;
      iStack_48 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_48;
      if (iStack_48 == 0) {
        piVar2 = &iStack_44;
      }
      if (iStack_48 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_48 + *piVar2) * 0x10;
        piVar2 = (int *)malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)func_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_44;
      if (iStack_44 == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = func_0x08008920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  func_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  puVar6 = (undefined4 *)(param_1 + _DAT_08003498);
  func_0x080d3918(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)(*piStack_2c + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + _DAT_0800349c;
  uStack_be = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = func_080074C0(param_1 + _DAT_080034a0,*(undefined4 *)(param_1 + _DAT_080034a0 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + _DAT_080034a4) * 0x40000000) < 0) {
    piVar2 = (int *)func_0x08008910(param_1);
    iVar11 = iStack_a0;
    iVar8 = func_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    func_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + _DAT_080034a8,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_3c = 1;
      iStack_40 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_40;
      if (iStack_40 == 0) {
        piVar2 = &iStack_3c;
      }
      if (iStack_40 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_40 + *piVar2) * 0x10;
        piVar2 = (int *)malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)func_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_3c;
      if (iStack_3c == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = func_0x08008920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  func_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  func_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  return in_lr;
}

// =============================================================================
// Function: func_080035C0 @ 0x080035C0
// =============================================================================
undefined4 func_080035C0(int param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_74 = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_63 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iStack_58 = 0;
  uStack_54 = uStack_54 & 0xffff0000;
  uStack_50 = 0;
  uStack_4c = uStack_4c & 0xffff0000;
  uStack_48 = 0;
  uStack_44 = uStack_44 & 0xffff0000;
  uStack_40 = 0;
  uStack_3c = uStack_3c & 0xffff0000;
  if (param_4 == 1) {
    func_0805E860(param_1 + 0x6b80,_DAT_08003644);
    iVar1 = _DAT_08003648;
  }
  else if (param_4 < 2) {
    if (param_4 != 0) goto LAB_08003666;
    func_0805E860(param_1 + 0x6b80,_DAT_08003628);
    iVar1 = _DAT_0800362c;
  }
  else {
    if (param_4 != 2) goto LAB_08003666;
    func_0805E860(param_1 + 0x6b80,_DAT_080036e8);
    iVar1 = _DAT_080036ec;
  }
  uStack_6e = func_08007D4C(param_1 + iVar1,*(undefined4 *)(param_1 + iVar1 + 4));
LAB_08003666:
  func_0x080d3918(&iStack_38,*(int **)(param_1 + 0x6b80),
                  *(undefined2 *)
                   (*(int *)(param_1 + _DAT_080036f0) + (uint)*(ushort *)(param_1 + 0x6b8c) * 4),
                  *(undefined4 *)(**(int **)(param_1 + 0x6b80) + 0x10));
  memcpy(&iStack_38,&iStack_38,0x20);
  iStack_58 = iStack_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  uStack_48 = uStack_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  uStack_6c = 0;
  uStack_74 = param_2;
  uStack_72 = param_3;
  uStack_70 = func_080074C0(param_1 + _DAT_080036f4,*(undefined4 *)(param_1 + _DAT_080036f4 + 4));
  uStack_5c = 1;
  uVar2 = func_0x08008920(param_1);
  uVar3 = 0;
  if (iStack_58 != 0) {
    uVar3 = uStack_54 & 0xffff;
  }
  func_0805E99C(uVar2,iStack_58,uVar3,&uStack_74);
  return in_lr;
}

// =============================================================================
// Function: func_080036F8 @ 0x080036F8
// =============================================================================
undefined8 func_080036F8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_08003714;
  func_080005D4(_DAT_08003718);
  uVar1 = func_08000914();
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800371C @ 0x0800371C
// =============================================================================
undefined4 func_0800371C(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_08003748;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0800374C @ 0x0800374C
// =============================================================================
undefined8 func_0800374C(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  func_08000D64(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08003B40 @ 0x08003B40
// =============================================================================
undefined4 func_08003B40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint auStack_1c [3];
  undefined1 auStack_10 [4];
  
  iVar1 = func_0x08008918();
  *(undefined2 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = func_0x08008918(param_1);
  auStack_1c[0] = 0;
  auStack_1c[1] = 0;
  auStack_1c[2] = _DAT_08003b8c;
  func_08009300(auStack_10,uVar2);
  func_0800934C(auStack_10,_DAT_08003b90,1,1);
  iVar1 = func_0x08008940(param_1);
  func_0x080d3914(iVar1,auStack_1c,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    func_080087C8(param_1);
  }
  func_080094B8(auStack_1c,2);
  return in_lr;
}

// =============================================================================
// Function: func_08003BB4 @ 0x08003BB4
// =============================================================================
undefined4 func_08003BB4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint auStack_1c [3];
  undefined1 auStack_10 [4];
  
  iVar1 = func_0x08008918();
  *(undefined2 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = func_0x08008918(param_1);
  auStack_1c[0] = 0;
  auStack_1c[1] = 0;
  auStack_1c[2] = _DAT_08003c00;
  func_08009300(auStack_10,uVar2);
  func_08009378(auStack_10,_DAT_08003c04,1,1);
  iVar1 = func_0x08008940(param_1);
  func_0x080d3914(iVar1,auStack_1c,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    func_080087C8(param_1);
  }
  func_080094B8(auStack_1c,2);
  return in_lr;
}

// =============================================================================
// Function: func_08003C28 @ 0x08003C28
// =============================================================================
undefined4 func_08003C28(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar1 = func_0x080088dc();
  uVar2 = func_0x08008920(param_1);
  uVar3 = func_0x08008918(param_1);
  uVar4 = func_0x08008940(param_1);
  uVar5 = func_0800894C(param_1);
  func_08050D3C(param_1 + 0x10,uVar1,uVar2,uVar3,uVar4,uVar5,param_1 + 0x14);
  return in_lr;
}

// =============================================================================
// Function: func_08003C80 @ 0x08003C80
// =============================================================================
undefined4 func_08003C80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  short sVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_4;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
  iVar13 = _DAT_08003dc0;
  iVar2 = _DAT_08003dbc;
  puVar14 = (undefined4 *)(&stack0xffffffe0 + _DAT_08003dbc);
  puVar15 = (undefined4 *)(&stack0xffffffe0 + _DAT_08003dbc);
  puVar16 = (undefined4 *)(&stack0xffffffe0 + _DAT_08003dbc);
  func_08008EB8(0,_DAT_08003dc4,0x20);
  func_08008EB8(0xffffffff,iVar13,0x800);
  sVar9 = 0;
  uVar8 = 0;
  iVar1 = _DAT_08003dc8 + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + _DAT_08003dcc + iVar2) = &stack0xffffffe8 + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + _DAT_08003dd4 + iVar2) =
       &stack0xffffffe0 + _DAT_08003dd0 + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + _DAT_08003ddc + iVar2) =
       &stack0xffffffe0 + _DAT_08003dd8 + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + _DAT_08003de4 + iVar2) =
       &stack0xffffffe0 + _DAT_08003de0 + iVar2;
  do {
    uVar6 = 0;
    iVar3 = uVar8 * 0x40;
    uVar8 = uVar8 + 1;
    psVar4 = (short *)(iVar3 + iVar13 + 0x40);
    do {
      *psVar4 = sVar9;
      sVar9 = sVar9 + 1;
      psVar4 = psVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x1e);
  } while (uVar8 < 0xc);
  *(undefined2 *)(&stack0xffffffe0 + _DAT_08003dc8 + iVar2) = 0x1e;
  *(undefined2 *)(&stack0xffffffe2 + iVar1) = 0xc;
  func_0804E7A0(*(undefined4 *)(&stack0xffffffe0 + _DAT_08003dc8 + iVar2),
                *(undefined4 *)(&stack0xffffffe0 + _DAT_08003dcc + iVar2),0);
  uVar8 = 0;
  uVar12 = *(undefined4 *)(&stack0xffffffe0 + _DAT_08003dcc + iVar2);
  iVar13 = 0;
  iVar1 = _DAT_08003dd0 + iVar2;
  do {
    puVar10 = (undefined4 *)(_DAT_08003de8 + iVar13);
    iVar11 = uVar8 * 0x10;
    uVar7 = *puVar10;
    *(undefined2 *)(&stack0xffffffe0 + iVar1) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + _DAT_08003dd4 + iVar2) + 2) = 0xc;
    uVar5 = *(undefined4 *)(&stack0xffffffe0 + iVar1);
    *puVar14 = uVar7;
    func_0804E8F0(uVar5,uVar12,0x10,iVar11);
    uVar7 = puVar10[1];
    iVar3 = _DAT_08003dd8 + iVar2;
    *(undefined2 *)(&stack0xffffffe0 + iVar3) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + _DAT_08003ddc + iVar2) + 2) = 0xc;
    uVar5 = *(undefined4 *)(&stack0xffffffe0 + iVar3);
    *puVar15 = uVar7;
    func_0804E8F0(uVar5,uVar12,0x80,iVar11);
    uVar7 = puVar10[2];
    iVar3 = _DAT_08003de0 + iVar2;
    *(undefined2 *)(&stack0xffffffe0 + iVar3) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + _DAT_08003de4 + iVar2) + 2) = 0xc;
    uVar5 = *(undefined4 *)(&stack0xffffffe0 + iVar3);
    *puVar16 = uVar7;
    func_0804E8F0(uVar5,uVar12,0xc0,iVar11);
    iVar13 = iVar13 + 0xc;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 6);
  func_08008E64(*(undefined4 *)(&stack0xffffffe0 + _DAT_08003dcc + iVar2),0x6000000,&UNK_00002d00);
  return *(undefined4 *)((int)&uStack_4 + _DAT_08003dec + iVar2);
}

// =============================================================================
// Function: func_08003DF0 @ 0x08003DF0
// =============================================================================
undefined4 func_08003DF0(int param_1,uint param_2,uint param_3,undefined2 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  uint uStack_14;
  
  uVar4 = (param_3 & _DAT_08003e78 & 0x1ffffff) >> 0x10;
  uVar3 = uVar4 + 0x80;
  if (*(char *)(param_1 + 0x84 + param_2) != '\0') {
    uVar3 = uVar4 + 0xc0;
  }
  uStack_14 = _DAT_08003e80 &
              (param_3 & _DAT_08003e78 | (param_3 & 0xff) + 8 + (param_2 * 2 + 1) * 8 & 0xff) |
              (uVar3 & _DAT_08003e7c) << 0x10;
  if ((param_2 == 1) && (*(int *)(param_1 + 0x80) != 1)) {
    uStack_14 = _DAT_08003e84 & uStack_14 | 0x200;
  }
  iVar1 = func_0x08008920(param_1);
  puVar2 = (uint *)(iVar1 + (param_2 & 0x7f) * 8 + 4);
  *puVar2 = uStack_14;
  *(undefined2 *)(puVar2 + 1) = param_4;
  return in_lr;
}

// =============================================================================
// Function: func_08003E88 @ 0x08003E88
// =============================================================================
undefined4 func_08003E88(undefined4 param_1,int param_2,uint param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    param_2 = 0;
  }
  uVar3 = ((param_3 & _DAT_08003ee0 & 0x1ffffff) >> 0x10) + 0x10 & _DAT_08003ee4;
  uVar1 = _DAT_08003ee8 &
          (param_3 & _DAT_08003ee0 | (param_3 & 0xff) + 8 + (param_2 * 2 + 1) * 8 & 0xff);
  iVar2 = func_0x08008920(param_1);
  *(uint *)(iVar2 + 0x34) = uVar1 | uVar3 << 0x10;
  *(undefined2 *)(iVar2 + 0x38) = param_4;
  return in_lr;
}

// =============================================================================
// Function: func_08003F9C @ 0x08003F9C
// =============================================================================
undefined8 func_08003F9C(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  ushort auStack_38 [2];
  undefined4 uStack_34;
  ushort *puStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x85);
    iVar5 = param_1 + 0x90;
    uStack_34 = func_0x080003dc(iVar5,uVar2);
    iVar6 = 3;
    iStack_28 = param_1 + 0x10;
    puStack_2c = (undefined4 *)(param_1 + 0x8c);
    iStack_24 = param_1 + 0x18;
    puStack_30 = auStack_38;
    do {
      uVar1 = Interrupt_WaitForVBlank(0x1000);
      *puStack_30 = uVar1 & 0x1000;
      iVar3 = func_080115B0(*(undefined4 *)(param_1 + 8),iVar5,uStack_34);
      if (iVar3 == 0) {
        func_08003788(param_1,param_1 + uVar2 * 0x80 + 0x98,*(undefined4 *)(param_1 + 8));
        func_08050DC8(iStack_28,uVar2 * 0x80 + param_1 + 0x98,0,0);
        *puStack_2c = 3;
        func_08008B6C(iStack_24,0xc5);
        func_080003E8(iVar5,uVar2);
        func_08000470(iVar5,uVar2);
        if (auStack_38[0] != 0) {
          Interrupt_EnableHBlank();
        }
        uVar4 = 1;
        goto LAB_0800408c;
      }
      if (auStack_38[0] != 0) {
        Interrupt_EnableHBlank();
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  func_08050DC8(param_1 + 0x10,_DAT_0800409c,0,0);
  *(undefined4 *)(param_1 + 0x8c) = 3;
  func_08008B6C(param_1 + 0x18,199);
  uVar4 = 0;
LAB_0800408c:
  return CONCAT44(in_lr,uVar4);
}

