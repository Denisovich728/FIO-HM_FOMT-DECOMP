// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: HARDWARE (112 functions)
// Description: GBA Hardware abstraction layer: LCD, Keypad, Timers, DMA controller
// =============================================================================

#include "../../include/gba/gbaio.h"

// =============================================================================
// Function: func_080040A0 @ 0x080040A0
// =============================================================================
undefined8 func_080040A0(int param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar1 = *(undefined1 *)(param_1 + 0x85);
  uVar3 = func_0x080003dc(param_1 + 0x90,uVar1);
  iStack_28 = 0;
  iVar7 = 3;
  iStack_24 = param_1 + 0x90;
  do {
    uVar2 = Interrupt_WaitForVBlank(0x1000);
    uVar4 = func_080005D4(_DAT_08004118);
    iStack_2c = func_08011650(uVar4,param_1 + 0x90,uVar3,&iStack_28);
    if (iStack_28 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        piVar5 = (int *)func_080005D4(8);
        *piVar5 = _DAT_08004178;
        piVar5[1] = iStack_2c;
        piVar6 = *(int **)(param_1 + 0xc);
        if ((piVar5 != piVar6) && (piVar6 != (int *)0x0)) {
          func_0x080d3914(piVar6,3,*(undefined4 *)(*piVar6 + 8));
        }
        *(int **)(param_1 + 0xc) = piVar5;
        iStack_2c = 0;
      }
      else {
        func_080D4480(*(int *)(param_1 + 8),2);
        if (*(int *)(param_1 + 8) != 0) {
          func_080D4178(*(int *)(param_1 + 8),iStack_2c);
        }
      }
      func_08008B6C(param_1 + 0x18,0xc5);
      func_08000470(iStack_24,uVar1);
      if (iStack_2c != 0) {
        func_080D4480(iStack_2c,3);
      }
      if ((uVar2 & 0x1000) != 0) {
        Interrupt_EnableHBlank();
      }
      uVar3 = 1;
      goto LAB_080041c6;
    }
    func_08000608(iStack_2c);
    if ((uVar2 & 0x1000) != 0) {
      Interrupt_EnableHBlank();
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  func_08050DC8(param_1 + 0x10,_DAT_080041d8,0,0);
  *(undefined4 *)(param_1 + 0x8c) = 3;
  func_08008B6C(param_1 + 0x18,199);
  uVar3 = 0;
LAB_080041c6:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_080041DC @ 0x080041DC
// =============================================================================
undefined8 func_080041DC(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 in_lr;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined4 *apuStack_7c [8];
  int iStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_57;
  int iStack_54;
  undefined4 *puStack_50;
  int iStack_4c;
  byte *pbStack_48;
  ushort *puStack_44;
  byte *pbStack_40;
  undefined1 *puStack_3c;
  byte *pbStack_38;
  int iStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  undefined4 **ppuStack_24;
  
  uStack_58 = 7;
  uStack_57 = 0;
  puStack_50 = param_3;
  func_08008574(param_1);
  *(undefined4 *)(param_1 + 4) = _DAT_080043b0;
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar4 = *puStack_50;
  *puStack_50 = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  func_0x0800835c(auStack_84);
  func_0x0800770c(auStack_80);
  func_08050CC0(param_1 + 0x10,0,0x1f,0xf,0,auStack_84,auStack_80);
  func_08007714(auStack_80,2);
  func_0x08008364(auStack_84,2);
  func_08008B54(param_1 + 0x14,1);
  func_08008B54(param_1 + 0x18,2);
  func_0805E6CC(param_1 + 0x1c,_DAT_080043b4);
  func_08007874(param_1 + 0x4c);
  uVar4 = func_08007B54(param_1 + 0x4c,2);
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  func_0x08007128(param_1 + 0x54);
  uVar4 = func_0800736C(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  func_0805E824(param_1 + 100,param_1 + 0x1c,0,0x100);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  SramProxy_LoadGlobalSettings(param_1 + 0x90);
  puVar5 = (undefined1 *)(param_1 + 0x98);
  iVar8 = 1;
  ppuStack_24 = apuStack_7c;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 0x80;
    iVar8 = iVar8 + -1;
  } while (iVar8 != -1);
  iVar11 = param_1 + 0x198;
  iVar13 = 1;
  iStack_4c = param_1 + 0x54;
  iVar8 = param_1 + 0x90;
  puStack_44 = (ushort *)(param_1 + 0x60);
  pbStack_40 = (byte *)(param_1 + 0x61);
  pbStack_48 = (byte *)(param_1 + 0x5d);
  puStack_3c = (undefined1 *)(param_1 + 0x84);
  pbStack_38 = (byte *)(param_1 + 0x85);
  iStack_34 = param_1 + 0x86;
  pbStack_30 = (byte *)(param_1 + 0x87);
  pbStack_2c = (byte *)(param_1 + 0x88);
  pbStack_28 = (byte *)(param_1 + 0x89);
  do {
    func_0x080114f8(iVar11);
    iVar11 = iVar11 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != -1);
  func_0805E790(ppuStack_24,param_1 + 0x1c,0);
  uVar4 = apuStack_7c[0][1];
  *(undefined4 *)(param_1 + 0x5c) = *apuStack_7c[0];
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  uVar3 = func_08007D4C(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x50));
  *puStack_44 = (ushort)_DAT_080043bc & *puStack_44 | uVar3 & (ushort)_DAT_080043b8;
  cVar2 = func_080074C0(iStack_4c,*(undefined4 *)(iStack_4c + 4));
  *pbStack_40 = *pbStack_40 & 0xf | cVar2 << 4;
  *pbStack_48 = *pbStack_48 | 0x10;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x60);
  uVar12 = 0;
  do {
    uVar6 = SramProxy_VerifyChecksum(iVar8);
    uVar6 = 1 << (uVar12 & 0xff) & uVar6;
    uVar9 = uVar12 + 1;
    if ((int)(-uVar6 | uVar6) < 0) {
      uVar4 = func_0x080003dc(iVar8,uVar12);
      iStack_54 = 0;
      iVar11 = 3;
      do {
        uVar7 = func_080005D4(_DAT_080044b8);
        iVar13 = func_08011650(uVar7,iVar8,uVar4,&iStack_54);
        if (iStack_54 == 0) {
          iStack_5c = iVar13;
          func_08003788(param_1,param_1 + uVar12 * 0x80 + 0x98);
          *(undefined4 *)(uVar12 * 4 + param_1 + 0x198) = *(undefined4 *)(iStack_5c + _DAT_080044bc)
          ;
          if (iStack_5c != 0) {
            func_080D4480(iStack_5c,3);
          }
          break;
        }
        iStack_5c = 0;
        func_08000608(iVar13);
        if (iStack_5c != 0) {
          func_080D4480(iStack_5c,3);
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != -1);
    }
    uVar12 = uVar9;
    if (1 < uVar9) {
      iVar8 = func_08000488(iVar8);
      bVar1 = (byte)((uint)iVar8 >> 0x18);
      if (*(int *)(param_1 + 8) == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
        *puStack_3c = 1;
        *pbStack_38 = (byte)((byte)((uint)-iVar8 >> 0x18) | bVar1) >> 7;
        puVar14 = (uint *)((uint)*pbStack_38 * 4 + param_1 + 0x198);
        *(bool *)iStack_34 = (*puVar14 & 1) != 0;
        func_08003DF0(param_1,2,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
        *pbStack_30 = (*(byte *)puVar14 >> 1 ^ 1) & 1;
        func_08003DF0(param_1,3,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
        *pbStack_2c = (*(byte *)puVar14 >> 2 ^ 1) & 1;
        func_08003DF0(param_1,4,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
        *pbStack_28 = (*(byte *)puVar14 >> 3 ^ 1) & 1;
        func_08003DF0(param_1,5,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
      }
      else {
        *puStack_3c = 0;
        *pbStack_38 = (byte)((byte)((uint)-iVar8 >> 0x18) | bVar1) >> 7;
        puVar14 = (uint *)(*(int *)(param_1 + 8) + _DAT_080044bc);
        *(bool *)iStack_34 = (*puVar14 & 1) != 0;
        func_08003DF0(param_1,2,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
        *pbStack_30 = ((byte)*puVar14 >> 1 ^ 1) & 1;
        func_08003DF0(param_1,3,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
        *pbStack_2c = ((byte)*puVar14 >> 2 ^ 1) & 1;
        func_08003DF0(param_1,4,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
        *pbStack_28 = ((byte)*puVar14 >> 3 ^ 1) & 1;
        func_08003DF0(param_1,5,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
      }
      piVar10 = (int *)*puStack_50;
      if (piVar10 != (int *)0x0) {
        func_0x080d3914(piVar10,3,*(undefined4 *)(*piVar10 + 8));
      }
      return CONCAT44(in_lr,param_1);
    }
  } while( true );
}

// =============================================================================
// Function: func_08004570 @ 0x08004570
// =============================================================================
undefined8 func_08004570(undefined4 *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  undefined *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined4 in_lr;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *apuStack_4c [8];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  
  puStack_24 = param_1;
  func_08008724(param_2);
  puVar3 = (undefined2 *)func_0x08008918(param_2);
  *puVar3 = 0x1c40;
  func_08008E64(*_DAT_080046a4,0x5000000,*_DAT_080046a8);
  puVar3[7] = (short)_DAT_080046ac;
  func_08008E64(*_DAT_080046b0,_DAT_080046b4,*_DAT_080046b8);
  func_08051320(_DAT_080046bc,0,0,0x1e,0x14,0,0);
  puVar3[6] = 0x1d40;
  func_08003C80(param_2);
  func_08050E98(param_2 + 0x10,0x2c);
  func_08050D68(param_2 + 0x10);
  func_08003C28(param_2);
  puVar3[4] = puVar3[4] | 0x40;
  func_08003EEC(param_2);
  func_0805E790(auStack_6c,param_2 + 0x1c,0);
  iVar4 = func_08007D4C(param_2 + 0x4c,*(undefined4 *)(param_2 + 0x50));
  func_08008E64(uStack_64,iVar4 * 0x20 + _DAT_080046c0,0x80);
  iVar4 = func_080074C0(param_2 + 0x54,*(undefined4 *)(param_2 + 0x58));
  func_08008E64(uStack_5c,iVar4 * 0x20 + _DAT_080046c4,0x20);
  uVar15 = 0;
  do {
    func_08003DF0(param_2,uVar15,*(undefined4 *)(param_2 + 0x5c),*(undefined4 *)(param_2 + 0x60));
    uVar15 = uVar15 + 1;
  } while (uVar15 < 6);
  func_08003B40(param_2);
  piVar5 = (int *)(param_2 + 0x8c);
LAB_08004674:
  do {
    while( true ) {
      func_080087C8(param_2);
      func_080088B8(param_2);
      func_08003C28(param_2);
      uVar15 = func_0x080088d4(param_2);
      iVar4 = *piVar5;
      if (iVar4 != 1) break;
      iVar4 = func_0x08050d34(param_2 + 0x10);
      if ((iVar4 == 3) || (iVar4 != 6)) {
        iVar4 = func_08050DF0(param_2 + 0x10);
        if (iVar4 == 1) {
LAB_08004abc:
          func_08003F9C(param_2);
        }
        else {
LAB_08004b04:
          func_08008B6C(param_2 + 0x18,0xc5);
          func_08003EEC(param_2);
          *piVar5 = 0;
        }
      }
    }
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        iVar4 = func_0805E8F0(param_2 + 100);
        if (iVar4 * 0x40000000 < 0) {
          func_0x080d3918(apuStack_4c,*(int **)(param_2 + 100),
                          *(undefined2 *)
                           (*(int *)(param_2 + 0x68) + (uint)*(ushort *)(param_2 + 0x70) * 4),
                          *(undefined4 *)(**(int **)(param_2 + 100) + 0x10));
          memcpy(apuStack_4c,apuStack_4c,0x20);
          *(undefined1 *)(param_2 + 0x78) = *apuStack_4c[0];
          *(ushort *)(param_2 + 0x7a) =
               (ushort)_DAT_0800479c & *(ushort *)(param_2 + 0x7a) |
               *(ushort *)(apuStack_4c[0] + 2) & 0x1ff;
          func_08003DF0(param_2,*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x78),
                        *(undefined4 *)(param_2 + 0x7c));
          puVar12 = (undefined4 *)(param_2 + 0x5c);
          if (*(int *)(param_2 + 8) != 0) {
            puVar12 = (undefined4 *)(param_2 + 0x78);
          }
          func_08003E88(param_2,*(undefined4 *)(param_2 + 0x80),*puVar12,puVar12[1]);
        }
        if ((uVar15 & 2) == 0) {
          if ((uVar15 & 1) == 0) {
            if ((uVar15 & 0x1f) >> 4 == (uVar15 & 0x3f) >> 5) {
              if ((*(int *)(param_2 + 8) != 0) && ((uVar15 & 0xff) >> 7 != (uVar15 & 0x7f) >> 6)) {
                piVar10 = (int *)(param_2 + 0x80);
                iVar4 = *piVar10;
                if ((uVar15 & 0x80) == 0) {
                  iVar6 = 0;
                  if (iVar4 != 2) {
                    if (iVar4 == 1) {
                      iVar6 = 5;
                    }
                    else {
                      iVar6 = 5;
                      if (iVar4 != 0) {
                        iVar6 = iVar4 + -1;
                      }
                    }
                  }
                }
                else if (iVar4 == 0) {
                  iVar6 = 2;
                }
                else {
                  iVar6 = 0;
                  if (iVar4 != 5) {
                    iVar6 = iVar4 + 1;
                  }
                }
                *piVar10 = iVar6;
                func_08003DF0(param_2,iVar4,*(undefined4 *)(param_2 + 0x5c),
                              *(undefined4 *)(param_2 + 0x60));
                func_08003DF0(param_2,*piVar10,*(undefined4 *)(param_2 + 0x78),
                              *(undefined4 *)(param_2 + 0x7c));
                func_08003E88(param_2,*piVar10,*(undefined4 *)(param_2 + 0x78),
                              *(undefined4 *)(param_2 + 0x7c));
                func_08003EEC(param_2);
                goto LAB_08004a92;
              }
            }
            else {
              puVar13 = (uint *)(param_2 + 0x80);
              pbVar8 = (byte *)(param_2 + 0x84 + *puVar13);
              uVar15 = *pbVar8 ^ 1;
              *pbVar8 = (byte)uVar15;
              if (*(int *)(param_2 + 8) == 0) {
                func_08003EEC(param_2);
                puVar16 = (uint *)((uint)*(byte *)(param_2 + 0x85) * 4 + param_2 + 0x198);
                *(bool *)(param_2 + 0x86) = (*puVar16 & 1) != 0;
                func_08003DF0(param_2,2,*(undefined4 *)(param_2 + 0x5c),
                              *(undefined4 *)(param_2 + 0x60));
                *(byte *)(param_2 + 0x87) = (*(byte *)puVar16 >> 1 ^ 1) & 1;
                func_08003DF0(param_2,3,*(undefined4 *)(param_2 + 0x5c),
                              *(undefined4 *)(param_2 + 0x60));
                *(byte *)(param_2 + 0x88) = (*(byte *)puVar16 >> 2 ^ 1) & 1;
                func_08003DF0(param_2,4,*(undefined4 *)(param_2 + 0x5c),
                              *(undefined4 *)(param_2 + 0x60));
                *(byte *)(param_2 + 0x89) = (*(byte *)puVar16 >> 3 ^ 1) & 1;
                func_08003DF0(param_2,5,*(undefined4 *)(param_2 + 0x5c),
                              *(undefined4 *)(param_2 + 0x60));
                goto LAB_08004a08;
              }
              if (5 < *puVar13) goto LAB_08004a08;
              puVar9 = PTR_case_080048E4_080048e0;
              switch(*(uint *)(PTR_case_080048E4_080048e0 + *puVar13 * 4) & 0xfffffffe) {
              case 0x80048e4:
                puVar9 = (undefined *)0x1c211c30;
              case 0x80048fc:
                func_08003EEC(param_2,puVar9);
                goto LAB_08004a08;
              case 0x8004904:
                pbVar8 = (byte *)(*(int *)(param_2 + 8) + _DAT_08004920);
                *pbVar8 = *pbVar8 & 0xfe | (byte)(-uVar15 >> 0x1f);
                goto LAB_08004a08;
              case 0x8004924:
                pbVar8 = (byte *)(*(int *)(param_2 + 8) + _DAT_0800493c);
                bVar14 = (uVar15 == 0) << 1;
                bVar7 = *pbVar8;
                bVar1 = 0xfd;
                break;
              case 0x8004940:
                pbVar8 = (byte *)(*(int *)(param_2 + 8) + _DAT_08004958);
                bVar14 = (uVar15 == 0) << 2;
                bVar7 = *pbVar8;
                bVar1 = 0xfb;
                break;
              case 0x800495c:
                pbVar8 = (byte *)(*(int *)(param_2 + 8) + _DAT_0800497c);
                bVar14 = (uVar15 == 0) << 3;
                bVar7 = *pbVar8;
                bVar1 = 0xf7;
              }
              *pbVar8 = bVar1 & bVar7 | bVar14;
LAB_08004a08:
              func_08003DF0(param_2,*puVar13,*(undefined4 *)(param_2 + 0x78),
                            *(undefined4 *)(param_2 + 0x7c));
LAB_08004a92:
              func_08008B6C(param_2 + 0x18,0xcb);
            }
          }
          else {
            iVar4 = *(int *)(param_2 + 0x80);
            if (iVar4 == 0) {
              *(int *)(param_2 + 0x80) = 1;
              func_08003DF0(param_2,0,*(undefined4 *)(param_2 + 0x5c),
                            *(undefined4 *)(param_2 + 0x60));
              func_08003DF0(param_2,1,*(undefined4 *)(param_2 + 0x78),
                            *(undefined4 *)(param_2 + 0x7c));
              func_08003EEC(param_2);
              func_08008B6C(param_2 + 0x18,0xc5);
            }
            else if (iVar4 == 1) {
              if (*(char *)(param_2 + 0x84) == '\0') {
                if (*(char *)((uint)*(byte *)(param_2 + 0x85) * 0x80 + param_2 + 0x98) == '\0')
                goto LAB_08004abc;
                func_08050E30(param_2 + 0x10,_DAT_08004894,_DAT_08004898,_DAT_0800489c,0,0,0);
                *piVar5 = 1;
              }
              else {
                if (*(char *)((uint)*(byte *)(param_2 + 0x85) * 0x80 + param_2 + 0x98) != '\0') {
                  func_08050E30(param_2 + 0x10,_DAT_08004834,_DAT_08004838,_DAT_0800483c,0,0,0);
                  iVar4 = 2;
                  goto LAB_08004b30;
                }
                func_08050DC8(param_2 + 0x10,_DAT_08004860,0,0);
                *piVar5 = 3;
                func_08008B6C(param_2 + 0x18,199);
              }
            }
          }
        }
        else {
          if (*(int *)(param_2 + 8) == 0) {
            func_08008B6C(param_2 + 0x18,0xc6);
            puVar17 = auStack_2c;
            goto LAB_08004af2;
          }
          if (*(int *)(param_2 + 0x80) != 1) goto LAB_08004b36;
          func_08008B6C(param_2 + 0x18,0xc6);
          *(int *)(param_2 + 0x80) = 0;
          func_08003EEC(param_2);
          func_08003DF0(param_2,1,*(undefined4 *)(param_2 + 0x5c),*(undefined4 *)(param_2 + 0x60));
          func_08003DF0(param_2,0,*(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x7c));
        }
      }
      goto LAB_08004674;
    }
    if (iVar4 == 2) {
      iVar4 = func_0x08050d34(param_2 + 0x10);
      if ((iVar4 == 3) || (iVar4 != 6)) {
        iVar4 = func_08050DF0(param_2 + 0x10);
        if (iVar4 != 1) goto LAB_08004b04;
        cVar2 = func_080040A0(param_2);
        if (cVar2 != '\0') {
          puVar17 = auStack_28;
LAB_08004af2:
          func_08008B54(puVar17,0);
          func_08008BF8(puVar17,2);
LAB_08004b36:
          func_08003BB4(param_2);
          uVar11 = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(param_2 + 0xc) = 0;
          *puStack_24 = uVar11;
          return CONCAT44(in_lr,puStack_24);
        }
      }
    }
    else if ((iVar4 == 3) && (iVar4 = func_0x08050d34(param_2 + 0x10), iVar4 != 5)) {
      func_08003EEC(param_2);
      iVar4 = 0;
LAB_08004b30:
      *piVar5 = iVar4;
    }
  } while( true );
}

// =============================================================================
// Function: func_08004B94 @ 0x08004B94
// =============================================================================
void func_08004B94(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_14;
  
  *param_1 = _DAT_08004bd8;
  uStack_14 = *param_3;
  *param_3 = 0;
  uVar1 = func_080005D4(0x1a0);
  uVar1 = func_080041DC(uVar1,param_2,&uStack_14);
  param_1[1] = uVar1;
  piVar2 = (int *)*param_3;
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08004C0C @ 0x08004C0C
// =============================================================================
undefined8 func_08004C0C(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  func_08004570(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08004C54 @ 0x08004C54
// =============================================================================
undefined4 func_08004C54(undefined4 *param_1)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_08004c64;
  func_080007EC();
  return in_lr;
}

// =============================================================================
// Function: func_08004EFC @ 0x08004EFC
// =============================================================================
undefined8
func_08004EFC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 in_lr;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  func_08008444();
  *(undefined4 *)(param_1 + 4) = _DAT_080050a4;
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(undefined4 *)(param_1 + _DAT_080050a8) = 2;
  uVar2 = func_080005D4(4);
  func_0x0800835c(auStack_3c);
  func_0x0800770c(auStack_38);
  uVar2 = func_08050CC0(uVar2,0,0x1c,4,0,auStack_3c,auStack_38);
  *(undefined4 *)(param_1 + _DAT_080050ac) = uVar2;
  func_08007714(auStack_38,2);
  func_0x08008364(auStack_3c,2);
  puVar6 = (undefined4 *)(param_1 + _DAT_080050b0);
  uVar2 = func_08008D3C(200);
  *puVar6 = uVar2;
  puVar3 = (undefined1 *)(param_1 + _DAT_080050b4);
  iVar1 = 3;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(undefined1 *)(param_1 + _DAT_080050b8) = 0;
  iVar1 = param_1 + _DAT_080050b4;
  uVar4 = strlen(param_2);
  if (0xf < uVar4) {
    uVar4 = 0xf;
  }
  memcpy(iVar1,param_2,uVar4);
  *(undefined1 *)(iVar1 + uVar4) = 0;
  func_0804EC84(((param_3 & 0x7f) >> 2) + 1,auStack_34,2);
  uVar2 = Farmer_Init(param_3 & 3);
  iVar7 = param_1 + _DAT_080050bc;
  iVar1 = strlen(iVar7);
  uVar4 = 0xf - iVar1;
  if (uVar4 != 0) {
    uVar5 = strlen(uVar2);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    memcpy(iVar7 + iVar1,uVar2,uVar5);
    *(undefined1 *)(iVar7 + iVar1 + uVar5) = 0;
  }
  iVar1 = strlen(iVar7);
  uVar4 = 0xf - iVar1;
  if (uVar4 != 0) {
    uVar5 = strlen(auStack_34);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    memcpy(iVar7 + iVar1,auStack_34,uVar5);
    *(undefined1 *)(iVar7 + iVar1 + uVar5) = 0;
  }
  iVar1 = param_1 + _DAT_080050c0;
  uVar4 = strlen(uStack_24);
  if (0xf < uVar4) {
    uVar4 = 0xf;
  }
  memcpy(iVar1,uStack_24,uVar4);
  *(undefined1 *)(iVar1 + uVar4) = 0;
  iVar1 = param_1 + _DAT_080050c4;
  uVar4 = strlen(param_5);
  if (0xf < uVar4) {
    uVar4 = 0xf;
  }
  memcpy(iVar1,param_5,uVar4);
  *(undefined1 *)(iVar1 + uVar4) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080050C8 @ 0x080050C8
// =============================================================================
undefined4 func_080050C8(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 4) = _DAT_080050f0;
  if (*(int *)(param_1 + _DAT_080050f4) != 0) {
    func_08050D0C(*(int *)(param_1 + _DAT_080050f4),3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080050F8 @ 0x080050F8
// =============================================================================
undefined8 func_080050F8(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  
  func_08005254(param_2);
  func_0x08005260(param_2);
  func_08005278(param_2);
  iVar2 = func_0x08008918(param_2);
  *(undefined2 *)(iVar2 + 0x50) = 0x3f;
  puVar3 = (uint *)func_080005D4(0x10);
  uVar4 = func_0x08008918(param_2);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = _DAT_08005198;
  func_08009300(puVar3 + 3,uVar4);
  func_0800934C(puVar3 + 3,_DAT_0800519c,1,1);
  iVar2 = func_0x08008940(param_2);
  func_0x080d3914(iVar2,puVar3,*(undefined4 *)(*(int *)(iVar2 + 8) + 0x10));
  uVar5 = 0;
  bVar1 = false;
  do {
    func_080087C8(param_2);
    func_080088B8(param_2);
    func_0x080088d4(param_2);
    if (uVar5 == 1) {
      func_08005800(param_2);
      if (*(char *)(param_2 + _DAT_080051d0) != '\0') {
        uVar5 = 2;
      }
    }
    else if (uVar5 < 2) {
      if ((uVar5 == 0) && (-1 < (int)(-*puVar3 | *puVar3))) {
        uVar5 = 1;
      }
    }
    else if (uVar5 == 2) {
      func_08009378(puVar3 + 3,_DAT_080051f8,1,1);
      iVar2 = func_0x08008940(param_2);
      func_0x080d3914(iVar2,puVar3,*(undefined4 *)(*(int *)(iVar2 + 8) + 0x10));
      uVar5 = 3;
    }
    else if ((uVar5 == 3) && (-1 < (int)(-*puVar3 | *puVar3))) {
      bVar1 = true;
    }
  } while (!bVar1);
  *param_1 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  if (puVar3 != (uint *)0x0) {
    puStack_24 = &uStack_28;
    func_0x080d3914(puVar3,3,*(undefined4 *)(puVar3[2] + 0xc));
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08005254 @ 0x08005254
// =============================================================================
undefined4 func_08005254(void)

{
  undefined4 in_lr;
  
  func_08008724();
  return in_lr;
}

// =============================================================================
// Function: func_08005278 @ 0x08005278
// =============================================================================
undefined4 func_08005278(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 in_lr;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  int iStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  func_08008E64(*_DAT_08005488,_DAT_0800548c,*_DAT_08005490);
  func_08008E64(*_DAT_08005494,0x5000000,0x20);
  puVar3 = (undefined2 *)func_0x08008918(param_1);
  uStack_a8._0_2_ = 0x1740;
  *puVar3 = 0x1740;
  iVar4 = func_0x08008918(param_1);
  uStack_a8._0_2_ = (undefined2)_DAT_08005498;
  *(undefined2 *)(iVar4 + 10) = (undefined2)uStack_a8;
  iVar4 = func_0x08008918(param_1);
  uStack_a8 = CONCAT22(uStack_a8._2_2_,(short)_DAT_0800549c);
  *(short *)(iVar4 + 0xc) = (short)_DAT_0800549c;
  func_08051320(_DAT_080054a0,0,0,0x1e,0x14,600,0);
  func_08008EB8(0,_DAT_080054a4,0x20);
  uVar20 = 0;
  puStack_50 = &uStack_8c;
  puStack_4c = &uStack_88;
  puStack_44 = &uStack_84;
  puStack_40 = &uStack_80;
  puStack_3c = &uStack_7c;
  puStack_58 = &uStack_a4;
  iVar4 = param_1 + 0xc;
  do {
    uStack_94 = 0x2000c;
    func_0804E7A0(0x2000c,iVar4,0);
    iVar4 = iVar4 + 0x304;
    uVar20 = uVar20 + 1;
  } while (uVar20 < 4);
  uVar20 = 0;
  iVar19 = _DAT_080054a8 + param_1;
  iStack_60 = param_1 + 4000;
  iStack_5c = _DAT_080054ac + param_1;
  iStack_48 = _DAT_080054b0 + param_1;
  iVar4 = _DAT_080054a8 + param_1;
  do {
    uStack_90 = 0x2000e;
    func_0804E7A0(0x2000e,iVar4,0);
    iVar4 = iVar4 + 900;
    uVar20 = uVar20 + 1;
  } while (uVar20 < 4);
  uVar20 = 0;
  iVar4 = param_1 + 0xc;
  do {
    uStack_8c = CONCAT22(uStack_8c._2_2_,0xc);
    *(undefined2 *)((int)puStack_50 + 2) = 2;
    func_0804E8F0(uStack_8c,iVar4,0,0,uVar20 * 0x10 + param_1 + _DAT_080054b4);
    iVar4 = iVar4 + 0x304;
    uVar20 = uVar20 + 1;
  } while (uVar20 < 4);
  uStack_88 = CONCAT22(uStack_88._2_2_,0xe);
  *(undefined2 *)((int)puStack_4c + 2) = 2;
  func_0804E8F0(uStack_88,iVar19,0,0,_DAT_080054b8);
  uStack_84 = CONCAT22(uStack_84._2_2_,0xe);
  *(undefined2 *)((int)puStack_44 + 2) = 2;
  func_0804E8F0(uStack_84,iStack_60,0,0,_DAT_080054bc);
  uStack_80 = CONCAT22(uStack_80._2_2_,0xe);
  *(undefined2 *)((int)puStack_40 + 2) = 2;
  func_0804E8F0(uStack_80,iStack_5c,0,0,_DAT_080054c0);
  uStack_7c = CONCAT22(uStack_7c._2_2_,0xe);
  *(undefined2 *)((int)puStack_3c + 2) = 2;
  func_0804E8F0(uStack_7c,iStack_48,0,0,_DAT_080054c4);
  uVar20 = 0;
  puStack_68 = puStack_58;
  iStack_30 = 0x6000000;
  iStack_2c = param_1 + 0xc;
  do {
    piVar5 = (int *)func_0x08008910(param_1);
    func_08008F0C(&uStack_a4,iStack_2c,iStack_30,0x300);
    puVar11 = (undefined4 *)piVar5[1];
    if (puVar11 == (undefined4 *)piVar5[3]) {
      puStack_28 = puVar11;
      iStack_74 = 1;
      iStack_78 = (int)puVar11 - *piVar5 >> 4;
      piVar6 = &iStack_78;
      if (iStack_78 == 0) {
        piVar6 = &iStack_74;
      }
      if (iStack_78 + *piVar6 == 0) {
        puVar11 = (undefined4 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_78 + *piVar6) * 0x10;
        puVar11 = (undefined4 *)malloc(iVar4);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)func_080D3BC0(iVar4);
        }
      }
      puVar12 = (undefined4 *)*piVar5;
      iStack_54 = 0xc00;
      puVar13 = puVar11;
      for (; puVar12 != puStack_28; puVar12 = puVar12 + 4) {
        if (puVar13 != (undefined4 *)0x0) {
          uVar14 = puVar12[1];
          uVar16 = puVar12[2];
          *puVar13 = *puVar12;
          puVar13[1] = uVar14;
          puVar13[2] = uVar16;
          puVar13[3] = puVar12[3];
        }
        puVar13 = puVar13 + 4;
      }
      iVar19 = iStack_74;
      if (iStack_74 == 1) {
        if (puVar13 != (undefined4 *)0x0) {
          uVar14 = puStack_68[1];
          uVar16 = puStack_68[2];
          *puVar13 = *puStack_68;
          puVar13[1] = uVar14;
          puVar13[2] = uVar16;
          puVar13[3] = puStack_68[3];
        }
        puVar13 = puVar13 + 4;
      }
      else {
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          if (puVar13 != (undefined4 *)0x0) {
            uVar14 = puStack_68[1];
            uVar16 = puStack_68[2];
            *puVar13 = *puStack_68;
            puVar13[1] = uVar14;
            puVar13[2] = uVar16;
            puVar13[3] = puStack_68[3];
          }
          puVar13 = puVar13 + 4;
        }
      }
      for (iVar19 = *piVar5; iVar19 != piVar5[1]; iVar19 = iVar19 + 0x10) {
      }
      puStack_24 = puVar11;
      if (*piVar5 != 0) {
        free();
      }
      *piVar5 = (int)puStack_24;
      piVar5[1] = (int)puVar13;
      piVar5[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar11 != (undefined4 *)0x0) {
        uVar14 = puStack_68[1];
        uVar16 = puStack_68[2];
        *puVar11 = *puStack_68;
        puVar11[1] = uVar14;
        puVar11[2] = uVar16;
        puVar11[3] = puStack_68[3];
      }
      piVar5[1] = piVar5[1] + 0x10;
      iStack_54 = 0xc00;
    }
    iStack_30 = iStack_30 + 0x300;
    iStack_2c = iStack_2c + 0x304;
    uVar20 = uVar20 + 1;
  } while (uVar20 < 4);
  uVar20 = 0;
  puStack_64 = &uStack_a8;
  iStack_38 = iStack_54 + 0x6000000;
  iStack_34 = _DAT_08005608 + param_1;
  do {
    piVar5 = (int *)func_0x08008910(param_1);
    func_08008F0C(&uStack_a8,iStack_34,iStack_38,0x380);
    puVar11 = (undefined4 *)piVar5[1];
    if (puVar11 == (undefined4 *)piVar5[3]) {
      puStack_28 = puVar11;
      iStack_6c = 1;
      iStack_70 = (int)puVar11 - *piVar5 >> 4;
      piVar6 = &iStack_70;
      if (iStack_70 == 0) {
        piVar6 = &iStack_6c;
      }
      if (iStack_70 + *piVar6 == 0) {
        puVar11 = (undefined4 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_70 + *piVar6) * 0x10;
        puVar11 = (undefined4 *)malloc(iVar4);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)func_080D3BC0(iVar4);
        }
      }
      puVar12 = puVar11;
      for (puVar13 = (undefined4 *)*piVar5; puVar13 != puStack_28; puVar13 = puVar13 + 4) {
        if (puVar12 != (undefined4 *)0x0) {
          uVar14 = puVar13[1];
          uVar16 = puVar13[2];
          *puVar12 = *puVar13;
          puVar12[1] = uVar14;
          puVar12[2] = uVar16;
          puVar12[3] = puVar13[3];
        }
        puVar12 = puVar12 + 4;
      }
      iVar19 = iStack_6c;
      if (iStack_6c == 1) {
        if (puVar12 != (undefined4 *)0x0) {
          uVar14 = puStack_64[1];
          uVar16 = puStack_64[2];
          *puVar12 = *puStack_64;
          puVar12[1] = uVar14;
          puVar12[2] = uVar16;
          puVar12[3] = puStack_64[3];
        }
        puVar12 = puVar12 + 4;
      }
      else {
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          if (puVar12 != (undefined4 *)0x0) {
            uVar14 = puStack_64[1];
            uVar16 = puStack_64[2];
            *puVar12 = *puStack_64;
            puVar12[1] = uVar14;
            puVar12[2] = uVar16;
            puVar12[3] = puStack_64[3];
          }
          puVar12 = puVar12 + 4;
        }
      }
      for (iVar19 = *piVar5; iVar19 != piVar5[1]; iVar19 = iVar19 + 0x10) {
      }
      puStack_24 = puVar11;
      if (*piVar5 != 0) {
        free();
      }
      *piVar5 = (int)puStack_24;
      piVar5[1] = (int)puVar12;
      piVar5[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = uStack_a8;
        puVar11[1] = uStack_a4;
        puVar11[2] = uStack_a0;
        puVar11[3] = uStack_9c;
      }
      piVar5[1] = piVar5[1] + 0x10;
    }
    iVar4 = _DAT_080057e8;
    iStack_38 = iStack_38 + 0x380;
    iStack_34 = iStack_34 + 900;
    uVar20 = uVar20 + 1;
  } while (uVar20 < 4);
  func_08008EB8(0xffffffff,_DAT_080057e8,0x800);
  uVar20 = 0;
  do {
    uVar18 = 0;
    puVar3 = (undefined2 *)(uVar20 * 0x40 + iVar4);
    do {
      *puVar3 = 100;
      iVar19 = _DAT_080057ec;
      puVar3 = puVar3 + 1;
      uVar18 = uVar18 + 1;
    } while (uVar18 < 0x1e);
    uVar20 = uVar20 + 1;
  } while (uVar20 < 0x14);
  uVar20 = 2;
  do {
    uVar18 = 0;
    iVar4 = uVar20 * 2;
    iVar17 = uVar20 + 0x6c;
    iVar15 = uVar20 + 0x5e;
    puVar3 = (undefined2 *)(iVar4 + _DAT_080057f0);
    do {
      *puVar3 = (short)iVar15;
      *(short *)(iVar4 + iVar19) = (short)iVar17;
      iVar2 = _DAT_080057f4;
      iVar1 = _DAT_080057ec;
      iVar17 = iVar17 + 0x1c;
      iVar15 = iVar15 + 0x1c;
      puVar3 = puVar3 + 0x60;
      iVar4 = iVar4 + 0xc0;
      uVar18 = uVar18 + 1;
    } while (uVar18 < 4);
    uVar20 = uVar20 + 1;
  } while (uVar20 < 0x10);
  uVar20 = 0x10;
  do {
    uVar21 = 0;
    iVar4 = uVar20 * 2;
    uVar18 = uVar20 + 1;
    iVar15 = uVar20 + 0xc + iVar2;
    iVar19 = uVar20 + iVar2;
    puVar3 = (undefined2 *)(iVar4 + _DAT_080057f0);
    do {
      *puVar3 = (short)iVar19;
      *(short *)(iVar4 + iVar1) = (short)iVar15;
      iVar15 = iVar15 + 0x18;
      iVar19 = iVar19 + 0x18;
      puVar3 = puVar3 + 0x60;
      iVar4 = iVar4 + 0xc0;
      uVar21 = uVar21 + 1;
    } while (uVar21 < 4);
    uVar20 = uVar18;
  } while (uVar18 < 0x1c);
  uVar14 = *(undefined4 *)(_DAT_080057f8 + param_1);
  uVar16 = func_0x080088dc(param_1);
  uVar7 = func_0x08008920(param_1);
  uVar8 = func_0x08008918(param_1);
  uVar9 = func_0x08008940(param_1);
  uVar10 = func_0800894C(param_1);
  func_08050D3C(uVar14,uVar16,uVar7,uVar8,uVar9,uVar10,_DAT_080057fc + param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08005800 @ 0x08005800
// =============================================================================
undefined4 func_08005800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  
  puVar8 = (undefined4 *)(param_1 + _DAT_0800586c);
  iVar1 = func_0x08050d34(*puVar8);
  uVar9 = *puVar8;
  uVar2 = func_0x080088dc(param_1);
  uVar3 = func_0x08008920(param_1);
  uVar4 = func_0x08008918(param_1);
  uVar5 = func_0x08008940(param_1);
  uVar6 = func_0800894C(param_1);
  uVar7 = func_08050D3C(uVar9,uVar2,uVar3,uVar4,uVar5,uVar6,param_1 + _DAT_08005870);
  if (uVar7 < 7) {
    switch(*(uint *)(uVar7 * 4 + _DAT_08005874) & 0xfffffffe) {
    case 0x8005894:
      if (*(char *)(param_1 + _DAT_080058b4) != '\0') {
        *(undefined1 *)(param_1 + _DAT_080058b8) = 1;
      }
      func_08050D5C(*(undefined4 *)(param_1 + _DAT_080058bc));
      break;
    case 0x80058c0:
      if (iVar1 < 6) {
        if (3 < iVar1) {
          return in_lr;
        }
        if (iVar1 == 1) {
          func_08050E30(*(undefined4 *)(param_1 + _DAT_08005900),_DAT_08005904,_DAT_08005908,
                        _DAT_0800590c,0,0,0);
          return in_lr;
        }
      }
      else if (iVar1 == 6) {
        uVar7 = func_08050DF0(*(undefined4 *)(param_1 + _DAT_08005928));
        if (6 < uVar7) {
          return in_lr;
        }
        uVar2 = (**(code **)(uVar7 * 4 + _DAT_0800592c))();
        return uVar2;
      }
      func_08050D74(*(undefined4 *)(param_1 + _DAT_080058e0));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800598C @ 0x0800598C
// =============================================================================
undefined8
func_0800598C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_080059c8;
  uVar1 = func_080005D4(_DAT_080059cc);
  uVar1 = func_08004EFC(uVar1,param_2,param_3,param_4,param_5);
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080059D0 @ 0x080059D0
// =============================================================================
undefined4 func_080059D0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_080059fc;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08005A00 @ 0x08005A00
// =============================================================================
undefined8 func_08005A00(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  func_080050F8(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08005A58 @ 0x08005A58
// =============================================================================
undefined8 func_08005A58(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined4 *puVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  func_08008444();
  *(undefined4 *)(param_1 + 4) = _DAT_08005b1c;
  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  func_08008B54(param_1 + _DAT_08005b20,1);
  func_08008B54(param_1 + _DAT_08005b24,2);
  uVar3 = func_080005D4(4);
  func_0x0800835c(auStack_20);
  func_0x0800770c(auStack_1c);
  uVar3 = func_08050CC0(uVar3,0,0xf,4,0,auStack_20,auStack_1c);
  *(undefined4 *)(param_1 + _DAT_08005b28) = uVar3;
  func_08007714(auStack_1c,2);
  func_0x08008364(auStack_20,2);
  *(undefined4 *)(param_1 + _DAT_08005b2c) = param_2;
  puVar4 = (undefined4 *)(param_1 + _DAT_08005b30);
  uVar3 = _DAT_08005b34[1];
  uVar5 = _DAT_08005b34[2];
  puVar6 = _DAT_08005b34 + 3;
  *puVar4 = *_DAT_08005b34;
  puVar4[1] = uVar3;
  puVar4[2] = uVar5;
  *(undefined1 *)(puVar4 + 3) = *(undefined1 *)puVar6;
  if (param_3 != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      *(char *)((int)puVar4 + iVar2) = *param_3;
      param_3 = param_3 + 1;
      iVar2 = iVar2 + 1;
      if (0xc < iVar2) break;
      cVar1 = *param_3;
    }
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08005B38 @ 0x08005B38
// =============================================================================
undefined4 func_08005B38(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 4) = _DAT_08005b60;
  if (*(int *)(param_1 + _DAT_08005b64) != 0) {
    func_08050D0C(*(int *)(param_1 + _DAT_08005b64),3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08005B68 @ 0x08005B68
// =============================================================================
undefined8 func_08005B68(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined2 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  
  func_08008724(param_2);
  func_08007874(auStack_40);
  uStack_3c = 0;
  func_08007C28(auStack_40,0);
  uStack_3c = func_08007B54(auStack_40,3);
  uVar1 = func_08007D4C(auStack_40);
  func_08005CDC(param_2);
  func_080061A0(param_2,uVar1);
  func_0x08006334(param_2);
  func_0800637C(param_2);
  iVar2 = func_0x08008918(param_2);
  uStack_38 = 0x3f;
  *(undefined2 *)(iVar2 + 0x50) = 0x3f;
  uVar1 = func_0x08008918(param_2);
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = _DAT_08005c20;
  func_08009300(auStack_28,uVar1);
  func_0800934C(auStack_28,_DAT_08005c24,1,1);
  iVar2 = func_0x08008940(param_2);
  func_0x080d3914(iVar2,&uStack_34,*(undefined4 *)(*(int *)(iVar2 + 8) + 0x10));
  uVar3 = -uStack_34 | uStack_34;
  while ((int)uVar3 < 0) {
    func_080087C8(param_2);
    uVar3 = -uStack_34 | uStack_34;
  }
  while (*(char *)(param_2 + _DAT_08005c80) == '\0') {
    func_080088B8(param_2);
    func_08006CDC(param_2);
    func_080068CC(param_2);
    func_0800637C(param_2);
    func_080064E8(param_2);
    func_08006858(param_2);
    func_0x08006ed8(param_2);
    func_080087C8(param_2);
  }
  func_08009378(auStack_28,_DAT_08005c84,1,1);
  iVar2 = func_0x08008940(param_2);
  func_0x080d3914(iVar2,&uStack_34,*(undefined4 *)(*(int *)(iVar2 + 8) + 0x10));
  while ((int)(-uStack_34 | uStack_34) < 0) {
    func_080087C8(param_2);
  }
  *param_1 = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  puStack_20 = &uStack_24;
  func_080094B8(&uStack_34,2);
  func_08007C28(auStack_40,uStack_3c);
  func_080079E8(auStack_40,2);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08005CDC @ 0x08005CDC
// =============================================================================
undefined4 func_08005CDC(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 in_lr;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  func_08008E64(*_DAT_08005ec8,_DAT_08005ecc,*_DAT_08005ed0);
  func_08008E64(*_DAT_08005ed4,0x5000000,0x20);
  puVar1 = (undefined2 *)func_0x08008918(param_1);
  uStack_68._0_2_ = 0x1740;
  *puVar1 = 0x1740;
  iVar2 = func_0x08008918(param_1);
  uStack_68._0_2_ = (undefined2)_DAT_08005ed8;
  *(undefined2 *)(iVar2 + 10) = (undefined2)uStack_68;
  iVar2 = func_0x08008918(param_1);
  uStack_68 = CONCAT22(uStack_68._2_2_,(short)_DAT_08005edc);
  *(short *)(iVar2 + 0xc) = (short)_DAT_08005edc;
  func_08051320(_DAT_08005ee0,0,0,0x1e,0x14,600,0);
  iVar2 = _DAT_08005ee4;
  func_08008EB8(0xffffffff,_DAT_08005ee4,0x800);
  uVar9 = 0;
  puStack_30 = &uStack_64;
  puStack_2c = &uStack_44;
  iVar19 = param_1 + 0xc;
  iStack_34 = _DAT_08005ee8 + param_1;
  do {
    uVar16 = 0;
    iVar12 = uVar9 * 0x40;
    uVar9 = uVar9 + 1;
    puVar1 = (undefined2 *)(iVar12 + iVar2);
    do {
      *puVar1 = 0x1a2;
      puVar1 = puVar1 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < 0x1e);
  } while (uVar9 < 0x14);
  uVar9 = 10;
  psVar13 = _DAT_08005ef0;
  psVar14 = _DAT_08005eec;
  do {
    *psVar13 = (short)uVar9;
    *psVar14 = (short)uVar9 + 0x1e;
    psVar14 = psVar14 + 1;
    psVar13 = psVar13 + 1;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  uVar9 = 3;
  psVar13 = _DAT_08005ef8;
  psVar14 = _DAT_08005ef4;
  do {
    *psVar13 = (short)uVar9 + 0x1a4;
    *psVar14 = (short)uVar9 + 0x1c2;
    iVar2 = _DAT_08005ee4;
    psVar14 = psVar14 + 1;
    psVar13 = psVar13 + 1;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1b);
  uVar9 = 4;
  do {
    uVar16 = 0;
    uVar17 = uVar9 + 1;
    psVar13 = (short *)(uVar9 * 0x40 + iVar2);
    do {
      *psVar13 = ((short)uVar9 + -2) * 0x1e + (short)uVar16;
      psVar13 = psVar13 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < 0x1e);
    uVar9 = uVar17;
  } while (uVar17 < 0x10);
  uVar9 = 0x12;
  psVar13 = _DAT_08005f00;
  psVar14 = _DAT_08005efc;
  do {
    *psVar13 = (short)uVar9 + 0x1e0;
    *psVar14 = (short)uVar9 + 0x1fe;
    uVar18 = _DAT_08005f08;
    psVar14 = psVar14 + 1;
    psVar13 = psVar13 + 1;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1e);
  if (*(int *)(_DAT_08005f04 + param_1) != 0) {
    uVar9 = 1;
    psVar13 = _DAT_08005f10;
    psVar14 = _DAT_08005f0c;
    do {
      *psVar13 = (short)uVar9 + (short)uVar18;
      *psVar14 = (short)uVar9 + 0x224;
      psVar14 = psVar14 + 1;
      psVar13 = psVar13 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 10);
  }
  func_08008EB8(0,_DAT_08005f14,0x20);
  uStack_54 = 0x2001e;
  func_0804E7A0(0x2001e,iVar19,0);
  uStack_50 = 0x2001e;
  func_0804E8F0(0x2001e,iVar19,0x58,0,_DAT_08005f18);
  piVar3 = (int *)func_0x08008910(param_1);
  func_08008F0C(&uStack_64,iVar19,0x6000000,0x780);
  puVar11 = puStack_30;
  puVar10 = (undefined4 *)piVar3[1];
  if (puVar10 == (undefined4 *)piVar3[3]) {
    iStack_48 = 1;
    iStack_4c = (int)puVar10 - *piVar3 >> 4;
    piVar4 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar4 = &iStack_48;
    }
    puStack_28 = puVar10;
    if (iStack_4c + *piVar4 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_4c + *piVar4) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar2);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar2);
      }
    }
    puVar15 = puStack_24;
    for (puVar10 = (undefined4 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
      if (puVar15 != (undefined4 *)0x0) {
        uVar18 = puVar10[1];
        uVar20 = puVar10[2];
        *puVar15 = *puVar10;
        puVar15[1] = uVar18;
        puVar15[2] = uVar20;
        puVar15[3] = puVar10[3];
      }
      puVar15 = puVar15 + 4;
    }
    iVar19 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar15 != (undefined4 *)0x0) {
        uVar18 = puVar11[1];
        uVar20 = puVar11[2];
        *puVar15 = *puVar11;
        puVar15[1] = uVar18;
        puVar15[2] = uVar20;
        puVar15[3] = puVar11[3];
      }
      puVar15 = puVar15 + 4;
    }
    else {
      for (; iVar19 != 0; iVar19 = iVar19 + -1) {
        if (puVar15 != (undefined4 *)0x0) {
          uVar18 = puVar11[1];
          uVar20 = puVar11[2];
          *puVar15 = *puVar11;
          puVar15[1] = uVar18;
          puVar15[2] = uVar20;
          puVar15[3] = puVar11[3];
        }
        puVar15 = puVar15 + 4;
      }
    }
    for (iVar19 = *piVar3; iVar19 != piVar3[1]; iVar19 = iVar19 + 0x10) {
    }
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar15;
    piVar3[3] = (int)puStack_24 + iVar2;
  }
  else {
    if (puVar10 != (undefined4 *)0x0) {
      uVar18 = puStack_30[1];
      uVar20 = puStack_30[2];
      *puVar10 = *puStack_30;
      puVar10[1] = uVar18;
      puVar10[2] = uVar20;
      puVar10[3] = puStack_30[3];
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  *(undefined4 *)(param_1 + 0x4600) = 0;
  *(undefined1 *)(_DAT_08006074 + param_1) = 1;
  func_080064E8(param_1);
  uStack_44 = CONCAT22(uStack_44._2_2_,9);
  *(undefined2 *)((int)puStack_2c + 2) = 2;
  iVar2 = iStack_34;
  func_0804E7A0(uStack_44,iStack_34,0);
  if (*(int *)(_DAT_08006078 + param_1) != 0) {
    uStack_40 = 0x20009;
    func_0804E8F0(0x20009,iVar2,0,0,*(int *)(_DAT_08006078 + param_1));
  }
  piVar3 = (int *)func_0x08008910(param_1);
  func_08008F0C(&uStack_68,iStack_34,_DAT_0800607c + 0x3c00,0x240);
  puVar11 = (undefined4 *)piVar3[1];
  if (puVar11 == (undefined4 *)piVar3[3]) {
    iStack_38 = 1;
    iStack_3c = (int)puVar11 - *piVar3 >> 4;
    piVar4 = &iStack_3c;
    if (iStack_3c == 0) {
      piVar4 = &iStack_38;
    }
    puStack_28 = puVar11;
    if (iStack_3c + *piVar4 == 0) {
      puVar11 = (undefined4 *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = (iStack_3c + *piVar4) * 0x10;
      puVar11 = (undefined4 *)malloc(iVar2);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)func_080D3BC0(iVar2);
      }
    }
    puVar10 = puVar11;
    for (puVar15 = (undefined4 *)*piVar3; puVar15 != puStack_28; puVar15 = puVar15 + 4) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar18 = puVar15[1];
        uVar20 = puVar15[2];
        *puVar10 = *puVar15;
        puVar10[1] = uVar18;
        puVar10[2] = uVar20;
        puVar10[3] = puVar15[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar19 = iStack_38;
    if (iStack_38 == 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = uStack_68;
        puVar10[1] = uStack_64;
        puVar10[2] = uStack_60;
        puVar10[3] = uStack_5c;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar19 != 0; iVar19 = iVar19 + -1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uStack_68;
          puVar10[1] = uStack_64;
          puVar10[2] = uStack_60;
          puVar10[3] = uStack_5c;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar19 = *piVar3; iVar19 != piVar3[1]; iVar19 = iVar19 + 0x10) {
    }
    puStack_24 = puVar11;
    if (*piVar3 != 0) {
      free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar2;
  }
  else {
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = uStack_68;
      puVar11[1] = uStack_64;
      puVar11[2] = uStack_60;
      puVar11[3] = uStack_5c;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar18 = *(undefined4 *)(_DAT_08006198 + param_1);
  uVar20 = func_0x080088dc(param_1);
  uVar5 = func_0x08008920(param_1);
  uVar6 = func_0x08008918(param_1);
  uVar7 = func_0x08008940(param_1);
  uVar8 = func_0800894C(param_1);
  func_08050D3C(uVar18,uVar20,uVar5,uVar6,uVar7,uVar8,_DAT_0800619c + param_1);
  return in_lr;
}

// =============================================================================
// Function: func_080061A0 @ 0x080061A0
// =============================================================================
undefined4 func_080061A0(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 in_lr;
  
  func_08008EB8(0,param_1 + _DAT_080062e4,8);
  func_08008EB8(0,param_1 + _DAT_080062e8,8);
  *(byte *)(param_1 + _DAT_080062ec) = *(byte *)(param_1 + _DAT_080062ec) & 0x3f;
  *(byte *)(param_1 + _DAT_080062f0) = *(byte *)(param_1 + _DAT_080062f0) & 0x3f;
  pbVar7 = (byte *)(param_1 + _DAT_080062f4);
  *pbVar7 = *pbVar7 & 0x3f | 0x80;
  *(byte *)(param_1 + _DAT_080062f8) = *(byte *)(param_1 + _DAT_080062f8) & 0xf3 | 4;
  *pbVar7 = *pbVar7 & 0xf3 | 4;
  uVar3 = (ushort)_DAT_08006300;
  uVar1 = (ushort)param_2 & uVar3;
  uVar2 = (ushort)_DAT_08006304;
  *(ushort *)(param_1 + _DAT_080062fc) = uVar2 & *(ushort *)(param_1 + _DAT_080062fc) | uVar1;
  *(ushort *)(param_1 + _DAT_08006308) =
       uVar2 & *(ushort *)(param_1 + _DAT_08006308) | uVar1 & uVar3;
  *(byte *)(param_1 + _DAT_0800630c) = *(byte *)(param_1 + _DAT_0800630c) & 0xf | 0x40;
  *(byte *)(param_1 + _DAT_08006310) = *(byte *)(param_1 + _DAT_08006310) & 0xf | 0x40;
  uVar4 = _DAT_08006314;
  uVar8 = 0;
  do {
    iVar5 = _DAT_08006318;
    iVar6 = param_2 * 0x20 + uVar8 * 4;
    *(undefined4 *)(iVar6 + _DAT_08006318) = uVar4;
    *(undefined4 *)(iVar6 + iVar5 + 0x20) = uVar4;
    *(undefined4 *)(iVar6 + iVar5 + 0x40) = uVar4;
    *(undefined4 *)(iVar6 + iVar5 + 0x60) = uVar4;
    *(undefined4 *)(iVar6 + iVar5 + 0x80) = uVar4;
    *(undefined4 *)(iVar6 + iVar5 + 0xa0) = uVar4;
    *(undefined4 *)(iVar6 + iVar5 + 0xc0) = uVar4;
    *(undefined4 *)(iVar6 + _DAT_0800631c) = uVar4;
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 8);
  *_DAT_08006320 = (short)_DAT_08006324;
  uVar1 = (ushort)_DAT_0800632c;
  *(ushort *)(param_1 + _DAT_08006328) = uVar1 & *(ushort *)(param_1 + _DAT_08006328) | 0x90;
  *(undefined1 *)(param_1 + _DAT_080062e8) = 8;
  *(ushort *)(param_1 + _DAT_08006330) = uVar1 & *(ushort *)(param_1 + _DAT_08006330);
  *(undefined1 *)(param_1 + _DAT_080062e4) = 0x20;
  *(byte *)(param_1 + _DAT_08006310) = *(byte *)(param_1 + _DAT_08006310) & 0xf3 | 8;
  *(byte *)(param_1 + _DAT_0800630c) = *(byte *)(param_1 + _DAT_0800630c) & 0xf3 | 8;
  return in_lr;
}

// =============================================================================
// Function: func_0800637C @ 0x0800637C
// =============================================================================
undefined4 func_0800637C(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  
  uStack_34 = 0x2001e;
  iVar6 = param_1 + _DAT_08006410;
  func_0804E7DC(0x2001e,iVar6,0,0,0x60,0x10,0);
  uStack_30 = 0x2001e;
  func_0804E8F0(0x2001e,iVar6,0x90,0,param_1 + _DAT_08006414);
  piVar1 = (int *)func_0x08008910(param_1);
  func_08008F0C(&uStack_44,iVar6,0x6003c00);
  puVar3 = (undefined4 *)piVar1[1];
  if (puVar3 == (undefined4 *)piVar1[3]) {
    iStack_28 = 1;
    iStack_2c = (int)puVar3 - *piVar1 >> 4;
    piVar2 = &iStack_2c;
    if (iStack_2c == 0) {
      piVar2 = &iStack_28;
    }
    if (iStack_2c + *piVar2 == 0) {
      puStack_24 = (undefined4 *)0x0;
      iVar6 = 0;
    }
    else {
      iVar6 = (iStack_2c + *piVar2) * 0x10;
      puStack_24 = (undefined4 *)malloc(iVar6);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)func_080D3BC0(iVar6);
      }
    }
    puVar8 = puStack_24;
    for (puVar5 = (undefined4 *)*piVar1; puVar5 != puVar3; puVar5 = puVar5 + 4) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar7 = puVar5[1];
        uVar9 = puVar5[2];
        *puVar8 = *puVar5;
        puVar8[1] = uVar7;
        puVar8[2] = uVar9;
        puVar8[3] = puVar5[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_28;
    if (iStack_28 == 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = uStack_44;
        puVar8[1] = uStack_40;
        puVar8[2] = uStack_3c;
        puVar8[3] = uStack_38;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = uStack_44;
          puVar8[1] = uStack_40;
          puVar8[2] = uStack_3c;
          puVar8[3] = uStack_38;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar4 = *piVar1; iVar4 != piVar1[1]; iVar4 = iVar4 + 0x10) {
    }
    if (*piVar1 != 0) {
      free();
    }
    *piVar1 = (int)puStack_24;
    piVar1[1] = (int)puVar8;
    piVar1[3] = (int)puStack_24 + iVar6;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uStack_44;
      puVar3[1] = uStack_40;
      puVar3[2] = uStack_3c;
      puVar3[3] = uStack_38;
    }
    piVar1[1] = piVar1[1] + 0x10;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080064E8 @ 0x080064E8
// =============================================================================
undefined4 func_080064E8(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 in_lr;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  if (*(char *)(_DAT_080065d0 + param_1) == '\0') {
    return in_lr;
  }
  uVar10 = 1;
  puStack_3c = &uStack_68;
  puStack_38 = &uStack_64;
  puStack_34 = &uStack_58;
  iStack_2c = _DAT_080065d4 + param_1;
  puStack_40 = &uStack_78;
  do {
    iVar6 = uVar10 * 0x784;
    uStack_68 = CONCAT22(uStack_68._2_2_,0x1e);
    *(undefined2 *)((int)puStack_3c + 2) = 2;
    func_0804E7A0(uStack_68,iVar6 + param_1 + 0xc,0);
    iVar5 = *(int *)(param_1 + 0x4600);
    uStack_64 = CONCAT22(uStack_64._2_2_,0x1e);
    *(undefined2 *)((int)puStack_38 + 2) = 2;
    func_0804E8F0(uStack_64,iVar6 + param_1 + 0xc,0,0,uVar10 * 0x1f + iVar5 * 0xba + _DAT_080065d8);
    piVar1 = (int *)func_0x08008910(param_1);
    func_08008F0C(&uStack_78,iVar6 + param_1 + 0xc,uVar10 * 0x780 + 0x6000000,0x780);
    puVar3 = (undefined4 *)piVar1[1];
    if (puVar3 == (undefined4 *)piVar1[3]) {
      puStack_28 = puVar3;
      iStack_5c = 1;
      iStack_60 = (int)puVar3 - *piVar1 >> 4;
      piVar2 = &iStack_60;
      if (iStack_60 == 0) {
        piVar2 = &iStack_5c;
      }
      if (iStack_60 + *piVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
        iVar5 = 0;
      }
      else {
        iVar5 = (iStack_60 + *piVar2) * 0x10;
        puVar3 = (undefined4 *)malloc(iVar5);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)func_080D3BC0(iVar5);
        }
      }
      puVar4 = (undefined4 *)*piVar1;
      iStack_30 = 0x3c00;
      puVar7 = puVar3;
      for (; puVar4 != puStack_28; puVar4 = puVar4 + 4) {
        if (puVar7 != (undefined4 *)0x0) {
          uVar8 = puVar4[1];
          uVar9 = puVar4[2];
          *puVar7 = *puVar4;
          puVar7[1] = uVar8;
          puVar7[2] = uVar9;
          puVar7[3] = puVar4[3];
        }
        puVar7 = puVar7 + 4;
      }
      iVar6 = iStack_5c;
      if (iStack_5c == 1) {
        if (puVar7 != (undefined4 *)0x0) {
          uVar8 = puStack_40[1];
          uVar9 = puStack_40[2];
          *puVar7 = *puStack_40;
          puVar7[1] = uVar8;
          puVar7[2] = uVar9;
          puVar7[3] = puStack_40[3];
        }
        puVar7 = puVar7 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar7 != (undefined4 *)0x0) {
            uVar8 = puStack_40[1];
            uVar9 = puStack_40[2];
            *puVar7 = *puStack_40;
            puVar7[1] = uVar8;
            puVar7[2] = uVar9;
            puVar7[3] = puStack_40[3];
          }
          puVar7 = puVar7 + 4;
        }
      }
      for (iVar6 = *piVar1; iVar6 != piVar1[1]; iVar6 = iVar6 + 0x10) {
      }
      puStack_24 = puVar3;
      if (*piVar1 != 0) {
        free();
      }
      *piVar1 = (int)puStack_24;
      piVar1[1] = (int)puVar7;
      piVar1[3] = (int)puStack_24 + iVar5;
    }
    else {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uStack_78;
        puVar3[1] = uStack_74;
        puVar3[2] = uStack_70;
        puVar3[3] = uStack_6c;
      }
      piVar1[1] = piVar1[1] + 0x10;
      iStack_30 = 0x3c00;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 7);
  uStack_58 = CONCAT22(uStack_58._2_2_,0x1e);
  *(undefined2 *)((int)puStack_34 + 2) = 2;
  func_0804E7A0(uStack_58,iStack_2c,0);
  iVar5 = *(int *)(param_1 + 0x4600);
  if (iVar5 == 1) {
    uStack_50 = 0x2001e;
    uVar8 = _DAT_08006710;
  }
  else {
    if (1 < iVar5) {
      if (iVar5 == 2) {
        uStack_4c = 0x2001e;
        func_0804E8F0(0x2001e,iStack_2c,0x18,0,_DAT_08006770);
      }
      goto LAB_0800672a;
    }
    if (iVar5 != 0) goto LAB_0800672a;
    uStack_54 = 0x2001e;
    uVar8 = _DAT_080066f4;
  }
  func_0804E8F0(0x2001e,iStack_2c,0x18,0,uVar8);
LAB_0800672a:
  piVar1 = (int *)func_0x08008910(param_1);
  func_08008F0C(&uStack_78,iStack_2c,iStack_30 + 0x5fff880,0x780);
  puStack_28 = (undefined4 *)piVar1[1];
  if (puStack_28 == (undefined4 *)piVar1[3]) {
    iStack_44 = 1;
    iStack_48 = (int)puStack_28 - *piVar1 >> 4;
    piVar2 = &iStack_48;
    if (iStack_48 == 0) {
      piVar2 = &iStack_44;
    }
    if (iStack_48 + *piVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      iVar5 = 0;
    }
    else {
      iVar5 = (iStack_48 + *piVar2) * 0x10;
      puVar3 = (undefined4 *)malloc(iVar5);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)func_080D3BC0(iVar5);
      }
    }
    puVar7 = puVar3;
    for (puVar4 = (undefined4 *)*piVar1; puVar4 != puStack_28; puVar4 = puVar4 + 4) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        *puVar7 = *puVar4;
        puVar7[1] = uVar8;
        puVar7[2] = uVar9;
        puVar7[3] = puVar4[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar6 = iStack_44;
    if (iStack_44 == 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uStack_78;
        puVar7[1] = uStack_74;
        puVar7[2] = uStack_70;
        puVar7[3] = uStack_6c;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = uStack_78;
          puVar7[1] = uStack_74;
          puVar7[2] = uStack_70;
          puVar7[3] = uStack_6c;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar6 = *piVar1; iVar6 != piVar1[1]; iVar6 = iVar6 + 0x10) {
    }
    puStack_24 = puVar3;
    if (*piVar1 != 0) {
      free();
    }
    *piVar1 = (int)puStack_24;
    piVar1[1] = (int)puVar7;
    piVar1[3] = (int)puStack_24 + iVar5;
  }
  else {
    if (puStack_28 != (undefined4 *)0x0) {
      *puStack_28 = uStack_78;
      puStack_28[1] = uStack_74;
      puStack_28[2] = uStack_70;
      puStack_28[3] = uStack_6c;
    }
    piVar1[1] = piVar1[1] + 0x10;
  }
  *(undefined1 *)(_DAT_08006854 + param_1) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_08006858 @ 0x08006858
// =============================================================================
undefined4 func_08006858(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + _DAT_080068bc) == 0) {
    pbVar3 = (byte *)func_0x08008920(param_1);
    iVar2 = _DAT_080068c0;
    bVar1 = *pbVar3;
    if (bVar1 < 0x80) {
      *(undefined4 *)(pbVar3 + (uint)bVar1 * 8 + 4) = *(undefined4 *)(param_1 + _DAT_080068c0);
      *(undefined2 *)(pbVar3 + (uint)bVar1 * 8 + 4 + 4) = *(undefined2 *)(param_1 + iVar2 + 4);
      *pbVar3 = bVar1 + 1;
    }
  }
  pbVar3 = (byte *)func_0x08008920(param_1);
  bVar1 = *pbVar3;
  if (bVar1 < 0x80) {
    *(undefined4 *)(pbVar3 + (uint)bVar1 * 8 + 4) = *(undefined4 *)(param_1 + _DAT_080068c4);
    *(undefined2 *)(pbVar3 + (uint)bVar1 * 8 + 4 + 4) = *(undefined2 *)(param_1 + _DAT_080068c8);
    *pbVar3 = bVar1 + 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080068CC @ 0x080068CC
// =============================================================================
undefined4 func_080068CC(int param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar5;
  byte *pbVar6;
  ushort *puVar7;
  char *pcVar8;
  undefined4 in_lr;
  byte bVar4;
  
  uVar1 = (ushort)_DAT_08006950;
  uVar5 = (ushort)_DAT_08006954;
  *(ushort *)(param_1 + _DAT_0800694c) =
       uVar5 & *(ushort *)(param_1 + _DAT_0800694c) |
       (ushort)*(byte *)(param_1 + _DAT_08006948) * 8 + 0x90 & uVar1;
  iVar2 = _DAT_08006958;
  *(undefined1 *)(param_1 + _DAT_08006958) = 8;
  pcVar8 = (char *)(param_1 + _DAT_0800695c);
  if (*pcVar8 < '\x06') {
    puVar7 = (ushort *)(param_1 + iVar2 + -10);
    *puVar7 = uVar5 & *puVar7 | (short)*(char *)(param_1 + _DAT_08006960) << 4 & uVar1;
    *(char *)(param_1 + _DAT_08006964) = *pcVar8 * '\x10' + ' ';
    *(byte *)(param_1 + _DAT_08006968) = *(byte *)(param_1 + _DAT_08006968) & 0x3f;
    pbVar6 = (byte *)(param_1 + _DAT_0800696c);
    bVar4 = *pbVar6;
    bVar3 = 0x80;
  }
  else {
    uVar5 = 0;
    for (bVar4 = *(byte *)(param_1 + _DAT_080069d8); 4 < bVar4; bVar4 = bVar4 - 5) {
      uVar5 = uVar5 + 1 & 0xff;
    }
    *(ushort *)(param_1 + _DAT_080069dc) =
         (ushort)_DAT_080069e4 & *(ushort *)(param_1 + _DAT_080069dc) |
         uVar5 * 0x50 + 0x18 & (ushort)_DAT_080069e0;
    *(undefined1 *)(param_1 + _DAT_080069e8) = 0x88;
    *(byte *)(param_1 + _DAT_080069ec) = *(byte *)(param_1 + _DAT_080069ec) & 0x3f | 0x80;
    pbVar6 = (byte *)(param_1 + _DAT_080069f0);
    bVar4 = *pbVar6;
    bVar3 = 0x40;
  }
  *pbVar6 = bVar4 & 0x3f | bVar3;
  return in_lr;
}

// =============================================================================
// Function: func_080069F4 @ 0x080069F4
// =============================================================================
undefined4 func_080069F4(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar3 = func_0x080088d4();
  if ((uVar3 & 0x40) == 0) {
    if ((uVar3 & 0x80) == 0) {
      if ((uVar3 & 0x10) == 0) {
        if ((uVar3 & 0x20) == 0) {
          return in_lr;
        }
        func_08008B6C(param_1 + _DAT_08006b54,0xcb);
        pcVar4 = (char *)(param_1 + _DAT_08006b58);
        if (*pcVar4 == '\x06') {
          pbVar6 = (byte *)(param_1 + _DAT_08006b5c);
          bVar2 = 0xc;
        }
        else {
          pbVar6 = (byte *)(param_1 + _DAT_08006b7c);
          iVar7 = *pbVar6 - 1;
          *pbVar6 = (byte)iVar7;
          if (*pcVar4 == '\x05') {
            if (-1 < iVar7 * 0x1000000) {
              return in_lr;
            }
            bVar2 = 0xc;
          }
          else {
            if (-1 < iVar7 * 0x1000000) {
              return in_lr;
            }
            bVar2 = 0xe;
          }
        }
      }
      else {
        func_08008B6C(param_1 + _DAT_08006af0,0xcb);
        pcVar4 = (char *)(param_1 + _DAT_08006af4);
        if (*pcVar4 != '\x06') {
          pcVar5 = (char *)(param_1 + _DAT_08006b1c);
          cVar1 = *pcVar5;
          *pcVar5 = cVar1 + '\x01';
          if (*pcVar4 != '\x05') {
            if ((char)(cVar1 + '\x01') < '\x0f') {
              return in_lr;
            }
            *pcVar5 = '\0';
            return in_lr;
          }
          if (*pcVar5 < '\r') {
            return in_lr;
          }
          *pcVar5 = '\0';
          return in_lr;
        }
        pbVar6 = (byte *)(param_1 + _DAT_08006af8);
        bVar2 = 0xc;
      }
    }
    else {
      func_08008B6C(param_1 + _DAT_08006abc,0xcb);
      pcVar4 = (char *)(param_1 + _DAT_08006ac0);
      cVar1 = *pcVar4;
      *pcVar4 = cVar1 + '\x01';
      if ('\x06' < (char)(cVar1 + '\x01')) {
        *pcVar4 = '\0';
      }
      if ((*pcVar4 == '\x05') && ('\f' < *(char *)(param_1 + _DAT_08006ac4))) {
        *pcVar4 = *pcVar4 + '\x01';
      }
      if (*(char *)(param_1 + _DAT_08006ac0) != '\x06') {
        return in_lr;
      }
      pbVar6 = (byte *)(param_1 + _DAT_08006ac4);
      bVar2 = 0xc;
    }
    *pbVar6 = bVar2;
  }
  else {
    func_08008B6C(param_1 + _DAT_08006a54,0xcb);
    pbVar6 = (byte *)(param_1 + _DAT_08006a58);
    bVar2 = *pbVar6;
    *pbVar6 = (byte)(bVar2 - 1);
    if ((int)((bVar2 - 1) * 0x1000000) < 0) {
      *pbVar6 = 6;
      *(undefined1 *)(param_1 + _DAT_08006a5c) = 0xc;
    }
    if ((*pbVar6 == 5) && ('\f' < *(char *)(param_1 + _DAT_08006a5c))) {
      *pbVar6 = *pbVar6 - 1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08006B90 @ 0x08006B90
// =============================================================================
undefined4 func_08006B90(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(char *)(param_1 + _DAT_08006be0) * 2 +
                    *(char *)(param_1 + _DAT_08006be4) * 0x1f + *(int *)(param_1 + 0x4600) * 0xba +
                   _DAT_08006bdc);
  pbVar3 = (byte *)(param_1 + _DAT_08006be8);
  bVar2 = *pbVar3;
  pcVar4 = (char *)(param_1 + _DAT_08006be8 + 0xc + (uint)bVar2);
  if (*pcVar4 != cVar1) {
    *pcVar4 = cVar1;
    bVar2 = *pbVar3;
  }
  *pbVar3 = bVar2 + 1;
  pbVar3 = (byte *)(param_1 + _DAT_08006c1c);
  if (0xb < *pbVar3) {
    *(undefined1 *)(param_1 + _DAT_08006c20) = 0xc;
    *(undefined1 *)(param_1 + _DAT_08006c24) = 6;
    *pbVar3 = 0xb;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08006C28 @ 0x08006C28
// =============================================================================
undefined4 func_08006C28(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (param_2 < 0xb) {
    iVar1 = param_1 + _DAT_08006c58;
    do {
      *(undefined1 *)(iVar1 + param_2) = *(undefined1 *)(iVar1 + param_2 + 1);
      param_2 = param_2 + 1 & 0xff;
    } while (param_2 < 0xb);
  }
  *(undefined1 *)(param_1 + _DAT_08006c5c) = 0x5f;
  return in_lr;
}

// =============================================================================
// Function: func_08006C60 @ 0x08006C60
// =============================================================================
undefined8 func_08006C60(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  iVar5 = 0;
  iVar4 = param_1 + _DAT_08006c88;
  strcpy(iVar4,param_1 + _DAT_08006c88 + -0xd);
  iVar2 = 0;
  do {
    cVar1 = *(char *)(iVar4 + iVar2);
    if (cVar1 == '_') {
      iVar5 = iVar5 + 1;
    }
    else {
      if (cVar1 == ' ') {
        iVar5 = iVar5 + 1;
      }
      uVar6 = iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  if (iVar5 == 0xc) {
    uVar6 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < (int)uVar6) {
      iVar4 = param_1 + _DAT_08006cd8;
      do {
        pcVar3 = (char *)(iVar4 + iVar2);
        if (*pcVar3 == '_') {
          *pcVar3 = ' ';
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar6);
    }
  }
  *(undefined1 *)(param_1 + _DAT_08006cd8 + uVar6) = 0;
  return CONCAT44(in_lr,(-uVar6 | uVar6) >> 0x1f);
}

// =============================================================================
// Function: func_08006CDC @ 0x08006CDC
// =============================================================================
undefined4 func_08006CDC(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)(param_1 + _DAT_08006d2c);
  if (*piVar5 != 0) {
    return in_lr;
  }
  func_080069F4(param_1);
  uVar2 = func_0x080088d4(param_1);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(param_1 + _DAT_08006d30) < '\x06') {
      func_08008B6C(param_1 + _DAT_08006d30 + -0x11,0x6a);
      func_08006B90(param_1);
      return in_lr;
    }
    if (*(char *)(param_1 + _DAT_08006d54) < '\x05') {
      iVar3 = *(int *)(param_1 + 0x4600);
      if (iVar3 == 2) {
        *(int *)(param_1 + 0x4600) = 0;
        goto LAB_08006d7a;
      }
      iVar3 = iVar3 + 1;
    }
    else {
      if (4 < (byte)(*(char *)(param_1 + _DAT_08006d54) - 5U)) {
        cVar1 = func_08006C60(param_1);
        if (cVar1 == '\0') {
LAB_08006de8:
          func_08008B6C(param_1 + _DAT_08006df8,199);
          return in_lr;
        }
LAB_08006e48:
        *piVar5 = 1;
LAB_08006e4a:
        func_08008B6C(param_1 + _DAT_08006e5c,0xc5);
        return in_lr;
      }
      if (*(int *)(param_1 + 0x4600) == 0) {
        iVar3 = 2;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x4600) + -1;
      }
    }
    *(int *)(param_1 + 0x4600) = iVar3;
LAB_08006d7a:
    *(undefined1 *)(param_1 + _DAT_08006d90) = 1;
    func_08008B6C(param_1 + _DAT_08006d94,0xca);
    return in_lr;
  }
  if ((uVar2 & 2) != 0) {
    pcVar4 = (char *)(param_1 + _ASSET_BLOCK_08006DC4);
    if (*pcVar4 == '\0') {
      cVar1 = '\0';
      iVar3 = 0;
      do {
        if (*(char *)(param_1 + _DAT_08006df4 + iVar3) == '_') {
          cVar1 = cVar1 + '\x01';
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xc);
      if (cVar1 == '\f') goto LAB_08006de8;
      cVar1 = '\0';
    }
    else {
      *pcVar4 = *pcVar4 + -1;
      cVar1 = *pcVar4;
    }
    func_08006C28(param_1,cVar1);
    func_08008B6C(param_1 + _DAT_08006e10,0x6c);
    return in_lr;
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x200) == 0) {
      if ((uVar2 & 0x100) == 0) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + _ASSET_BLOCK_08006ED0);
      if (cVar1 != '\v') {
        *(char *)(param_1 + _ASSET_BLOCK_08006ED0) = cVar1 + '\x01';
      }
      func_08008B6C(param_1 + _DAT_08006ed4,0xcb);
      return in_lr;
    }
    pcVar4 = (char *)(param_1 + _DAT_08006ea0);
    if (*pcVar4 == '\0') goto LAB_08006e92;
    cVar1 = *pcVar4 + -1;
  }
  else {
    if (((*(char *)(param_1 + _DAT_08006e58) == '\x06') &&
        (cVar1 = *(char *)(param_1 + _DAT_08006e58 + -1), '\t' < cVar1)) && (cVar1 < '\x0f')) {
      cVar1 = func_08006C60(param_1);
      if (cVar1 == '\0') goto LAB_08006e4a;
      goto LAB_08006e48;
    }
    *(undefined1 *)(param_1 + _DAT_08006e70) = 0xc;
    pcVar4 = (char *)(param_1 + _DAT_08006e74);
    cVar1 = '\x06';
  }
  *pcVar4 = cVar1;
LAB_08006e92:
  func_08008B6C(param_1 + _DAT_08006ea4,0xcb);
  return in_lr;
}

// =============================================================================
// Function: func_08007078 @ 0x08007078
// =============================================================================
undefined8 func_08007078(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_0800709c;
  uVar1 = func_080005D4(_DAT_080070a0);
  uVar1 = func_08005A58(uVar1,param_2,param_3);
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080070A4 @ 0x080070A4
// =============================================================================
undefined4 func_080070A4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_080070d0;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080070D4 @ 0x080070D4
// =============================================================================
undefined8 func_080070D4(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  func_08005B68(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08007184 @ 0x08007184
// =============================================================================
undefined4 func_08007184(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = _DAT_080071b8;
  iVar2 = *_DAT_080071b8;
  iVar3 = *(int *)(iVar2 + 0x4c) + -1;
  *(int *)(iVar2 + 0x4c) = iVar3;
  if (iVar3 == 0) {
    if (iVar2 != 0) {
      func_08000608(iVar2);
    }
    *piVar1 = 0;
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080071BC @ 0x080071BC
// =============================================================================
undefined4 func_080071BC(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined1 uStack_2c;
  
  piVar6 = (int *)*_DAT_08007368;
  pbVar3 = (byte *)((int)piVar6 + 0x51);
  if (*pbVar3 != 0) {
    uVar5 = (uint)*(byte *)(piVar6 + 0x14);
    uVar8 = uVar5 + *pbVar3;
    if (uVar5 < uVar8) {
      piVar2 = piVar6 + uVar5 + 1;
      do {
        uVar1 = 0;
        if (uVar5 < 0x10) {
          uVar1 = piVar6[0x11] & 1 << (uVar5 & 0x1f);
          uVar1 = (-uVar1 | uVar1) >> 0x1f;
        }
        if (uVar1 != 0) {
          *piVar2 = *piVar6;
          *piVar6 = (int)piVar2;
          if (uVar5 < 0x10) {
            piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar5 & 0x1f));
          }
        }
        piVar2 = piVar2 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
    *pbVar3 = 0;
  }
  if (param_3 != 0) {
    uVar5 = 0;
    piVar7 = piVar6 + 1;
    piVar2 = piVar7;
    do {
      uVar8 = 0;
      if (uVar5 < 0x10) {
        uVar8 = piVar6[0x11] & 1 << (uVar5 & 0x1f);
        uVar8 = (-uVar8 | uVar8) >> 0x1f;
      }
      if (((uVar8 != 0) && (param_2 <= uVar5)) && (uVar5 < param_3 + param_2)) {
        *(undefined2 *)((int)piVar7 + 2) = 0;
        *piVar7 = *piVar6;
        *piVar6 = (int)piVar2;
        if (uVar5 < 0x10) {
          piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar5 & 0x1f));
        }
        *(short *)(piVar6 + 0x12) = (short)piVar6[0x12] + -1;
      }
      piVar7 = piVar7 + 1;
      piVar2 = piVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    uVar8 = 0;
    uVar5 = (1 << (param_3 & 0xff)) + -1 << (param_2 & 0xff);
    do {
      piVar2 = (int *)*piVar6;
      if (piVar2 == (int *)0x0) break;
      *piVar6 = *piVar2;
      uVar1 = (int)piVar2 + (-4 - (int)piVar6) >> 2;
      if (uVar1 < 0x10) {
        piVar6[0x11] = piVar6[0x11] | 1 << (uVar1 & 0x1f);
      }
      uVar8 = uVar8 | 1 << (uVar1 & 0xff);
    } while ((uVar8 & uVar5) != uVar5);
    uVar1 = 0;
    uVar5 = ~uVar5;
    piVar2 = piVar6;
    if ((uVar8 & uVar5) != 0) {
      do {
        piVar2 = piVar2 + 1;
        uVar4 = 1 << (uVar1 & 0xff);
        if ((uVar8 & uVar4 & uVar5) != 0) {
          *piVar2 = *piVar6;
          *piVar6 = (int)piVar2;
          if (uVar1 < 0x10) {
            piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar1 & 0x1f));
          }
          uVar8 = uVar8 & ~uVar4;
        }
        uVar1 = uVar1 + 1;
      } while (((uVar8 & uVar5) != 0) && (uVar1 < 0x10));
    }
    *(char *)(piVar6 + 0x14) = (char)param_2;
    uStack_2c = (undefined1)param_3;
    *(undefined1 *)((int)piVar6 + 0x51) = uStack_2c;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800736C @ 0x0800736C
// =============================================================================
void func_0800736C(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar3 = (undefined4 *)*_DAT_080073cc;
  puVar4 = (undefined4 *)*puVar3;
  if ((puVar4 == (undefined4 *)0x0) || (*puVar3 = *puVar4, puVar4 == (undefined4 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)puVar4 + (-4 - (int)puVar3) >> 2;
    if (uVar5 < 0x10) {
      puVar3[0x11] = puVar3[0x11] | 1 << (uVar5 & 0x1f);
    }
    *(short *)(puVar3 + 0x12) = *(short *)(puVar3 + 0x12) + 1;
    *(undefined2 *)puVar4 = 1;
    uVar1 = _DAT_080073d0;
    uVar2 = *(ushort *)((int)puVar3 + 0x4a) + 1;
    if (_DAT_080073d0 < uVar2) {
      uVar2 = 1;
    }
    *(ushort *)((int)puVar4 + 2) = (ushort)uVar2;
    *(ushort *)((int)puVar3 + 0x4a) = (ushort)uVar2;
    uVar5 = uVar5 & 0xf | (*(ushort *)((int)puVar4 + 2) & uVar1) << 4;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}

// =============================================================================
// Function: func_0800745C @ 0x0800745C
// =============================================================================
undefined8 func_0800745C(undefined4 param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    uVar3 = param_2 & 0xf;
    uVar2 = 0;
    if (uVar3 < 0x10) {
      uVar2 = *(uint *)(*_DAT_080074b0 + 0x44) & 1 << uVar3;
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if ((uVar2 != 0) &&
       (psVar4 = (short *)(*_DAT_080074b0 + uVar3 * 4 + 4),
       (param_2 & 0xfffff) >> 4 == (uint)(ushort)psVar4[1])) {
      sVar1 = *psVar4;
      *psVar4 = sVar1 + 1;
      if (sVar1 != -1) goto LAB_080074b8;
      *psVar4 = -1;
    }
  }
  param_2 = 0;
LAB_080074b8:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: func_080074C0 @ 0x080074C0
// =============================================================================
undefined8 func_080074C0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    uVar2 = param_2 & 0xf;
    uVar1 = 0;
    if (uVar2 < 0x10) {
      uVar1 = *(uint *)(*_DAT_0800750c + 0x44) & 1 << uVar2;
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       ((param_2 & 0xfffff) >> 4 == (uint)*(ushort *)(uVar2 * 4 + *_DAT_0800750c + 6)))
    goto LAB_08007506;
  }
  uVar2 = 0xffffffff;
LAB_08007506:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08007510 @ 0x08007510
// =============================================================================
void func_08007510(undefined4 param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    uVar3 = param_2 & 0xf;
    uVar2 = 0;
    if (uVar3 < 0x10) {
      uVar2 = *(uint *)(*_DAT_08007558 + 0x44) & 1 << uVar3;
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if ((uVar2 != 0) &&
       (puVar4 = (undefined2 *)(*_DAT_08007558 + uVar3 * 4 + 4),
       (param_2 & 0xfffff) >> 4 == (uint)(ushort)puVar4[1])) {
      uVar1 = *puVar4;
      goto LAB_0800755e;
    }
  }
  uVar1 = 0;
LAB_0800755e:
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// =============================================================================
// Function: func_08007578 @ 0x08007578
// =============================================================================
void func_08007578(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  uint uStack_24;
  
  puStack_2c = param_1;
  piVar2 = (int *)func_080005D4(0x14);
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[3] = 0;
  cVar1 = *param_2;
  func_080D6DB8(piVar2,cVar1);
  uVar9 = (uint)(byte)(cVar1 - 1);
  if (uVar9 != 0xff) {
    do {
      func_0x08007128(auStack_3c);
      uStack_38 = func_0800736C(auStack_3c);
      iVar7 = piVar2[1];
      if (iVar7 == piVar2[3]) {
        iStack_30 = 1;
        iVar6 = *piVar2;
        iStack_34 = iVar7 - iVar6 >> 3;
        piVar4 = &iStack_34;
        if (iStack_34 == 0) {
          piVar4 = &iStack_30;
        }
        if (iStack_34 + *piVar4 == 0) {
          iVar5 = 0;
          iStack_28 = 0;
        }
        else {
          iVar6 = (iStack_34 + *piVar4) * 8;
          iVar5 = malloc(iVar6);
          iStack_28 = iVar6;
          if (iVar5 == 0) {
            iVar5 = func_080D3BC0(iVar6);
          }
          iVar6 = *piVar2;
        }
        uStack_24 = uVar9 - 1;
        iVar8 = iVar5;
        for (; iVar6 != iVar7; iVar6 = iVar6 + 8) {
          if (iVar8 != 0) {
            func_0x08007128(iVar8);
            uVar3 = func_0800745C(iVar8,*(undefined4 *)(iVar6 + 4));
            *(undefined4 *)(iVar8 + 4) = uVar3;
          }
          iVar8 = iVar8 + 8;
        }
        iVar7 = iStack_30;
        if (iStack_30 == 1) {
          if (iVar8 != 0) {
            func_0x08007128(iVar8);
            uVar3 = func_0800745C(iVar8,uStack_38);
            *(undefined4 *)(iVar8 + 4) = uVar3;
          }
          iVar8 = iVar8 + 8;
        }
        else {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            if (iVar8 != 0) {
              func_0x08007128(iVar8);
              uVar3 = func_0800745C(iVar8,uStack_38);
              *(undefined4 *)(iVar8 + 4) = uVar3;
            }
            iVar8 = iVar8 + 8;
          }
        }
        iVar6 = piVar2[1];
        for (iVar7 = *piVar2; iVar7 != iVar6; iVar7 = iVar7 + 8) {
          func_0x080073e0(iVar7,*(undefined4 *)(iVar7 + 4));
          func_08007184(iVar7,2);
        }
        if (*piVar2 != 0) {
          free();
        }
        *piVar2 = iVar5;
        piVar2[1] = iVar8;
        piVar2[3] = iStack_28 + iVar5;
      }
      else {
        if (iVar7 != 0) {
          func_0x08007128(iVar7);
          uVar3 = func_0800745C(iVar7,uStack_38);
          *(undefined4 *)(iVar7 + 4) = uVar3;
        }
        piVar2[1] = piVar2[1] + 8;
        uStack_24 = uVar9 - 1;
      }
      func_0x080073e0(auStack_3c,uStack_38);
      func_08007184(auStack_3c,2);
      uVar9 = uStack_24 & 0xff;
    } while (uVar9 != 0xff);
  }
  piVar2[4] = *piVar2;
  *puStack_2c = piVar2;
  return;
}

// =============================================================================
// Function: func_08007714 @ 0x08007714
// =============================================================================
undefined4 func_08007714(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[1];
    for (iVar2 = *piVar1; iVar2 != iVar3; iVar2 = iVar2 + 8) {
      func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
      func_08007184(iVar2,2);
    }
    if (*piVar1 != 0) {
      free();
    }
    func_08000608(piVar1);
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08007770 @ 0x08007770
// =============================================================================
undefined8 func_08007770(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  piVar6 = (int *)*param_2;
  if (piVar6 == (int *)0x0) {
    func_0x08007128(param_1);
    uVar5 = func_0800736C(param_1);
  }
  else {
    iVar3 = piVar6[1];
    iVar7 = piVar6[4];
    iVar2 = iVar7;
    iVar8 = iVar3;
    do {
      iVar1 = iVar2;
      if (iVar7 == iVar8) goto LAB_080077a8;
      iVar8 = iVar1 + 8;
      if (iVar8 == iVar3) {
        iVar8 = *piVar6;
      }
      iVar4 = func_08007510(iVar1,*(undefined4 *)(iVar1 + 4));
      iVar2 = iVar8;
    } while (iVar4 != 1);
    piVar6[4] = iVar8;
LAB_080077a8:
    func_0x08007128(param_1);
    uVar5 = func_0800745C(param_1,*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = uVar5;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080077DC @ 0x080077DC
// =============================================================================
undefined8 func_080077DC(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *param_1;
  if (uVar4 != 0xffffffff) {
    if (uVar4 == 0) {
      *param_1 = (1 << (1 << (param_2 & 0xff) & 0xffU)) - 1;
      iVar1 = 0;
      goto LAB_0800783c;
    }
    if (param_2 < 5) {
      uVar3 = 1 << (param_2 & 0xff);
      iVar1 = 0;
      uVar2 = (1 << (uVar3 & 0xff)) - 1;
      do {
        if ((uVar4 & uVar2) == 0) {
          *param_1 = *param_1 | uVar2;
          goto LAB_0800783c;
        }
        iVar1 = iVar1 + uVar3;
        uVar2 = uVar2 << (uVar3 & 0xff);
      } while (uVar2 != 0);
    }
  }
  iVar1 = 0x20;
LAB_0800783c:
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_08007844 @ 0x08007844
// =============================================================================
undefined4 func_08007844(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_3 < 5) {
    uVar1 = *param_1 & ~((1 << (1 << (param_3 & 0xff) & 0xffU)) + -1 << (param_2 & 0x1f));
  }
  else {
    if (param_3 != 5) {
      return in_lr;
    }
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_08007874 @ 0x08007874
// =============================================================================
undefined8 func_08007874(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined2 *puStack_38;
  undefined2 *puStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  
  uStack_48 = param_1;
  if (*_DAT_080079b4 == 0) {
    puVar1 = (undefined4 *)func_080005D4(_DAT_080079b8);
    puStack_24 = &uStack_4c;
    for (puVar4 = puVar1; puVar4 != puVar1 + 8; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
    uVar2 = func_080D770C(puVar1 + 9,0x100,0);
    puVar1[8] = uVar2;
    puStack_44 = (undefined1 *)(_DAT_080079bc + (int)puVar1);
    *puStack_44 = 0;
    puStack_44[1] = 1;
    puStack_28 = (undefined1 *)(_DAT_080079c0 + (int)puVar1);
    iStack_2c = 1;
    puStack_30 = puVar1 + 8;
    puStack_40 = puVar1 + 0x248;
    puStack_3c = (undefined4 *)(_DAT_080079c4 + (int)puVar1);
    puStack_38 = (undefined2 *)(_DAT_080079c8 + (int)puVar1);
    puStack_34 = (undefined2 *)(_DAT_080079cc + (int)puVar1);
    do {
      *puStack_28 = 0;
      puStack_28[1] = 1;
      puVar3 = puStack_28 + 4;
      iVar9 = 1;
      puStack_28 = puStack_28 + 0x7c;
      iStack_2c = iStack_2c + -1;
      do {
        *puVar3 = 0;
        puVar3[1] = 1;
        puVar7 = puVar3 + 4;
        iVar6 = 1;
        puVar3 = puVar3 + 0x3c;
        iVar9 = iVar9 + -1;
        do {
          *puVar7 = 0;
          puVar7[1] = 1;
          puVar4 = (undefined4 *)(puVar7 + 4);
          iVar10 = 1;
          puVar7 = puVar7 + 0x1c;
          iVar6 = iVar6 + -1;
          do {
            *(undefined1 *)puVar4 = 0;
            *(undefined1 *)((int)puVar4 + 1) = 1;
            iVar8 = 1;
            puVar5 = puVar4 + 3;
            iVar10 = iVar10 + -1;
            do {
              puVar4 = puVar4 + 1;
              *puVar4 = 0;
              iVar8 = iVar8 + -1;
            } while (iVar8 != -1);
            puVar4 = puVar5;
          } while (iVar10 != -1);
        } while (iVar6 != -1);
      } while (iVar9 != -1);
    } while (iStack_2c != -1);
    *(undefined2 *)puStack_40 = 0;
    *puStack_3c = 0;
    *puStack_38 = 0;
    *puStack_34 = 0;
    uStack_4c = 0;
    if (puVar1 != puStack_30) {
      uVar2 = *puStack_24;
      puVar4 = puVar1;
      do {
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
      } while (puVar4 != puStack_30);
    }
    func_08007EC8(puStack_44);
    *_DAT_080079b4 = (int)puVar1;
  }
  *(int *)(*_DAT_080079b4 + _DAT_080079c4) = *(int *)(*_DAT_080079b4 + _DAT_080079c4) + 1;
  return CONCAT44(in_lr,uStack_48);
}

// =============================================================================
// Function: func_080079E8 @ 0x080079E8
// =============================================================================
undefined4 func_080079E8(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = _DAT_08007a20;
  iVar2 = *_DAT_08007a20;
  iVar3 = *(int *)(iVar2 + _DAT_08007a24) + -1;
  *(int *)(iVar2 + _DAT_08007a24) = iVar3;
  if (iVar3 == 0) {
    if (iVar2 != 0) {
      func_08000608(iVar2);
    }
    *piVar1 = 0;
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08007A28 @ 0x08007A28
// =============================================================================
undefined4 func_08007A28(undefined4 param_1,uint param_2,int param_3)

{
  short *psVar1;
  ushort *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint *puVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  undefined4 in_lr;
  undefined2 uStack_38;
  short sStack_34;
  
  iVar7 = *_DAT_08007b44;
  psVar6 = (short *)(iVar7 + _DAT_08007b48);
  if (*psVar6 != 0) {
    func_08007F84(iVar7 + _DAT_08007b4c,*(undefined2 *)(iVar7 + _DAT_08007b50),*psVar6);
    *psVar6 = 0;
  }
  if (param_3 != 0) {
    uVar8 = 0;
    psVar1 = (short *)(iVar7 + 0x920);
    puVar4 = (undefined2 *)(iVar7 + _DAT_08007b50);
    if (*psVar1 != 0) {
      puVar2 = (ushort *)(iVar7 + 0x24);
      puVar9 = puVar2;
      do {
        uVar3 = 0;
        if (uVar8 < 0x100) {
          uVar3 = *(uint *)(iVar7 + (uVar8 >> 5) * 4) & 1 << (uVar8 & 0x1f);
          uVar3 = (-uVar3 | uVar3) >> 0x1f;
        }
        if (uVar3 != 0) {
          uVar3 = *puVar2 & 0x3ff;
          if ((param_2 < uVar3 + (1 << ((*(byte *)((int)puVar2 + 1) & 0x3f) >> 2))) &&
             (uVar3 < param_2 + param_3)) {
            func_080080A0(iVar7 + 0x824,uVar3,(*(byte *)((int)puVar2 + 1) & 0x3f) >> 2);
            puVar2[2] = 0;
            *(undefined4 *)puVar2 = *(undefined4 *)(iVar7 + 0x20);
            *(ushort **)(iVar7 + 0x20) = puVar9;
            if (uVar8 < 0x100) {
              puVar5 = (uint *)(iVar7 + (uVar8 >> 5) * 4);
              *puVar5 = *puVar5 & ~(1 << (uVar8 & 0x1f));
            }
            *psVar1 = *psVar1 + -1;
          }
        }
        puVar2 = puVar2 + 4;
        puVar9 = puVar9 + 4;
        uVar8 = uVar8 + 1;
      } while ((*psVar1 != 0) && (uVar8 < 0x100));
    }
    func_08007EE8(iVar7 + 0x824,param_2,param_3);
    uStack_38 = (undefined2)param_2;
    *puVar4 = uStack_38;
    sStack_34 = (short)param_3;
    *psVar6 = sStack_34;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08007B54 @ 0x08007B54
// =============================================================================
undefined8 func_08007B54(undefined4 param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar6 = *_DAT_08007bfc;
  iVar7 = iVar6 + _DAT_08007c00;
  uVar1 = func_08008020(iVar7);
  uVar3 = _DAT_08007c04;
  if (uVar1 <= _DAT_08007c04) {
    puVar5 = *(ushort **)(iVar6 + 0x20);
    if ((puVar5 != (ushort *)0x0) &&
       (*(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)puVar5, puVar5 != (ushort *)0x0)) {
      uVar8 = (int)puVar5 + (-4 - (iVar6 + 0x20)) >> 3;
      if (uVar8 < 0x100) {
        puVar4 = (uint *)(iVar6 + (uVar8 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << (uVar8 & 0x1f);
      }
      *(short *)(iVar6 + 0x920) = *(short *)(iVar6 + 0x920) + 1;
      *puVar5 = (ushort)_DAT_08007c08 & *puVar5 | (ushort)uVar1 & (ushort)uVar3;
      *(byte *)((int)puVar5 + 1) = *(byte *)((int)puVar5 + 1) & 0xc3 | (byte)((param_2 & 0xf) << 2);
      puVar5[1] = 1;
      uVar3 = _DAT_08007c10;
      puVar2 = (ushort *)(iVar6 + _DAT_08007c0c);
      uVar1 = *puVar2 + 1;
      if (_DAT_08007c10 < uVar1) {
        uVar1 = 1;
      }
      puVar5[2] = (ushort)uVar1;
      *puVar2 = (ushort)uVar1;
      uVar3 = uVar8 & 0xff | (puVar5[2] & uVar3) << 8;
      goto LAB_08007c1e;
    }
    func_080080A0(iVar7,uVar1,param_2);
  }
  uVar3 = 0;
LAB_08007c1e:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_08007C28 @ 0x08007C28
// =============================================================================
undefined4 func_08007C28(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  byte bStack_18;
  
  iVar6 = *_DAT_08007cd0;
  if (param_2 != 0) {
    bStack_18 = (byte)param_2;
    uVar5 = param_2 & 0xff;
    uVar2 = 0;
    if (uVar5 < 0x100) {
      uVar2 = *(uint *)(iVar6 + (uint)(bStack_18 >> 5) * 4) & 1 << (param_2 & 0x1f);
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if (((uVar2 != 0) &&
        (puVar4 = (ushort *)(iVar6 + uVar5 * 8 + 0x24), (param_2 & 0xffffff) >> 8 == (uint)puVar4[2]
        )) && (uVar1 = puVar4[1], puVar4[1] = uVar1 - 1, (ushort)(uVar1 - 1) == 0)) {
      func_080080A0(iVar6 + _DAT_08007cd4,*puVar4 & 0x3ff,(*(byte *)((int)puVar4 + 1) & 0x3f) >> 2);
      puVar4[2] = 0;
      *(undefined4 *)puVar4 = *(undefined4 *)(iVar6 + 0x20);
      *(ushort **)(iVar6 + 0x20) = puVar4;
      if (uVar5 < 0x100) {
        puVar3 = (uint *)(iVar6 + (uint)(bStack_18 >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << (param_2 & 0x1f));
      }
      *(short *)(iVar6 + 0x920) = *(short *)(iVar6 + 0x920) + -1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08007CD8 @ 0x08007CD8
// =============================================================================
undefined8 func_08007CD8(undefined4 param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    uVar2 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar2 = *(uint *)(*_DAT_08007d3c + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar2 = (-uVar2 | uVar2) >> 0x1f;
    }
    if ((uVar2 != 0) &&
       (iVar3 = *_DAT_08007d3c + (param_2 & 0xff) * 8 + 0x24,
       (param_2 & 0xffffff) >> 8 == (uint)*(ushort *)(iVar3 + 4))) {
      sVar1 = *(short *)(iVar3 + 2);
      *(short *)(iVar3 + 2) = sVar1 + 1;
      if (sVar1 != -1) goto LAB_08007d44;
      *(undefined2 *)(iVar3 + 2) = 0xffff;
    }
  }
  param_2 = 0;
LAB_08007d44:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: func_08007D4C @ 0x08007D4C
// =============================================================================
undefined8 func_08007D4C(undefined4 param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar1 = *(uint *)(*_DAT_08007da8 + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       (puVar2 = (ushort *)(*_DAT_08007da8 + (param_2 & 0xff) * 8 + 0x24),
       (param_2 & 0xffffff) >> 8 == (uint)puVar2[2])) {
      uVar1 = *puVar2 & 0x3ff;
      goto LAB_08007db0;
    }
  }
  uVar1 = 0xffffffff;
LAB_08007db0:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08007DB8 @ 0x08007DB8
// =============================================================================
undefined8 func_08007DB8(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar1 = *(uint *)(*_DAT_08007e14 + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       (iVar2 = *_DAT_08007e14 + (param_2 & 0xff) * 8 + 0x24,
       (param_2 & 0xffffff) >> 8 == (uint)*(ushort *)(iVar2 + 4))) {
      uVar1 = (*(byte *)(iVar2 + 1) & 0x3f) >> 2;
      goto LAB_08007e1a;
    }
  }
  uVar1 = 0xb;
LAB_08007e1a:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08007E24 @ 0x08007E24
// =============================================================================
undefined8 func_08007E24(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if ((param_2 & 0xff) < 0x100) {
      uVar1 = *(uint *)(*_DAT_08007e7c + (param_2 >> 5 & 7) * 4) & 1 << (param_2 & 0x1f);
      uVar1 = (-uVar1 | uVar1) >> 0x1f;
    }
    if ((uVar1 != 0) &&
       (iVar2 = *_DAT_08007e7c + (param_2 & 0xff) * 8 + 0x24,
       (param_2 & 0xffffff) >> 8 == (uint)*(ushort *)(iVar2 + 4))) {
      uVar1 = (uint)*(ushort *)(iVar2 + 2);
      goto LAB_08007e82;
    }
  }
  uVar1 = 0;
LAB_08007e82:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08007EA8 @ 0x08007EA8
// =============================================================================
undefined4 func_08007EA8(undefined1 *param_1)

{
  undefined4 in_lr;
  
  func_080D6EEC(param_1 + 4);
  func_080D6EEC(param_1 + 0x80);
  *param_1 = 1;
  param_1[1] = 0;
  return in_lr;
}

// =============================================================================
// Function: func_08007EC8 @ 0x08007EC8
// =============================================================================
undefined4 func_08007EC8(undefined1 *param_1)

{
  undefined4 in_lr;
  
  func_080D6F5C(param_1 + 0x80);
  func_080D6F5C(param_1 + 4);
  *param_1 = 0;
  param_1[1] = 1;
  return in_lr;
}

// =============================================================================
// Function: func_08007EE8 @ 0x08007EE8
// =============================================================================
undefined4 func_08007EE8(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = param_3;
  if ((param_2 <= _DAT_08007f10) && (param_3 != 0)) {
    if ((param_2 == 0) && (_DAT_08007f10 < param_3)) {
      func_08007EA8(param_1);
    }
    else {
      if (param_2 <= _DAT_08007f7c) {
        uStack_10 = (_DAT_08007f7c + 1) - param_2;
        puVar3 = &uStack_14;
        if (uStack_10 < param_3) {
          puVar3 = &uStack_10;
        }
        func_080D7118(param_1 + 4,param_2,*puVar3);
      }
      if (0x200 < param_2 + uStack_14) {
        iVar2 = 0;
        if (_DAT_08007f7c < param_2) {
          iVar2 = param_2 + _DAT_08007f80;
        }
        func_080D7118(param_1 + 0x80,iVar2,((param_2 + uStack_14) - 0x200) - iVar2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (byte)(-(uint)param_1[0x80] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08007F84 @ 0x08007F84
// =============================================================================
undefined4 func_08007F84(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = param_3;
  if ((param_2 <= _DAT_08007fac) && (param_3 != 0)) {
    if ((param_2 == 0) && (_DAT_08007fac < param_3)) {
      func_08007EC8(param_1);
    }
    else {
      if (param_2 <= _DAT_08008018) {
        uStack_14 = (_DAT_08008018 + 1) - param_2;
        puVar3 = &uStack_18;
        if (uStack_14 < param_3) {
          puVar3 = &uStack_14;
        }
        func_080D734C(param_1 + 4,param_2,*puVar3);
      }
      if (0x200 < param_2 + uStack_18) {
        iVar2 = 0;
        if (_DAT_08008018 < param_2) {
          iVar2 = param_2 + _DAT_0800801c;
        }
        func_080D734C(param_1 + 0x80,iVar2,((param_2 + uStack_18) - 0x200) - iVar2);
      }
      *param_1 = 0;
      bVar1 = 0;
      if (param_1[5] != '\0') {
        bVar1 = (byte)(-(uint)(byte)param_1[0x81] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08008020 @ 0x08008020
// =============================================================================
undefined8 func_08008020(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (param_2 < 10) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = func_080D7568(pbVar4,param_2), uVar1 <= _DAT_08008070)) {
        param_1[1] = 0;
        bVar2 = 0;
        if (param_1[4] != 0) {
          bVar2 = (byte)(-(uint)param_1[0x80] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = iVar3 << 9 | uVar1;
        goto LAB_08008096;
      }
      pbVar4 = pbVar4 + 0x7c;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 10) && (param_1[1] != 0)) {
    func_08007EA8(param_1);
    uVar1 = 0;
    goto LAB_08008096;
  }
  uVar1 = 0x400;
LAB_08008096:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080080A0 @ 0x080080A0
// =============================================================================
undefined4 func_080080A0(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  if (param_3 < 10) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x200) != 0) {
      puVar2 = param_1 + 0x80;
    }
    func_080D76C0(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (byte)(-(uint)(byte)param_1[0x81] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 10) {
    func_08007EC8(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08008190 @ 0x08008190
// =============================================================================
undefined8 func_08008190(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 in_lr;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  puStack_3c = param_1;
  iStack_38 = param_2;
  puStack_34 = (undefined4 *)func_080005D4(0xa0);
  iVar7 = 7;
  puVar5 = puStack_34;
  do {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[3] = 0;
    puVar5 = puVar5 + 5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  uStack_30 = 0;
  do {
    piVar10 = puStack_34 + uStack_30 * 5;
    cVar1 = *(char *)(iStack_38 + uStack_30);
    func_080D772C(piVar10,cVar1);
    uVar9 = (uint)(byte)(cVar1 - 1);
    uStack_2c = uStack_30 + 1;
    if (uVar9 != 0xff) {
      do {
        func_08007874(auStack_4c);
        uStack_48 = func_08007B54(auStack_4c,uStack_30);
        iVar7 = piVar10[1];
        if (iVar7 == piVar10[3]) {
          iStack_40 = 1;
          iVar6 = *piVar10;
          iStack_44 = iVar7 - iVar6 >> 3;
          piVar3 = &iStack_44;
          if (iStack_44 == 0) {
            piVar3 = &iStack_40;
          }
          if (iStack_44 + *piVar3 == 0) {
            iVar4 = 0;
            iStack_24 = 0;
          }
          else {
            iVar6 = (iStack_44 + *piVar3) * 8;
            iVar4 = malloc(iVar6);
            iStack_24 = iVar6;
            if (iVar4 == 0) {
              iVar4 = func_080D3BC0(iVar6);
            }
            iVar6 = *piVar10;
          }
          uStack_28 = uVar9 - 1;
          iVar8 = iVar4;
          for (; iVar6 != iVar7; iVar6 = iVar6 + 8) {
            if (iVar8 != 0) {
              func_08007874(iVar8);
              uVar2 = func_08007CD8(iVar8,*(undefined4 *)(iVar6 + 4));
              *(undefined4 *)(iVar8 + 4) = uVar2;
            }
            iVar8 = iVar8 + 8;
          }
          iVar7 = iStack_40;
          if (iStack_40 == 1) {
            if (iVar8 != 0) {
              func_08007874(iVar8);
              uVar2 = func_08007CD8(iVar8,uStack_48);
              *(undefined4 *)(iVar8 + 4) = uVar2;
            }
            iVar8 = iVar8 + 8;
          }
          else {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              if (iVar8 != 0) {
                func_08007874(iVar8);
                uVar2 = func_08007CD8(iVar8,uStack_48);
                *(undefined4 *)(iVar8 + 4) = uVar2;
              }
              iVar8 = iVar8 + 8;
            }
          }
          iVar6 = piVar10[1];
          for (iVar7 = *piVar10; iVar7 != iVar6; iVar7 = iVar7 + 8) {
            func_08007C28(iVar7,*(undefined4 *)(iVar7 + 4));
            func_080079E8(iVar7,2);
          }
          if (*piVar10 != 0) {
            free();
          }
          *piVar10 = iVar4;
          piVar10[1] = iVar8;
          piVar10[3] = iStack_24 + iVar4;
        }
        else {
          if (iVar7 != 0) {
            func_08007874(iVar7);
            uVar2 = func_08007CD8(iVar7,uStack_48);
            *(undefined4 *)(iVar7 + 4) = uVar2;
          }
          piVar10[1] = piVar10[1] + 8;
          uStack_28 = uVar9 - 1;
        }
        func_08007C28(auStack_4c,uStack_48);
        func_080079E8(auStack_4c,2);
        uVar9 = uStack_28 & 0xff;
      } while (uVar9 != 0xff);
    }
    piVar10[4] = *piVar10;
    uStack_30 = uStack_2c;
  } while (uStack_2c < 8);
  *puStack_3c = puStack_34;
  return CONCAT44(in_lr,puStack_3c);
}

// =============================================================================
// Function: func_080083D0 @ 0x080083D0
// =============================================================================
undefined8 func_080083D0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  if (*param_2 == 0) {
    func_08007874(param_1);
    uVar5 = func_08007B54(param_1,param_3);
  }
  else {
    piVar8 = (int *)(param_3 * 0x14 + *param_2);
    iVar3 = piVar8[1];
    iVar6 = piVar8[4];
    iVar2 = iVar6;
    iVar7 = iVar3;
    do {
      iVar1 = iVar2;
      if (iVar6 == iVar7) goto LAB_08008410;
      iVar7 = iVar1 + 8;
      if (iVar7 == iVar3) {
        iVar7 = *piVar8;
      }
      iVar4 = func_08007E24(iVar1,*(undefined4 *)(iVar1 + 4));
      iVar2 = iVar7;
    } while (iVar4 != 1);
    piVar8[4] = iVar7;
LAB_08008410:
    func_08007874(param_1);
    uVar5 = func_08007CD8(param_1,*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = uVar5;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08008444 @ 0x08008444
// =============================================================================
undefined8 func_08008444(int *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  param_1[1] = _DAT_080084c4;
  iVar3 = func_080005D4(0x4b0);
  func_080091A4(iVar3,0x1e,4);
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  func_080096B0(iVar3 + 0x34);
  func_08009744(iVar3 + 0x8c,0,0x20);
  func_08008980(iVar3 + 0x490);
  iVar1 = _DAT_080084c8;
  puVar5 = (undefined4 *)(iVar3 + _DAT_080084c8);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = _DAT_080084cc;
  puVar4 = (undefined4 *)(iVar3 + _DAT_080084d0);
  puVar5[3] = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = _DAT_080084d4;
  puVar5[4] = iVar3 + iVar1 + 0xc;
  puVar5[5] = puVar4;
  uVar2 = *(ushort *)(iVar3 + 0x38) | 8;
  *(ushort *)(iVar3 + 0x38) = uVar2;
  *_DAT_080084d8 = uVar2;
  *param_1 = iVar3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080084DC @ 0x080084DC
// =============================================================================
undefined8 func_080084DC(int *param_1,undefined2 *param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  param_1[1] = _DAT_0800855c;
  iVar3 = func_080005D4(0x4b0);
  func_080091A4(iVar3,*param_2,param_2[1]);
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  func_080096B0(iVar3 + 0x34);
  func_08009744(iVar3 + 0x8c,0,0x20);
  func_08008980(iVar3 + 0x490);
  iVar1 = _DAT_08008560;
  puVar5 = (undefined4 *)(iVar3 + _DAT_08008560);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = _DAT_08008564;
  puVar4 = (undefined4 *)(iVar3 + _DAT_08008568);
  puVar5[3] = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = _DAT_0800856c;
  puVar5[4] = iVar3 + iVar1 + 0xc;
  puVar5[5] = puVar4;
  uVar2 = *(ushort *)(iVar3 + 0x38) | 8;
  *(ushort *)(iVar3 + 0x38) = uVar2;
  *_DAT_08008570 = uVar2;
  *param_1 = iVar3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08008574 @ 0x08008574
// =============================================================================
undefined8 func_08008574(int *param_1,undefined1 *param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  param_1[1] = _DAT_08008600;
  iVar3 = func_080005D4(0x4b0);
  func_080091A4(iVar3,0x1e,4);
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  func_080096B0(iVar3 + 0x34);
  func_08009744(iVar3 + 0x8c,*param_2,param_2[1]);
  func_08008980(iVar3 + 0x490);
  puVar5 = (undefined4 *)(iVar3 + _DAT_08008604);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = _DAT_08008608;
  iVar1 = _DAT_0800860c;
  puVar4 = (undefined4 *)(iVar3 + _DAT_0800860c);
  puVar5[3] = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = _DAT_08008610;
  puVar5[4] = iVar3 + iVar1 + -4;
  puVar5[5] = puVar4;
  uVar2 = *(ushort *)(iVar3 + 0x38) | 8;
  *(ushort *)(iVar3 + 0x38) = uVar2;
  *_DAT_08008614 = uVar2;
  *param_1 = iVar3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08008618 @ 0x08008618
// =============================================================================
undefined8 func_08008618(int *param_1,undefined2 *param_2,undefined1 *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  param_1[1] = _DAT_080086a4;
  iVar3 = func_080005D4(0x4b0);
  func_080091A4(iVar3,*param_2,param_2[1]);
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  func_080096B0(iVar3 + 0x34);
  func_08009744(iVar3 + 0x8c,*param_3,param_3[1]);
  func_08008980(iVar3 + 0x490);
  puVar5 = (undefined4 *)(iVar3 + _DAT_080086a8);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = _DAT_080086ac;
  iVar1 = _DAT_080086b0;
  puVar4 = (undefined4 *)(iVar3 + _DAT_080086b0);
  puVar5[3] = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = _DAT_080086b4;
  puVar5[4] = iVar3 + iVar1 + -4;
  puVar5[5] = puVar4;
  uVar2 = *(ushort *)(iVar3 + 0x38) | 8;
  *(ushort *)(iVar3 + 0x38) = uVar2;
  *_DAT_080086b8 = uVar2;
  *param_1 = iVar3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080086BC @ 0x080086BC
// =============================================================================
undefined4 func_080086BC(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  param_1[1] = _DAT_0800871c;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    func_0x080098dc(iVar1 + _DAT_08008720,2);
    func_08008A68(iVar1 + 0x490,2);
    for (iVar2 = *(int *)(iVar1 + 0x24); iVar2 != *(int *)(iVar1 + 0x28); iVar2 = iVar2 + 0x10) {
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      free();
    }
    func_08000608(iVar1);
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08008724 @ 0x08008724
// =============================================================================
undefined4 func_08008724(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iVar2 = *param_1;
  iStack_c = iVar2 + 0x34;
  *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 0x80;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = _DAT_08008770;
  iVar1 = func_0x08008ae0(iVar2 + 0x490);
  func_0x080d3914(iVar1,&uStack_18,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
  func_08008AF0(iVar2 + 0x490);
  func_080098AC(&uStack_18,2);
  return in_lr;
}

// =============================================================================
// Function: func_08008774 @ 0x08008774
// =============================================================================
undefined4 func_08008774(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iVar2 = *param_1;
  iStack_c = iVar2 + 0x34;
  *(ushort *)(iVar2 + 0x34) = (ushort)_DAT_080087c0 & *(ushort *)(iVar2 + 0x34);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = _DAT_080087c4;
  iVar1 = func_0x08008ae0(iVar2 + 0x490);
  func_0x080d3914(iVar1,&uStack_18,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
  func_08008AF0(iVar2 + 0x490);
  func_080098AC(&uStack_18,2);
  return in_lr;
}

// =============================================================================
// Function: func_080088B8 @ 0x080088B8
// =============================================================================
undefined4 func_080088B8(undefined4 *param_1)

{
  undefined4 in_lr;
  
  func_08009268(*param_1);
  return in_lr;
}

// =============================================================================
// Function: func_080088E0 @ 0x080088E0
// =============================================================================
undefined4 func_080088E0(undefined4 *param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  func_080092C8(*param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080088F0 @ 0x080088F0
// =============================================================================
undefined4 func_080088F0(undefined4 *param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  func_0x080092fc(*param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0800894C @ 0x0800894C
// =============================================================================
void func_0800894C(int *param_1)

{
  func_0x08008ae0(*param_1 + 0x490);
  return;
}

// =============================================================================
// Function: func_0800896C @ 0x0800896C
// =============================================================================
void func_0800896C(int *param_1)

{
  func_0x08008ae0(*param_1 + 0x490);
  return;
}

// =============================================================================
// Function: func_08008AF0 @ 0x08008AF0
// =============================================================================
undefined4 func_08008AF0(void)

{
  undefined4 in_lr;
  
  func_08000568(1);
  return in_lr;
}

// =============================================================================
// Function: func_08008AFC @ 0x08008AFC
// =============================================================================
undefined4 func_08008AFC(void)

{
  undefined4 in_lr;
  
  func_0x080d2254();
  func_080D28DC();
  return in_lr;
}

// =============================================================================
// Function: func_08008B0C @ 0x08008B0C
// =============================================================================
undefined8 func_08008B0C(void)

{
  undefined4 in_lr;
  
  func_0x080d1bf8();
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_08008B18 @ 0x08008B18
// =============================================================================
undefined8 func_08008B18(void)

{
  undefined4 in_lr;
  
  func_080D22CC();
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_08008B24 @ 0x08008B24
// =============================================================================
undefined8 func_08008B24(uint param_1)

{
  undefined4 in_lr;
  
  if ((_DAT_08008b4c & 0xffff) <= param_1) {
    param_1 = func_0x080d0f4e(param_1);
  }
  return CONCAT44(in_lr,*(undefined4 *)(param_1 * 0xc + _DAT_08008b50));
}

// =============================================================================
// Function: func_08008B54 @ 0x08008B54
// =============================================================================
undefined8 func_08008B54(undefined4 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_08008B24(param_2);
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08008B6C @ 0x08008B6C
// =============================================================================
undefined4 func_08008B6C(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080D2A0C(*param_1,*(undefined4 *)((param_2 & 0xffff) * 8 + _DAT_08008b84));
  return in_lr;
}

// =============================================================================
// Function: func_08008B88 @ 0x08008B88
// =============================================================================
undefined4 func_08008B88(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 != *(int *)((param_2 & 0xffff) * 8 + _DAT_08008bac)) || (piVar1[1] < 0)) {
    func_080D2A0C(piVar1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08008BB0 @ 0x08008BB0
// =============================================================================
undefined4 func_08008BB0(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == *(int *)((param_2 & 0xffff) * 8 + _DAT_08008bcc)) {
    if (piVar1[1] < 0) {
      func_080D2438(piVar1);
    }
  }
  else {
    func_080D2A0C(piVar1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08008BE0 @ 0x08008BE0
// =============================================================================
undefined4 func_08008BE0(undefined4 *param_1)

{
  undefined4 in_lr;
  
  func_0x080d2af0(*param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008BEC @ 0x08008BEC
// =============================================================================
undefined4 func_08008BEC(undefined4 *param_1)

{
  undefined4 in_lr;
  
  func_080D2438(*param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008BF8 @ 0x08008BF8
// =============================================================================
undefined4 func_08008BF8(undefined4 *param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  func_080D2470(*param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008C08 @ 0x08008C08
// =============================================================================
undefined4 func_08008C08(undefined4 *param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  func_0x080d2480(*param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008C18 @ 0x08008C18
// =============================================================================
undefined4 func_08008C18(undefined4 *param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  func_0x080d24a0(*param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008C28 @ 0x08008C28
// =============================================================================
undefined4 func_08008C28(undefined4 *param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  func_080D3258(*param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008C38 @ 0x08008C38
// =============================================================================
undefined4 func_08008C38(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 in_lr;
  
  func_0x080d3280(*param_1,param_3,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008C54 @ 0x08008C54
// =============================================================================
undefined4 func_08008C54(undefined4 *param_1,short param_2,undefined2 param_3)

{
  undefined4 in_lr;
  
  func_0x080d32e8(*param_1,param_3,(int)param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008C70 @ 0x08008C70
// =============================================================================
undefined4 func_08008C70(undefined4 *param_1,char param_2,undefined2 param_3)

{
  undefined4 in_lr;
  
  func_0x080d335c(*param_1,param_3,(int)param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008C8C @ 0x08008C8C
// =============================================================================
undefined4 func_08008C8C(undefined4 *param_1,undefined1 param_2,undefined2 param_3)

{
  undefined4 in_lr;
  
  func_0x080d33e4(*param_1,param_3,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008CA8 @ 0x08008CA8
// =============================================================================
undefined4 func_08008CA8(undefined4 *param_1,undefined1 param_2,undefined2 param_3)

{
  undefined4 in_lr;
  
  func_0x080d3458(*param_1,param_3,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08008CC4 @ 0x08008CC4
// =============================================================================
undefined4 func_08008CC4(undefined4 *param_1)

{
  undefined4 in_lr;
  
  func_080D24C8(*param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008CFC @ 0x08008CFC
// =============================================================================
undefined8 func_08008CFC(void)

{
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  func_08008B54(&uStack_8,0);
  return CONCAT44(uStack_4,uStack_8);
}

// =============================================================================
// Function: func_08008D10 @ 0x08008D10
// =============================================================================
undefined8 func_08008D10(void)

{
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  func_08008B54(&uStack_8,_DAT_08008d28 & 0xff);
  return CONCAT44(uStack_4,uStack_8);
}

// =============================================================================
// Function: func_08008D3C @ 0x08008D3C
// =============================================================================
undefined8 func_08008D3C(uint param_1)

{
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  func_08008B54(&uStack_8,*(undefined1 *)((param_1 & 0xffff) * 8 + _DAT_08008d58 + 4));
  return CONCAT44(uStack_4,uStack_8);
}

// =============================================================================
// Function: func_08008D84 @ 0x08008D84
// =============================================================================
undefined4 func_08008D84(void)

{
  undefined4 in_lr;
  
  func_080D2958();
  return in_lr;
}

// =============================================================================
// Function: func_08008D90 @ 0x08008D90
// =============================================================================
undefined4 func_08008D90(void)

{
  undefined4 in_lr;
  
  func_080D28DC();
  return in_lr;
}

// =============================================================================
// Function: func_08008DA8 @ 0x08008DA8
// =============================================================================
undefined4 func_08008DA8(undefined2 param_1)

{
  undefined4 in_lr;
  
  func_080D22D8(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008DB8 @ 0x08008DB8
// =============================================================================
undefined4 func_08008DB8(undefined2 param_1)

{
  undefined4 in_lr;
  
  func_080D2304(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008DC8 @ 0x08008DC8
// =============================================================================
undefined4 func_08008DC8(undefined2 param_1)

{
  undefined4 in_lr;
  
  func_080D2350(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008DD8 @ 0x08008DD8
// =============================================================================
undefined4 func_08008DD8(undefined2 param_1)

{
  undefined4 in_lr;
  
  func_080D23A4(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008DE8 @ 0x08008DE8
// =============================================================================
undefined4 func_08008DE8(void)

{
  undefined4 in_lr;
  
  func_080D240C();
  return in_lr;
}

// =============================================================================
// Function: func_08008DF4 @ 0x08008DF4
// =============================================================================
undefined4 func_08008DF4(undefined2 param_1)

{
  undefined4 in_lr;
  
  func_080D23D8(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08008E04 @ 0x08008E04
// =============================================================================
undefined4 func_08008E04(void)

{
  undefined4 in_lr;
  
  func_080D2444();
  return in_lr;
}

// =============================================================================
// Function: func_08008E28 @ 0x08008E28
// =============================================================================
undefined8 func_08008E28(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_3 == 0) || (uVar1 = param_2 | param_1 | param_3, (uVar1 & 1) != 0)) {
    uVar1 = 0;
  }
  else if ((uVar1 & 3) == 0) {
    uVar1 = (param_3 & 0x3ffff) >> 2 | 0x84000000;
  }
  else {
    uVar1 = (param_3 & 0x1ffff) >> 1 | 0x80000000;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08008E64 @ 0x08008E64
// =============================================================================
undefined4 func_08008E64(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 == 0) || (uVar1 = param_1 | param_2 | param_3, (uVar1 & 1) != 0)) {
      uVar1 = 0;
    }
    else if ((uVar1 & 3) == 0) {
      uVar1 = (param_3 & 0x3ffff) >> 2 | 0x84000000;
    }
    else {
      uVar1 = (param_3 & 0x1ffff) >> 1 | 0x80000000;
    }
    func_0x080d0ebc(param_1,param_2,uVar1,_DAT_08008eb4);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08008EB8 @ 0x08008EB8
// =============================================================================
undefined4 func_08008EB8(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if (param_2 != 0) {
    if ((param_3 == 0) || (((param_2 | param_3) & 1) != 0)) {
      uVar1 = 0;
    }
    else if (((param_2 | param_3) & 3) == 0) {
      uVar1 = (param_3 & 0x3ffff) >> 2 | 0x84000000;
    }
    else {
      uVar1 = (param_3 & 0x1ffff) >> 1 | 0x80000000;
    }
    uStack_8 = param_1;
    func_0x080d0ebc(&uStack_8,param_2,uVar1 | 0x1000000,_DAT_08008f08);
  }
  return uStack_4;
}

// =============================================================================
// Function: func_08008F0C @ 0x08008F0C
// =============================================================================
undefined8 func_08008F0C(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) ||
     (uVar1 = param_2 | param_3 | param_4, (uVar1 & 1) != 0)) {
    uVar1 = 0;
  }
  else if ((uVar1 & 3) == 0) {
    uVar1 = (param_4 & 0x3ffff) >> 2 | 0x84000000;
  }
  else {
    uVar1 = (param_4 & 0x1ffff) >> 1 | 0x80000000;
  }
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08008F60 @ 0x08008F60
// =============================================================================
undefined8 func_08008F60(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_4 == 0) || (((param_3 | param_4) & 1) != 0)) {
      uVar1 = 0;
    }
    else if (((param_3 | param_4) & 3) == 0) {
      uVar1 = (param_4 & 0x3ffff) >> 2 | 0x84000000;
    }
    else {
      uVar1 = (param_4 & 0x1ffff) >> 1 | 0x80000000;
    }
    uVar1 = uVar1 | 0x1000000;
  }
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08008FB8 @ 0x08008FB8
// =============================================================================
undefined4 func_08008FB8(int *param_1)

{
  undefined1 **ppuVar1;
  undefined4 in_lr;
  undefined1 *puStack_c;
  
  ppuVar1 = (undefined1 **)param_1[1];
  if (*param_1 == 1) {
    ppuVar1 = &puStack_c;
    puStack_c = (undefined1 *)param_1[1];
  }
  func_0x080d0ebc(ppuVar1,param_1[2],param_1[3],_DAT_08008fe0);
  return in_lr;
}

// =============================================================================
// Function: func_08008FE4 @ 0x08008FE4
// =============================================================================
undefined4 func_08008FE4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 **ppuVar2;
  undefined4 in_lr;
  undefined1 *puStack_14;
  
  uVar1 = _DAT_08009018;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    ppuVar2 = (undefined1 **)param_1[1];
    if (*param_1 == 1) {
      ppuVar2 = &puStack_14;
      puStack_14 = (undefined1 *)param_1[1];
    }
    func_0x080d0ebc(ppuVar2,param_1[2],param_1[3],uVar1);
  }
  return in_lr;
}

