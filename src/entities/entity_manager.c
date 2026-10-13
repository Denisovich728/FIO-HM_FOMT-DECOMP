// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: ENTITY_MANAGER (445 functions)
// Description: Interactive world entities, collision bounds, map triggers and villager entities
// =============================================================================

#include "../../include/entities/entity.h"

// =============================================================================
// Function: Entity_InitWorldActors @ 0x08020018
// =============================================================================
undefined8 Entity_InitWorldActors(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = func_0x080d0eda(param_1 * param_1 * 0x1b0,_DAT_08020034);
  return CONCAT44(in_lr,iVar1 + 0x30);
}

// =============================================================================
// Function: func_08020038 @ 0x08020038
// =============================================================================
void func_08020038(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  Entity_UpdatePositions();
  *(undefined4 *)(param_1 + 0x14) = _DAT_0802005c;
  *(undefined1 *)(param_1 + 0x30) = 0;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08020080 @ 0x08020080
// =============================================================================
undefined4 func_08020080(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = 0;
  iVar4 = 0;
  iVar3 = iVar2;
  iVar5 = iVar4;
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
    if (bVar1 == 1) {
      iVar5 = -param_2;
    }
    else if (bVar1 < 2) {
      iVar5 = param_2;
      if (bVar1 != 0) {
        iVar5 = iVar4;
      }
    }
    else if (bVar1 == 2) {
      iVar3 = -param_2;
    }
    else {
      iVar3 = param_2;
      if (bVar1 != 3) {
        iVar3 = iVar2;
      }
    }
  }
  *(int *)(param_1 + 0x18) = iVar3;
  *(int *)(param_1 + 0x1c) = iVar5;
  return in_lr;
}

// =============================================================================
// Function: func_080200C4 @ 0x080200C4
// =============================================================================
undefined4 func_080200C4(undefined4 *param_1,undefined2 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc) == '\0') && (cVar1 = func_0x08020060(param_1), cVar1 != '\0')) {
    piVar2 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar5 = (undefined4 *)piVar2[1];
    for (puVar4 = (undefined4 *)*piVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      cVar1 = func_0x08008cd0(*puVar4);
      if (cVar1 == '\0') {
        uVar3 = *puVar4;
        goto LAB_0802011c;
      }
    }
    uVar3 = puVar5[-1];
LAB_0802011c:
    func_08008B6C(uVar3,param_2);
    *(char *)(param_1 + 0xc) = '\x01';
  }
  return in_lr;
}

// =============================================================================
// Function: func_08020130 @ 0x08020130
// =============================================================================
undefined8 func_08020130(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    if (*(short *)(iVar2 + 0x3e) != 0) {
      uVar3 = (uint)(-(int)*(short *)(iVar2 + 0x40) | (int)*(short *)(iVar2 + 0x40)) >> 0x1f;
    }
    if ((uVar3 == 0) || (cVar1 = func_0805E894(iVar2 + 0x30), cVar1 != '\0')) {
      uVar4 = 1;
    }
  }
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_08020170 @ 0x08020170
// =============================================================================
undefined4 func_08020170(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
  if (param_2 != (int *)0x0) {
    iVar4 = *(int *)(param_1 + 8) >> 0x10;
    iVar7 = *(int *)(param_1 + 0xc) >> 0x10;
    iVar6 = (iVar2 >> 0x10) - iVar7;
    iVar5 = (iVar1 >> 0x10) - iVar4;
    if (0 < iVar6) {
      iVar3 = *param_2;
      if (param_2[10] < iVar3) {
        func_080AB85C(param_2);
        iVar3 = *param_2;
      }
      if (iVar3 < iVar6) {
        iVar2 = *param_2;
        if (param_2[10] < iVar2) {
          func_080AB85C(param_2);
          iVar2 = *param_2;
        }
        iVar2 = (iVar7 + iVar2) * 0x10000;
      }
    }
    if (iVar6 < 0) {
      iVar3 = param_2[1];
      if (iVar3 + param_2[10] < 0 != SCARRY4(iVar3,param_2[10])) {
        func_080AB8D0(param_2);
        iVar3 = param_2[1];
      }
      if (iVar6 < iVar3) {
        iVar2 = param_2[1];
        if (iVar2 + param_2[10] < 0 != SCARRY4(iVar2,param_2[10])) {
          func_080AB8D0(param_2);
          iVar2 = param_2[1];
        }
        iVar2 = (iVar7 + iVar2) * 0x10000;
      }
    }
    if (iVar5 < 0) {
      iVar6 = param_2[2];
      if (iVar6 + param_2[10] < 0 != SCARRY4(iVar6,param_2[10])) {
        func_080AB948(param_2);
        iVar6 = param_2[2];
      }
      if (iVar5 < iVar6) {
        iVar1 = param_2[2];
        if (iVar1 + param_2[10] < 0 != SCARRY4(iVar1,param_2[10])) {
          func_080AB948(param_2);
          iVar1 = param_2[2];
        }
        iVar1 = (iVar4 + iVar1) * 0x10000;
      }
    }
    if (0 < iVar5) {
      iVar6 = param_2[3];
      if (param_2[10] < iVar6) {
        func_080AB9C4(param_2);
        iVar6 = param_2[3];
      }
      if (iVar6 < iVar5) {
        iVar1 = param_2[3];
        if (param_2[10] < iVar1) {
          func_080AB9C4(param_2);
          iVar1 = param_2[3];
        }
        iVar1 = (iVar4 + iVar1) * 0x10000;
      }
    }
  }
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = iVar2;
  return in_lr;
}

// =============================================================================
// Function: func_080202A0 @ 0x080202A0
// =============================================================================
void func_080202A0(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -7;
  param_1[1] = sVar2 + -9;
  param_1[2] = sVar1 + 7;
  param_1[3] = sVar2 + 5;
  return;
}

// =============================================================================
// Function: func_08020310 @ 0x08020310
// =============================================================================
undefined8 func_08020310(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 auStack_1c [8];
  
  func_0809B114(auStack_1c,param_3);
  func_08020038(param_1,param_2,auStack_1c,0x340);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08020378;
  *(int *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined1 *)(param_1 + 0x40) = 0;
  if ((*(int *)(param_3 + 0x20) == 5) &&
     (iVar1 = func_0x080d3914(param_2,0x4b,*(undefined4 *)(*param_2 + 0x40)), iVar1 != 0)) {
    if (*(short *)(iVar1 + 4) == *(short *)(param_1 + 4)) {
      func_08038374(iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                    *(undefined2 *)(param_1 + 0x22),*(undefined1 *)(param_1 + 0x20));
    }
    else {
      func_08020410(param_1,0);
    }
  }
  uVar2 = func_08021264(param_1);
  func_080211E4(param_1,uVar2,*(undefined1 *)(param_1 + 0x20));
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08020410 @ 0x08020410
// =============================================================================
undefined4 func_08020410(int param_1,uint param_2)

{
  undefined4 in_lr;
  uint uStack_10;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 5) {
    func_080212C0(param_1);
  }
  uStack_10 = (uStack_10 & _DAT_08020458 | param_2 & 0xffff) & _DAT_0802045c;
  func_0x0809bb48(*(undefined4 *)(param_1 + 0x34),&uStack_10);
  func_080211E4(param_1,0,*(undefined1 *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_08020460 @ 0x08020460
// =============================================================================
undefined8 func_08020460(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 5));
}

// =============================================================================
// Function: func_08020474 @ 0x08020474
// =============================================================================
undefined4 func_08020474(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  func_080204CC();
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(short *)(param_1 + 0x24) == 0) {
    sVar1 = *(short *)(param_1 + 0x26);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x24) + -1;
  }
  *(short *)(param_1 + 0x24) = sVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_080204A8 @ 0x080204A8
// =============================================================================
undefined4 func_080204A8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = func_08032370();
  if (cVar1 != '\0') {
    func_080204CC(param_1);
  }
  func_0803242C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080204CC @ 0x080204CC
// =============================================================================
undefined4 func_080204CC(undefined4 *param_1)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  undefined4 in_lr;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  char cStack_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int *piStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  char *pcStack_24;
  
  piStack_44 = (int *)*param_1;
  iVar9 = param_1[0xd];
  iVar5 = func_0809BB34(iVar9);
  uStack_40 = (uint)*(ushort *)(param_1 + 1);
  func_0x080d3918(&uStack_114,piStack_44,uStack_40,*(undefined4 *)(*piStack_44 + 0x34));
  func_0x080d3914(&uStack_a0,param_1,*(undefined4 *)(param_1[5] + 0xc));
  bVar2 = false;
  if (((int)uStack_40 < 9) && (iVar5 == 1)) {
    bVar2 = true;
  }
  if (bVar2) {
    iStack_3c = ((int)(short)uStack_9c - (int)(short)uStack_a0) + 0x10;
    iStack_38 = ((int)uStack_9c._2_2_ - (int)uStack_a0._2_2_) + 0x10;
  }
  else {
    iStack_3c = 0;
    iStack_38 = 0;
  }
  iStack_108 = 0x21;
  iStack_104 = -0x21;
  iStack_100 = -0x21;
  iStack_fc = 0x21;
  uStack_f4 = uStack_114;
  uStack_f0 = uStack_110;
  uStack_ec = uStack_10c;
  uStack_e8 = uStack_a0;
  uStack_e4 = uStack_9c;
  iStack_e0 = 0x20;
  iStack_dc = iStack_3c;
  iStack_d8 = iStack_38;
  iVar6 = func_0x080d3914(piStack_44,0,*(undefined4 *)(*piStack_44 + 0x40));
  iVar7 = func_0x080d3914(piStack_44,0x4a,*(undefined4 *)(*piStack_44 + 0x40));
  iStack_34 = 0;
  pcStack_24 = (char *)(param_1 + 0x10);
  if ((*pcStack_24 != '\0') && (*(short *)(param_1 + 9) == 0)) {
    *pcStack_24 = '\0';
    param_1[2] = (int)*(short *)(param_1 + 0xf) << 0x10;
    param_1[3] = (int)*(short *)((int)param_1 + 0x3e) << 0x10;
    func_0x080d3914(&uStack_98,param_1,*(undefined4 *)(param_1[5] + 0xc));
    uStack_a0 = uStack_98;
    uVar8 = uStack_a0;
    uStack_9c = uStack_94;
    uVar3 = uStack_9c;
    uStack_9c._0_2_ = (short)uStack_94;
    uStack_a0._0_2_ = (short)uStack_98;
    iStack_a8 = ((int)(short)uStack_9c - (int)(short)uStack_a0) + 0x10;
    uStack_9c._2_2_ = (short)((uint)uStack_94 >> 0x10);
    uStack_a0._2_2_ = (short)((uint)uStack_98 >> 0x10);
    iStack_a4 = ((int)uStack_9c._2_2_ - (int)uStack_a0._2_2_) + 0x10;
    uStack_d4 = 0x21;
    uStack_d0 = 0xffffffdf;
    uStack_cc = 0xffffffdf;
    uStack_c8 = 0x21;
    uStack_c0 = uStack_114;
    uStack_bc = uStack_110;
    uStack_b8 = uStack_10c;
    uStack_b4 = uStack_98;
    uStack_b0 = uStack_94;
    uStack_ac = 0x20;
    uStack_a0 = uVar8;
    uStack_9c = uVar3;
    memcpy(&iStack_108,&uStack_d4,0x34);
    if ((iVar6 != 0) && (*(ushort *)(iVar6 + 4) == uStack_40)) {
      func_0x080d3914(auStack_90,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
      func_080ABA90(&iStack_108,auStack_90,1);
    }
    if ((iVar7 != 0) && (*(ushort *)(iVar7 + 4) == uStack_40)) {
      func_0x080d3914(auStack_88,iVar7,*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0xc));
      func_080ABA90(&iStack_108,auStack_88,0);
    }
    uVar8 = func_08021264(param_1);
    func_080211E4(param_1,uVar8,*(undefined1 *)(param_1 + 8));
    if ((*(int *)(iVar9 + 0x20) == 5) &&
       ((iStack_34 != 0 ||
        (iStack_34 = func_0x080d3914(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40)),
        iStack_34 != 0)))) {
      iVar5 = iStack_34;
      if (*(ushort *)(iStack_34 + 4) != uStack_40) {
        func_0x080210a0();
      }
      func_08038398(iVar5,*(undefined2 *)((int)param_1 + 0x22),*(undefined1 *)(param_1 + 8));
    }
    goto SUB_080210a0;
  }
  if ((iVar6 != 0) && (*(ushort *)(iVar6 + 4) == uStack_40)) {
    func_0x080d3914(auStack_80,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
    func_080ABA90(&iStack_108,auStack_80,1);
  }
  if ((iVar7 != 0) && (*(ushort *)(iVar7 + 4) == uStack_40)) {
    func_0x080d3914(auStack_78,iVar7,*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0xc));
    func_080ABA90(&iStack_108,auStack_78,0);
  }
  if ((*pcStack_24 == '\0') && (iVar5 == 1)) {
    iVar5 = (int)*(short *)((int)param_1 + 10);
    iVar7 = (int)*(short *)((int)param_1 + 0xe);
    iVar13 = param_1[6];
    iVar16 = param_1[7];
    iStack_30 = iVar5;
    iStack_2c = iVar7;
    if (0 < iVar16) {
      if (iStack_e0 < iStack_108) {
        func_080AB85C(&iStack_108);
      }
      if (iStack_108 == 0) {
        if (iStack_e0 < 0) {
          func_080AB85C(&iStack_108);
        }
        if (cStack_f8 != '\0') {
          iVar7 = iVar7 + iStack_38;
        }
      }
    }
    if (iVar16 < 0) {
      if (iStack_104 + iStack_e0 < 0 != SCARRY4(iStack_104,iStack_e0)) {
        func_080AB8D0(&iStack_108);
      }
      if (iStack_104 == 0) {
        if (iStack_e0 < 0) {
          func_080AB8D0(&iStack_108);
        }
        if (cStack_f7 != '\0') {
          iVar7 = iVar7 - iStack_38;
        }
      }
    }
    if (iVar13 < 0) {
      if (iStack_100 + iStack_e0 < 0 != SCARRY4(iStack_100,iStack_e0)) {
        func_080AB948(&iStack_108);
      }
      if (iStack_100 == 0) {
        if (iStack_e0 < 0) {
          func_080AB948(&iStack_108);
        }
        if (cStack_f6 != '\0') {
          iVar5 = iVar5 - iStack_3c;
        }
      }
    }
    if (0 < iVar13) {
      if (iStack_e0 < iStack_fc) {
        func_080AB9C4(&iStack_108);
      }
      if (iStack_fc == 0) {
        if (iStack_e0 < 0) {
          func_080AB9C4(&iStack_108);
        }
        if (cStack_f5 != '\0') {
          iVar5 = iVar5 + iStack_3c;
        }
      }
    }
    if ((iVar5 != iStack_30) || (iVar7 != iStack_2c)) {
      *(short *)(param_1 + 0xf) = (short)iVar5;
      *(short *)((int)param_1 + 0x3e) = (short)iVar7;
      *pcStack_24 = '\x01';
      func_080211E4(param_1,0xc,*(undefined1 *)(param_1 + 8));
      if ((*(int *)(iVar9 + 0x20) == 5) &&
         (((iStack_34 != 0 ||
           (iStack_34 = func_0x080d3914(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40)),
           iStack_34 != 0)) && (*(ushort *)(iStack_34 + 4) == uStack_40)))) {
        func_08038398(iStack_34,*(undefined2 *)((int)param_1 + 0x22),*(undefined1 *)(param_1 + 8));
      }
    }
  }
  if (6 < *(uint *)(iVar9 + 0x20)) goto SUB_080210a0;
  switch(*(uint *)(PTR_case_080208B4_080208b0 + *(uint *)(iVar9 + 0x20) * 4) & 0xfffffffe) {
  case 0x80208b4:
  case 0x80208d0:
    sVar12 = *(short *)(iVar9 + 0x24);
    if (sVar12 != 0) {
      iVar5 = param_1[6];
      iVar7 = param_1[7];
      bVar2 = false;
      if (iVar5 < 0) {
        if (iStack_100 + iStack_e0 < 0 != SCARRY4(iStack_100,iStack_e0)) {
          func_080AB948(&iStack_108);
        }
        if (iStack_100 < -0xf) goto LAB_08020902;
LAB_08020956:
        bVar2 = true;
      }
      else {
LAB_08020902:
        if (0 < iVar5) {
          if (iStack_e0 < iStack_fc) {
            func_080AB9C4(&iStack_108);
          }
          if (iStack_fc < 0x10) goto LAB_08020956;
        }
        if (iVar7 < 0) {
          if (iStack_104 + iStack_e0 < 0 != SCARRY4(iStack_104,iStack_e0)) {
            func_080AB8D0(&iStack_108);
          }
          if (-0x10 < iStack_104) goto LAB_08020956;
        }
        if (0 < iVar7) {
          if (iStack_e0 < iStack_108) {
            func_080AB85C(&iStack_108);
          }
          if (iStack_108 < 0x10) goto LAB_08020956;
        }
      }
      if (bVar2) {
        sVar12 = 0;
      }
      else {
        sVar12 = sVar12 + -1;
      }
LAB_08020a48:
      *(short *)(iVar9 + 0x24) = sVar12;
      goto SUB_080210a0;
    }
    sVar12 = 0;
    if ((*pcStack_24 != '\0') || (cVar4 = func_08020130(param_1), cVar4 == '\0')) goto LAB_08020a48;
    iVar5 = func_0809BB34(iVar9);
    if ((iVar5 != 1) ||
       ((iVar5 = func_0x080d3914(piStack_44,0x2d,*(undefined4 *)(*piStack_44 + 0x40)), iVar5 == 0 ||
        (*(ushort *)(iVar5 + 4) != uStack_40)))) {
      iVar5 = func_0x080d3910(piStack_44,*(undefined4 *)(*piStack_44 + 0x144));
      bVar15 = *(byte *)(iVar5 + 10);
      iVar5 = func_0809BB34(iVar9);
      iVar7 = (uint)(0xe < (bVar15 & 0x1f) - 6) * 0x68 + iVar5 * 0x34 + _DAT_08020a50;
      iVar5 = func_080AB82C(iVar7,0xd);
      iVar7 = iVar7 + iVar5 * 4;
      sVar12 = func_080AB788((uint)*(byte *)(iVar7 + 2) * 0x3c);
      sVar12 = (ushort)*(byte *)(iVar7 + 1) * 0x3c + sVar12;
      uVar14 = (uint)*(byte *)(param_1 + 8);
      iVar7 = func_080AB788(4);
      if ((iVar7 != 0) && (iVar7 != 3)) {
        uVar14 = func_080AB7A4(uVar14);
      }
      *(char *)(iVar9 + 0x26) = (char)iVar5;
      func_080211E4(param_1,iVar5,uVar14);
      goto LAB_08020a48;
    }
    func_080200C4(param_1,0xa9);
    uStack_70 = uStack_70 & _DAT_080209c0 & _DAT_080209c4;
    func_0x0809bb9c(iVar9);
    goto LAB_08020fd6;
  case 0x8020a54:
    uVar14 = (uint)*(ushort *)(iVar9 + 0x24);
    if (uVar14 != 0) {
      uVar14 = uVar14 - 1;
    }
    uVar11 = (uint)*(ushort *)(iVar9 + 0x26);
    if (uVar11 != 0) {
      uVar11 = uVar11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(iVar9 + 0x24) = (short)uVar14;
      *(short *)(iVar9 + 0x26) = (short)uVar11;
      goto SUB_080210a0;
    }
    if (((uVar14 != 0) && (iVar6 != 0)) && (*(ushort *)(iVar6 + 4) == uStack_40)) {
      iVar13 = (int)*(short *)((int)param_1 + 10);
      iVar7 = (int)*(short *)((int)param_1 + 0xe);
      sVar12 = *(short *)(iVar6 + 10);
      sVar1 = *(short *)(iVar6 + 0xe);
      iVar5 = sVar12 - iVar13;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x10) {
        iVar5 = sVar1 - iVar7;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 0x10) goto LAB_08020b1a;
      }
      if (uVar11 == 0) {
LAB_08020ae4:
        uVar8 = func_080ABC40(iVar13,iVar7,(int)sVar12,(int)sVar1,&iStack_108,
                              *(undefined1 *)(param_1 + 8));
        func_080211E4(param_1,2,uVar8);
        iVar5 = func_080AB788(0x1e);
        uVar11 = iVar5 + 1;
        *(short *)(iVar9 + 0x28) = sVar12;
        *(short *)(iVar9 + 0x2a) = sVar1;
      }
      else {
        iVar5 = *(short *)(iVar9 + 0x28) - iVar13;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 0x10) {
          iVar5 = *(short *)(iVar9 + 0x2a) - iVar7;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < 0x10) goto LAB_08020ae4;
        }
      }
      *(short *)(iVar9 + 0x24) = (short)uVar14;
      *(short *)(iVar9 + 0x26) = (short)uVar11;
      goto SUB_080210a0;
    }
LAB_08020b1a:
    uStack_6c = (uStack_6c & _DAT_08020b30 | 0xb4) & _DAT_08020b34;
    break;
  case 0x8020b38:
    uVar14 = (uint)*(ushort *)(iVar9 + 0x24);
    if (uVar14 != 0) {
      uVar14 = uVar14 - 1;
    }
    uVar11 = *(uint *)(iVar9 + 0x24) & 0x7fffff;
    bVar15 = (byte)(uVar11 >> 0x10);
    if (uVar11 >> 0x10 != 0) {
      bVar15 = bVar15 - 1;
    }
    uVar11 = (uint)*(byte *)(iVar9 + 0x27);
    if (uVar11 != 0) {
      uVar11 = uVar11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(iVar9 + 0x24) = (short)uVar14;
LAB_08020bdc:
      *(byte *)(iVar9 + 0x26) = *(byte *)(iVar9 + 0x26) & 0x80 | bVar15 & 0x7f;
      *(char *)(iVar9 + 0x27) = (char)uVar11;
      goto SUB_080210a0;
    }
    if (uVar14 != 0) {
      if ((int)(*(uint *)(iVar9 + 0x24) * 0x100) < 0) {
        iVar6 = func_0x080d3914(piStack_44,0x2d,*(undefined4 *)(*piStack_44 + 0x40));
      }
      if ((iVar6 != 0) && (*(ushort *)(iVar6 + 4) == uStack_40)) {
        if (uVar11 == 0) {
          uVar8 = func_080ABE58((int)*(short *)((int)param_1 + 10),
                                (int)*(short *)((int)param_1 + 0xe),(int)*(short *)(iVar6 + 10),
                                (int)*(short *)(iVar6 + 0xe),&iStack_108,
                                *(undefined1 *)(param_1 + 8));
          func_080211E4(param_1,2,uVar8);
          iVar5 = func_080AB788(0x1e);
          uVar11 = iVar5 + 1;
        }
        *(short *)(iVar9 + 0x24) = (short)uVar14;
        goto LAB_08020bdc;
      }
    }
    func_080323C8(param_1);
    uStack_68 = (uStack_68 & _DAT_08020c0c | 0xb4) & _DAT_08020c10;
    break;
  case 0x8020c14:
    uVar14 = (uint)*(ushort *)(iVar9 + 0x24);
    if (uVar14 != 0) {
      uVar14 = uVar14 - 1;
    }
    uVar11 = (uint)*(ushort *)(iVar9 + 0x26);
    if (uVar11 != 0) {
      uVar11 = uVar11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(iVar9 + 0x24) = (short)uVar14;
      *(short *)(iVar9 + 0x26) = (short)uVar11;
      goto SUB_080210a0;
    }
    if (uVar14 == 0) {
LAB_08020d1a:
      uStack_60 = (uStack_60 & _DAT_08020d30 | 0xb4) & _DAT_08020d34;
      break;
    }
    iStack_34 = func_0x080d3914(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40));
    if ((iStack_34 == 0) || (*(ushort *)(iStack_34 + 4) != uStack_40)) {
      if (uVar11 == 0) {
        func_080200C4(param_1,0xaa);
        goto LAB_08020d1a;
      }
      goto LAB_08020d0c;
    }
    iVar6 = (int)*(short *)((int)param_1 + 10);
    iVar7 = (int)*(short *)((int)param_1 + 0xe);
    sVar12 = *(short *)(iStack_34 + 10);
    sVar1 = *(short *)(iStack_34 + 0xe);
    iVar5 = sVar12 - iVar6;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (7 < iVar5) {
LAB_08020c8e:
      if (uVar11 == 0) {
LAB_08020cb2:
        uVar8 = func_080ABC40(iVar6,iVar7,(int)sVar12,(int)sVar1,&iStack_108,
                              *(undefined1 *)(param_1 + 8));
        func_080211E4(param_1,2,uVar8);
        iVar5 = func_080AB788(0x1e);
        uVar11 = iVar5 + 1;
        *(short *)(iVar9 + 0x28) = sVar12;
        *(short *)(iVar9 + 0x2a) = sVar1;
      }
      else {
        iVar5 = *(short *)(iVar9 + 0x28) - iVar6;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 8) {
          iVar5 = *(short *)(iVar9 + 0x2a) - iVar7;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < 8) goto LAB_08020cb2;
        }
      }
LAB_08020d0c:
      *(short *)(iVar9 + 0x24) = (short)uVar14;
      *(short *)(iVar9 + 0x26) = (short)uVar11;
      goto SUB_080210a0;
    }
    iVar5 = sVar1 - iVar7;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (7 < iVar5) goto LAB_08020c8e;
    uVar14 = func_080AB788(0x78);
    uStack_64 = uStack_64 & _DAT_08020d04 | uVar14 & 0xffff;
    func_0x0809bb80(iVar9);
    goto LAB_08020fd6;
  case 0x8020d38:
    iStack_34 = func_0x080d3914(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40));
    uVar14 = (uint)*(ushort *)(iVar9 + 0x24);
    if (uVar14 != 0) {
      uVar14 = uVar14 - 1;
    }
    if ((iStack_34 != 0) && (*(ushort *)(iStack_34 + 4) == uStack_40)) {
      if (uVar14 == 0) {
        func_080200C4(param_1,0xa9);
        iVar5 = func_0x0809b228(iVar9);
        iVar5 = func_0x080d0eda(iVar5 * 0x3c0,0xfb);
        uStack_5c = iVar5 + 0x1e0U & 0xffff;
        func_0x0809bb8c(param_1[0xd]);
        uVar8 = func_08021264(param_1);
        func_080211E4(param_1,uVar8,*(undefined1 *)(param_1 + 8));
        func_08038374(iStack_34,param_1[2],param_1[3],*(undefined2 *)((int)param_1 + 0x22),
                      *(undefined1 *)(param_1 + 8));
      }
      else {
        *(short *)(iVar9 + 0x24) = (short)uVar14;
      }
      goto SUB_080210a0;
    }
    func_080200C4(param_1,0xaa);
    uStack_54 = (uStack_54 & _DAT_08020ddc | 0xb4) & _DAT_08020de0;
    break;
  case 0x8020de4:
    iStack_34 = func_0x080d3914(piStack_44,0x4b,*(undefined4 *)(*piStack_44 + 0x40));
    uVar14 = (uint)*(ushort *)(iVar9 + 0x24);
    if (uVar14 != 0) {
      uVar14 = uVar14 - 1;
    }
    uVar11 = (uint)*(ushort *)(iVar9 + 0x26);
    if (uVar11 != 0) {
      uVar11 = uVar11 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(iVar9 + 0x24) = (short)uVar14;
      *(short *)(iVar9 + 0x26) = (short)uVar11;
      goto SUB_080210a0;
    }
    if ((iStack_34 == 0) || (*(ushort *)(iStack_34 + 4) != uStack_40)) {
      if (uVar11 != 0) goto LAB_08020edc;
      func_080200C4(param_1,0xaa);
    }
    else if (((uVar14 != 0) && (iVar6 != 0)) && (*(ushort *)(iVar6 + 4) == uStack_40)) {
      iVar13 = (int)*(short *)((int)param_1 + 10);
      iVar7 = (int)*(short *)((int)param_1 + 0xe);
      iStack_28 = (int)*(short *)(iVar6 + 10);
      sVar12 = *(short *)(iVar6 + 0xe);
      iVar5 = iStack_28 - iVar13;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x10) {
        iVar5 = sVar12 - iVar7;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 0x10) {
          func_080200C4(param_1,0xa9);
          goto LAB_08020eea;
        }
      }
      if (uVar11 == 0) {
LAB_08020e90:
        uVar8 = func_080ABC40(iVar13,iVar7,iStack_28,(int)sVar12,&iStack_108,
                              *(undefined1 *)(param_1 + 8));
        func_080211E4(param_1,2,uVar8);
        func_08038398(iStack_34,*(undefined2 *)((int)param_1 + 0x22),*(undefined1 *)(param_1 + 8));
        iVar5 = func_080AB788(0x1e);
        uVar11 = iVar5 + 1;
        *(undefined2 *)(iVar9 + 0x28) = (undefined2)iStack_28;
        *(short *)(iVar9 + 0x2a) = sVar12;
      }
      else {
        iVar5 = *(short *)(iVar9 + 0x28) - iVar13;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 0x10) {
          iVar5 = *(short *)(iVar9 + 0x2a) - iVar7;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < 0x10) goto LAB_08020e90;
        }
      }
LAB_08020edc:
      *(short *)(iVar9 + 0x24) = (short)uVar14;
      *(short *)(iVar9 + 0x26) = (short)uVar11;
      goto SUB_080210a0;
    }
LAB_08020eea:
    func_080212C0(param_1);
    uStack_50 = (uStack_50 & _DAT_08020f04 | 0xb4) & _DAT_08020f08;
    break;
  case 0x8020f0c:
    uVar14 = (uint)*(ushort *)(iVar9 + 0x24);
    if (uVar14 != 0) {
      uVar14 = uVar14 - 1;
    }
    if (*pcStack_24 != '\0') {
      *(short *)(iVar9 + 0x24) = (short)uVar14;
      goto SUB_080210a0;
    }
    iVar5 = func_0x080d3914(piStack_44,0x2d,*(undefined4 *)(*piStack_44 + 0x40));
    if ((iVar5 == 0) || (*(ushort *)(iVar5 + 4) != uStack_40)) {
      uStack_48 = (uStack_48 & _DAT_08021104 | 0xb4) & _DAT_08021108;
      func_0x0809bb48(iVar9);
      uVar8 = func_08021264(param_1);
      func_080211E4(param_1,uVar8,*(undefined1 *)(param_1 + 8));
      goto SUB_080210a0;
    }
    iVar7 = (int)*(short *)((int)param_1 + 10);
    if (*(char *)(iVar9 + 0x26) == '\0') {
      iVar6 = *(short *)(iVar5 + 10) - iVar7;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar6 < 0x10) {
        iVar5 = (int)*(short *)(iVar5 + 0xe) - (int)*(short *)((int)param_1 + 0xe);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 0x10) {
          func_080200C4(param_1,0xd2);
          func_080211E4(param_1,0xb,*(undefined1 *)(param_1 + 8));
          *(undefined1 *)(iVar9 + 0x26) = 1;
          *(undefined2 *)(iVar9 + 0x24) = 0x24;
          goto SUB_080210a0;
        }
      }
      if (uVar14 == 0) {
        uVar8 = func_080ABC40(iVar7);
        func_080211E4(param_1,2,uVar8);
        iVar5 = func_080AB788(0x1e);
        uVar14 = iVar5 + 1;
      }
      *(undefined2 *)(iVar9 + 0x24) = (short)uVar14;
      goto SUB_080210a0;
    }
    if (uVar14 == 0) {
      iVar7 = *(short *)(iVar5 + 10) - iVar7;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x10) {
        iVar7 = (int)*(short *)(iVar5 + 0xe) - (int)*(short *)((int)param_1 + 0xe);
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if ((iVar7 < 0x10) &&
           (cVar4 = func_0x080d3910(iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x44)),
           cVar4 != '\0')) {
          func_0x080d3910(iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x80));
        }
      }
      uVar14 = func_080AB788(0xfb);
      iVar5 = func_0x0809b374(iVar9);
      if (uVar14 < 0xfbU - iVar5) {
        uVar14 = func_080AB788(0xb4);
        uStack_4c = (uStack_4c & _DAT_08020fec | uVar14 & 0xffff) & _DAT_08020ff0;
        break;
      }
      *(undefined1 *)(iVar9 + 0x26) = 0;
      iVar5 = func_080AB788(0x1e);
      uVar14 = iVar5 + 1;
    }
    *(undefined2 *)(iVar9 + 0x24) = (short)uVar14;
    goto SUB_080210a0;
  }
  func_0x0809bb48(iVar9);
LAB_08020fd6:
  uVar8 = func_08021264(param_1);
  func_080211E4(param_1,uVar8,*(undefined1 *)(param_1 + 8));
SUB_080210a0:
  if (((param_1[6] != 0) || (param_1[7] != 0)) &&
     ((uStack_40 == 2 ||
      (uVar14 = func_0x080d3910(piStack_44,*(undefined4 *)(*piStack_44 + 0x14)), uStack_40 == uVar14
      )))) {
    piVar10 = &iStack_108;
    if (*pcStack_24 != '\0') {
      piVar10 = (int *)0x0;
    }
    func_08020170(param_1,piVar10);
  }
  if (((*(int *)(iVar9 + 0x20) == 5) && (iStack_34 != 0)) &&
     (*(ushort *)(iStack_34 + 4) == uStack_40)) {
    *(undefined4 *)(iStack_34 + 8) = param_1[2];
    *(undefined4 *)(iStack_34 + 0xc) = param_1[3];
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802110C @ 0x0802110C
// =============================================================================
undefined8 func_0802110C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = _DAT_0802112c;
  param_2 = param_2 * 2;
  iVar2 = func_0809BB34(*(undefined4 *)(param_1 + 0x34));
  if (iVar2 == 1) {
    param_2 = param_2 + 0x1a;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(param_2 + iVar1));
}

// =============================================================================
// Function: func_08021130 @ 0x08021130
// =============================================================================
undefined8 func_08021130(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (0xc < param_2) goto case_0802117C;
  switch(*(uint *)(PTR_case_08021148_08021144 + param_2 * 4) & 0xfffffffe) {
  case 0x8021148:
  case 0x802117c:
case_0802117C:
    uVar2 = 0;
    break;
  case 0x8021180:
    uVar2 = 0x8000;
    break;
  case 0x8021186:
    uVar2 = 0x10000;
    break;
  case 0x802118c:
    func_0x080d3914(&uStack_18,param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
    uStack_10 = uStack_18;
    uVar2 = uStack_10;
    uStack_c = uStack_14;
    uVar1 = uStack_c;
    iVar3 = 0x10;
    if (*(byte *)(param_1 + 0x20) < 2) {
      uStack_c._2_2_ = (short)((uint)uStack_14 >> 0x10);
      uStack_10._2_2_ = (short)((uint)uStack_18 >> 0x10);
      uStack_c._0_2_ = uStack_c._2_2_;
      uStack_10._0_2_ = uStack_10._2_2_;
LAB_080211cc:
      iVar3 = ((int)(short)uStack_c - (int)(short)uStack_10) + 0x10;
    }
    else if (*(byte *)(param_1 + 0x20) < 4) {
      uStack_c._0_2_ = (short)uStack_14;
      uStack_10._0_2_ = (short)uStack_18;
      goto LAB_080211cc;
    }
    uStack_10 = uVar2;
    uStack_c = uVar1;
    uVar2 = func_0x080d0ec8(iVar3 << 0x10,0x1e);
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_080211E4 @ 0x080211E4
// =============================================================================
undefined4 func_080211E4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((param_2 != 0xc) && (*(char *)(param_1 + 0x40) != '\0')) {
    param_2 = 0xc;
  }
  uVar1 = func_0802110C(param_1,param_2);
  if (*(ushort *)(param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  if (*(byte *)(param_1 + 0x20) != param_3) {
    func_08032198(param_1,param_3);
  }
  uVar2 = func_08021130(param_1,param_2);
  func_08020080(param_1,uVar2);
  if (param_2 != *(byte *)(param_1 + 0x41)) {
    iVar3 = -1;
    if (param_2 == 8) {
      iVar3 = 8;
    }
    if (iVar3 < 0) {
      func_080323C8(param_1);
    }
    else {
      func_08032384(param_1,iVar3,1);
    }
  }
  *(byte *)(param_1 + 0x41) = (byte)param_2;
  return in_lr;
}

// =============================================================================
// Function: func_08021264 @ 0x08021264
// =============================================================================
undefined8 func_08021264(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x34) + 0x20);
  if (6 < uVar1) goto case_0802129C;
  switch(*(uint *)(PTR_case_08021280_0802127c + uVar1 * 4) & 0xfffffffe) {
  case 0x8021280:
  case 0x802129c:
case_0802129C:
    uVar1 = 3;
    break;
  case 0x80212a0:
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x34) + 0x26);
    break;
  case 0x80212a8:
    uVar1 = 2;
    break;
  case 0x80212ac:
    uVar1 = 2;
    if (*(char *)(*(int *)(param_1 + 0x34) + 0x26) != '\0') {
      uVar1 = 0xb;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080212C0 @ 0x080212C0
// =============================================================================
undefined4 func_080212C0(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [8];
  
  iVar3 = func_0x080d3914((int *)*param_1,0x4b,*(undefined4 *)(*(int *)*param_1 + 0x40));
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x26) != '\0')) {
    iVar4 = param_1[2];
    iVar7 = param_1[3];
    iVar10 = 8;
    uVar9 = (uint)*(ushort *)(param_1 + 1);
    piVar8 = (int *)*param_1;
    uVar5 = func_0x080d3910(piVar8,*(undefined4 *)(*piVar8 + 0x14));
    if ((uVar9 != uVar5) && (uVar9 != 2)) {
      iVar10 = 0;
    }
    func_0x080d3918(auStack_34,piVar8,uVar9,*(undefined4 *)(*piVar8 + 0x34));
    do {
      iVar6 = iVar10 * 0x10000;
      bVar1 = *(byte *)(param_1 + 8);
      if (bVar1 == 1) {
        *(int *)(iVar3 + 8) = iVar4;
        iVar6 = iVar7 + iVar10 * -0x10000;
LAB_08021380:
        *(int *)(iVar3 + 0xc) = iVar6;
      }
      else {
        if (1 < bVar1) {
          if (bVar1 == 2) {
            iVar6 = iVar10 * -0x10000;
          }
          else if (bVar1 != 3) goto LAB_08021382;
          *(int *)(iVar3 + 8) = iVar4 + iVar6;
          iVar6 = iVar7;
          goto LAB_08021380;
        }
        if (bVar1 == 0) {
          *(int *)(iVar3 + 8) = iVar4;
          iVar6 = iVar7 + iVar6;
          goto LAB_08021380;
        }
      }
LAB_08021382:
      iVar10 = iVar10 + -1;
      if (iVar10 < 0) break;
      func_0x080d3914(auStack_28,iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0xc));
      cVar2 = func_080AC070(auStack_34,auStack_28);
    } while (cVar2 != '\0');
    func_080384FC(iVar3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080213B0 @ 0x080213B0
// =============================================================================
undefined4 func_080213B0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint uStack_c;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 5) {
      func_080212C0(param_1);
    }
    iVar1 = func_080AB788(0x78);
    uStack_c = ((uStack_c & _DAT_08021434 | iVar1 + 0xf0U & 0xffff) & _DAT_08021438 | 0x3c0000) &
               _DAT_0802143c & _DAT_08021440;
    func_0x0809bb64(*(undefined4 *)(param_1 + 0x34),&uStack_c);
    uVar2 = func_08021264(param_1);
    func_080211E4(param_1,uVar2,*(undefined1 *)(param_1 + 0x20));
    func_0809B2DC(*(undefined4 *)(param_1 + 0x34),10);
    func_08032384(param_1,2,0);
    func_080200C4(param_1,0xaa);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08021444 @ 0x08021444
// =============================================================================
undefined4 func_08021444(int param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  uint auStack_20 [2];
  
  if (((*param_2 & 0x3ff) == *(ushort *)(param_1 + 4)) &&
     (*(int *)(*(int *)(param_1 + 0x34) + 0x20) != 5)) {
    iVar1 = func_0x0809b228(*(int *)(param_1 + 0x34));
    iVar2 = Entity_InitWorldActors();
    iVar5 = (int)(short)((ushort)((param_2[1] & _DAT_08021518) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar4 = (int)(short)((ushort)((param_2[2] & _DAT_08021518) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar5 * iVar5 + iVar4 * iVar4 <= iVar2 * iVar2) {
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 5) {
        func_080212C0(param_1);
      }
      iVar1 = func_0x080d0eda(iVar1 * 0x3c0,0xfb);
      auStack_20[0] = iVar1 + 0x1e0U & 0xffff;
      func_0x0809bb54(*(undefined4 *)(param_1 + 0x34),auStack_20);
      if (*(char *)(param_1 + 0x40) == '\0') {
        uVar3 = func_08021264(param_1);
        func_080211E4(param_1,uVar3,*(undefined1 *)(param_1 + 0x20));
      }
      func_0x0809b3bc(*(undefined4 *)(param_1 + 0x34));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802151C @ 0x0802151C
// =============================================================================
undefined4 func_0802151C(int param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  uint auStack_20 [2];
  
  iVar1 = func_0809BB34(*(undefined4 *)(param_1 + 0x34));
  if ((iVar1 == 1) && ((*param_2 & 0x3ff) == *(ushort *)(param_1 + 4))) {
    iVar1 = func_0x0809b374(*(undefined4 *)(param_1 + 0x34));
    iVar2 = Entity_InitWorldActors();
    iVar5 = (int)(short)((ushort)((param_2[1] & _DAT_080215f8) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar4 = (int)(short)((ushort)((param_2[2] & _DAT_080215f8) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar5 * iVar5 + iVar4 * iVar4 <= iVar2 * iVar2) {
      func_080200C4(param_1,0xa9);
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 5) {
        func_080212C0(param_1);
      }
      iVar1 = func_0x080d0eda(iVar1 * 0x3c0,0xfb);
      auStack_20[0] = iVar1 + 0x1e0U & 0xffff;
      func_0x0809bb70(*(undefined4 *)(param_1 + 0x34),auStack_20);
      if (*(char *)(param_1 + 0x40) == '\0') {
        uVar3 = func_08021264(param_1);
        func_080211E4(param_1,uVar3,*(undefined1 *)(param_1 + 0x20));
      }
      func_0x0809b3b0(*(undefined4 *)(param_1 + 0x34));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080215FC @ 0x080215FC
// =============================================================================
void func_080215FC(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -7;
  param_1[1] = sVar2 + -4;
  param_1[2] = sVar1 + 7;
  param_1[3] = sVar2 + 5;
  return;
}

// =============================================================================
// Function: func_08021620 @ 0x08021620
// =============================================================================
undefined8 func_08021620(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1 == 0) || (param_1 != 1)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 8;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08021634 @ 0x08021634
// =============================================================================
undefined8 func_08021634(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = func_0809BB34(*(undefined4 *)(param_1 + 0x34));
  uVar2 = func_080005D4(0x8c);
  uVar3 = func_0x0802161c(uVar1);
  uVar1 = func_08021620(uVar1);
  iVar4 = func_080324BC(uVar2,param_1,2,6,uVar3,uVar1,0,0);
  if (*(char *)(param_1 + 0x41) == '\b') {
    func_0805E860(iVar4 + 0x70,8);
    *(undefined1 *)(iVar4 + 0x84) = 1;
    *(undefined1 *)(iVar4 + 0x86) = 0;
    *(undefined1 *)(iVar4 + 0x87) = 1;
    *(byte *)(iVar4 + 0x8a) = *(byte *)(iVar4 + 0x8a) & 0xfc | 2;
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_080216BC @ 0x080216BC
// =============================================================================
undefined8 func_080216BC(int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  func_0809B114(auStack_18,param_3);
  func_08020038(param_1,param_2,auStack_18,_DAT_08021734);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08021738;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  iVar2 = func_0x080d3914(param_2,0,*(undefined4 *)(*param_2 + 0x40));
  bVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x40));
    bVar1 = (byte)(-(uVar3 & 0xff) >> 0x1f);
  }
  *(byte *)(param_1 + 0x3e) = bVar1;
  uVar4 = func_080220D4(param_1);
  func_08022048(param_1,uVar4,*(undefined1 *)(param_1 + 0x20));
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080217A8 @ 0x080217A8
// =============================================================================
undefined4 func_080217A8(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  uStack_c = (uStack_c & _DAT_080217e4 | param_2 & 0xffff) & _DAT_080217e8;
  func_0x0809bc24(*(undefined4 *)(param_1 + 0x34),&uStack_c);
  uVar1 = func_080220D4(param_1);
  func_08022048(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_080217EC @ 0x080217EC
// =============================================================================
undefined4 func_080217EC(undefined4 *param_1)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  short *psVar15;
  uint uVar16;
  int iVar17;
  undefined4 in_lr;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  char cStack_d4;
  char cStack_d3;
  char cStack_d2;
  char cStack_d1;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  uint uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  char *pcStack_24;
  
  piVar7 = (int *)*param_1;
  if (*(char *)((int)param_1 + 0x3e) != '\0') goto LAB_08021e6a;
  iStack_3c = param_1[0xd];
  iVar13 = func_0809BC10(iStack_3c);
  uStack_38 = (uint)*(ushort *)(param_1 + 1);
  func_0x080d3918(&uStack_f0,piVar7,uStack_38,*(undefined4 *)(*piVar7 + 0x34));
  func_0x080d3914(&uStack_7c,param_1,*(undefined4 *)(param_1[5] + 0xc));
  bVar3 = false;
  if (((int)uStack_38 < 9) && (iVar13 == 1)) {
    bVar3 = true;
  }
  if (bVar3) {
    iStack_34 = ((int)(short)uStack_78 - (int)(short)uStack_7c) + 0x10;
    iStack_30 = ((int)uStack_78._2_2_ - (int)uStack_7c._2_2_) + 0x10;
  }
  else {
    iStack_34 = 0;
    iStack_30 = 0;
  }
  iStack_e4 = 0x21;
  iStack_e0 = -0x21;
  iStack_dc = -0x21;
  iStack_d8 = 0x21;
  uStack_d0 = uStack_f0;
  uStack_cc = uStack_ec;
  uStack_c8 = uStack_e8;
  uStack_c4 = uStack_7c;
  uStack_c0 = uStack_78;
  iStack_bc = 0x20;
  iStack_b8 = iStack_34;
  iStack_b4 = iStack_30;
  iVar8 = func_0x080d3914(piVar7,0,*(undefined4 *)(*piVar7 + 0x40));
  iVar9 = func_0x080d3914(piVar7,0x4a,*(undefined4 *)(*piVar7 + 0x40));
  pcStack_24 = (char *)((int)param_1 + 0x3d);
  if ((*pcStack_24 == '\0') || (*(short *)(param_1 + 9) != 0)) {
    if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_38)) {
      func_0x080d3914(auStack_5c,iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0xc));
      func_080ABA90(&iStack_e4,auStack_5c,1);
    }
    if ((iVar9 != 0) && (*(ushort *)(iVar9 + 4) == uStack_38)) {
      func_0x080d3914(auStack_54,iVar9,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc));
      func_080ABA90(&iStack_e4,auStack_54,0);
    }
    if ((*pcStack_24 == '\0') && (iVar13 == 1)) {
      iVar13 = (int)*(short *)((int)param_1 + 10);
      iVar9 = (int)*(short *)((int)param_1 + 0xe);
      iVar12 = param_1[6];
      iVar17 = param_1[7];
      iStack_2c = iVar13;
      iStack_28 = iVar9;
      if (0 < iVar17) {
        if (iStack_bc < iStack_e4) {
          func_080AB85C(&iStack_e4);
        }
        if (iStack_e4 == 0) {
          if (iStack_bc < 0) {
            func_080AB85C(&iStack_e4);
          }
          if (cStack_d4 != '\0') {
            iVar9 = iVar9 + iStack_30;
          }
        }
      }
      if (iVar17 < 0) {
        if (iStack_e0 + iStack_bc < 0 != SCARRY4(iStack_e0,iStack_bc)) {
          func_080AB8D0(&iStack_e4);
        }
        if (iStack_e0 == 0) {
          if (iStack_bc < 0) {
            func_080AB8D0(&iStack_e4);
          }
          if (cStack_d3 != '\0') {
            iVar9 = iVar9 - iStack_30;
          }
        }
      }
      if (iVar12 < 0) {
        if (iStack_dc + iStack_bc < 0 != SCARRY4(iStack_dc,iStack_bc)) {
          func_080AB948(&iStack_e4);
        }
        if (iStack_dc == 0) {
          if (iStack_bc < 0) {
            func_080AB948(&iStack_e4);
          }
          if (cStack_d2 != '\0') {
            iVar13 = iVar13 - iStack_34;
          }
        }
      }
      if (0 < iVar12) {
        if (iStack_bc < iStack_d8) {
          func_080AB9C4(&iStack_e4);
        }
        if (iStack_d8 == 0) {
          if (iStack_bc < 0) {
            func_080AB9C4(&iStack_e4);
          }
          if (cStack_d1 != '\0') {
            iVar13 = iVar13 + iStack_34;
          }
        }
      }
      if ((iVar13 != iStack_2c) || (iVar9 != iStack_28)) {
        *(short *)(param_1 + 0xe) = (short)iVar13;
        *(short *)((int)param_1 + 0x3a) = (short)iVar9;
        *pcStack_24 = '\x01';
        func_08022048(param_1,6,*(undefined1 *)(param_1 + 8));
      }
    }
    iVar13 = iStack_3c;
    iVar9 = *(int *)(iStack_3c + 0x20);
    if (iVar9 == 1) {
      puVar14 = (undefined2 *)(iStack_3c + 0x24);
      uVar16 = (uint)*(ushort *)(iStack_3c + 0x24);
      if (uVar16 != 0) {
        uVar16 = uVar16 - 1;
      }
      uVar11 = (uint)*(ushort *)(iStack_3c + 0x26);
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
      }
      if (((uVar16 == 0) || (iVar8 == 0)) || (*(ushort *)(iVar8 + 4) != uStack_38)) {
LAB_08021d46:
        uStack_4c = (uStack_4c & _DAT_08021d74 | 0xb4) & _DAT_08021d78;
        func_0x0809bc24(iStack_3c);
        goto LAB_08021d5e;
      }
      iVar12 = (int)*(short *)((int)param_1 + 10);
      iVar9 = (int)*(short *)((int)param_1 + 0xe);
      sVar6 = *(short *)(iVar8 + 10);
      sVar2 = *(short *)(iVar8 + 0xe);
      iVar8 = sVar6 - iVar12;
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if (iVar8 < 0x10) {
        iVar8 = sVar2 - iVar9;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        if (iVar8 < 0x10) goto LAB_08021d46;
      }
      if (*pcStack_24 == '\0') {
        if (uVar11 == 0) {
LAB_08021d10:
          uVar10 = func_080ABC40(iVar12,iVar9,(int)sVar6,(int)sVar2,&iStack_e4,
                                 *(undefined1 *)(param_1 + 8));
          func_08022048(param_1,2,uVar10);
          iVar8 = func_080AB788(0x1e);
          uVar11 = iVar8 + 1;
          *(short *)(iVar13 + 0x28) = sVar6;
          *(short *)(iVar13 + 0x2a) = sVar2;
        }
        else {
          iVar8 = *(short *)(iStack_3c + 0x28) - iVar12;
          if (iVar8 < 0) {
            iVar8 = -iVar8;
          }
          if (iVar8 < 0x10) {
            iVar8 = *(short *)(iStack_3c + 0x2a) - iVar9;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if (iVar8 < 0x10) goto LAB_08021d10;
          }
        }
      }
      *puVar14 = (short)uVar16;
      *(short *)(iVar13 + 0x26) = (short)uVar11;
    }
    else if (iVar9 < 2) {
      if (iVar9 == 0) {
        psVar15 = (short *)(iStack_3c + 0x24);
        sVar6 = *(short *)(iStack_3c + 0x24);
        if (sVar6 == 0) {
          sVar6 = 0;
          if ((*pcStack_24 == '\0') && (cVar5 = func_08020130(param_1), cVar5 != '\0')) {
            iVar8 = func_0x080d3910(piVar7,*(undefined4 *)(*piVar7 + 0x144));
            bVar1 = *(byte *)(iVar8 + 10);
            iVar8 = func_0809BC10(iStack_3c);
            iVar9 = (uint)(0xe < (bVar1 & 0x1f) - 6) * 0x38 + iVar8 * 0x1c + _DAT_08021c84;
            iVar8 = func_080AB82C(iVar9,7);
            iVar9 = iVar9 + iVar8 * 4;
            sVar6 = func_080AB788((uint)*(byte *)(iVar9 + 2) * 0x3c);
            sVar6 = (ushort)*(byte *)(iVar9 + 1) * 0x3c + sVar6;
            uVar16 = (uint)*(byte *)(param_1 + 8);
            iVar9 = func_080AB788(4);
            if ((iVar9 != 0) && (iVar9 != 3)) {
              uVar16 = func_080AB7A4(uVar16);
            }
            *(char *)(iVar13 + 0x26) = (char)iVar8;
            func_08022048(param_1,iVar8,uVar16);
          }
        }
        else {
          iVar13 = param_1[6];
          iVar8 = param_1[7];
          bVar3 = false;
          if (iVar13 < 0) {
            if (iStack_dc + iStack_bc < 0 != SCARRY4(iStack_dc,iStack_bc)) {
              func_080AB948(&iStack_e4);
            }
            if (iStack_dc < -0xf) goto LAB_08021b80;
LAB_08021bd4:
            bVar3 = true;
          }
          else {
LAB_08021b80:
            if (0 < iVar13) {
              if (iStack_bc < iStack_d8) {
                func_080AB9C4(&iStack_e4);
              }
              if (iStack_d8 < 0x10) goto LAB_08021bd4;
            }
            if (iVar8 < 0) {
              if (iStack_e0 + iStack_bc < 0 != SCARRY4(iStack_e0,iStack_bc)) {
                func_080AB8D0(&iStack_e4);
              }
              if (-0x10 < iStack_e0) goto LAB_08021bd4;
            }
            if (0 < iVar8) {
              if (iStack_bc < iStack_e4) {
                func_080AB85C(&iStack_e4);
              }
              if (iStack_e4 < 0x10) goto LAB_08021bd4;
            }
          }
          if (bVar3) {
            sVar6 = 0;
          }
          else {
            sVar6 = sVar6 + -1;
          }
        }
        *psVar15 = sVar6;
      }
    }
    else if (iVar9 == 2) {
      psVar15 = (short *)(iStack_3c + 0x24);
      cVar5 = *(char *)(param_1 + 8);
      uStack_48 = 0x78;
      uStack_46 = 0xd0;
      uStack_44 = 0x2f0;
      uStack_42 = 0x84;
      if ((uStack_38 == 9) && (cVar5 == '\0')) {
        iVar13 = 0xd0 - (*(short *)((int)param_1 + 0xe) + -8);
        if (iVar13 < 0) {
          iVar13 = -iVar13;
        }
        if (iVar13 < 8) {
          func_0801FE78(param_1,2,0x2f0,0x94);
        }
      }
      else if ((uStack_38 == 2) && (cVar5 == '\x01')) {
        iVar13 = 0x2f0 - *(short *)((int)param_1 + 10);
        if (iVar13 < 0) {
          iVar13 = -iVar13;
        }
        if (iVar13 < 0x10) {
          iVar13 = 0x84 - (*(short *)((int)param_1 + 0xe) + 8);
          if (iVar13 < 0) {
            iVar13 = -iVar13;
          }
          if (iVar13 < 8) {
            func_0801FE78(param_1,9,0x78,0xb0);
          }
        }
      }
      sVar6 = *psVar15;
      if (sVar6 == 0) {
        uStack_40 = (uStack_40 & _DAT_08021e7c | 0xb4) & _DAT_08021e80;
        func_0x0809bc24(iStack_3c);
        uVar10 = func_080220D4(param_1);
        func_08022048(param_1,uVar10,*(char *)(param_1 + 8));
      }
      else {
        *psVar15 = sVar6 + -1;
      }
    }
  }
  else {
    *pcStack_24 = '\0';
    param_1[2] = (int)*(short *)(param_1 + 0xe) << 0x10;
    param_1[3] = (int)*(short *)((int)param_1 + 0x3a) << 0x10;
    func_0x080d3914(&uStack_74,param_1,*(undefined4 *)(param_1[5] + 0xc));
    uStack_7c = uStack_74;
    uVar10 = uStack_7c;
    uStack_78 = uStack_70;
    uVar4 = uStack_78;
    uStack_78._0_2_ = (short)uStack_70;
    uStack_7c._0_2_ = (short)uStack_74;
    iStack_84 = ((int)(short)uStack_78 - (int)(short)uStack_7c) + 0x10;
    uStack_78._2_2_ = (short)((uint)uStack_70 >> 0x10);
    uStack_7c._2_2_ = (short)((uint)uStack_74 >> 0x10);
    iStack_80 = ((int)uStack_78._2_2_ - (int)uStack_7c._2_2_) + 0x10;
    uStack_b0 = 0x21;
    uStack_ac = 0xffffffdf;
    uStack_a8 = 0xffffffdf;
    uStack_a4 = 0x21;
    uStack_9c = uStack_f0;
    uStack_98 = uStack_ec;
    uStack_94 = uStack_e8;
    uStack_90 = uStack_74;
    uStack_8c = uStack_70;
    uStack_88 = 0x20;
    uStack_7c = uVar10;
    uStack_78 = uVar4;
    memcpy(&iStack_e4,&uStack_b0,0x34);
    if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_38)) {
      func_0x080d3914(auStack_6c,iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0xc));
      func_080ABA90(&iStack_e4,auStack_6c,1);
    }
    if ((iVar9 != 0) && (*(ushort *)(iVar9 + 4) == uStack_38)) {
      func_0x080d3914(auStack_64,iVar9,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc));
      func_080ABA90(&iStack_e4,auStack_64,0);
    }
LAB_08021d5e:
    uVar10 = func_080220D4(param_1);
    func_08022048(param_1,uVar10,*(undefined1 *)(param_1 + 8));
  }
  piVar7 = &iStack_e4;
  if (*pcStack_24 != '\0') {
    piVar7 = (int *)0x0;
  }
  func_08020170(param_1,piVar7);
LAB_08021e6a:
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(short *)(param_1 + 9) == 0) {
    sVar6 = *(short *)((int)param_1 + 0x26);
  }
  else {
    sVar6 = *(short *)(param_1 + 9) + -1;
  }
  *(short *)(param_1 + 9) = sVar6;
  iVar13 = param_1[4];
  if (iVar13 != 0) {
    func_0x080d3910(iVar13,*(undefined4 *)(*(int *)(iVar13 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08021EA8 @ 0x08021EA8
// =============================================================================
undefined4 func_08021EA8(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)((int)param_1 + 0x3e) != '\0') {
    iVar2 = func_0x080d3914((int *)*param_1,0,*(undefined4 *)(*(int *)*param_1 + 0x40));
    cVar1 = func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xa0));
    if (cVar1 != '\0') {
      return in_lr;
    }
  }
  func_0803242C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08021EE0 @ 0x08021EE0
// =============================================================================
undefined4 func_08021EE0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint uStack_10;
  
  iVar1 = func_0809BC10(*(undefined4 *)(param_1 + 0x34));
  if (iVar1 == 1) {
    uStack_10 = (uStack_10 & _DAT_08021f34 | 0x78) & _DAT_08021f38;
    func_0x0809bc24(*(undefined4 *)(param_1 + 0x34),&uStack_10);
    uVar2 = func_080220D4(param_1);
    func_08022048(param_1,uVar2,*(undefined1 *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x3e) = 1;
    func_0x0809b3b0(*(undefined4 *)(param_1 + 0x34));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08021F3C @ 0x08021F3C
// =============================================================================
undefined4 func_08021F3C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  *(undefined1 *)(param_1 + 0x3e) = 0;
  uStack_c = (uStack_c & _DAT_08021f80 | 0x78) & _DAT_08021f84;
  func_0x0809bc24(*(undefined4 *)(param_1 + 0x34),&uStack_c);
  uVar1 = func_080220D4(param_1);
  func_08022048(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_08021F88 @ 0x08021F88
// =============================================================================
undefined8 func_08021F88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = _DAT_08021fa8;
  iVar2 = func_0809BC10(*(undefined4 *)(param_1 + 0x34));
  return CONCAT44(in_lr,(uint)*(ushort *)((iVar2 * 7 + param_2) * 2 + iVar1));
}

// =============================================================================
// Function: func_08021FAC @ 0x08021FAC
// =============================================================================
undefined8 func_08021FAC(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (6 < param_2) goto case_08021FE0;
  switch(*(uint *)(param_2 * 4 + _DAT_08021fc0) & 0xfffffffe) {
  case 0x8021fc4:
  case 0x8021fe0:
case_08021FE0:
    uVar2 = 0;
    break;
  case 0x8021fe4:
    uVar2 = 0x8000;
    break;
  case 0x8021fea:
    uVar2 = 0x10000;
    break;
  case 0x8021ff0:
    func_0x080d3914(&uStack_18,param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
    uStack_10 = uStack_18;
    uVar2 = uStack_10;
    uStack_c = uStack_14;
    uVar1 = uStack_c;
    iVar3 = 0x10;
    if (*(byte *)(param_1 + 0x20) < 2) {
      uStack_c._2_2_ = (short)((uint)uStack_14 >> 0x10);
      uStack_10._2_2_ = (short)((uint)uStack_18 >> 0x10);
      uStack_c._0_2_ = uStack_c._2_2_;
      uStack_10._0_2_ = uStack_10._2_2_;
LAB_08022030:
      iVar3 = ((int)(short)uStack_c - (int)(short)uStack_10) + 0x10;
    }
    else if (*(byte *)(param_1 + 0x20) < 4) {
      uStack_c._0_2_ = (short)uStack_14;
      uStack_10._0_2_ = (short)uStack_18;
      goto LAB_08022030;
    }
    uStack_10 = uVar2;
    uStack_c = uVar1;
    uVar2 = func_0x080d0ec8(iVar3 << 0x10,0xc);
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08022048 @ 0x08022048
// =============================================================================
undefined4 func_08022048(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((param_2 != 6) && (*(char *)(param_1 + 0x3d) != '\0')) {
    param_2 = 6;
  }
  uVar1 = func_08021F88(param_1,param_2);
  if (*(ushort *)(param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  if (*(byte *)(param_1 + 0x20) != param_3) {
    func_08032198(param_1,param_3);
  }
  uVar2 = func_08021FAC(param_1,param_2);
  func_08020080(param_1,uVar2);
  if ((param_2 != *(byte *)(param_1 + 0x3c)) && (*(char *)(param_1 + 0x3e) == '\0')) {
    iVar3 = -1;
    if (param_2 == 4) {
      iVar3 = 8;
    }
    if (iVar3 < 0) {
      func_080323C8(param_1);
    }
    else {
      func_08032384(param_1,iVar3,1);
    }
  }
  *(byte *)(param_1 + 0x3c) = (byte)param_2;
  return in_lr;
}

// =============================================================================
// Function: func_080220D4 @ 0x080220D4
// =============================================================================
undefined8 func_080220D4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x20);
  if (iVar2 == 1) {
    uVar1 = 2;
  }
  else {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x34) + 0x26);
        goto LAB_080220fc;
      }
    }
    else if (iVar2 == 2) {
      uVar1 = 1;
      goto LAB_080220fc;
    }
    uVar1 = 0;
  }
LAB_080220fc:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08022100 @ 0x08022100
// =============================================================================
undefined4 func_08022100(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x20) == 2) {
    uStack_c = (uStack_c & _DAT_0802214c | 0xb4) & _DAT_08022150;
    func_0x0809bc24(*(int *)(param_1 + 0x34),&uStack_c);
    if (*(char *)(param_1 + 0x3d) == '\0') {
      uVar1 = func_080220D4(param_1);
      func_08022048(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08022154 @ 0x08022154
// =============================================================================
ulonglong func_08022154(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0809b230(*(undefined4 *)(param_1 + 0x34));
  return CONCAT44(in_lr,uVar1) ^ 1;
}

// =============================================================================
// Function: func_08022164 @ 0x08022164
// =============================================================================
undefined4 func_08022164(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = func_0x0809b230(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    func_0809B2A8(*(undefined4 *)(param_1 + 0x34),1);
    func_0809B278(*(undefined4 *)(param_1 + 0x34));
  }
  func_08032384(param_1,1,0);
  func_080200C4(param_1,0xa7);
  return in_lr;
}

// =============================================================================
// Function: func_0802219C @ 0x0802219C
// =============================================================================
undefined4 func_0802219C(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_10;
  
  if (0x3b < param_3) {
    if (*(byte *)(param_1 + 0x20) != param_2) {
      func_08032198(param_1);
    }
    uStack_10 = uStack_10 & _DAT_080221ec | 0x3c;
    func_0x0809bc40(*(undefined4 *)(param_1 + 0x34),&uStack_10);
    if (*(char *)(param_1 + 0x3d) == '\0') {
      uVar1 = func_080220D4(param_1);
      func_08022048(param_1,uVar1,*(byte *)(param_1 + 0x20));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080221F0 @ 0x080221F0
// =============================================================================
undefined4 func_080221F0(int param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  uint auStack_1c [2];
  
  if ((*param_2 & 0x3ff) == *(ushort *)(param_1 + 4)) {
    func_0x0809b228(*(undefined4 *)(param_1 + 0x34));
    iVar1 = Entity_InitWorldActors();
    iVar4 = (int)(short)((ushort)((param_2[1] & _DAT_080222a4) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar3 = (int)(short)((ushort)((param_2[2] & _DAT_080222a4) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar4 * iVar4 + iVar3 * iVar3 <= iVar1 * iVar1) {
      iVar1 = func_0x0809b228(*(undefined4 *)(param_1 + 0x34));
      auStack_1c[0] = ((uint)(iVar1 * 0x3c0) >> 8) + 0x1e0 & 0xffff;
      func_0x0809bc30(*(undefined4 *)(param_1 + 0x34),auStack_1c);
      if (*(char *)(param_1 + 0x3d) == '\0') {
        uVar2 = func_080220D4(param_1);
        func_08022048(param_1,uVar2,*(undefined1 *)(param_1 + 0x20));
      }
      func_0x0809b3bc(*(undefined4 *)(param_1 + 0x34));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080222A8 @ 0x080222A8
// =============================================================================
undefined8 func_080222A8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = func_08022320(param_3);
  uVar2 = func_08022334(param_3);
  func_080324BC(param_1,param_2,5,0xd,uVar1,uVar2,0,0);
  *(undefined4 *)(param_1 + 4) = _DAT_080222f0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080222F4 @ 0x080222F4
// =============================================================================
undefined4 func_080222F4(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  uVar1 = func_08032900(*(undefined2 *)(iVar2 + 4),(int)*(short *)(iVar2 + 10),
                        (int)*(short *)(iVar2 + 0xe));
  *(undefined1 *)((int)param_1 + 0x8b) = uVar1;
  func_0x08032690(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08022320 @ 0x08022320
// =============================================================================
undefined8 func_08022320(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1 == 0) || (param_1 != 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08022334 @ 0x08022334
// =============================================================================
undefined8 func_08022334(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1 == 0) || (param_1 != 1)) {
    uVar1 = 0xe;
  }
  else {
    uVar1 = 0xf;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08022348 @ 0x08022348
// =============================================================================
undefined8 func_08022348(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = func_080005D4(0x8c);
  uVar2 = func_0809BC10(*(undefined4 *)(param_1 + 0x34));
  iVar3 = func_080222A8(uVar1,param_1,uVar2);
  if (*(char *)(param_1 + 0x3c) == '\x04') {
    func_0805E860(iVar3 + 0x70,8);
    *(undefined1 *)(iVar3 + 0x84) = 1;
    *(undefined1 *)(iVar3 + 0x86) = 0;
    *(undefined1 *)(iVar3 + 0x87) = 1;
    *(byte *)(iVar3 + 0x8a) = *(byte *)(iVar3 + 0x8a) & 0xfc | 2;
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_080223A8 @ 0x080223A8
// =============================================================================
undefined8 func_080223A8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  func_0809B114(auStack_18,param_3);
  func_08020038(param_1,param_2,auStack_18,0x720);
  *(undefined4 *)(param_1 + 0x14) = _DAT_080223ec;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  uVar1 = func_08022950(param_1);
  func_080228B4(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08022444 @ 0x08022444
// =============================================================================
undefined4 func_08022444(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  uStack_c = (uStack_c & _DAT_08022480 | param_2 & 0xffff) & _DAT_08022484;
  func_0x0809bd20(*(undefined4 *)(param_1 + 0x34),&uStack_c);
  uVar1 = func_08022950(param_1);
  func_080228B4(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_08022488 @ 0x08022488
// =============================================================================
undefined4 func_08022488(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  func_080224E4();
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(short *)(param_1 + 0x24) == 0) {
    sVar1 = *(short *)(param_1 + 0x26);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x24) + -1;
  }
  *(short *)(param_1 + 0x24) = sVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_080224BC @ 0x080224BC
// =============================================================================
undefined4 func_080224BC(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = func_08032370();
  if (cVar1 != '\0') {
    func_080224E4(param_1,param_2);
  }
  func_0803242C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080224E4 @ 0x080224E4
// =============================================================================
undefined4 func_080224E4(undefined4 *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 in_lr;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  uint uStack_34;
  uint uStack_30;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar13 = param_1[0xd];
  piVar4 = (int *)*param_1;
  uStack_30 = (uint)*(ushort *)(param_1 + 1);
  if ((uStack_30 == 2) && (*(char *)(param_2 + 4) != '\0')) {
    uVar5 = func_0x0809b51c(iVar13);
    func_0809B57C(iVar13,1);
    uVar6 = func_0x0809b51c(iVar13);
    if ((uVar5 < 0xb4) &&
       (((0xb3 < uVar6 &&
         (piVar7 = (int *)func_0x080d3910(piVar4,*(undefined4 *)(*piVar4 + 0x144)), *piVar7 != 0))
        && (cVar3 = func_0x0809b504(iVar13), cVar3 == '\0')))) {
      func_0x0809b638(iVar13);
    }
    if ((uVar5 < 0xf0) && (0xef < uVar6)) {
      func_0809BCF0(iVar13);
    }
    if (((uVar5 <= _DAT_08022670) && (_DAT_08022670 < uVar6)) &&
       (piVar7 = (int *)func_0x080d3910(piVar4,*(undefined4 *)(*piVar4 + 0x144)), *piVar7 == 0)) {
      cVar3 = func_0x0809b504(iVar13);
      if ((cVar3 != '\0') && (uVar5 = func_080AB788(100), uVar5 < 0x1e)) {
        func_0x0809b644(iVar13);
      }
      func_0809B2A8(iVar13,1);
    }
  }
  func_0x080d3918(&uStack_8c,piVar4,uStack_30,*(undefined4 *)(*piVar4 + 0x34));
  func_0x080d3914(&uStack_4c,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_28 = uStack_4c;
  uStack_24 = uStack_48;
  iStack_80 = 0x11;
  iStack_7c = -0x11;
  iStack_78 = -0x11;
  iStack_74 = 0x11;
  uStack_6c = uStack_8c;
  uStack_68 = uStack_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_4c;
  uStack_5c = uStack_48;
  iStack_58 = 0x10;
  uStack_54 = 0;
  uStack_50 = 0;
  iVar8 = func_0x080d3914(piVar4,0,*(undefined4 *)(*piVar4 + 0x40));
  iVar9 = func_0x080d3914(piVar4,0x4a,*(undefined4 *)(*piVar4 + 0x40));
  if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_30)) {
    func_0x080d3914(auStack_44,iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0xc));
    func_080ABA90(&iStack_80,auStack_44,0);
  }
  if ((iVar9 != 0) && (*(ushort *)(iVar9 + 4) == uStack_30)) {
    func_0x080d3914(auStack_3c,iVar9,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc));
    func_080ABA90(&iStack_80,auStack_3c,0);
  }
  if (*(int *)(iVar13 + 0x24) != 0) {
    if (*(int *)(iVar13 + 0x24) == 1) {
      puStack_2c = (undefined2 *)(iVar13 + 0x28);
      uVar5 = (uint)*(ushort *)(iVar13 + 0x28);
      if (uVar5 != 0) {
        uVar5 = uVar5 - 1;
      }
      uVar6 = (*(uint *)(iVar13 + 0x28) & 0x7fffff) >> 0x10;
      if (uVar6 != 0) {
        uVar6 = uVar6 - 1;
      }
      uVar12 = (uint)*(byte *)(iVar13 + 0x2b);
      if (uVar12 != 0) {
        uVar12 = uVar12 - 1;
      }
      if (uVar5 != 0) {
        if ((int)(*(uint *)(iVar13 + 0x28) * 0x100) < 0) {
          iVar8 = func_0x080d3914(piVar4,0x2d,*(undefined4 *)(*piVar4 + 0x40));
        }
        if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_30)) {
          if (uVar12 == 0) {
            uVar14 = 1;
            if (uVar6 != 0) {
              uVar14 = 4;
            }
            uVar10 = func_080ABE58((int)*(short *)((int)param_1 + 10),
                                   (int)*(short *)((int)param_1 + 0xe),(int)*(short *)(iVar8 + 10),
                                   (int)*(short *)(iVar8 + 0xe),&iStack_80,
                                   *(undefined1 *)(param_1 + 8));
            func_080228B4(param_1,uVar14,uVar10);
            iVar13 = func_080AB788(0x1e);
            uVar12 = iVar13 + 1;
          }
          *puStack_2c = (short)uVar5;
          *(byte *)(puStack_2c + 1) = *(byte *)(puStack_2c + 1) & 0x80 | (byte)uVar6 & 0x7f;
          *(char *)((int)puStack_2c + 3) = (char)uVar12;
          goto LAB_08022894;
        }
      }
      uStack_34 = (uStack_34 & _DAT_080228ac | 0xb4) & _DAT_080228b0;
      func_0x0809bd20(iVar13,&uStack_34);
      uVar14 = func_08022950(param_1);
      func_080228B4(param_1,uVar14,*(undefined1 *)(param_1 + 8));
    }
    goto LAB_08022894;
  }
  sVar11 = *(short *)(iVar13 + 0x28);
  if (sVar11 == 0) {
    cVar3 = func_08020130(param_1);
    sVar11 = 0;
    if (cVar3 != '\0') {
      iVar9 = func_0x080d3910(piVar4,*(undefined4 *)(*piVar4 + 0x144));
      bVar1 = *(byte *)(iVar9 + 10);
      iVar9 = func_0809BCAC(iVar13);
      uVar5 = func_0x0809b50c(iVar13);
      iVar8 = (uint)(0xe < (bVar1 & 0x1f) - 6) * 0x50 + iVar9 * 0x28 + _DAT_080227b0 +
              (uVar5 & 0xff) * 0x14;
      iVar9 = func_080AB82C(iVar8,5);
      iVar8 = iVar8 + iVar9 * 4;
      sVar11 = func_080AB788((uint)*(byte *)(iVar8 + 2) * 0x3c);
      sVar11 = (ushort)*(byte *)(iVar8 + 1) * 0x3c + sVar11;
      uVar5 = (uint)*(byte *)(param_1 + 8);
      iVar8 = func_080AB788(4);
      if ((iVar8 != 0) && (iVar8 != 3)) {
        uVar5 = func_080AB7A4(uVar5);
      }
      func_080228B4(param_1,iVar9,uVar5);
      *(char *)(iVar13 + 0x2a) = (char)iVar9;
    }
  }
  else {
    iVar9 = param_1[6];
    iVar8 = param_1[7];
    bVar2 = false;
    if (iVar9 < 0) {
      if (iStack_78 + iStack_58 < 0 != SCARRY4(iStack_78,iStack_58)) {
        func_080AB948(&iStack_80);
      }
      if (iStack_78 < -0xf) goto LAB_080226a4;
LAB_080226f8:
      bVar2 = true;
    }
    else {
LAB_080226a4:
      if (0 < iVar9) {
        if (iStack_58 < iStack_74) {
          func_080AB9C4(&iStack_80);
        }
        if (iStack_74 < 0x10) goto LAB_080226f8;
      }
      if (iVar8 < 0) {
        if (iStack_7c + iStack_58 < 0 != SCARRY4(iStack_7c,iStack_58)) {
          func_080AB8D0(&iStack_80);
        }
        if (-0x10 < iStack_7c) goto LAB_080226f8;
      }
      if (0 < iVar8) {
        if (iStack_58 < iStack_80) {
          func_080AB85C(&iStack_80);
        }
        if (iStack_80 < 0x10) goto LAB_080226f8;
      }
    }
    if (bVar2) {
      sVar11 = 0;
    }
    else {
      sVar11 = sVar11 + -1;
    }
  }
  *(short *)(iVar13 + 0x28) = sVar11;
LAB_08022894:
  func_08020170(param_1,&iStack_80);
  return in_lr;
}

// =============================================================================
// Function: func_080228B4 @ 0x080228B4
// =============================================================================
undefined4 func_080228B4(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = func_08022980();
  if (*(ushort *)((int)param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  if (*(byte *)(param_1 + 8) != param_3) {
    func_08032198(param_1,param_3);
  }
  uVar2 = func_080229A4(param_1,param_2);
  func_08020080(param_1,uVar2);
  if (param_2 != *(byte *)(param_1 + 0xe)) {
    iVar4 = -1;
    iVar3 = func_0809BCAC(param_1[0xd]);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = 3;
    }
    if ((param_2 == uVar1) &&
       (iVar3 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144)),
       0xe < (*(byte *)(iVar3 + 10) & 0x1f) - 6)) {
      iVar4 = 8;
    }
    if (iVar4 < 0) {
      func_080323C8(param_1);
    }
    else {
      func_08032384(param_1,iVar4,1);
    }
  }
  *(byte *)(param_1 + 0xe) = (byte)param_2;
  return in_lr;
}

// =============================================================================
// Function: func_08022950 @ 0x08022950
// =============================================================================
undefined8 func_08022950(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(int *)(iVar1 + 0x24) == 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x2a);
  }
  else if (*(int *)(iVar1 + 0x24) == 1) {
    uVar2 = 1;
    if ((*(byte *)(iVar1 + 0x2a) & 0x7f) != 0) {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08022980 @ 0x08022980
// =============================================================================
undefined8 func_08022980(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = _DAT_080229a0;
  iVar2 = func_0809BCAC(*(undefined4 *)(param_1 + 0x34));
  return CONCAT44(in_lr,(uint)*(ushort *)((iVar2 * 5 + param_2) * 2 + iVar1));
}

// =============================================================================
// Function: func_080229A4 @ 0x080229A4
// =============================================================================
undefined8 func_080229A4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080229BC @ 0x080229BC
// =============================================================================
void func_080229BC(int param_1)

{
  func_0x0809b50c(*(undefined4 *)(param_1 + 0x34));
  return;
}

// =============================================================================
// Function: func_080229C8 @ 0x080229C8
// =============================================================================
undefined8 func_080229C8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (((*(short *)(param_1 + 4) == 2) &&
      (cVar1 = func_0x0809b50c(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) &&
     (cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_080229F8 @ 0x080229F8
// =============================================================================
undefined4 func_080229F8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint uStack_c;
  
  iVar1 = func_080AB788(0x78);
  uStack_c = ((uStack_c & _DAT_08022a78 | iVar1 + 0xf0U & 0xffff) & _DAT_08022a7c | 0x3c0000) &
             _DAT_08022a80 & _DAT_08022a84;
  func_0x0809bd2c(*(undefined4 *)(param_1 + 0x34),&uStack_c);
  uVar2 = func_08022950(param_1);
  func_080228B4(param_1,uVar2,*(undefined1 *)(param_1 + 0x20));
  func_0809B2DC(*(undefined4 *)(param_1 + 0x34),10);
  func_0x0809b638(*(undefined4 *)(param_1 + 0x34));
  func_08032384(param_1,2,0);
  iVar1 = func_0809BCAC(*(undefined4 *)(param_1 + 0x34));
  uVar2 = 0xa5;
  if (iVar1 == 1) {
    uVar2 = 0xa6;
  }
  func_080200C4(param_1,uVar2);
  return in_lr;
}

// =============================================================================
// Function: func_08022A88 @ 0x08022A88
// =============================================================================
undefined4 func_08022A88(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  func_0x0809b624(*(undefined4 *)(param_1 + 0x34));
  cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 != '\0') {
    func_0x0809b644(*(undefined4 *)(param_1 + 0x34));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08022AAC @ 0x08022AAC
// =============================================================================
undefined4 func_08022AAC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint uStack_c;
  
  iVar1 = func_080AB788(0x78);
  uStack_c = ((uStack_c & _DAT_08022b2c | iVar1 + 0xf0U & 0xffff) & _DAT_08022b30 | 0xbc0000) &
             _DAT_08022b34;
  func_0x0809bd2c(*(undefined4 *)(param_1 + 0x34),&uStack_c);
  uVar2 = func_08022950(param_1);
  func_080228B4(param_1,uVar2,*(undefined1 *)(param_1 + 0x20));
  func_0809B2DC(*(undefined4 *)(param_1 + 0x34),10);
  func_0x0809b638(*(undefined4 *)(param_1 + 0x34));
  func_08032384(param_1,2,0);
  iVar1 = func_0809BCAC(*(undefined4 *)(param_1 + 0x34));
  uVar2 = 0xa5;
  if (iVar1 == 1) {
    uVar2 = 0xa6;
  }
  func_080200C4(param_1,uVar2);
  return in_lr;
}

// =============================================================================
// Function: func_08022B38 @ 0x08022B38
// =============================================================================
void func_08022B38(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -7;
  param_1[1] = sVar2 + -4;
  param_1[2] = sVar1 + 7;
  param_1[3] = sVar2 + 5;
  return;
}

// =============================================================================
// Function: func_08022B5C @ 0x08022B5C
// =============================================================================
undefined8 func_08022B5C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1 == 0) || (param_1 != 1)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08022B70 @ 0x08022B70
// =============================================================================
undefined8 func_08022B70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 in_lr;
  
  uVar1 = func_0809BCAC(param_1[0xd]);
  uVar2 = func_080005D4(0x8c);
  uVar3 = func_0x08022b58(uVar1);
  uVar1 = func_08022B5C(uVar1);
  iVar4 = func_080324BC(uVar2,param_1,2,9,uVar3,uVar1,0,0);
  iVar5 = func_0809BCAC(param_1[0xd]);
  cVar6 = '\0';
  if (iVar5 != 0) {
    cVar6 = '\x03';
  }
  if ((*(char *)(param_1 + 0xe) == cVar6) &&
     (iVar5 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144)),
     0xe < (*(byte *)(iVar5 + 10) & 0x1f) - 6)) {
    func_0805E860(iVar4 + 0x70,8);
    *(undefined1 *)(iVar4 + 0x84) = 1;
    *(undefined1 *)(iVar4 + 0x86) = 0;
    *(undefined1 *)(iVar4 + 0x87) = 1;
    *(byte *)(iVar4 + 0x8a) = *(byte *)(iVar4 + 0x8a) & 0xfc | 2;
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_08022C18 @ 0x08022C18
// =============================================================================
undefined8 func_08022C18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  func_0809B114(auStack_18,param_3);
  func_08020038(param_1,param_2,auStack_18,0x2b0);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08022c5c;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  uVar1 = func_08023378(param_1);
  func_08023308(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08022CB4 @ 0x08022CB4
// =============================================================================
undefined4 func_08022CB4(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  uStack_c = (uStack_c & _DAT_08022cf0 | param_2 & 0xffff) & _DAT_08022cf4;
  func_0x0809b940(*(undefined4 *)(param_1 + 0x34),&uStack_c);
  uVar1 = func_08023378(param_1);
  func_08023308(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_08022CF8 @ 0x08022CF8
// =============================================================================
undefined4 func_08022CF8(undefined4 *param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 in_lr;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar16 = (int *)*param_1;
  iVar4 = param_1[0xd];
  uStack_30 = (uint)*(ushort *)(param_1 + 1);
  if ((uStack_30 == 2) && (*(char *)(param_2 + 4) != '\0')) {
    uVar5 = func_0x0809b51c(iVar4);
    func_0809B57C(iVar4,1);
    uVar6 = func_0x0809b51c(iVar4);
    if ((uVar5 < 0xb4) &&
       (((0xb3 < uVar6 &&
         (piVar7 = (int *)func_0x080d3910(piVar16,*(undefined4 *)(*piVar16 + 0x144)), *piVar7 != 0))
        && (cVar3 = func_0x0809b504(iVar4), cVar3 == '\0')))) {
      func_0x0809b638(iVar4);
    }
    if ((uVar5 < 0xf0) && (0xef < uVar6)) {
      uStack_78 = *(undefined2 *)((int)param_1 + 10);
      uStack_76 = *(undefined2 *)((int)param_1 + 0xe);
      cVar3 = func_0x080d3914(piVar16,&uStack_78,*(undefined4 *)(*piVar16 + 0x108));
      if (cVar3 != '\0') {
        func_0809B8F0(iVar4);
      }
    }
    if (((uVar5 <= _DAT_08022ea8) && (_DAT_08022ea8 < uVar6)) &&
       (piVar7 = (int *)func_0x080d3910(piVar16,*(undefined4 *)(*piVar16 + 0x144)), *piVar7 == 0)) {
      cVar3 = func_0x0809b504(iVar4);
      if ((cVar3 != '\0') && (uVar5 = func_080AB788(100), uVar5 < 0x1e)) {
        func_0x0809b644(iVar4);
      }
      func_0809B2A8(iVar4,1);
    }
  }
  func_0x080d3918(&uStack_b8,piVar16,uStack_30,*(undefined4 *)(*piVar16 + 0x34));
  func_0x080d3914(&uStack_74,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_28 = uStack_74;
  uStack_24 = uStack_70;
  iStack_ac = 0x11;
  iStack_a8 = -0x11;
  iStack_a4 = -0x11;
  iStack_a0 = 0x11;
  uStack_98 = uStack_b8;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_74;
  uStack_88 = uStack_70;
  iStack_84 = 0x10;
  uStack_80 = 0;
  uStack_7c = 0;
  iVar8 = func_0x080d3914(piVar16,0,*(undefined4 *)(*piVar16 + 0x40));
  iVar9 = func_0x080d3914(piVar16,0x4a,*(undefined4 *)(*piVar16 + 0x40));
  if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_30)) {
    func_0x080d3914(auStack_6c,iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0xc));
    func_080ABA90(&iStack_ac,auStack_6c,0);
  }
  if ((iVar9 != 0) && (*(ushort *)(iVar9 + 4) == uStack_30)) {
    func_0x080d3914(auStack_64,iVar9,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc));
    func_080ABA90(&iStack_ac,auStack_64,0);
  }
  iVar9 = *(int *)(iVar4 + 0x28);
  if (iVar9 == 1) {
    puStack_2c = (undefined2 *)(iVar4 + 0x2c);
    uVar5 = (uint)*(ushort *)(iVar4 + 0x2c);
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
    }
    uVar6 = (*(uint *)(iVar4 + 0x2c) & 0x7fffff) >> 0x10;
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
    }
    uVar15 = (uint)*(byte *)(iVar4 + 0x2f);
    if (uVar15 != 0) {
      uVar15 = uVar15 - 1;
    }
    if (uVar5 != 0) {
      if ((int)(*(uint *)(iVar4 + 0x2c) * 0x100) < 0) {
        iVar8 = func_0x080d3914(piVar16,0x2d,*(undefined4 *)(*piVar16 + 0x40));
      }
      if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_30)) {
        if (uVar15 == 0) {
          uVar17 = 1;
          if (uVar6 != 0) {
            uVar17 = 6;
          }
          uVar11 = func_080ABE58((int)*(short *)((int)param_1 + 10),
                                 (int)*(short *)((int)param_1 + 0xe),(int)*(short *)(iVar8 + 10),
                                 (int)*(short *)(iVar8 + 0xe),&iStack_ac,
                                 *(undefined1 *)(param_1 + 8));
          func_08023308(param_1,uVar17,uVar11);
          iVar4 = func_080AB788(0x1e);
          uVar15 = iVar4 + 1;
        }
        *puStack_2c = (short)uVar5;
        *(byte *)(puStack_2c + 1) = *(byte *)(puStack_2c + 1) & 0x80 | (byte)uVar6 & 0x7f;
        *(char *)((int)puStack_2c + 3) = (char)uVar15;
        goto LAB_080232b8;
      }
    }
    uStack_5c = (uStack_5c & _DAT_080230d8 | 0xb4) & _DAT_080230dc;
    puVar12 = &uStack_5c;
LAB_0802319e:
    func_0x0809b940(iVar4,puVar12);
    uVar17 = func_08023378(param_1);
    func_08023308(param_1,uVar17,*(undefined1 *)(param_1 + 8));
    goto LAB_080232b8;
  }
  if (1 < iVar9) {
    if (iVar9 != 2) {
      if (iVar9 == 3) {
        cVar3 = *(char *)(param_1 + 8);
        sVar14 = *(short *)((int)param_1 + 10);
        sVar1 = *(short *)((int)param_1 + 0xe);
        if ((uStack_30 == 0x25) && (cVar3 == '\0')) {
          func_0x0800ce58(&uStack_54);
          uStack_50 = uStack_54;
          uVar17 = uStack_50;
          uStack_50._2_2_ = (short)((uint)uStack_54 >> 0x10);
          iVar9 = (int)uStack_50._2_2_ - (sVar1 + -8);
          if (iVar9 < 0) {
            iVar9 = -iVar9;
          }
          uStack_50 = uVar17;
          if (iVar9 < 8) {
            func_0x08009adc(&uStack_4c);
            uStack_48 = uStack_4c;
            uVar17 = uStack_48;
            uStack_48._0_2_ = (short)uStack_4c;
            iVar9 = (int)(short)uStack_48;
            uStack_48._2_2_ = (short)((uint)uStack_4c >> 0x10);
            iVar8 = (int)uStack_48._2_2_;
            uStack_48 = uVar17;
            func_0801FE78(param_1,2,iVar9,iVar8 + 0x10);
          }
        }
        else if ((uStack_30 == 2) && (cVar3 == '\x01')) {
          func_0x08009adc(&uStack_44);
          uStack_40 = uStack_44;
          uVar17 = uStack_40;
          uStack_40._0_2_ = (short)uStack_44;
          iVar9 = (int)(short)uStack_40 - (int)sVar14;
          if (iVar9 < 0) {
            iVar9 = -iVar9;
          }
          uStack_40 = uVar17;
          if (iVar9 < 0x10) {
            uStack_40._2_2_ = (short)((uint)uStack_44 >> 0x10);
            iVar9 = (int)uStack_40._2_2_ - (sVar1 + 8);
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            if (iVar9 < 8) {
              func_0x0800ce58(&uStack_3c);
              uStack_38 = uStack_3c;
              uVar17 = uStack_38;
              uStack_38._0_2_ = (short)uStack_3c;
              iVar9 = (int)(short)uStack_38;
              uStack_38._2_2_ = (short)((uint)uStack_3c >> 0x10);
              iVar8 = (int)uStack_38._2_2_;
              uStack_38 = uVar17;
              func_0801FE78(param_1,0x25,iVar9,iVar8 + -0x20);
              func_0x0809b608(iVar4);
            }
          }
        }
        sVar14 = *(short *)(iVar4 + 0x2c);
        if (sVar14 == 0) {
          uStack_34 = (uStack_34 & _DAT_080232d8 | 0xb4) & _DAT_080232dc;
          func_0x0809b940(iVar4);
          uVar17 = func_08023378(param_1);
          func_08023308(param_1,uVar17,*(char *)(param_1 + 8));
        }
        else {
          *(short *)(iVar4 + 0x2c) = sVar14 + -1;
        }
      }
      goto LAB_080232b8;
    }
    uVar5 = (uint)*(ushort *)(iVar4 + 0x2c);
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
    }
    uVar6 = (uint)*(ushort *)(iVar4 + 0x2e);
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
    }
    if (((uVar5 == 0) || (iVar8 == 0)) || (*(ushort *)(iVar8 + 4) != uStack_30)) {
LAB_0802318c:
      uStack_58 = (uStack_58 & _DAT_080231bc | 0xb4) & _DAT_080231c0;
      puVar12 = &uStack_58;
      goto LAB_0802319e;
    }
    iVar13 = (int)*(short *)((int)param_1 + 10);
    iVar10 = (int)*(short *)((int)param_1 + 0xe);
    sVar14 = *(short *)(iVar8 + 10);
    sVar1 = *(short *)(iVar8 + 0xe);
    iVar9 = sVar14 - iVar13;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 < 0x10) {
      iVar9 = sVar1 - iVar10;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar9 < 0x10) goto LAB_0802318c;
    }
    if (uVar6 == 0) {
LAB_08023158:
      uVar17 = func_080ABC40(iVar13,iVar10,(int)sVar14,(int)sVar1,&iStack_ac,
                             *(undefined1 *)(param_1 + 8));
      func_08023308(param_1,1,uVar17);
      iVar9 = func_080AB788(0x1e);
      uVar6 = iVar9 + 1;
      *(short *)(iVar4 + 0x30) = sVar14;
      *(short *)(iVar4 + 0x32) = sVar1;
    }
    else {
      iVar9 = *(short *)(iVar4 + 0x30) - iVar13;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar9 < 0x10) {
        iVar9 = *(short *)(iVar4 + 0x32) - iVar10;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar9 < 0x10) goto LAB_08023158;
      }
    }
    *(short *)(iVar4 + 0x2c) = (short)uVar5;
    *(short *)(iVar4 + 0x2e) = (short)uVar6;
    goto LAB_080232b8;
  }
  if (iVar9 != 0) goto LAB_080232b8;
  sVar14 = *(short *)(iVar4 + 0x2c);
  if (sVar14 == 0) {
    cVar3 = func_08020130(param_1);
    sVar14 = 0;
    if (cVar3 != '\0') {
      iVar9 = func_0x080d3910(piVar16,*(undefined4 *)(*piVar16 + 0x144));
      iVar8 = (uint)(0xe < (*(byte *)(iVar9 + 10) & 0x1f) - 6) * 0xe0 + _DAT_08022fa8;
      uVar5 = func_0x0809b50c(iVar4);
      iVar9 = (uVar5 & 0xff) * 0x1c;
      cVar3 = func_0x0809b8b0(iVar4);
      if (cVar3 == '\0') {
        iVar10 = func_0809BD90(iVar4);
        iVar8 = iVar8 + iVar10 * 0x38 + iVar9;
      }
      else {
        iVar8 = iVar8 + iVar9 + 0xa8;
      }
      iVar9 = func_080AB82C(iVar8,7);
      iVar8 = iVar8 + iVar9 * 4;
      sVar14 = func_080AB788((uint)*(byte *)(iVar8 + 2) * 0x3c);
      sVar14 = (ushort)*(byte *)(iVar8 + 1) * 0x3c + sVar14;
      uVar5 = (uint)*(byte *)(param_1 + 8);
      iVar8 = func_080AB788(4);
      if ((iVar8 != 0) && (iVar8 != 3)) {
        uVar5 = func_080AB7A4(uVar5);
      }
      func_08023308(param_1,iVar9,uVar5);
      *(char *)(iVar4 + 0x2e) = (char)iVar9;
    }
  }
  else {
    iVar9 = param_1[6];
    iVar8 = param_1[7];
    bVar2 = false;
    if (iVar9 < 0) {
      if (iStack_a4 + iStack_84 < 0 != SCARRY4(iStack_a4,iStack_84)) {
        func_080AB948(&iStack_ac);
      }
      if (iStack_a4 < -0xf) goto LAB_08022eec;
LAB_08022f40:
      bVar2 = true;
    }
    else {
LAB_08022eec:
      if (0 < iVar9) {
        if (iStack_84 < iStack_a0) {
          func_080AB9C4(&iStack_ac);
        }
        if (iStack_a0 < 0x10) goto LAB_08022f40;
      }
      if (iVar8 < 0) {
        if (iStack_a8 + iStack_84 < 0 != SCARRY4(iStack_a8,iStack_84)) {
          func_080AB8D0(&iStack_ac);
        }
        if (-0x10 < iStack_a8) goto LAB_08022f40;
      }
      if (0 < iVar8) {
        if (iStack_84 < iStack_ac) {
          func_080AB85C(&iStack_ac);
        }
        if (iStack_ac < 0x10) goto LAB_08022f40;
      }
    }
    if (bVar2) {
      sVar14 = 0;
    }
    else {
      sVar14 = sVar14 + -1;
    }
  }
  *(short *)(iVar4 + 0x2c) = sVar14;
LAB_080232b8:
  func_08020170(param_1,&iStack_ac);
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(short *)(param_1 + 9) == 0) {
    *(undefined2 *)(param_1 + 9) = *(undefined2 *)((int)param_1 + 0x26);
  }
  else {
    *(short *)(param_1 + 9) = *(short *)(param_1 + 9) + -1;
  }
  iVar4 = param_1[4];
  if (iVar4 != 0) {
    func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08023308 @ 0x08023308
// =============================================================================
undefined4 func_08023308(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = func_080233B4();
  if (*(ushort *)(param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  if (*(byte *)(param_1 + 0x20) != param_3) {
    func_08032198(param_1,param_3);
  }
  uVar2 = func_08023400(param_1,param_2);
  func_08020080(param_1,uVar2);
  if (param_2 != *(byte *)(param_1 + 0x38)) {
    iVar3 = -1;
    if (param_2 == 4) {
      iVar3 = 8;
    }
    if (iVar3 < 0) {
      func_080323C8(param_1);
    }
    else {
      func_08032384(param_1,iVar3,1);
    }
  }
  *(byte *)(param_1 + 0x38) = (byte)param_2;
  return in_lr;
}

// =============================================================================
// Function: func_08023378 @ 0x08023378
// =============================================================================
undefined8 func_08023378(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(iVar1 + 0x28);
  if (iVar3 == 1) {
    uVar2 = 1;
    if ((*(byte *)(iVar1 + 0x2e) & 0x7f) != 0) {
      uVar2 = 6;
    }
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        uVar2 = (uint)*(byte *)(iVar1 + 0x2e);
        goto LAB_080233b0;
      }
    }
    else if (iVar3 < 4) {
      uVar2 = 1;
      goto LAB_080233b0;
    }
    uVar2 = 0;
  }
LAB_080233b0:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_080233B4 @ 0x080233B4
// =============================================================================
undefined8 func_080233B4(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  cVar2 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if (cVar2 != '\0') {
    uVar4 = func_0809B8BC(*(undefined4 *)(param_1 + 0x34));
    uVar4 = (-uVar4 | uVar4) >> 0x1f;
  }
  iVar1 = _DAT_080233e4;
  if (uVar4 == 0) {
    iVar3 = func_0809BD90(*(undefined4 *)(param_1 + 0x34));
    iVar3 = param_2 * 2 + iVar3 * 0xe;
  }
  else {
    iVar3 = param_2 * 2 + 0x2a;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(iVar1 + iVar3));
}

// =============================================================================
// Function: func_08023400 @ 0x08023400
// =============================================================================
undefined8 func_08023400(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08023414 @ 0x08023414
// =============================================================================
undefined4 func_08023414(int param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  uint auStack_20 [2];
  
  if (((*param_2 & 0x3ff) == *(ushort *)(param_1 + 4)) &&
     (cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) {
    iVar2 = func_0x0809b228(*(undefined4 *)(param_1 + 0x34));
    iVar3 = Entity_InitWorldActors();
    iVar7 = (int)(short)((ushort)((param_2[1] & _DAT_0802349c) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar6 = (int)(short)((ushort)((param_2[2] & _DAT_0802349c) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar7 * iVar7 + iVar6 * iVar6 <= iVar3 * iVar3) {
      cVar1 = func_0x0809b50c(*(undefined4 *)(param_1 + 0x34));
      if (cVar1 == '\0') {
        cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34));
        uVar8 = 100;
        if (cVar1 != '\0') {
          uVar8 = 0x46;
        }
      }
      else {
        uVar8 = 0x1e;
      }
      uVar4 = func_080AB788(100);
      if (uVar4 < uVar8) {
        auStack_20[0] = ((iVar2 * 0xf & 0x3ffffffU) >> 2) + 0x1e0 & 0xffff;
        func_0x0809b958(*(undefined4 *)(param_1 + 0x34),auStack_20);
        uVar5 = func_08023378(param_1);
        func_08023308(param_1,uVar5,*(undefined1 *)(param_1 + 0x20));
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080234F8 @ 0x080234F8
// =============================================================================
undefined4 func_080234F8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x28) == 3) {
    uStack_c = (uStack_c & _DAT_0802353c | 0xb4) & _DAT_08023540;
    func_0x0809b940(*(int *)(param_1 + 0x34),&uStack_c);
    uVar1 = func_08023378(param_1);
    func_08023308(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08023570 @ 0x08023570
// =============================================================================
ulonglong func_08023570(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0809b230(*(undefined4 *)(param_1 + 0x34));
  return CONCAT44(in_lr,uVar1) ^ 1;
}

// =============================================================================
// Function: func_08023580 @ 0x08023580
// =============================================================================
void func_08023580(int param_1)

{
  func_0809BDC0(*(undefined4 *)(param_1 + 0x34));
  return;
}

// =============================================================================
// Function: func_0802358C @ 0x0802358C
// =============================================================================
void func_0802358C(int param_1)

{
  func_0x0809b50c(*(undefined4 *)(param_1 + 0x34));
  return;
}

// =============================================================================
// Function: func_08023598 @ 0x08023598
// =============================================================================
undefined8 func_08023598(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (((*(short *)(param_1 + 4) == 2) &&
      (cVar1 = func_0x0809b50c(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) &&
     (cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_080235C8 @ 0x080235C8
// =============================================================================
undefined4 func_080235C8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  uint uStack_c;
  
  cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    iVar2 = func_080AB788(0x78);
    uStack_c = ((uStack_c & _DAT_08023648 | iVar2 + 0xf0U & 0xffff) & _DAT_0802364c | 0x3c0000) &
               _DAT_08023650 & _DAT_08023654;
    func_0x0809b94c(*(undefined4 *)(param_1 + 0x34),&uStack_c);
    uVar3 = func_08023378(param_1);
    func_08023308(param_1,uVar3,*(undefined1 *)(param_1 + 0x20));
  }
  func_0809B2DC(*(undefined4 *)(param_1 + 0x34),10);
  func_0x0809b638(*(undefined4 *)(param_1 + 0x34));
  func_08032384(param_1,0,0);
  func_080200C4(param_1,0xa2);
  return in_lr;
}

// =============================================================================
// Function: func_08023658 @ 0x08023658
// =============================================================================
undefined4 func_08023658(int param_1)

{
  undefined4 in_lr;
  
  func_0x0809b8fc(*(undefined4 *)(param_1 + 0x34));
  return in_lr;
}

// =============================================================================
// Function: func_08023664 @ 0x08023664
// =============================================================================
undefined4 func_08023664(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = func_0x0809b230(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    func_0809B2A8(*(undefined4 *)(param_1 + 0x34),1);
    func_0809B278(*(undefined4 *)(param_1 + 0x34));
  }
  cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34));
  if ((cVar1 != '\0') && (uVar2 = func_080AB788(100), uVar2 < 0x1e)) {
    func_0x0809b644(*(undefined4 *)(param_1 + 0x34));
  }
  cVar1 = func_0x0809b50c(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    func_08032384(param_1,1,0);
    func_080200C4(param_1,0xa1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080236C4 @ 0x080236C4
// =============================================================================
void func_080236C4(int param_1)

{
  func_08032384(param_1,1,0);
  func_080200C4(param_1,0xa1);
  func_0809BE44(*(undefined4 *)(param_1 + 0x34));
  return;
}

// =============================================================================
// Function: func_080236E4 @ 0x080236E4
// =============================================================================
undefined4 func_080236E4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  func_0x0809b624(*(undefined4 *)(param_1 + 0x34));
  cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 != '\0') {
    func_0x0809b644(*(undefined4 *)(param_1 + 0x34));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08023708 @ 0x08023708
// =============================================================================
undefined4 func_08023708(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  uint uStack_c;
  
  cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    iVar2 = func_080AB788(0x78);
    uStack_c = ((uStack_c & _DAT_08023788 | iVar2 + 0xf0U & 0xffff) & _DAT_0802378c | 0xbc0000) &
               _DAT_08023790;
    func_0x0809b94c(*(undefined4 *)(param_1 + 0x34),&uStack_c);
    uVar3 = func_08023378(param_1);
    func_08023308(param_1,uVar3,*(undefined1 *)(param_1 + 0x20));
  }
  func_0809B2DC(*(undefined4 *)(param_1 + 0x34),10);
  func_0x0809b638(*(undefined4 *)(param_1 + 0x34));
  func_08032384(param_1,0,0);
  func_080200C4(param_1,0xa2);
  return in_lr;
}

// =============================================================================
// Function: func_08023794 @ 0x08023794
// =============================================================================
undefined4 func_08023794(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint uStack_14;
  
  cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if ((cVar1 == '\0') && (0x3b < param_3)) {
    if (*(byte *)(param_1 + 0x20) != param_2) {
      func_08032198(param_1,param_2);
    }
    uStack_14 = uStack_14 & _DAT_080237ec | 0x3c;
    func_0x0809b968(*(undefined4 *)(param_1 + 0x34),&uStack_14);
    uVar2 = func_08023378(param_1);
    func_08023308(param_1,uVar2,*(byte *)(param_1 + 0x20));
  }
  return in_lr;
}

// =============================================================================
// Function: func_080237F0 @ 0x080237F0
// =============================================================================
undefined8 func_080237F0(uint param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1 < 2) || (param_1 != 2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08023804 @ 0x08023804
// =============================================================================
undefined8 func_08023804(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1 == 1) {
    uVar1 = 0xb;
  }
  else if ((param_1 == 0) || (param_1 != 2)) {
    uVar1 = 9;
  }
  else {
    uVar1 = 0xc;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08023820 @ 0x08023820
// =============================================================================
undefined8 func_08023820(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = func_0809BD90(*(undefined4 *)(param_1 + 0x34));
  uVar2 = func_080005D4(0x8c);
  uVar3 = func_080237F0(uVar1);
  uVar1 = func_08023804(uVar1);
  iVar4 = func_080324BC(uVar2,param_1,4,0xc,uVar3,uVar1,0,0);
  if (*(char *)(param_1 + 0x38) == '\x04') {
    func_0805E860(iVar4 + 0x70,8);
    *(undefined1 *)(iVar4 + 0x84) = 1;
    *(undefined1 *)(iVar4 + 0x86) = 0;
    *(undefined1 *)(iVar4 + 0x87) = 1;
    *(byte *)(iVar4 + 0x8a) = *(byte *)(iVar4 + 0x8a) & 0xfc | 2;
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_080238A8 @ 0x080238A8
// =============================================================================
undefined8 func_080238A8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  func_0809B114(auStack_18,param_3);
  func_08020038(param_1,param_2,auStack_18,_DAT_080238ec);
  *(undefined4 *)(param_1 + 0x14) = _DAT_080238f0;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  uVar1 = func_08024020(param_1);
  func_08023FB0(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08023948 @ 0x08023948
// =============================================================================
undefined4 func_08023948(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  uStack_c = (uStack_c & _DAT_08023984 | param_2 & 0xffff) & _DAT_08023988;
  func_0x0809b940(*(undefined4 *)(param_1 + 0x34),&uStack_c);
  uVar1 = func_08024020(param_1);
  func_08023FB0(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_0802398C @ 0x0802398C
// =============================================================================
undefined4 func_0802398C(undefined4 *param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 in_lr;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar16 = (int *)*param_1;
  iVar4 = param_1[0xd];
  uStack_30 = (uint)*(ushort *)(param_1 + 1);
  if ((uStack_30 == 2) && (*(char *)(param_2 + 4) != '\0')) {
    uVar5 = func_0x0809b51c(iVar4);
    func_0809B57C(iVar4,1);
    uVar6 = func_0x0809b51c(iVar4);
    if ((uVar5 < 0xb4) &&
       (((0xb3 < uVar6 &&
         (piVar7 = (int *)func_0x080d3910(piVar16,*(undefined4 *)(*piVar16 + 0x144)), *piVar7 != 0))
        && (cVar3 = func_0x0809b504(iVar4), cVar3 == '\0')))) {
      func_0x0809b638(iVar4);
    }
    if ((uVar5 < 0xf0) && (0xef < uVar6)) {
      uStack_78 = *(undefined2 *)((int)param_1 + 10);
      uStack_76 = *(undefined2 *)((int)param_1 + 0xe);
      cVar3 = func_0x080d3914(piVar16,&uStack_78,*(undefined4 *)(*piVar16 + 0x108));
      if (cVar3 != '\0') {
        func_0809B8F0(iVar4);
      }
    }
    if (((uVar5 <= _DAT_08023b3c) && (_DAT_08023b3c < uVar6)) &&
       (piVar7 = (int *)func_0x080d3910(piVar16,*(undefined4 *)(*piVar16 + 0x144)), *piVar7 == 0)) {
      cVar3 = func_0x0809b504(iVar4);
      if ((cVar3 != '\0') && (uVar5 = func_080AB788(100), uVar5 < 0x1e)) {
        func_0x0809b644(iVar4);
      }
      func_0809B2A8(iVar4,1);
    }
  }
  func_0x080d3918(&uStack_b8,piVar16,uStack_30,*(undefined4 *)(*piVar16 + 0x34));
  func_0x080d3914(&uStack_74,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_28 = uStack_74;
  uStack_24 = uStack_70;
  iStack_ac = 0x11;
  iStack_a8 = -0x11;
  iStack_a4 = -0x11;
  iStack_a0 = 0x11;
  uStack_98 = uStack_b8;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_74;
  uStack_88 = uStack_70;
  iStack_84 = 0x10;
  uStack_80 = 0;
  uStack_7c = 0;
  iVar8 = func_0x080d3914(piVar16,0,*(undefined4 *)(*piVar16 + 0x40));
  iVar9 = func_0x080d3914(piVar16,0x4a,*(undefined4 *)(*piVar16 + 0x40));
  if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_30)) {
    func_0x080d3914(auStack_6c,iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0xc));
    func_080ABA90(&iStack_ac,auStack_6c,0);
  }
  if ((iVar9 != 0) && (*(ushort *)(iVar9 + 4) == uStack_30)) {
    func_0x080d3914(auStack_64,iVar9,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc));
    func_080ABA90(&iStack_ac,auStack_64,0);
  }
  iVar9 = *(int *)(iVar4 + 0x28);
  if (iVar9 == 1) {
    puStack_2c = (undefined2 *)(iVar4 + 0x2c);
    uVar5 = (uint)*(ushort *)(iVar4 + 0x2c);
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
    }
    uVar6 = (*(uint *)(iVar4 + 0x2c) & 0x7fffff) >> 0x10;
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
    }
    uVar15 = (uint)*(byte *)(iVar4 + 0x2f);
    if (uVar15 != 0) {
      uVar15 = uVar15 - 1;
    }
    if (uVar5 != 0) {
      if ((int)(*(uint *)(iVar4 + 0x2c) * 0x100) < 0) {
        iVar8 = func_0x080d3914(piVar16,0x2d,*(undefined4 *)(*piVar16 + 0x40));
      }
      if ((iVar8 != 0) && (*(ushort *)(iVar8 + 4) == uStack_30)) {
        if (uVar15 == 0) {
          uVar17 = 1;
          if (uVar6 != 0) {
            uVar17 = 6;
          }
          uVar11 = func_080ABE58((int)*(short *)((int)param_1 + 10),
                                 (int)*(short *)((int)param_1 + 0xe),(int)*(short *)(iVar8 + 10),
                                 (int)*(short *)(iVar8 + 0xe),&iStack_ac,
                                 *(undefined1 *)(param_1 + 8));
          func_08023FB0(param_1,uVar17,uVar11);
          iVar4 = func_080AB788(0x1e);
          uVar15 = iVar4 + 1;
        }
        *puStack_2c = (short)uVar5;
        *(byte *)(puStack_2c + 1) = *(byte *)(puStack_2c + 1) & 0x80 | (byte)uVar6 & 0x7f;
        *(char *)((int)puStack_2c + 3) = (char)uVar15;
        goto LAB_08023f60;
      }
    }
    uStack_5c = (uStack_5c & _DAT_08023d80 | 0xb4) & _DAT_08023d84;
    puVar12 = &uStack_5c;
LAB_08023e46:
    func_0x0809b940(iVar4,puVar12);
    uVar17 = func_08024020(param_1);
    func_08023FB0(param_1,uVar17,*(undefined1 *)(param_1 + 8));
    goto LAB_08023f60;
  }
  if (1 < iVar9) {
    if (iVar9 != 2) {
      if (iVar9 == 3) {
        cVar3 = *(char *)(param_1 + 8);
        sVar14 = *(short *)((int)param_1 + 10);
        sVar1 = *(short *)((int)param_1 + 0xe);
        if ((uStack_30 == 0x25) && (cVar3 == '\0')) {
          func_0x0800ce58(&uStack_54);
          uStack_50 = uStack_54;
          uVar17 = uStack_50;
          uStack_50._2_2_ = (short)((uint)uStack_54 >> 0x10);
          iVar9 = (int)uStack_50._2_2_ - (sVar1 + -8);
          if (iVar9 < 0) {
            iVar9 = -iVar9;
          }
          uStack_50 = uVar17;
          if (iVar9 < 8) {
            func_0x08009adc(&uStack_4c);
            uStack_48 = uStack_4c;
            uVar17 = uStack_48;
            uStack_48._0_2_ = (short)uStack_4c;
            iVar9 = (int)(short)uStack_48;
            uStack_48._2_2_ = (short)((uint)uStack_4c >> 0x10);
            iVar8 = (int)uStack_48._2_2_;
            uStack_48 = uVar17;
            func_0801FE78(param_1,2,iVar9,iVar8 + 0x10);
          }
        }
        else if ((uStack_30 == 2) && (cVar3 == '\x01')) {
          func_0x08009adc(&uStack_44);
          uStack_40 = uStack_44;
          uVar17 = uStack_40;
          uStack_40._0_2_ = (short)uStack_44;
          iVar9 = (int)(short)uStack_40 - (int)sVar14;
          if (iVar9 < 0) {
            iVar9 = -iVar9;
          }
          uStack_40 = uVar17;
          if (iVar9 < 0x10) {
            uStack_40._2_2_ = (short)((uint)uStack_44 >> 0x10);
            iVar9 = (int)uStack_40._2_2_ - (sVar1 + 8);
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            if (iVar9 < 8) {
              func_0x0800ce58(&uStack_3c);
              uStack_38 = uStack_3c;
              uVar17 = uStack_38;
              uStack_38._0_2_ = (short)uStack_3c;
              iVar9 = (int)(short)uStack_38;
              uStack_38._2_2_ = (short)((uint)uStack_3c >> 0x10);
              iVar8 = (int)uStack_38._2_2_;
              uStack_38 = uVar17;
              func_0801FE78(param_1,0x25,iVar9,iVar8 + -0x20);
              func_0x0809b608(iVar4);
            }
          }
        }
        sVar14 = *(short *)(iVar4 + 0x2c);
        if (sVar14 == 0) {
          uStack_34 = (uStack_34 & _DAT_08023f80 | 0xb4) & _DAT_08023f84;
          func_0x0809b940(iVar4);
          uVar17 = func_08024020(param_1);
          func_08023FB0(param_1,uVar17,*(char *)(param_1 + 8));
        }
        else {
          *(short *)(iVar4 + 0x2c) = sVar14 + -1;
        }
      }
      goto LAB_08023f60;
    }
    uVar5 = (uint)*(ushort *)(iVar4 + 0x2c);
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
    }
    uVar6 = (uint)*(ushort *)(iVar4 + 0x2e);
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
    }
    if (((uVar5 == 0) || (iVar8 == 0)) || (*(ushort *)(iVar8 + 4) != uStack_30)) {
LAB_08023e34:
      uStack_58 = (uStack_58 & _DAT_08023e64 | 0xb4) & _DAT_08023e68;
      puVar12 = &uStack_58;
      goto LAB_08023e46;
    }
    iVar13 = (int)*(short *)((int)param_1 + 10);
    iVar10 = (int)*(short *)((int)param_1 + 0xe);
    sVar14 = *(short *)(iVar8 + 10);
    sVar1 = *(short *)(iVar8 + 0xe);
    iVar9 = sVar14 - iVar13;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 < 0x10) {
      iVar9 = sVar1 - iVar10;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar9 < 0x10) goto LAB_08023e34;
    }
    if (uVar6 == 0) {
LAB_08023e00:
      uVar17 = func_080ABC40(iVar13,iVar10,(int)sVar14,(int)sVar1,&iStack_ac,
                             *(undefined1 *)(param_1 + 8));
      func_08023FB0(param_1,1,uVar17);
      iVar9 = func_080AB788(0x1e);
      uVar6 = iVar9 + 1;
      *(short *)(iVar4 + 0x30) = sVar14;
      *(short *)(iVar4 + 0x32) = sVar1;
    }
    else {
      iVar9 = *(short *)(iVar4 + 0x30) - iVar13;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar9 < 0x10) {
        iVar9 = *(short *)(iVar4 + 0x32) - iVar10;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar9 < 0x10) goto LAB_08023e00;
      }
    }
    *(short *)(iVar4 + 0x2c) = (short)uVar5;
    *(short *)(iVar4 + 0x2e) = (short)uVar6;
    goto LAB_08023f60;
  }
  if (iVar9 != 0) goto LAB_08023f60;
  sVar14 = *(short *)(iVar4 + 0x2c);
  if (sVar14 == 0) {
    cVar3 = func_08020130(param_1);
    sVar14 = 0;
    if (cVar3 != '\0') {
      iVar9 = func_0x080d3910(piVar16,*(undefined4 *)(*piVar16 + 0x144));
      iVar8 = (uint)(0xe < (*(byte *)(iVar9 + 10) & 0x1f) - 6) * 0xe0 + _DAT_08023c3c;
      uVar5 = func_0x0809b50c(iVar4);
      iVar9 = (uVar5 & 0xff) * 0x1c;
      cVar3 = func_0x0809b8b0(iVar4);
      if (cVar3 == '\0') {
        cVar3 = func_0809BF00(iVar4);
        if (cVar3 == '\0') {
          iVar10 = func_0809BEDC(iVar4);
          iVar8 = iVar8 + iVar10 * 0x38 + iVar9;
        }
        else {
          iVar8 = iVar8 + iVar9 + 0x70;
        }
      }
      else {
        iVar8 = iVar8 + iVar9 + 0xa8;
      }
      iVar9 = func_080AB82C(iVar8,7);
      iVar8 = iVar8 + iVar9 * 4;
      sVar14 = func_080AB788((uint)*(byte *)(iVar8 + 2) * 0x3c);
      sVar14 = (ushort)*(byte *)(iVar8 + 1) * 0x3c + sVar14;
      uVar5 = (uint)*(byte *)(param_1 + 8);
      iVar8 = func_080AB788(4);
      if ((iVar8 != 0) && (iVar8 != 3)) {
        uVar5 = func_080AB7A4(uVar5);
      }
      func_08023FB0(param_1,iVar9,uVar5);
      *(char *)(iVar4 + 0x2e) = (char)iVar9;
    }
  }
  else {
    iVar9 = param_1[6];
    iVar8 = param_1[7];
    bVar2 = false;
    if (iVar9 < 0) {
      if (iStack_a4 + iStack_84 < 0 != SCARRY4(iStack_a4,iStack_84)) {
        func_080AB948(&iStack_ac);
      }
      if (iStack_a4 < -0xf) goto LAB_08023b80;
LAB_08023bd4:
      bVar2 = true;
    }
    else {
LAB_08023b80:
      if (0 < iVar9) {
        if (iStack_84 < iStack_a0) {
          func_080AB9C4(&iStack_ac);
        }
        if (iStack_a0 < 0x10) goto LAB_08023bd4;
      }
      if (iVar8 < 0) {
        if (iStack_a8 + iStack_84 < 0 != SCARRY4(iStack_a8,iStack_84)) {
          func_080AB8D0(&iStack_ac);
        }
        if (-0x10 < iStack_a8) goto LAB_08023bd4;
      }
      if (0 < iVar8) {
        if (iStack_84 < iStack_ac) {
          func_080AB85C(&iStack_ac);
        }
        if (iStack_ac < 0x10) goto LAB_08023bd4;
      }
    }
    if (bVar2) {
      sVar14 = 0;
    }
    else {
      sVar14 = sVar14 + -1;
    }
  }
  *(short *)(iVar4 + 0x2c) = sVar14;
LAB_08023f60:
  func_08020170(param_1,&iStack_ac);
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(short *)(param_1 + 9) == 0) {
    *(undefined2 *)(param_1 + 9) = *(undefined2 *)((int)param_1 + 0x26);
  }
  else {
    *(short *)(param_1 + 9) = *(short *)(param_1 + 9) + -1;
  }
  iVar4 = param_1[4];
  if (iVar4 != 0) {
    func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08023FB0 @ 0x08023FB0
// =============================================================================
undefined4 func_08023FB0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = func_0802405C();
  if (*(ushort *)(param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  if (*(byte *)(param_1 + 0x20) != param_3) {
    func_08032198(param_1,param_3);
  }
  uVar2 = func_080240BC(param_1,param_2);
  func_08020080(param_1,uVar2);
  if (param_2 != *(byte *)(param_1 + 0x38)) {
    iVar3 = -1;
    if (param_2 == 4) {
      iVar3 = 8;
    }
    if (iVar3 < 0) {
      func_080323C8(param_1);
    }
    else {
      func_08032384(param_1,iVar3,1);
    }
  }
  *(byte *)(param_1 + 0x38) = (byte)param_2;
  return in_lr;
}

// =============================================================================
// Function: func_08024020 @ 0x08024020
// =============================================================================
undefined8 func_08024020(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(iVar1 + 0x28);
  if (iVar3 == 1) {
    uVar2 = 1;
    if ((*(byte *)(iVar1 + 0x2e) & 0x7f) != 0) {
      uVar2 = 6;
    }
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        uVar2 = (uint)*(byte *)(iVar1 + 0x2e);
        goto LAB_08024058;
      }
    }
    else if (iVar3 < 4) {
      uVar2 = 1;
      goto LAB_08024058;
    }
    uVar2 = 0;
  }
LAB_08024058:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0802405C @ 0x0802405C
// =============================================================================
undefined8 func_0802405C(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  cVar2 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if (cVar2 != '\0') {
    uVar4 = func_0809B8BC(*(undefined4 *)(param_1 + 0x34));
    uVar4 = (-uVar4 | uVar4) >> 0x1f;
  }
  iVar1 = _DAT_0802408c;
  param_2 = param_2 * 2;
  if (uVar4 == 0) {
    cVar2 = func_0809BF00(*(undefined4 *)(param_1 + 0x34));
    if (cVar2 == '\0') {
      iVar3 = func_0809BEDC(*(undefined4 *)(param_1 + 0x34));
      param_2 = param_2 + iVar3 * 0xe;
    }
    else {
      param_2 = param_2 + 0x1c;
    }
  }
  else {
    param_2 = param_2 + 0x2a;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(iVar1 + param_2));
}

// =============================================================================
// Function: func_080240BC @ 0x080240BC
// =============================================================================
undefined8 func_080240BC(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080240D0 @ 0x080240D0
// =============================================================================
undefined4 func_080240D0(int param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  uint auStack_1c [2];
  
  if (((*param_2 & 0x3ff) == *(ushort *)(param_1 + 4)) &&
     (cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) {
    func_0x0809b228(*(undefined4 *)(param_1 + 0x34));
    iVar2 = Entity_InitWorldActors();
    iVar6 = (int)(short)((ushort)((param_2[1] & _DAT_08024150) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    iVar5 = (int)(short)((ushort)((param_2[2] & _DAT_08024150) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 3) >> 2)) - (int)*(short *)(param_1 + 0xe)
    ;
    if (iVar6 * iVar6 + iVar5 * iVar5 <= iVar2 * iVar2) {
      cVar1 = func_0x0809b50c(*(undefined4 *)(param_1 + 0x34));
      if (cVar1 == '\0') {
        cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34));
        uVar7 = 100;
        if (cVar1 != '\0') {
          uVar7 = 0x46;
        }
      }
      else {
        uVar7 = 0x1e;
      }
      uVar3 = func_080AB788(100);
      if (uVar3 < uVar7) {
        iVar2 = func_0x0809b228(*(undefined4 *)(param_1 + 0x34));
        auStack_1c[0] = ((uint)(iVar2 * 0x3c0) >> 8) + 0x1e0 & 0xffff;
        func_0x0809b958(*(undefined4 *)(param_1 + 0x34),auStack_1c);
        uVar4 = func_08024020(param_1);
        func_08023FB0(param_1,uVar4,*(undefined1 *)(param_1 + 0x20));
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080241AC @ 0x080241AC
// =============================================================================
undefined4 func_080241AC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x28) == 3) {
    uStack_c = (uStack_c & _DAT_080241f0 | 0xb4) & _DAT_080241f4;
    func_0x0809b940(*(int *)(param_1 + 0x34),&uStack_c);
    uVar1 = func_08024020(param_1);
    func_08023FB0(param_1,uVar1,*(undefined1 *)(param_1 + 0x20));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08024224 @ 0x08024224
// =============================================================================
ulonglong func_08024224(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0809b230(*(undefined4 *)(param_1 + 0x34));
  return CONCAT44(in_lr,uVar1) ^ 1;
}

// =============================================================================
// Function: func_08024234 @ 0x08024234
// =============================================================================
void func_08024234(int param_1)

{
  func_0809BF18(*(undefined4 *)(param_1 + 0x34));
  return;
}

// =============================================================================
// Function: func_08024240 @ 0x08024240
// =============================================================================
void func_08024240(int param_1)

{
  func_0x0809b50c(*(undefined4 *)(param_1 + 0x34));
  return;
}

// =============================================================================
// Function: func_0802424C @ 0x0802424C
// =============================================================================
undefined8 func_0802424C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (((*(short *)(param_1 + 4) == 2) &&
      (cVar1 = func_0x0809b50c(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) &&
     (cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0')) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0802427C @ 0x0802427C
// =============================================================================
undefined4 func_0802427C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  uint uStack_c;
  
  cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    iVar2 = func_080AB788(0x78);
    uStack_c = ((uStack_c & _DAT_080242fc | iVar2 + 0xf0U & 0xffff) & _DAT_08024300 | 0x3c0000) &
               _DAT_08024304 & _DAT_08024308;
    func_0x0809b94c(*(undefined4 *)(param_1 + 0x34),&uStack_c);
    uVar3 = func_08024020(param_1);
    func_08023FB0(param_1,uVar3,*(undefined1 *)(param_1 + 0x20));
  }
  func_0809B2DC(*(undefined4 *)(param_1 + 0x34),10);
  func_0x0809b638(*(undefined4 *)(param_1 + 0x34));
  func_08032384(param_1,0,0);
  func_080200C4(param_1,0xa4);
  return in_lr;
}

// =============================================================================
// Function: func_0802430C @ 0x0802430C
// =============================================================================
undefined4 func_0802430C(int param_1)

{
  undefined4 in_lr;
  
  func_0x0809b8fc(*(undefined4 *)(param_1 + 0x34));
  return in_lr;
}

// =============================================================================
// Function: func_08024318 @ 0x08024318
// =============================================================================
undefined4 func_08024318(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = func_0x0809b230(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    func_0809B2A8(*(undefined4 *)(param_1 + 0x34),1);
    func_0809B278(*(undefined4 *)(param_1 + 0x34));
  }
  cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34));
  if ((cVar1 != '\0') && (uVar2 = func_080AB788(100), uVar2 < 0x1e)) {
    func_0x0809b644(*(undefined4 *)(param_1 + 0x34));
  }
  cVar1 = func_0x0809b50c(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    func_08032384(param_1,1,0);
    func_080200C4(param_1,0xa3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08024378 @ 0x08024378
// =============================================================================
undefined8 func_08024378(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  func_08032384(param_1,1,0);
  func_080200C4(param_1,0xa3);
  uVar1 = func_0809BF84(*(undefined4 *)(param_1 + 0x34));
  uVar2 = func_0802405C(param_1,*(undefined1 *)(param_1 + 0x38));
  if (*(ushort *)(param_1 + 0x22) != uVar2) {
    func_080321B0(param_1);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080243B8 @ 0x080243B8
// =============================================================================
undefined4 func_080243B8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  func_0x0809b624(*(undefined4 *)(param_1 + 0x34));
  cVar1 = func_0x0809b504(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 != '\0') {
    func_0x0809b644(*(undefined4 *)(param_1 + 0x34));
  }
  return in_lr;
}

// =============================================================================
// Function: func_080243DC @ 0x080243DC
// =============================================================================
undefined4 func_080243DC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  uint uStack_c;
  
  cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    iVar2 = func_080AB788(0x78);
    uStack_c = ((uStack_c & _DAT_0802445c | iVar2 + 0xf0U & 0xffff) & _DAT_08024460 | 0xbc0000) &
               _DAT_08024464;
    func_0x0809b94c(*(undefined4 *)(param_1 + 0x34),&uStack_c);
    uVar3 = func_08024020(param_1);
    func_08023FB0(param_1,uVar3,*(undefined1 *)(param_1 + 0x20));
  }
  func_0809B2DC(*(undefined4 *)(param_1 + 0x34),10);
  func_0x0809b638(*(undefined4 *)(param_1 + 0x34));
  func_08032384(param_1,0,0);
  func_080200C4(param_1,0xa4);
  return in_lr;
}

// =============================================================================
// Function: func_08024468 @ 0x08024468
// =============================================================================
undefined4 func_08024468(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint uStack_14;
  
  cVar1 = func_0x0809b8b0(*(undefined4 *)(param_1 + 0x34));
  if ((cVar1 == '\0') && (0x3b < param_3)) {
    if (*(byte *)(param_1 + 0x20) != param_2) {
      func_08032198(param_1,param_2);
    }
    uStack_14 = uStack_14 & _DAT_080244c0 | 0x3c;
    func_0x0809b968(*(undefined4 *)(param_1 + 0x34),&uStack_14);
    uVar2 = func_08024020(param_1);
    func_08023FB0(param_1,uVar2,*(byte *)(param_1 + 0x20));
  }
  return in_lr;
}

// =============================================================================
// Function: func_080244C4 @ 0x080244C4
// =============================================================================
undefined8 func_080244C4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1 == 0) || (param_1 != 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080244D8 @ 0x080244D8
// =============================================================================
undefined8 func_080244D8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1 == 0) || (param_1 != 1)) {
    uVar1 = 10;
  }
  else {
    uVar1 = 0xd;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080244EC @ 0x080244EC
// =============================================================================
undefined8 func_080244EC(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = func_0809BEDC(*(undefined4 *)(param_1 + 0x34));
  uVar2 = func_080005D4(0x8c);
  uVar3 = func_080244C4(uVar1);
  uVar1 = func_080244D8(uVar1);
  iVar4 = func_080324BC(uVar2,param_1,4,0xb,uVar3,uVar1,0,0);
  if (*(char *)(param_1 + 0x38) == '\x04') {
    func_0805E860(iVar4 + 0x70,8);
    *(undefined1 *)(iVar4 + 0x84) = 1;
    *(undefined1 *)(iVar4 + 0x86) = 0;
    *(undefined1 *)(iVar4 + 0x87) = 1;
    *(byte *)(iVar4 + 0x8a) = *(byte *)(iVar4 + 0x8a) & 0xfc | 2;
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0802459C @ 0x0802459C
// =============================================================================
undefined4 func_0802459C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(short *)(param_1 + 0x24) == 0) {
    sVar1 = *(short *)(param_1 + 0x26);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x24) + -1;
  }
  *(short *)(param_1 + 0x24) = sVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_080245E0 @ 0x080245E0
// =============================================================================
undefined8 func_080245E0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_1 - 0x32U < 0x14) {
    switch(*(uint *)(PTR_case_080245F8_080245f4 + (param_1 - 0x32U) * 4) & 0xfffffffe) {
    case 0x80245f8:
    case 0x8024648:
      uVar2 = 0;
      break;
    case 0x802464c:
      uVar2 = 1;
      break;
    case 0x8024650:
      uVar2 = 2;
      break;
    case 0x8024654:
      uVar2 = 3;
      break;
    case 0x8024658:
      uVar2 = 4;
      break;
    case 0x802465c:
      uVar2 = 5;
      break;
    case 0x8024660:
      uVar2 = 6;
      break;
    case 0x8024664:
      uVar2 = 7;
      break;
    case 0x8024668:
      uVar2 = 8;
      break;
    case 0x802466c:
      uVar2 = 9;
      break;
    case 0x8024670:
      uVar2 = 10;
      break;
    case 0x8024674:
      uVar2 = 0xb;
      break;
    case 0x8024678:
      uVar2 = 0xc;
      break;
    case 0x802467c:
      uVar2 = 0xd;
      break;
    case 0x8024680:
      uVar2 = 0xe;
      break;
    case 0x8024684:
      uVar2 = 0x14;
      break;
    case 0x8024688:
      uVar2 = 0xf;
      break;
    case 0x802468c:
      uVar2 = 0x10;
      break;
    case 0x8024690:
      uVar2 = func_0x080d11e4();
      uVar2 = func_0x080d0ed0(uVar2,1000);
      bVar1 = func_0x080d0ec8(uVar2,10);
      if (bVar1 < 5) {
        uVar2 = 0x12;
      }
      else {
        uVar2 = 0x11;
      }
      break;
    case 0x80246b2:
      uVar2 = 0x13;
    }
  }
  else {
    uVar2 = 0x15;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08024724 @ 0x08024724
// =============================================================================
undefined8 func_08024724(short *param_1,undefined4 param_2,ushort *param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  ushort uStack_7c;
  short sStack_7a;
  ushort uStack_78;
  short sStack_76;
  ushort uStack_74;
  short sStack_72;
  ushort uStack_70;
  short sStack_6e;
  short sStack_6c;
  ushort uStack_6a;
  short sStack_68;
  ushort uStack_66;
  short sStack_64;
  ushort uStack_62;
  short sStack_60;
  ushort uStack_5e;
  short sStack_5c;
  short sStack_5a;
  short sStack_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  short sStack_40;
  short sStack_3e;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  uStack_3c = param_2;
  cVar3 = func_080AC070(param_2,param_3);
  if (cVar3 == '\0') {
LAB_0802495c:
    *param_1 = 0;
    sVar4 = 0;
  }
  else {
    uStack_38 = ~((int)(short)param_3[3] - 1U & 7);
    iStack_34 = 8 - (param_3[1] & 7);
    uStack_78 = param_3[2];
    uVar5 = ~((int)(short)uStack_78 - 1U & 7);
    iVar7 = 8 - (*param_3 & 7);
    uStack_7c = *param_3;
    sVar4 = (short)uStack_38;
    sStack_7a = param_3[1] + sVar4;
    sStack_76 = param_3[3] + sVar4;
    iStack_30 = iStack_34;
    uStack_2c = uVar5;
    iStack_28 = iVar7;
    cVar3 = func_080AC070(uStack_3c,&uStack_7c);
    if (cVar3 != '\x01') {
      *param_1 = 0;
      param_1[1] = sVar4;
      goto LAB_08024960;
    }
    uStack_74 = *param_3;
    uStack_70 = param_3[2];
    sStack_72 = (short)iStack_30 + param_3[1];
    sStack_6e = (short)iStack_30 + param_3[3];
    uVar6 = func_080AC070(uStack_3c);
    uStack_24 = (uVar6 ^ 1) & 0xff;
    if (uStack_24 != 0) {
      *param_1 = 0;
      param_1[1] = (short)iStack_30;
      goto LAB_08024960;
    }
    uStack_6a = param_3[1];
    uStack_66 = param_3[3];
    sVar1 = (short)uVar5;
    sStack_6c = *param_3 + sVar1;
    sStack_68 = param_3[2] + sVar1;
    cVar3 = func_080AC070(uStack_3c);
    if (cVar3 == '\x01') {
      uStack_62 = param_3[1];
      uStack_5e = param_3[3];
      sVar2 = (short)iVar7;
      sStack_64 = *param_3 + sVar2;
      sStack_60 = param_3[2] + sVar2;
      cVar3 = func_080AC070(uStack_3c);
      if (cVar3 != '\x01') {
        *param_1 = sVar2;
        param_1[1] = 0;
        goto LAB_08024960;
      }
      sStack_5c = *param_3 + sVar1;
      sStack_5a = param_3[1] + sVar4;
      sStack_58 = param_3[2] + sVar1;
      sStack_56 = param_3[3] + sVar4;
      cVar3 = func_080AC070(uStack_3c);
      if (cVar3 == '\x01') {
        sStack_54 = *param_3 + sVar2;
        sVar4 = (short)uStack_38;
        sStack_52 = sVar4 + param_3[1];
        sStack_50 = param_3[2] + sVar2;
        sStack_4e = sVar4 + param_3[3];
        cVar3 = func_080AC070(uStack_3c);
        if (cVar3 != '\x01') {
          *param_1 = sVar2;
          param_1[1] = sVar4;
          goto LAB_08024960;
        }
        sVar4 = (short)uStack_2c;
        sStack_4c = sVar4 + *param_3;
        sStack_4a = (short)iStack_30 + param_3[1];
        sStack_48 = sVar4 + param_3[2];
        sStack_46 = (short)iStack_30 + param_3[3];
        cVar3 = func_080AC070(uStack_3c);
        if (cVar3 == '\x01') {
          sVar4 = (short)iStack_28;
          sStack_44 = sVar4 + *param_3;
          sStack_42 = (short)iStack_34 + param_3[1];
          sStack_40 = sVar4 + param_3[2];
          sStack_3e = (short)iStack_34 + param_3[3];
          cVar3 = func_080AC070(uStack_3c);
          if (cVar3 == '\x01') goto LAB_0802495c;
          *param_1 = sVar4;
          piVar8 = &iStack_34;
        }
        else {
          *param_1 = sVar4;
          piVar8 = &iStack_30;
        }
        param_1[1] = (short)*piVar8;
        goto LAB_08024960;
      }
      *param_1 = sVar1;
    }
    else {
      *param_1 = sVar1;
      sVar4 = (short)uStack_24;
    }
  }
  param_1[1] = sVar4;
LAB_08024960:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08024974 @ 0x08024974
// =============================================================================
undefined8 func_08024974(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined4 in_lr;
  
  func_0802B908();
  *(undefined4 *)(param_1 + 0x14) = _DAT_08024a70;
  *(int *)(param_1 + 0x34) = param_3;
  *(int *)(param_1 + 0x38) = param_3 + _DAT_08024a74;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0xf;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x60) = _DAT_08024a78;
  *(undefined2 *)(param_1 + 100) = 0;
  func_0x0800efec(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3b;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(short *)(param_1 + 0x7c) = (short)_DAT_08024a7c;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)(param_1 + 0xb2) = 100;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  func_0x0802c2dc(param_1);
  sVar1 = func_0802D158(param_1);
  if (*(short *)(param_1 + 0x22) != sVar1) {
    func_080321B0(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08024B9C @ 0x08024B9C
// =============================================================================
void func_08024B9C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar3 = 2;
  if (*(short *)(param_1 + 4) == 0x13) {
    if (((*(byte *)(*(int *)(param_1 + 0x34) + _DAT_08024be4) & 0x1f) >> 3 == 1) ||
       (cVar1 = func_0809C694(*(int *)(param_1 + 0x34) + _DAT_08024be4 + -0x25,0x4a), cVar1 != '\0')
       ) {
      uVar3 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x21) = uVar3;
  uVar2 = func_080005D4(0x284);
  func_0802B260(uVar2,param_1);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_08024BE8 @ 0x08024BE8
// =============================================================================
undefined4 func_08024BE8(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_0801FDC0();
  func_0802A588(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08024BFC @ 0x08024BFC
// =============================================================================
undefined4 * func_08024BFC(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar1 = func_0x080d3910(param_2,*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x40));
  if (cVar1 == '\0') {
    func_0803240C(&uStack_14,param_2);
    uStack_1c = uStack_14;
    uStack_18 = uStack_10;
  }
  else {
    uStack_1c = CONCAT22(*(short *)(param_2 + 0xe) + -9,*(short *)(param_2 + 10) + -7);
    uStack_18 = CONCAT22(*(short *)(param_2 + 0xe) + 5,*(short *)(param_2 + 10) + 7);
  }
  *param_1 = uStack_1c;
  param_1[1] = uStack_18;
  return param_1;
}

// =============================================================================
// Function: func_08024C54 @ 0x08024C54
// =============================================================================
undefined4 func_08024C54(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 6) = 1;
  func_080323C8();
  return in_lr;
}

// =============================================================================
// Function: func_08024C64 @ 0x08024C64
// =============================================================================
undefined4 func_08024C64(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 6) = 0;
  func_080323C8();
  return in_lr;
}

// =============================================================================
// Function: func_08024CA0 @ 0x08024CA0
// =============================================================================
undefined8 func_08024CA0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = func_0x080d3910(param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x28));
  if (((cVar1 == '\0') && (*(byte *)(param_1 + 0x3c) < 0x2b)) && (0x23 < *(byte *)(param_1 + 0x3c)))
  {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08024CD0 @ 0x08024CD0
// =============================================================================
undefined4 func_08024CD0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 in_lr;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_6c;
  int iStack_68;
  ushort uStack_64;
  ushort uStack_62;
  undefined4 auStack_60 [2];
  undefined2 uStack_56;
  short sStack_54;
  short sStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint auStack_30 [2];
  undefined1 uStack_28;
  undefined1 uStack_27;
  uint uStack_24;
  
  func_0802F0EC(param_1,*param_2,*(undefined1 *)(param_2 + 1));
  func_0802CDCC(param_1);
  sVar3 = func_0802D158(param_1);
  if (*(short *)((int)param_1 + 0x22) != sVar3) {
    func_080321B0(param_1);
  }
  if (*(short *)(param_1 + 9) == 0) {
    sVar3 = *(short *)((int)param_1 + 0x26);
  }
  else {
    sVar3 = *(short *)(param_1 + 9) + -1;
  }
  *(short *)(param_1 + 9) = sVar3;
  iVar10 = param_1[4];
  if (iVar10 != 0) {
    func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 4) + 0xc));
  }
  if (((param_1[6] == 0) && (param_1[7] == 0)) || (*(char *)(param_1 + 0xf) == '5'))
  goto LAB_08024f7e;
  func_0x080d3914(auStack_60,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_80 = 0;
  bVar1 = *(byte *)(param_1 + 8);
  uStack_56 = (undefined2)((uint)auStack_60[0] >> 0x10);
  sStack_54 = (short)auStack_60[1];
  if (bVar1 == 1) {
    if (&stack0x00000000 != &UNK_0000007c) {
      uStack_7c = auStack_60[0];
    }
    uStack_44 = CONCAT22(uStack_56,sStack_54 + -1);
    uVar4 = uStack_44;
    if (&stack0x00000000 != &UNK_00000078) goto LAB_08024ee6;
LAB_08024ee8:
    uStack_80 = 2;
  }
  else {
    sStack_52 = (short)((uint)auStack_60[1] >> 0x10);
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (&stack0x00000000 != &UNK_0000007c) {
          uStack_7c = auStack_60[0];
        }
        uVar4 = CONCAT22(sStack_52 + -1,(short)auStack_60[0]);
        uStack_3c = uVar4;
        if (&stack0x00000000 != &UNK_00000078) {
LAB_08024ee6:
          uStack_78 = uVar4;
        }
      }
      else {
        if (bVar1 != 3) goto LAB_08024eee;
        uStack_38 = CONCAT22(uStack_56,sStack_54 + -1);
        if (&stack0x00000000 != &UNK_0000007c) {
          uStack_7c = uStack_38;
        }
        uStack_34 = CONCAT22(sStack_52 + -1,sStack_54 + -1);
        uVar4 = uStack_34;
        if (&stack0x00000000 != &UNK_00000078) goto LAB_08024ee6;
      }
      goto LAB_08024ee8;
    }
    if (bVar1 == 0) {
      uStack_50 = CONCAT22(sStack_52 + -1,(short)auStack_60[0]);
      if (&stack0x00000000 != &UNK_0000007c) {
        uStack_7c = uStack_50;
      }
      uStack_4c = CONCAT22(sStack_52 + -1,sStack_54 + -1);
      uVar4 = uStack_4c;
      if (&stack0x00000000 != &UNK_00000078) goto LAB_08024ee6;
      goto LAB_08024ee8;
    }
  }
LAB_08024eee:
  piVar5 = (int *)*param_1;
  func_0x080d3918(&iStack_6c,piVar5,*(undefined2 *)(param_1 + 1),*(undefined4 *)(*piVar5 + 0x34));
  uVar13 = 0;
  puVar8 = (ushort *)&uStack_7c;
  if (uStack_80 != 0) {
    uStack_24 = (uint)uStack_64;
    puVar12 = puVar8;
    do {
      uVar11 = (int)((uint)*puVar12 << 0x10) >> 0x13;
      uVar6 = (int)((uint)puVar12[1] << 0x10) >> 0x13;
      if (((iStack_6c == 0) || (uStack_24 < uVar11)) || (uStack_62 < uVar6)) {
        puVar7 = (uint *)0x0;
      }
      else {
        uVar11 = uStack_24 * uVar6 + uVar11;
        if (iStack_68 != 0) {
          uVar11 = (uint)*(byte *)(iStack_68 + uVar11);
        }
        puVar7 = (uint *)(iStack_6c + uVar11 * 4);
      }
      if ((puVar7 != (uint *)0x0) && ((_DAT_0802500c & *puVar7) != 0)) {
        auStack_30[0] = (*puVar7 & 0x1ffff) >> 2;
        auStack_30[1] = 0;
        func_0x080d3918(piVar5,auStack_30,0,*(undefined4 *)(*piVar5 + 0x140));
        break;
      }
      puVar12 = puVar12 + 2;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uStack_80);
  }
  for (; puVar8 != (ushort *)(&uStack_7c + uStack_80); puVar8 = puVar8 + 2) {
  }
LAB_08024f7e:
  if (*(char *)(param_2 + 1) != '\0') {
    iVar10 = param_1[0xd] + _DAT_08025010;
    cVar2 = func_0800DC34(iVar10);
    if (cVar2 == '\0') {
      uStack_28 = func_0800DC10(iVar10);
      iVar9 = func_0x0800db30();
      if (iVar9 == 0x4e) {
        func_0x080d3918(param_1,1,0,*(undefined4 *)(param_1[5] + 100));
      }
    }
    cVar2 = func_0800DC34(iVar10);
    if (cVar2 == '\0') {
      uStack_27 = func_0800DC10(iVar10);
      iVar10 = func_0x0800db30();
      if ((iVar10 == 0x4f) && (cVar2 = func_0800EE2C(param_1[0xd] + _DAT_08025014), cVar2 != '\0'))
      {
        func_0x080d3918(param_1,0,0xffffffff,*(undefined4 *)(param_1[5] + 100));
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08025018 @ 0x08025018
// =============================================================================
undefined4 func_08025018(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xc1) = 0;
  if (*(char *)(param_1 + 0xc2) == '\0') {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      func_0802F0EC(param_1,0,0);
      sVar1 = func_0802D158(param_1);
      if (*(short *)(param_1 + 0x22) != sVar1) {
        func_080321B0(param_1);
      }
    }
    func_0803242C(param_1,param_2);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08025068 @ 0x08025068
// =============================================================================
undefined8 func_08025068(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 in_lr;
  undefined8 uVar20;
  
  if (*(char *)(*(int *)(param_1 + 0x34) + _DAT_080250f0) != '\0') goto LAB_080251e8;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + _DAT_080250f4) = 1;
  }
  uVar7 = func_0x0800e4f0(*(undefined4 *)(param_1 + 0x38));
  UNRECOVERED_JUMPTABLE = (code *)func_0x0800e51c(*(undefined4 *)(param_1 + 0x38));
  func_0800E9E4(*(undefined4 *)(param_1 + 0x38),param_2);
  uVar8 = func_0x0800e4f0(*(undefined4 *)(param_1 + 0x38));
  uVar9 = func_0x0800e4fc(*(undefined4 *)(param_1 + 0x38));
  func_0800EA68(*(undefined4 *)(param_1 + 0x38),param_3);
  uVar10 = func_0x0800e4fc(*(undefined4 *)(param_1 + 0x38));
  uVar12 = _DAT_080250f8;
  if ((param_2 < 1) && (-1 < param_3)) goto LAB_08025158;
  uVar11 = *(byte *)(param_1 + 0xc3) - 0x24;
  if (6 < uVar11) goto LAB_08025158;
  uVar11 = *(uint *)(uVar11 * 4 + _DAT_080250f8);
  switch(uVar11 & 0xfffffffe) {
  case 0x8025118:
    if (uVar8 <= (uint)UNRECOVERED_JUMPTABLE >> 1) break;
    goto LAB_08025154;
  case 0x8025122:
    uVar12 = func_0x080d0eda(UNRECOVERED_JUMPTABLE,5);
    goto joined_r0x0802513a;
  case 0x8025130:
    uVar12 = func_0x080d0eda(UNRECOVERED_JUMPTABLE,0x14);
joined_r0x0802513a:
    if (uVar12 < uVar8) {
LAB_08025154:
      *(byte *)(param_1 + 0xc3) = 0;
    }
    break;
  case 0x802513e:
    if (uVar8 != 0) goto LAB_08025154;
    break;
  case 0x8025144:
    if (uVar10 < 0x32) goto LAB_08025154;
    break;
  case 0x802514a:
    if (uVar10 < 0x50) goto LAB_08025154;
    break;
  case 0x8025150:
    if (uVar10 != 100) goto LAB_08025154;
    break;
  case 0x8484640:
    *(uint *)(param_1 + 0xe3) = uVar11;
    *(uint *)(param_1 + 0x74) = uVar12;
    *(uint *)(param_1 + 0xe3) = uVar11;
    uVar7 = uVar12 >> 8;
    *(uint *)(uVar7 + 0x14) = uVar11;
    *(char *)(uVar7 + 0xd) = (char)uVar12;
    uVar13 = *(undefined4 *)(param_1 + 0xd3);
    *(char *)(uVar12 + 0xd) = (char)uVar12;
    *(char *)(param_1 + 0xd3) = (char)uVar13;
    *(undefined4 *)(uVar7 + 0x54) = uVar13;
    *(undefined4 *)(uVar8 + 0x54) = 10;
    *(undefined4 *)(param_1 + 0xd3) = uVar13;
    bVar3 = *(byte *)(uVar7 + 5);
    uVar8 = (uint)bVar3;
    iVar15 = *(int *)(uVar8 + 4);
    uVar12 = *(uint *)(uVar7 + 100);
    uVar7 = uVar12 >> 8;
    *(undefined4 *)(iVar15 + 0x40) = 0x67;
    *(uint *)(uVar7 + 100) = uVar12;
    *(uint *)(iVar15 + 0x54) = uVar8;
    *(undefined4 *)(uVar8 + 0x54) = 10;
    *(byte *)(uVar7 + 0x11) = bVar3;
    *(undefined4 *)(iVar15 + 0x10) = 0x67;
    uVar6 = (undefined1)(uVar12 >> 8);
    *(undefined1 *)(uVar8 + 0x11) = uVar6;
    *(undefined2 *)(iVar15 * 2) = 0x67;
    *(undefined4 *)(uVar7 + 0x54) = 0x67;
    *(undefined1 *)(iVar15 + 1) = uVar6;
    *(undefined4 *)(iVar15 + 0x10) = 0x67;
    *(uint *)(uVar7 + 0x44) = uVar8;
    uVar12 = uVar12 >> 8;
    *(char *)(uVar12 + 0x1d) = (char)uVar10 + -0x74;
    uVar13 = *(undefined4 *)(iVar15 + 0x70);
    iVar16 = *(int *)(uVar8 + 4);
    *(undefined1 *)(iVar16 + 9) = uVar6;
    *(char *)(iVar16 + 0x10) = (char)uVar13;
    *(undefined4 *)(uVar12 + 0x14) = uVar13;
    iVar15 = _UNK_000000d9;
    iVar18 = *(int *)(uVar12 + 0x44);
    cVar4 = *(char *)(iVar16 * 2);
    uVar13 = *(undefined4 *)(iVar16 + 0x44);
    iVar16 = *(int *)(cVar4 + 4);
    *(int *)(iVar16 + 0x44) = iVar16;
    *(char *)(iVar16 + 9) = (char)uVar13;
    uVar12 = *(uint *)(iVar15 + 4);
    uVar7 = uVar12 >> 0x15;
    *(undefined4 *)(iVar15 + 0x14) = param_4;
    *(uint *)(uVar7 + 0x54) = uVar7;
    uVar6 = (undefined1)iVar18;
    *(undefined1 *)(uVar12 + 9) = uVar6;
    uVar12 = *(uint *)(uVar7 + 100);
    uVar7 = *(uint *)(iVar15 + 4);
    uVar8 = uVar7 >> 0x15;
    *(undefined4 *)(iVar15 + 0x14) = param_4;
    *(uint *)(uVar8 + 0x54) = uVar8;
    *(char *)(uVar7 + 9) = cVar4;
    *(char *)(iVar15 + 0xd) = (char)uVar8;
    *(int *)(uVar8 + 0x74) = iVar15;
    iVar16 = *(int *)(iVar15 + 4);
    uVar12 = uVar12 >> 8;
    *(undefined1 *)(iVar16 + 0xc) = 0x65;
    *(undefined4 *)(iVar16 + 0x70) = 0x65;
    *(char *)(uVar12 + 0x19) = (char)*(undefined4 *)(iVar16 + 0x54);
    uVar12 = *(uint *)(uVar12 + 100);
    uVar7 = *(uint *)(*(int *)(iVar15 + 4) + 0x54);
    iVar17 = *(int *)(uVar7 + 0x14);
    *(uint *)(uVar7 + 0x14) = uVar7;
    *(uint *)(uVar12 + 0x54) = uVar7;
    uVar13 = *(undefined4 *)(*(int *)((uVar7 >> 0x15) + 0x14) + 0x14);
    *(int *)(uVar7 + 0x54) = iVar17;
    iVar15 = *(int *)(iVar17 + 4);
    *(undefined4 *)(iVar17 + 0x14) = uVar13;
    *(uint *)(uVar7 + 0x54) = uVar7;
    uVar7 = uVar12 >> 8;
    *(undefined4 *)(uVar7 + 0x14) = 0x65;
    *(uint *)(iVar15 + 0x24) = uVar12;
    *(undefined1 *)(uVar7 + 0x15) = uVar6;
    *(uint *)(uVar7 + 0x14) = uVar7;
    *(int *)(uVar7 + 0x74) = iVar17;
    *(undefined1 *)(iVar15 + 0x10) = 0x74;
    *(undefined4 *)(uVar7 + 0x54) = 0x74;
    uVar7 = uVar12 >> 0x1d;
    *(undefined1 *)(iVar17 + 9) = 10;
    *(uint *)(iVar15 + 0x74) = uVar7;
    *(int *)(uVar7 + 0x14) = iVar17;
    *(char *)(uVar7 + 0x11) = (char)iVar17;
    uVar8 = uVar12 >> 8;
    *(undefined1 *)(uVar8 + 9) = uVar6;
    *(undefined1 *)(iVar15 + 0x10) = 10;
    *(undefined4 *)(uVar8 + 0x14) = 10;
    uVar7 = *(uint *)(iVar18 + 0x74);
    *(int *)(uVar8 + 0x54) = iVar17;
    *(uint *)(iVar15 + 0x44) = uVar8;
    *(undefined2 *)(iVar15 * 2) = 0x75;
    *(undefined4 *)(uVar8 + 0x54) = 0x75;
    *(char *)(iVar15 + 1) = (char)(uVar12 >> 8);
    *(uint *)(uVar7 + 0x14) = uVar8;
    uVar12 = *(uint *)(iVar17 + 0x14);
    *(uint *)(uVar7 + 0x14) = uVar8;
    uVar12 = uVar12 >> 0x15;
    iVar16 = *(int *)(iVar17 + 0x14);
    uVar6 = (undefined1)*(undefined4 *)(iVar15 + 0x74);
    *(undefined1 *)(iVar16 + 0x1c) = uVar6;
    uVar5 = (undefined1)*(undefined4 *)(uVar8 + 100);
    *(undefined1 *)(iVar16 + 0x10) = uVar5;
    *(undefined1 *)(iVar16 + 0x1c) = uVar6;
    *(undefined1 *)(uVar8 + 9) = uVar5;
    uVar8 = uVar7 >> 8;
    *(undefined4 *)(iVar16 + 0x30) = 0x66;
    *(undefined1 *)(uVar8 + 0x15) = uVar5;
    *(char *)(iVar17 + 0xd) = (char)iVar15;
    *(uint *)(uVar8 + 0x54) = uVar12;
    *(uint *)(iVar17 + 0x54) = uVar12;
    *(char *)(uVar8 + 0xd) = (char)iVar17;
    iVar15 = _UNK_0000000e;
    uVar13 = *(undefined4 *)(*(int *)(iVar17 + 0x74) + 0x50);
    *(undefined1 *)(_UNK_0000000e + 0x11) = 0x65;
    *(undefined1 *)(iVar15 + 0xc) = uVar5;
    *(char *)(iVar15 + 0x10) = (char)uVar13;
    *(undefined4 *)(uVar8 + 0x54) = uVar13;
    iVar15 = *(int *)(iVar15 + 0x14);
    *(undefined4 *)(iVar15 + 100) = *(undefined4 *)(uVar8 + 0x44);
    *(char *)(iVar15 + 9) = (char)(uVar7 >> 8);
    *(uint *)(iVar15 + 0x54) = uVar12;
    *(undefined4 *)(iVar15 + 0x30) = 0x79;
    uVar7 = *(uint *)(iVar15 + 100);
    *(undefined1 *)(iVar15 + 0x10) = 0x79;
    uVar12 = _LAB_084847f4;
    _UNK_00000064 = uVar7;
    *(undefined1 *)(_LAB_084847f4 + 0x10) = 0x65;
    *(char *)(uVar12 + 9) = (char)uVar7;
    iVar16 = _LAB_08484954;
    uVar7 = _LAB_08484938;
    *(undefined2 *)(_LAB_08484938 + 0x20) = 0;
    *(uint *)(uVar7 + 0x54) = uVar12 >> 0x14;
    *(char *)(uVar12 + 9) = (char)*(undefined4 *)(uVar12 + 0x14);
    *(undefined1 *)(uVar12 + 0x11) = 0x6f;
    *(undefined1 *)((uVar7 >> 8) + 0x11) = 0x6f;
    *(undefined4 *)(uVar12 + 0x10) = 0x73;
    uVar12 = _UNK_00000064;
    uVar14 = *(undefined4 *)(iVar16 + 0x34);
    iVar15 = *(int *)(iVar16 + 4);
    *(undefined4 *)(_UNK_00000064 + 0x14) = 0x65;
    *(undefined1 *)(iVar16 + 0x19) = 0x3f;
    *(undefined1 *)(iVar15 + 0xd) = 0;
    *(undefined2 *)(iVar15 * 2) = 0x74;
    *(undefined1 *)(iVar16 + 9) = 0x74;
    *(char *)((uVar12 >> 8) + 0x11) = (char)uVar12;
    *(char *)(iVar15 + 0xd) = (char)(uVar12 >> 8);
    *(undefined1 *)(iVar15 + 0x10) = 0x74;
    iVar15 = *(int *)(iVar15 + 0x74);
    *(undefined1 *)(iVar15 + 0xc) = 0x6f;
    uVar19 = *(undefined4 *)(iVar16 + 0x74);
    uVar13 = *(undefined4 *)(iVar16 + 0x34);
    *(undefined4 *)(iVar15 + 0x60) = 0x65;
    *(char *)((uVar12 >> 8) + 9) = (char)uVar19;
    uVar12 = uVar12 >> 8;
    *(char *)(iVar15 + 0x22) = (char)uVar13;
    *(undefined4 *)(uVar12 + 0x14) = 0x22;
    *(undefined1 *)(iVar15 + 9) = 0x74;
    *(uint *)(iVar15 + 0x14) = uVar12;
    UNK_00000088 = 10;
    *(undefined1 *)(iVar15 + 0x10) = 0x73;
    *(undefined4 *)(uVar12 + 0x54) = 0x73;
    iVar15 = *(int *)(*(int *)(iVar15 + 0x74) + 0x74);
    *(undefined4 *)(iVar15 + 0x10) = 0x74;
    *(undefined4 *)(iVar16 + 0x34) = 0;
    *(undefined1 *)(iVar15 + 0xd) = 0x74;
    *(undefined1 *)(iVar15 + 0x1c) = 0x68;
    *(undefined1 *)(*(int *)(iVar16 + 4) + 0x10) = 0x74;
    iVar15 = _UNK_0000000e;
    *(undefined1 *)(iVar16 + 0xd) = *(undefined1 *)(_UNK_0000000e + 5);
    *(undefined1 *)(iVar15 + 9) = 0x6f;
    *(undefined1 *)(iVar15 + 0x10) = 0x6e;
    *(undefined1 *)(iVar15 + 0x14) = 0x74;
    *(undefined4 *)(iVar16 + 0x54) = uVar14;
    iVar15 = *(int *)(iVar16 + 0x74);
    _UNK_000000c2 = 0x6f;
    *(undefined1 *)(iVar15 + 0x74) = 0x74;
    _NotUsed = 0x79;
    *(int *)(iVar16 + 0x54) = iVar16;
    *(undefined1 *)(iVar15 + 0x10) = 0x79;
    *(undefined1 *)(iVar15 + 9) = 0x6f;
    UNK_0000007f = 10;
    UNK_00000009 = 0x6f;
    _UNK_00000024 = 0x6e;
    *(char *)(iVar15 + 0x10) = (char)*(undefined4 *)(iVar15 + 0x20);
    uVar12 = *(uint *)(_UNK_00000074 + 0x74);
    UNK_0000001d = (undefined1)_UNK_00000074;
    *(undefined4 *)((uVar12 >> 8) + 0x34) = 0;
    iVar15 = _UndefinedInstruction;
    puVar1 = (undefined1 *)(_UndefinedInstruction + 5);
    *(undefined4 *)(_UndefinedInstruction + 0x70) = 0x65;
    *(undefined1 *)(iVar15 + 0x11) = *puVar1;
    *(undefined1 *)(iVar15 + 0x14) = 0x65;
    uVar13 = *(undefined4 *)(_UNK_00000074 + 0x10);
    uVar8 = uVar12 >> 8;
    uVar6 = (undefined1)uVar13;
    *(undefined1 *)(_UNK_00000074 + 0x10) = uVar6;
    *(undefined4 *)(uVar8 + 0x54) = uVar13;
    uVar7 = *(uint *)(uVar8 + 0x44);
    *(undefined1 *)(uVar7 + 0x1c) = uVar6;
    *(undefined1 *)(uVar8 + 9) = 0x79;
    *(undefined4 *)(uVar7 + 0x54) = 0x2e;
    _UNK_0000000e = CONCAT13((char)uVar7,_UNK_0000000e);
    uVar6 = (undefined1)(uVar12 >> 8);
    *(undefined1 *)(uVar7 + 9) = uVar6;
    uVar8 = uVar12 >> 8;
    *(undefined1 *)(uVar8 + 0x15) = 0x79;
    iVar15 = *(int *)(uVar7 + 0x50);
    *(uint *)(uVar7 + 0x14) = uVar8;
    *(undefined4 *)(uVar12 + 100) = 0xb;
    *(int *)(uVar7 + 0x30) = iVar15;
    *(undefined1 *)(uVar8 + 0x15) = 0xb;
    UNK_0000000d = 10;
    *(char *)(uVar8 + 0xd) = (char)uVar7;
    *(int *)(uVar7 + 0x40) = iVar15 >> (uVar7 & 0xff);
    *(char *)(uVar7 + 0x10) = (char)*(undefined4 *)(uVar8 + 100);
    iVar15 = *(int *)(uVar7 + 0x74);
    *(undefined4 *)(iVar15 + 0x74) = 10;
    *(undefined1 *)(uVar7 + 0x11) = uVar6;
    *(undefined1 *)(uVar7 + 0x10) = 10;
    *(int *)(iVar15 + 0x54) = iVar15;
    *(undefined1 *)(uVar7 + 0x10) = 0x6f;
    *(undefined4 *)(uVar8 + 0x54) = 0x6f;
    uVar13 = *(undefined4 *)(iVar15 + 0x54);
    uVar7 = *(uint *)(uVar7 + 0x44);
    uVar12 = uVar12 >> 0x1d;
    uVar14 = *(undefined4 *)(uVar12 + 0x14);
    *(char *)(uVar12 + 0x11) = (char)iVar15;
    *(char *)(uVar12 + 0xd) = (char)uVar7;
    *(undefined4 *)(uVar12 + 0x10) = 0x73;
    *(undefined1 *)(uVar12 + 0x10) = 0x73;
    *(undefined4 *)(uVar8 + 0x14) = 0x73;
    bVar3 = *(byte *)(uVar8 + 4);
    uVar6 = (undefined1)uVar14;
    *(undefined1 *)(bVar3 + 0x15) = uVar6;
    *(undefined1 *)(uVar12 + 0x1c) = 0x73;
    *(undefined4 *)(bVar3 + 0x54) = 0x73;
    iVar15 = _UndefinedInstruction;
    pbVar2 = (byte *)(_UndefinedInstruction + 5);
    *(undefined1 *)(_UndefinedInstruction + 8) = uVar6;
    iVar16 = *(int *)(iVar15 + 0x74);
    *(undefined4 *)(*pbVar2 + 0x54) = 0;
    iVar15 = _DAT_08484a68;
    uVar12 = uVar7 >> 8;
    _UNK_00000054 = 0x2e;
    *(uint *)(uVar12 + 0x54) = uVar12;
    *(uint *)(uVar12 + 0x24) = uVar12;
    *(char *)(iVar16 + 9) = (char)(uVar7 >> 8);
    *(undefined4 *)(*(int *)(iVar15 + 0x14) + 0x54) = 0;
    _UNK_00000079 = 0;
    uVar20 = (*UNRECOVERED_JUMPTABLE)(0x20,iVar15,_UNK_00000054,uVar13);
    return uVar20;
  }
LAB_08025158:
  if ((uVar9 != 100) && (uVar10 == 100)) {
    *(undefined1 *)(param_1 + 0xc3) = 0x2a;
    uVar13 = 1;
    goto LAB_080251ea;
  }
  if ((uVar9 < 0x50) && (0x4f < uVar10)) {
    uVar6 = 0x29;
LAB_080251e6:
    *(undefined1 *)(param_1 + 0xc3) = uVar6;
  }
  else {
    if ((uVar9 < 0x32) && (0x31 < uVar10)) {
      uVar6 = 0x28;
      goto LAB_080251e6;
    }
    if ((uVar7 != 0) && (uVar8 == 0)) {
      uVar6 = 0x27;
      goto LAB_080251e6;
    }
    uVar12 = func_0x080d0eda(UNRECOVERED_JUMPTABLE,0x14);
    if ((uVar12 < uVar7) && (uVar8 <= uVar12)) {
      uVar6 = 0x26;
      goto LAB_080251e6;
    }
    uVar12 = func_0x080d0eda(UNRECOVERED_JUMPTABLE,5);
    if ((uVar12 < uVar7) && (uVar8 <= uVar12)) {
      uVar6 = 0x25;
      goto LAB_080251e6;
    }
    if (((uint)UNRECOVERED_JUMPTABLE >> 1 < uVar7) && (uVar8 <= (uint)UNRECOVERED_JUMPTABLE >> 1)) {
      uVar6 = 0x24;
      goto LAB_080251e6;
    }
  }
LAB_080251e8:
  uVar13 = 0;
LAB_080251ea:
  return CONCAT44(in_lr,uVar13);
}

// =============================================================================
// Function: func_080251FC @ 0x080251FC
// =============================================================================
undefined8
func_080251FC(undefined4 param_1,undefined4 param_2,undefined4 *param_3,short param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = *param_3;
  uStack_1c = param_3[1];
  uVar2 = 1;
  if (param_5 != 0) {
    do {
      uStack_20 = CONCAT22(uStack_20._2_2_,(short)uStack_20 + param_4);
      uStack_1c = CONCAT22(uStack_1c._2_2_,(short)uStack_1c + param_4);
      cVar1 = func_080AC070(param_2,&uStack_20);
      if (cVar1 == '\0') break;
      uVar2 = uVar2 + 1;
    } while (uVar2 <= param_5);
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08025248 @ 0x08025248
// =============================================================================
undefined8
func_08025248(undefined4 param_1,undefined4 param_2,undefined4 *param_3,short param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = *param_3;
  uStack_1c = param_3[1];
  uVar2 = 1;
  if (param_5 != 0) {
    do {
      uStack_20 = CONCAT22(uStack_20._2_2_ + param_4,(undefined2)uStack_20);
      uStack_1c = CONCAT22(uStack_1c._2_2_ + param_4,(undefined2)uStack_1c);
      cVar1 = func_080AC070(param_2,&uStack_20);
      if (cVar1 == '\0') break;
      uVar2 = uVar2 + 1;
    } while (uVar2 <= param_5);
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08025294 @ 0x08025294
// =============================================================================
undefined8 func_08025294(undefined4 param_1,undefined4 param_2,int param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  short *psVar8;
  undefined4 in_lr;
  short asStack_24 [4];
  short asStack_1c [4];
  
  sVar1 = param_4[2];
  sVar2 = *param_4;
  sVar3 = param_4[3];
  sVar4 = param_4[1];
  if ((int)(0x10fU - (int)sVar1 & sVar2 + _DAT_080252f4 & 0xafU - (int)sVar3 & sVar4 + _DAT_080252f8
           ) < 0) {
    if (param_3 != 1) {
      if (param_3 < 2) {
        if (param_3 != 0) goto LAB_08025360;
      }
      else {
        if (param_3 == 2) {
          sVar6 = -((sVar1 - sVar2) + 0x10);
          psVar8 = asStack_24;
        }
        else {
          if (param_3 != 3) goto LAB_08025360;
          sVar6 = (sVar1 - sVar2) + 0x10;
          psVar8 = asStack_1c;
        }
        *psVar8 = sVar6 + sVar2;
        psVar8[1] = sVar4;
        psVar8[2] = sVar6 + sVar1;
        psVar8[3] = sVar3;
      }
    }
    cVar5 = func_080AC070(param_2);
    if (cVar5 != '\x01') {
      uVar7 = 1;
      goto LAB_08025362;
    }
  }
LAB_08025360:
  uVar7 = 0;
LAB_08025362:
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_0802536C @ 0x0802536C
// =============================================================================
undefined4 func_0802536C(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  short sVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 in_lr;
  undefined1 auStack_74 [12];
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  short sStack_52;
  undefined2 uStack_50;
  short sStack_4e;
  short sStack_4c;
  undefined2 uStack_4a;
  short sStack_48;
  undefined2 uStack_46;
  short sStack_44;
  undefined2 uStack_42;
  short sStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  short sStack_3a;
  undefined2 uStack_38;
  short sStack_36;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  
  uStack_2c = (uint)*(ushort *)(param_1 + 1);
  uStack_30 = param_3;
  func_0x080d3918(auStack_74,(int *)*param_1,uStack_2c,*(undefined4 *)(*(int *)*param_1 + 0x34));
  iStack_28 = (int)*(short *)((int)param_1 + 10);
  iStack_24 = (int)*(short *)((int)param_1 + 0xe);
  func_0x080d3914(&uStack_68,param_1,*(undefined4 *)(param_1[5] + 0xc));
  if (param_2 == 1) {
    uStack_60 = -uStack_30;
    func_080AC124(auStack_74,&uStack_68,0,&uStack_60,0,0);
    if (uStack_60 != 0) {
      iStack_24 = iStack_24 + uStack_60;
      uStack_68 = CONCAT22(uStack_68._2_2_ + (short)uStack_60,(short)uStack_68);
      uStack_64 = CONCAT22(uStack_64._2_2_ + (short)uStack_60,(short)uStack_64);
LAB_0802548e:
      uVar6 = uStack_60;
      if ((int)uStack_60 < 0) {
        uVar6 = -uStack_60;
      }
      uStack_30 = uStack_30 - uVar6;
    }
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
      return in_lr;
    }
    uStack_60 = uStack_30;
    func_080AC124(auStack_74,&uStack_68,&uStack_60,0,0,0);
    if (uStack_60 != 0) {
      iStack_24 = iStack_24 + uStack_60;
      uStack_68 = CONCAT22(uStack_68._2_2_ + (short)uStack_60,(short)uStack_68);
      uStack_64 = CONCAT22(uStack_64._2_2_ + (short)uStack_60,(short)uStack_64);
      goto LAB_0802548e;
    }
  }
  else if (param_2 == 2) {
    uStack_60 = -uStack_30;
    func_080AC124(auStack_74,&uStack_68,0,0,&uStack_60,0);
    if (uStack_60 != 0) {
      iStack_28 = iStack_28 + uStack_60;
      goto LAB_08025482;
    }
  }
  else {
    if (param_2 != 3) {
      return in_lr;
    }
    uStack_60 = uStack_30;
    func_080AC124(auStack_74,&uStack_68,0,0,0,&uStack_60);
    if (uStack_60 != 0) {
      iStack_28 = iStack_28 + uStack_60;
LAB_08025482:
      uStack_68 = CONCAT22(uStack_68._2_2_,(short)uStack_68 + (short)uStack_60);
      uStack_64 = CONCAT22(uStack_64._2_2_,(short)uStack_64 + (short)uStack_60);
      goto LAB_0802548e;
    }
  }
  if (uStack_30 == 0) goto LAB_080257b2;
  uStack_34 = 0;
  uStack_5c = uStack_68;
  uVar5 = uStack_5c;
  uStack_58 = uStack_64;
  uVar1 = uStack_58;
  uStack_5c._0_2_ = (short)uStack_68;
  uStack_5c._2_2_ = (short)((uint)uStack_68 >> 0x10);
  uStack_58._0_2_ = (short)uStack_64;
  uStack_58._2_2_ = (short)((uint)uStack_64 >> 0x10);
  if (param_2 == 1) {
    uStack_5c = CONCAT22(uStack_5c._2_2_ + -1,(short)uStack_5c);
    uStack_58 = CONCAT22(uStack_58._2_2_ + -1,(short)uStack_58);
    uVar5 = uStack_5c;
    uVar1 = uStack_58;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      uStack_5c = CONCAT22(uStack_5c._2_2_ + 1,(short)uStack_5c);
      uStack_58 = CONCAT22(uStack_58._2_2_ + 1,(short)uStack_58);
      uVar5 = uStack_5c;
      uVar1 = uStack_58;
    }
  }
  else {
    if (param_2 == 2) {
      uStack_5c._0_2_ = (short)uStack_5c + -1;
      uStack_58._0_2_ = (short)uStack_58 + -1;
    }
    else {
      if (param_2 != 3) goto LAB_0802550a;
      uStack_5c._0_2_ = (short)uStack_5c + 1;
      uStack_58._0_2_ = (short)uStack_58 + 1;
    }
    uVar5 = uStack_5c;
    uVar1 = uStack_58;
  }
LAB_0802550a:
  uStack_58 = uVar1;
  uStack_5c = uVar5;
  iVar8 = param_2;
  if (-1 < param_2) {
    if (param_2 < 2) {
      uStack_34 = func_080251FC(param_1,auStack_74,&uStack_5c,0xffffffff,8);
      if (uStack_34 < 9) {
        sStack_4c = -(short)uStack_34 + (short)uStack_68;
        uStack_4a = uStack_68._2_2_;
        sStack_48 = -(short)uStack_34 + (short)uStack_64;
        uStack_46 = uStack_64._2_2_;
        cVar2 = func_080AC070(auStack_74);
        if (cVar2 != '\x01') {
          iVar8 = 2;
          goto LAB_08025664;
        }
      }
      uStack_34 = func_080251FC(param_1,auStack_74,&uStack_5c,1,8);
      uVar6 = uStack_34;
      if (uStack_34 < 9) {
        sStack_44 = (short)uStack_68 + (short)uStack_34;
        uStack_42 = uStack_68._2_2_;
        sStack_40 = (short)uStack_34 + (short)uStack_64;
        uStack_3e = uStack_64._2_2_;
        uStack_34 = uVar6;
        cVar2 = func_080AC070(auStack_74);
        if (cVar2 != '\x01') {
          iVar8 = 3;
        }
      }
    }
    else if (param_2 < 4) {
      uStack_34 = func_08025248(param_1,auStack_74,&uStack_5c,0xffffffff,8);
      if (uStack_34 < 9) {
        uStack_54 = (short)uStack_68;
        sStack_52 = -(short)uStack_34 + uStack_68._2_2_;
        uStack_50 = (short)uStack_64;
        sStack_4e = -(short)uStack_34 + uStack_64._2_2_;
        cVar2 = func_080AC070(auStack_74);
        if (cVar2 != '\x01') {
          iVar8 = 1;
          goto LAB_08025664;
        }
      }
      uStack_34 = func_08025248(param_1,auStack_74,&uStack_5c,1,8);
      uVar6 = uStack_34;
      if (uStack_34 < 9) {
        uStack_3c = (short)uStack_68;
        sStack_3a = (short)uStack_34 + uStack_68._2_2_;
        uStack_38 = (short)uStack_64;
        sStack_36 = (short)uStack_34 + uStack_64._2_2_;
        uStack_34 = uVar6;
        cVar2 = func_080AC070(auStack_74);
        if (cVar2 != '\x01') {
          iVar8 = 0;
        }
      }
    }
  }
LAB_08025664:
  if ((((iVar8 != param_2) && (uStack_34 < 4)) || (uStack_2c != 2)) ||
     ((*(char *)((int)param_1 + 0x3e) != '\x02' ||
      (cVar2 = func_08025294(param_1,auStack_74,param_2,&uStack_68), cVar2 == '\0')))) {
    if (iVar8 != param_2) {
      puVar7 = &uStack_34;
      if (uStack_30 < uStack_34) {
        puVar7 = &uStack_30;
      }
      uVar6 = *puVar7;
      if (iVar8 == 1) {
        iStack_24 = iStack_24 - uVar6;
      }
      else if (iVar8 < 2) {
        if (iVar8 == 0) {
          iStack_24 = iStack_24 + uVar6;
        }
      }
      else if (iVar8 == 2) {
        iStack_28 = iStack_28 - uVar6;
      }
      else if (iVar8 == 3) {
        iStack_28 = iStack_28 + uVar6;
      }
    }
    goto LAB_080257b2;
  }
  piVar4 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar11 = (undefined4 *)piVar4[1];
  pcVar12 = (char *)(param_1 + 0xf);
  for (puVar9 = (undefined4 *)*piVar4; puVar9 != puVar11; puVar9 = puVar9 + 1) {
    cVar2 = func_0x08008cd0(*puVar9);
    if (cVar2 == '\0') {
      uVar5 = *puVar9;
      goto LAB_080256c4;
    }
  }
  uVar5 = puVar11[-1];
LAB_080256c4:
  func_08008B6C(uVar5,0x69);
  iVar8 = 0;
  sVar10 = 0;
  sVar3 = (short)iStack_24;
  if (param_2 == 1) {
    iVar8 = -(((int)uStack_64._2_2_ - (int)uStack_68._2_2_) + 0x10);
LAB_08025732:
    sVar10 = sVar3 + (short)iVar8;
  }
  else {
    if (1 < param_2) {
      if (param_2 == 2) {
        iVar8 = -(((int)(short)uStack_64 - (int)(short)uStack_68) + 0x10);
      }
      else {
        if (param_2 != 3) goto LAB_08025734;
        iVar8 = ((int)(short)uStack_64 - (int)(short)uStack_68) + 0x10;
      }
      sVar3 = (short)iStack_28;
      goto LAB_08025732;
    }
    if (param_2 == 0) {
      iVar8 = ((int)uStack_64._2_2_ - (int)uStack_68._2_2_) + 0x10;
      goto LAB_08025732;
    }
  }
LAB_08025734:
  if (*pcVar12 == '\0') {
    *pcVar12 = ',';
    param_1[0x20] = iVar8 << 0xc;
  }
  else {
    if (*pcVar12 != '\a') goto LAB_080257b2;
    *pcVar12 = '-';
    uVar5 = func_0x080d0ec8(iVar8 << 0x10,0xc);
    param_1[0x20] = uVar5;
  }
  *(short *)(param_1 + 0x21) = sVar10;
LAB_080257b2:
  param_1[2] = iStack_28 << 0x10;
  param_1[3] = iStack_24 << 0x10;
  return in_lr;
}

// =============================================================================
// Function: func_080257D0 @ 0x080257D0
// =============================================================================
undefined4 func_080257D0(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  if (param_2 == '\0') {
    iVar2 = func_0800EB3C(param_1[0xe]);
  }
  else {
    iVar2 = func_0800EBC4(param_1[0xe]);
  }
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0xf) = 0x13;
    func_0x0802a7d8(param_1);
    piVar3 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar6 = (undefined4 *)piVar3[1];
    for (puVar5 = (undefined4 *)*piVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      cVar1 = func_0x08008cd0(*puVar5);
      if (cVar1 == '\0') {
        uVar4 = *puVar5;
        goto LAB_0802582c;
      }
    }
    uVar4 = puVar6[-1];
LAB_0802582c:
    func_08008B6C(uVar4,0x6b);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08025838 @ 0x08025838
// =============================================================================
undefined4 func_08025838(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  if (param_2 == '\0') {
    iVar2 = func_0800EB3C(param_1[0xe]);
  }
  else {
    iVar2 = func_0800EBC4(param_1[0xe]);
  }
  if (iVar2 != 0) {
    func_0802A588(param_1);
    *(undefined1 *)(param_1 + 0xf) = 0x14;
    piVar3 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar6 = (undefined4 *)piVar3[1];
    for (puVar5 = (undefined4 *)*piVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      cVar1 = func_0x08008cd0(*puVar5);
      if (cVar1 == '\0') {
        uVar4 = *puVar5;
        goto LAB_08025894;
      }
    }
    uVar4 = puVar6[-1];
LAB_08025894:
    func_08008B6C(uVar4,0x6b);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080258A0 @ 0x080258A0
// =============================================================================
undefined4 func_080258A0(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  func_0800F294(&uStack_10,param_1[0xe] + 0x54);
  cVar1 = func_0800F06C(&uStack_10);
  if (cVar1 == '\0') {
    iVar3 = func_0800F634(param_1[0xe] + 0x60);
    if (iVar3 != -1) {
      puVar4 = (undefined4 *)func_0x0800fcdc(param_1[0xe] + 0x60);
      *puVar4 = uStack_10;
      func_0x0800f390(param_1[0xe] + 0x54);
      *(undefined1 *)(param_1 + 0xf) = 0x12;
      func_0x0802a7d8(param_1);
      piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
      puVar4 = (undefined4 *)*piVar5;
      puVar7 = (undefined4 *)piVar5[1];
      do {
        if (puVar4 == puVar7) {
          uVar6 = puVar7[-1];
LAB_0802591e:
          func_08008B6C(uVar6,0x6b);
          return in_lr;
        }
        cVar1 = func_0x08008cd0(*puVar4);
        if (cVar1 == '\0') {
          uVar6 = *puVar4;
          goto LAB_0802591e;
        }
        puVar4 = puVar4 + 1;
      } while( true );
    }
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0xf) = uVar2;
  return in_lr;
}

// =============================================================================
// Function: func_08025944 @ 0x08025944
// =============================================================================
undefined8 func_08025944(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  iVar4 = *(int *)(param_1 + 0x38) + 0x5c;
  cVar1 = func_0800DC34(iVar4);
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = func_0800DC10(iVar4);
    auStack_10[0] = func_0800E550(uVar3,uVar2);
    iVar4 = func_0x0800db30(auStack_10);
    if (iVar4 - 5U < 0x29) {
      switch(*(uint *)(PTR_case_0802598C_08025988 + (iVar4 - 5U) * 4) & 0xfffffffe) {
      case 0x802598c:
      case 0x8025a30:
        uVar2 = 1;
        goto LAB_08025a36;
      }
    }
  }
  uVar2 = 0;
LAB_08025a36:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08025A40 @ 0x08025A40
// =============================================================================
undefined4 func_08025A40(undefined4 *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  cVar1 = func_08025944();
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      iVar4 = func_0800EC4C(param_1[0xe]);
    }
    else {
      iVar4 = func_0800ECB0(param_1[0xe]);
    }
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xf) = 0x15;
      *(undefined1 *)((int)param_1 + 0x3d) = 0x14;
      func_0802A510(param_1);
      piVar2 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
      puVar6 = (undefined4 *)piVar2[1];
      for (puVar5 = (undefined4 *)*piVar2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        cVar1 = func_0x08008cd0(*puVar5);
        if (cVar1 == '\0') {
          uVar3 = *puVar5;
          goto LAB_08025aee;
        }
      }
      uVar3 = puVar6[-1];
LAB_08025aee:
      func_08008B6C(uVar3,0xbc);
    }
  }
  else {
    piVar2 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar6 = (undefined4 *)piVar2[1];
    for (puVar5 = (undefined4 *)*piVar2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      cVar1 = func_0x08008cd0(*puVar5);
      if (cVar1 == '\0') {
        uVar3 = *puVar5;
        goto LAB_08025a82;
      }
    }
    uVar3 = puVar6[-1];
LAB_08025a82:
    func_08008B6C(uVar3,199);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08025AFC @ 0x08025AFC
// =============================================================================
undefined8 func_08025AFC(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(ushort *)(param_1 + 4) < 9));
}

// =============================================================================
// Function: func_08025B10 @ 0x08025B10
// =============================================================================
undefined8 func_08025B10(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  cVar2 = func_08025AFC();
  if ((cVar2 != '\0') && (*(int *)(*(int *)(param_1 + 0x34) + 8) - 1U < 2)) {
    iVar4 = 1;
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x34) + 0x12);
  if (0x15 < (uVar1 & 0x1f)) {
    iVar4 = iVar4 + 1;
  }
  if ((uVar1 & 0x1f) < 6) {
    iVar4 = iVar4 + 2;
  }
  iVar3 = func_0x0800e4f0(*(undefined4 *)(param_1 + 0x38));
  if (iVar3 == 0) {
    iVar4 = iVar4 + 2;
  }
  cVar2 = func_08025944(param_1);
  if (cVar2 != '\0') {
    iVar4 = iVar4 + 10;
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_08025B64 @ 0x08025B64
// =============================================================================
undefined4 func_08025B64(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int unaff_r7;
  undefined4 in_lr;
  undefined1 auStack_38 [4];
  uint3 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 auStack_29 [22];
  undefined1 auStack_13 [3];
  
  if (0x22 < param_2) goto case_08025C08;
  switch(*(uint *)(PTR_case_08025B7C_08025b78 + param_2 * 4) & 0xfffffffe) {
  case 0x8025b7c:
    param_1 = (undefined4 *)(uint)*(byte *)(param_4 + unaff_r7);
  case 0x8025c08:
case_08025C08:
    *(undefined1 *)(param_1 + 0xf) = 0;
    return in_lr;
  case 0x8025c12:
    func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x80));
    return in_lr;
  case 0x8025c20:
    puVar6 = &uStack_30;
    uVar4 = 5;
    goto LAB_08025c56;
  case 0x8025c28:
    puVar6 = &uStack_2f;
    uVar4 = 0xd;
    goto LAB_08025c56;
  case 0x8025c32:
    puVar6 = &uStack_2e;
    uVar4 = 0x15;
    goto LAB_08025c56;
  case 0x8025c3c:
    puVar6 = &uStack_2d;
    uVar4 = 0x1d;
    goto LAB_08025c56;
  case 0x8025c46:
    puVar6 = &uStack_2c;
    uVar4 = 0x25;
    goto LAB_08025c56;
  case 0x8025c4e:
    puVar6 = &uStack_2b;
    uVar4 = 0x2d;
LAB_08025c56:
    func_0x0800db2c(puVar6,uVar4);
    func_0802720C(param_1,puVar6);
    return in_lr;
  case 0x8025c68:
    func_0x0800db2c(&uStack_2a,0x4d);
    func_0802720C(param_1,&uStack_2a);
    piVar2 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar5 = (undefined4 *)*piVar2;
    puVar7 = (undefined4 *)piVar2[1];
    do {
      if (puVar5 == puVar7) {
        uVar4 = puVar7[-1];
LAB_08025caa:
        func_08008B6C(uVar4,0xb6);
        return in_lr;
      }
      cVar1 = func_0x08008cd0(*puVar5);
      if (cVar1 == '\0') {
        uVar4 = *puVar5;
        goto LAB_08025caa;
      }
      puVar5 = puVar5 + 1;
    } while( true );
  case 0x8025cb2:
    iVar3 = func_0x080d11e4();
    iVar8 = iVar3;
    if (iVar3 < 0) {
      iVar8 = iVar3 + 0xf;
    }
    func_0802771C(param_1,iVar3 + (iVar8 >> 4) * -0x10 + 5);
    return in_lr;
  case 0x8025cce:
    iVar8 = param_1[5];
    func_0x0800dca8(&uStack_34,0x36);
    func_0800F004(auStack_38,(uint)uStack_34);
    goto LAB_08025dfe;
  case 0x8025cf8:
    iVar8 = param_1[5];
    puVar6 = auStack_29;
    uVar4 = 0x11;
    break;
  case 0x8025d04:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 1;
    uVar4 = 0x12;
    break;
  case 0x8025d0e:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 2;
    uVar4 = 0x13;
    break;
  case 0x8025d1a:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 3;
    uVar4 = 0x14;
    break;
  case 0x8025d26:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 4;
    uVar4 = 0x15;
    break;
  case 0x8025d32:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 5;
    uVar4 = 0x16;
    break;
  case 0x8025d3c:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 6;
    uVar4 = 0x17;
    break;
  case 0x8025d48:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 7;
    uVar4 = 0x18;
    break;
  case 0x8025d54:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 8;
    uVar4 = 0x19;
    break;
  case 0x8025d60:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 9;
    uVar4 = 0x1a;
    break;
  case 0x8025d6a:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 10;
    uVar4 = 0x1b;
    break;
  case 0x8025d76:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0xb;
    uVar4 = 0x1c;
    break;
  case 0x8025d82:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0xc;
    uVar4 = 0x1d;
    break;
  case 0x8025d8e:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0xd;
    uVar4 = 0x1e;
    break;
  case 0x8025d98:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0xe;
    uVar4 = 0x1f;
    break;
  case 0x8025da4:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0xf;
    uVar4 = 0x20;
    break;
  case 0x8025db0:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0x10;
    uVar4 = 0x21;
    break;
  case 0x8025dbc:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0x11;
    uVar4 = 0x22;
    break;
  case 0x8025dc6:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0x12;
    uVar4 = 0x23;
    break;
  case 0x8025dd2:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0x13;
    uVar4 = 0x24;
    break;
  case 0x8025dde:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0x14;
    uVar4 = 0x25;
    break;
  case 0x8025dea:
    iVar8 = param_1[5];
    puVar6 = auStack_29 + 0x15;
    uVar4 = 0x26;
    break;
  case 0x8025e0c:
    iVar8 = param_1[5];
    func_0x0800df50(auStack_13,0x33);
    func_0800F040(auStack_38,auStack_13[0]);
    func_0x080d3918(param_1,auStack_38,0,*(undefined4 *)(iVar8 + 0x5c));
    return in_lr;
  }
  func_0x0800df50(puVar6,uVar4);
  func_0800F040(auStack_38,*puVar6);
LAB_08025dfe:
  func_0x080d3918(param_1,auStack_38,0,*(undefined4 *)(iVar8 + 0x5c));
  return in_lr;
}

// =============================================================================
// Function: func_08025E38 @ 0x08025E38
// =============================================================================
undefined4 func_08025E38(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  func_0x0800f4c0(param_1[0xe] + 0x54);
  func_0802A588(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0x11;
  uVar4 = _DAT_08025ea8;
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_08025ebe:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08025ec2;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_08025ebe;
    }
    if (bVar1 == 2) {
      param_1[0x23] = _DAT_08025e84;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_08025ec2;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = 0xc0000;
LAB_08025ec2:
  piVar3 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (undefined4 *)*piVar3;
  puVar6 = (undefined4 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_08025ef0:
      func_08008B6C(uVar4,0x6a);
      return in_lr;
    }
    cVar2 = func_0x08008cd0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_08025ef0;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08025EFC @ 0x08025EFC
// =============================================================================
undefined4 func_08025EFC(undefined4 *param_1,undefined1 param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  func_0x0800f4f0(param_1[0xe] + 0x54,param_2);
  func_0802A588(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0x11;
  uVar4 = _DAT_08025f70;
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_08025f86:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08025f8a;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_08025f86;
    }
    if (bVar1 == 2) {
      param_1[0x23] = _DAT_08025f4c;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_08025f8a;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = 0xc0000;
LAB_08025f8a:
  piVar3 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (undefined4 *)*piVar3;
  puVar6 = (undefined4 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_08025fb8:
      func_08008B6C(uVar4,0x6a);
      return in_lr;
    }
    cVar2 = func_0x08008cd0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_08025fb8;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08025FC4 @ 0x08025FC4
// =============================================================================
undefined4 func_08025FC4(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  func_0x0800f4d8(param_1[0xe] + 0x54);
  func_0802A588(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0x11;
  uVar4 = _DAT_08026034;
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_0802604a:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0802604e;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_0802604a;
    }
    if (bVar1 == 2) {
      param_1[0x23] = _DAT_08026010;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_0802604e;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = 0xc0000;
LAB_0802604e:
  piVar3 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (undefined4 *)*piVar3;
  puVar6 = (undefined4 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_0802607c:
      func_08008B6C(uVar4,0x6a);
      return in_lr;
    }
    cVar2 = func_0x08008cd0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_0802607c;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08026088 @ 0x08026088
// =============================================================================
undefined4 func_08026088(undefined4 *param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  func_0x0800f510(param_1[0xe] + 0x54,param_2);
  func_0802A588(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0x11;
  uVar4 = _DAT_080260fc;
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_08026112:
    param_1[0x24] = uVar4;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08026116;
      uVar4 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_08026112;
    }
    if (bVar1 == 2) {
      param_1[0x23] = _DAT_080260d8;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_08026116;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = 0xc0000;
LAB_08026116:
  piVar3 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar5 = (undefined4 *)*piVar3;
  puVar6 = (undefined4 *)piVar3[1];
  do {
    if (puVar5 == puVar6) {
      uVar4 = puVar6[-1];
LAB_08026144:
      func_08008B6C(uVar4,0x6a);
      return in_lr;
    }
    cVar2 = func_0x08008cd0(*puVar5);
    if (cVar2 == '\0') {
      uVar4 = *puVar5;
      goto LAB_08026144;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08026150 @ 0x08026150
// =============================================================================
undefined4 func_08026150(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 in_lr;
  uint3 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 auStack_1a [2];
  
  func_0x0800e0f0(&uStack_1c);
  iVar3 = func_0x0800f09c(param_2);
  if (iVar3 == 0) {
    puVar7 = &uStack_1b;
    func_0800F0A4(&uStack_24,param_2);
    func_0x0800e0fc(puVar7,(uint)uStack_24);
LAB_080261b8:
    uStack_1c = *puVar7;
  }
  else if (iVar3 == 1) {
    puVar7 = auStack_1a;
    uVar5 = func_0800F0E8(param_2);
    func_0800E148(puVar7,uVar5);
    goto LAB_080261b8;
  }
  iVar3 = param_1[0xd];
  iVar4 = func_0800E198(&uStack_1c);
  if (iVar4 != 0) {
    uVar5 = func_0x0800e194(&uStack_1c);
    cVar2 = func_0800B124(iVar3 + 0x54,uVar5);
    if (cVar2 == '\0') {
      uVar5 = func_0x0800e194(&uStack_1c);
      func_0800B254(iVar3 + 0x54,uVar5);
    }
  }
  uStack_20 = *param_2;
  func_0800F418(param_1[0xe] + 0x54);
  if (param_3 != '\0') {
    func_0800F528(param_1[0xe] + 0x54);
  }
  func_0802A588(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0x11;
  uVar5 = _DAT_08026268;
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_0802627e:
    param_1[0x24] = uVar5;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08026282;
      uVar5 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_0802627e;
    }
    if (bVar1 == 2) {
      param_1[0x23] = _DAT_08026244;
      param_1[0x24] = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_08026282;
      param_1[0x23] = 0xa0000;
      param_1[0x24] = 0;
    }
  }
  param_1[0x27] = 0xc0000;
LAB_08026282:
  piVar6 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar8 = (undefined4 *)*piVar6;
  puVar9 = (undefined4 *)piVar6[1];
  do {
    if (puVar8 == puVar9) {
      uVar5 = puVar9[-1];
LAB_080262b0:
      func_08008B6C(uVar5,0x6a);
      return in_lr;
    }
    cVar2 = func_0x08008cd0(*puVar8);
    if (cVar2 == '\0') {
      uVar5 = *puVar8;
      goto LAB_080262b0;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}

// =============================================================================
// Function: func_080262C4 @ 0x080262C4
// =============================================================================
undefined8 func_080262C4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  uint3 uStack_14;
  byte abStack_10 [4];
  
  iVar5 = *(int *)(param_1 + 0x34) + _DAT_080262f8;
  cVar1 = func_0800F190(iVar5);
  if ((cVar1 == '\0') && (cVar1 = func_0x0800f388(iVar5), cVar1 == '\0')) {
    iVar2 = func_0x0800f204(iVar5);
    if (iVar2 == 0) {
      pbVar4 = abStack_10;
      func_0800F20C(&uStack_14,iVar5);
      func_0x0800e0fc(pbVar4,(uint)uStack_14);
      goto LAB_08026342;
    }
    if (iVar2 == 1) {
      pbVar4 = abStack_10 + 1;
      uVar3 = func_0800F258(iVar5);
      func_0800E148(pbVar4,uVar3);
      goto LAB_08026342;
    }
  }
  pbVar4 = abStack_10 + 2;
  func_0x0800e0f0(pbVar4);
LAB_08026342:
  return CONCAT44(in_lr,(uint)*pbVar4);
}

// =============================================================================
// Function: func_0802634C @ 0x0802634C
// =============================================================================
undefined4 func_0802634C(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar7;
  
  puVar7 = &uStack_1c;
  func_0x0800eaf0(param_1[0xe]);
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = _DAT_080263cc;
  param_1[0x24] = 0;
  param_1[0x27] = 0x110000;
  puVar10 = (undefined4 *)param_1[4];
  if (puVar10 != (undefined4 *)0x0) {
    uVar5 = func_0x080d3910(*(int **)*puVar10,*(undefined4 *)(**(int **)*puVar10 + 100));
    func_0805E850(puVar10 + 0x2d,uVar5,_DAT_080263d0);
    *(undefined1 *)(puVar10 + 0x32) = 1;
    *(undefined1 *)((int)puVar10 + 0xca) = 0;
    *(undefined1 *)((int)puVar10 + 0xcb) = 1;
  }
  *(byte *)(param_1 + 0xf) = 0x2f;
  *(char *)((int)param_1 + 0x3d) = 'x';
  uVar11 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_080263d4;
  uVar6 = (uint)*(byte *)(param_1 + 0xf);
  if (0x39 < uVar6) goto LAB_080267e4;
  switch(*(uint *)(uVar6 * 4 + _DAT_080263d8) & 0xfffffffe) {
  case 0x80264c4:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x3e);
      if (bVar1 == 1) {
        uVar11 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar11 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar11 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar11 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_08026624;
    }
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026598;
    }
    goto LAB_080267d0;
  case 0x8026538:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 == '\0') goto case_080267AE;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08026624;
    uVar11 = *(undefined2 *)
              (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
              _DAT_08026584);
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uStack_1c = func_0800E550(iVar8,uVar5);
    goto LAB_080266a6;
  case 0x8026588:
    bVar1 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08026598:
    uVar11 = 0x192;
    if (bVar1 != 0) break;
  case 0x80267ae:
case_080267AE:
    uVar11 = 0x152;
    break;
  case 0x802659e:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x192;
    if (cVar3 == '\0') {
      uVar11 = 0x152;
    }
    break;
  case 0x80265b6:
    uVar11 = 0x136;
    break;
  case 0x80265bc:
    uVar11 = 0x19e;
    break;
  case 0x80265c2:
    uVar11 = 0x4e;
    break;
  case 0x80265c6:
    uVar11 = 0x46;
    break;
  case 0x80265ca:
    uVar11 = 0x13e;
    break;
  case 0x80265d0:
    uVar11 = 0x142;
    break;
  case 0x80265d6:
    uVar11 = *(undefined2 *)(param_1 + 0x11);
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b;
    goto LAB_080266a4;
  case 0x80265f6:
    uVar11 = 0x1ea;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 1;
    goto LAB_080266a4;
  case 0x8026614:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar11 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar11 = 0x186;
      }
      iVar8 = param_1[0xe];
      uVar5 = func_0800DC10(iVar8 + 0x5c);
      uVar2 = func_0800E550(iVar8,uVar5);
      puVar7 = auStack_1b + 2;
      goto LAB_080266a4;
    }
  case 0x8026624:
case_08026624:
    uVar11 = 0x192;
    break;
  case 0x8026654:
    uVar11 = 0x76;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 3;
    goto LAB_080266a4;
  case 0x802666e:
    uVar11 = 0x6e;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 4;
    goto LAB_080266a4;
  case 0x802668a:
    uVar11 = 0x72;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 5;
LAB_080266a4:
    *puVar7 = uVar2;
LAB_080266a6:
    uVar4 = func_0800DB60(puVar7);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x80266ae:
    uVar11 = 0x1fa;
    break;
  case 0x80266b4:
    uVar11 = 0x196;
    break;
  case 0x80266ba:
    uVar11 = 0x112;
    break;
  case 0x80266c0:
    uVar11 = 0x116;
    break;
  case 0x80266c6:
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 == 1) {
      uVar11 = 0xee;
      uVar6 = _DAT_08026700;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar11 = 0xea;
      uVar6 = _DAT_080266f4;
    }
    else {
      if (bVar1 != 2) break;
      uVar11 = 0xe6;
      uVar6 = _DAT_0802670c;
    }
    goto LAB_08026792;
  case 0x8026710:
    uVar11 = 0x15a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08026728;
    goto LAB_08026792;
  case 0x802672c:
    uVar11 = 0x9a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08026740;
    goto LAB_08026792;
  case 0x8026744:
    uVar11 = 0x106;
    break;
  case 0x802674a:
    uVar11 = 0x102;
    break;
  case 0x8026750:
    uVar11 = 0xfe;
    break;
  case 0x8026754:
    uVar11 = 0xfa;
    break;
  case 0x8026758:
    uVar11 = 0x122;
    break;
  case 0x802675e:
    uVar11 = 0x11e;
    break;
  case 0x8026764:
    uVar11 = 0x11a;
    break;
  case 0x802676a:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x14a;
    if (cVar3 != '\0') {
      uVar11 = 0x10a;
    }
    break;
  case 0x8026780:
    uVar11 = 0xe2;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_080267a0;
LAB_08026792:
    if (*(ushort *)(iVar8 + 0x22) != uVar6) {
      func_080321B0(iVar8);
    }
    break;
  case 0x80267a4:
    uVar11 = 0x3e;
    break;
  case 0x80267a8:
    uVar11 = 0x146;
    break;
  case 0x80267b4:
    uVar11 = 0x13a;
    break;
  case 0x80267ba:
    uVar11 = 0x42;
    break;
  case 0x80267be:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_080267d0:
    uVar11 = 0x156;
    break;
  case 0x80267da:
    uVar11 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar11 = 0xf2;
    }
  }
LAB_080267e4:
  func_080321B0(param_1,uVar11);
  piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar10 = (undefined4 *)*piVar9;
  puVar12 = (undefined4 *)piVar9[1];
  do {
    if (puVar10 == puVar12) {
      uVar5 = puVar12[-1];
LAB_0802681e:
      func_08008B6C(uVar5,0xb6);
      *(undefined1 *)(param_1 + 0x30) = 1;
      return in_lr;
    }
    cVar3 = func_0x08008cd0(*puVar10);
    if (cVar3 == '\0') {
      uVar5 = *puVar10;
      goto LAB_0802681e;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08026830 @ 0x08026830
// =============================================================================
undefined4 func_08026830(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar7;
  
  puVar7 = &uStack_1c;
  func_0800EAFC(param_1[0xe]);
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = _DAT_080268b0;
  param_1[0x24] = 0;
  param_1[0x27] = 0x110000;
  puVar10 = (undefined4 *)param_1[4];
  if (puVar10 != (undefined4 *)0x0) {
    uVar5 = func_0x080d3910(*(int **)*puVar10,*(undefined4 *)(**(int **)*puVar10 + 100));
    func_0805E850(puVar10 + 0x2d,uVar5,_DAT_080268b4);
    *(undefined1 *)(puVar10 + 0x32) = 1;
    *(undefined1 *)((int)puVar10 + 0xca) = 0;
    *(undefined1 *)((int)puVar10 + 0xcb) = 1;
  }
  *(byte *)(param_1 + 0xf) = 0x2f;
  *(char *)((int)param_1 + 0x3d) = 'x';
  uVar11 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_080268b8;
  uVar6 = (uint)*(byte *)(param_1 + 0xf);
  if (0x39 < uVar6) goto LAB_08026cc8;
  switch(*(uint *)(uVar6 * 4 + _DAT_080268bc) & 0xfffffffe) {
  case 0x80269a8:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x3e);
      if (bVar1 == 1) {
        uVar11 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar11 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar11 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar11 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_08026B08;
    }
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026a7c;
    }
    goto LAB_08026cb4;
  case 0x8026a1c:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 == '\0') goto case_08026C92;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08026B08;
    uVar11 = *(undefined2 *)
              (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
              _DAT_08026a68);
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uStack_1c = func_0800E550(iVar8,uVar5);
    goto LAB_08026b8a;
  case 0x8026a6c:
    bVar1 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08026a7c:
    uVar11 = 0x192;
    if (bVar1 != 0) break;
  case 0x8026c92:
case_08026C92:
    uVar11 = 0x152;
    break;
  case 0x8026a82:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x192;
    if (cVar3 == '\0') {
      uVar11 = 0x152;
    }
    break;
  case 0x8026a9a:
    uVar11 = 0x136;
    break;
  case 0x8026aa0:
    uVar11 = 0x19e;
    break;
  case 0x8026aa6:
    uVar11 = 0x4e;
    break;
  case 0x8026aaa:
    uVar11 = 0x46;
    break;
  case 0x8026aae:
    uVar11 = 0x13e;
    break;
  case 0x8026ab4:
    uVar11 = 0x142;
    break;
  case 0x8026aba:
    uVar11 = *(undefined2 *)(param_1 + 0x11);
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b;
    goto LAB_08026b88;
  case 0x8026ada:
    uVar11 = 0x1ea;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 1;
    goto LAB_08026b88;
  case 0x8026af8:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar11 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar11 = 0x186;
      }
      iVar8 = param_1[0xe];
      uVar5 = func_0800DC10(iVar8 + 0x5c);
      uVar2 = func_0800E550(iVar8,uVar5);
      puVar7 = auStack_1b + 2;
      goto LAB_08026b88;
    }
  case 0x8026b08:
case_08026B08:
    uVar11 = 0x192;
    break;
  case 0x8026b38:
    uVar11 = 0x76;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 3;
    goto LAB_08026b88;
  case 0x8026b52:
    uVar11 = 0x6e;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 4;
    goto LAB_08026b88;
  case 0x8026b6e:
    uVar11 = 0x72;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 5;
LAB_08026b88:
    *puVar7 = uVar2;
LAB_08026b8a:
    uVar4 = func_0800DB60(puVar7);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x8026b92:
    uVar11 = 0x1fa;
    break;
  case 0x8026b98:
    uVar11 = 0x196;
    break;
  case 0x8026b9e:
    uVar11 = 0x112;
    break;
  case 0x8026ba4:
    uVar11 = 0x116;
    break;
  case 0x8026baa:
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 == 1) {
      uVar11 = 0xee;
      uVar6 = _DAT_08026be4;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar11 = 0xea;
      uVar6 = _DAT_08026bd8;
    }
    else {
      if (bVar1 != 2) break;
      uVar11 = 0xe6;
      uVar6 = _DAT_08026bf0;
    }
    goto LAB_08026c76;
  case 0x8026bf4:
    uVar11 = 0x15a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08026c0c;
    goto LAB_08026c76;
  case 0x8026c10:
    uVar11 = 0x9a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08026c24;
    goto LAB_08026c76;
  case 0x8026c28:
    uVar11 = 0x106;
    break;
  case 0x8026c2e:
    uVar11 = 0x102;
    break;
  case 0x8026c34:
    uVar11 = 0xfe;
    break;
  case 0x8026c38:
    uVar11 = 0xfa;
    break;
  case 0x8026c3c:
    uVar11 = 0x122;
    break;
  case 0x8026c42:
    uVar11 = 0x11e;
    break;
  case 0x8026c48:
    uVar11 = 0x11a;
    break;
  case 0x8026c4e:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x14a;
    if (cVar3 != '\0') {
      uVar11 = 0x10a;
    }
    break;
  case 0x8026c64:
    uVar11 = 0xe2;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08026c84;
LAB_08026c76:
    if (*(ushort *)(iVar8 + 0x22) != uVar6) {
      func_080321B0(iVar8);
    }
    break;
  case 0x8026c88:
    uVar11 = 0x3e;
    break;
  case 0x8026c8c:
    uVar11 = 0x146;
    break;
  case 0x8026c98:
    uVar11 = 0x13a;
    break;
  case 0x8026c9e:
    uVar11 = 0x42;
    break;
  case 0x8026ca2:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_08026cb4:
    uVar11 = 0x156;
    break;
  case 0x8026cbe:
    uVar11 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar11 = 0xf2;
    }
  }
LAB_08026cc8:
  func_080321B0(param_1,uVar11);
  piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar10 = (undefined4 *)*piVar9;
  puVar12 = (undefined4 *)piVar9[1];
  do {
    if (puVar10 == puVar12) {
      uVar5 = puVar12[-1];
LAB_08026d02:
      func_08008B6C(uVar5,0xb6);
      *(undefined1 *)(param_1 + 0x30) = 1;
      return in_lr;
    }
    cVar3 = func_0x08008cd0(*puVar10);
    if (cVar3 == '\0') {
      uVar5 = *puVar10;
      goto LAB_08026d02;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08026D14 @ 0x08026D14
// =============================================================================
undefined4 func_08026D14(undefined4 *param_1,undefined2 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar6;
  
  puVar6 = &uStack_1c;
  *(undefined1 *)(param_1 + 0xf) = 0x11;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  uVar5 = _DAT_08026d78;
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 1) {
    param_1[0x23] = 0;
LAB_08026d86:
    param_1[0x24] = uVar5;
LAB_08026d88:
    param_1[0x27] = 0xc0000;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[0x23] = _DAT_08026d5c;
        param_1[0x24] = 0;
      }
      else {
        if (bVar1 != 3) goto LAB_08026d8a;
        param_1[0x23] = 0xa0000;
        param_1[0x24] = 0;
      }
      goto LAB_08026d88;
    }
    if (bVar1 == 0) {
      uVar5 = 0xa0000;
      param_1[0x23] = 0;
      goto LAB_08026d86;
    }
  }
LAB_08026d8a:
  puVar9 = (undefined4 *)param_1[4];
  if (puVar9 != (undefined4 *)0x0) {
    uVar5 = func_0x080d3910(*(int **)*puVar9,*(undefined4 *)(**(int **)*puVar9 + 0x68));
    func_0805E850(puVar9 + 0x2d,uVar5,param_2);
    *(undefined1 *)(puVar9 + 0x32) = 1;
    *(undefined1 *)((int)puVar9 + 0xca) = 0;
    *(undefined1 *)((int)puVar9 + 0xcb) = 1;
  }
  uVar10 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_08026de0;
  if (0x39 < *(byte *)(param_1 + 0xf)) goto LAB_080271f0;
  switch(*(uint *)((uint)*(byte *)(param_1 + 0xf) * 4 + _DAT_08026de4) & 0xfffffffe) {
  case 0x8026ed0:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x3e);
      if (bVar1 == 1) {
        uVar10 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar10 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar10 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar10 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_08027030;
    }
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar10 = 0x14e;
        }
        break;
      }
      goto joined_r0x08026fa4;
    }
    goto LAB_080271dc;
  case 0x8026f44:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 == '\0') goto case_080271BA;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08027030;
    uVar10 = *(undefined2 *)
              (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
              _DAT_08026f90);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uStack_1c = func_0800E550(iVar7,uVar5);
    goto LAB_080270b2;
  case 0x8026f94:
    bVar1 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08026fa4:
    uVar10 = 0x192;
    if (bVar1 != 0) break;
  case 0x80271ba:
case_080271BA:
    uVar10 = 0x152;
    break;
  case 0x8026faa:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar10 = 0x192;
    if (cVar3 == '\0') {
      uVar10 = 0x152;
    }
    break;
  case 0x8026fc2:
    uVar10 = 0x136;
    break;
  case 0x8026fc8:
    uVar10 = 0x19e;
    break;
  case 0x8026fce:
    uVar10 = 0x4e;
    break;
  case 0x8026fd2:
    uVar10 = 0x46;
    break;
  case 0x8026fd6:
    uVar10 = 0x13e;
    break;
  case 0x8026fdc:
    uVar10 = 0x142;
    break;
  case 0x8026fe2:
    uVar10 = *(undefined2 *)(param_1 + 0x11);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b;
    goto LAB_080270b0;
  case 0x8027002:
    uVar10 = 0x1ea;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 1;
    goto LAB_080270b0;
  case 0x8027020:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar10 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar10 = 0x186;
      }
      iVar7 = param_1[0xe];
      uVar5 = func_0800DC10(iVar7 + 0x5c);
      uVar2 = func_0800E550(iVar7,uVar5);
      puVar6 = auStack_1b + 2;
      goto LAB_080270b0;
    }
  case 0x8027030:
case_08027030:
    uVar10 = 0x192;
    break;
  case 0x8027060:
    uVar10 = 0x76;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 3;
    goto LAB_080270b0;
  case 0x802707a:
    uVar10 = 0x6e;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 4;
    goto LAB_080270b0;
  case 0x8027096:
    uVar10 = 0x72;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 5;
LAB_080270b0:
    *puVar6 = uVar2;
LAB_080270b2:
    uVar4 = func_0800DB60(puVar6);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x80270ba:
    uVar10 = 0x1fa;
    break;
  case 0x80270c0:
    uVar10 = 0x196;
    break;
  case 0x80270c6:
    uVar10 = 0x112;
    break;
  case 0x80270cc:
    uVar10 = 0x116;
    break;
  case 0x80270d2:
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 == 1) {
      uVar10 = 0xee;
      uVar8 = _DAT_0802710c;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar10 = 0xea;
      uVar8 = _DAT_08027100;
    }
    else {
      if (bVar1 != 2) break;
      uVar10 = 0xe6;
      uVar8 = _DAT_08027118;
    }
    goto LAB_0802719e;
  case 0x802711c:
    uVar10 = 0x15a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08027134;
    goto LAB_0802719e;
  case 0x8027138:
    uVar10 = 0x9a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_0802714c;
    goto LAB_0802719e;
  case 0x8027150:
    uVar10 = 0x106;
    break;
  case 0x8027156:
    uVar10 = 0x102;
    break;
  case 0x802715c:
    uVar10 = 0xfe;
    break;
  case 0x8027160:
    uVar10 = 0xfa;
    break;
  case 0x8027164:
    uVar10 = 0x122;
    break;
  case 0x802716a:
    uVar10 = 0x11e;
    break;
  case 0x8027170:
    uVar10 = 0x11a;
    break;
  case 0x8027176:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar10 = 0x14a;
    if (cVar3 != '\0') {
      uVar10 = 0x10a;
    }
    break;
  case 0x802718c:
    uVar10 = 0xe2;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_080271ac;
LAB_0802719e:
    if (*(ushort *)(iVar7 + 0x22) != uVar8) {
      func_080321B0(iVar7);
    }
    break;
  case 0x80271b0:
    uVar10 = 0x3e;
    break;
  case 0x80271b4:
    uVar10 = 0x146;
    break;
  case 0x80271c0:
    uVar10 = 0x13a;
    break;
  case 0x80271c6:
    uVar10 = 0x42;
    break;
  case 0x80271ca:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar10 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_080271dc:
    uVar10 = 0x156;
    break;
  case 0x80271e2:
    uVar10 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar10 = 0xf2;
    }
  }
LAB_080271f0:
  func_080321B0(param_1,uVar10);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802720C @ 0x0802720C
// =============================================================================
void func_0802720C(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 uStack_24;
  undefined1 auStack_23 [7];
  undefined1 *puVar8;
  
  puVar8 = &uStack_24;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = _DAT_080272b4;
  param_1[0x24] = 0;
  param_1[0x27] = 0x110000;
  puVar11 = (undefined4 *)param_1[4];
  if (puVar11 != (undefined4 *)0x0) {
    uVar4 = func_0800DB60(param_2);
    uVar6 = func_0x080d3910(*(int **)*puVar11,*(undefined4 *)(**(int **)*puVar11 + 100));
    func_0805E850(puVar11 + 0x2d,uVar6,uVar4);
    *(undefined1 *)(puVar11 + 0x32) = 1;
    *(undefined1 *)((int)puVar11 + 0xca) = 0;
    *(undefined1 *)((int)puVar11 + 0xcb) = 1;
  }
  iVar10 = param_1[0xe];
  uVar6 = func_0x0800db30(param_2);
  func_0800FEC8(iVar10 + 0x60,uVar6,1);
  *(byte *)(param_1 + 0xf) = 0x34;
  *(char *)((int)param_1 + 0x3d) = 'x';
  uVar4 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_080272b8;
  uVar7 = (uint)*(byte *)(param_1 + 0xf);
  if (0x39 < uVar7) goto LAB_080276c8;
  switch(*(uint *)(uVar7 * 4 + _DAT_080272bc) & 0xfffffffe) {
  case 0x80273a8:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x3e);
      if (bVar1 == 1) {
        uVar4 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar4 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar4 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar4 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_08027508;
    }
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar4 = 0x14e;
        }
        break;
      }
      goto joined_r0x0802747c;
    }
    goto LAB_080276b4;
  case 0x802741c:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 == '\0') goto case_08027692;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08027508;
    uVar4 = *(undefined2 *)
             (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
             _DAT_08027468);
    iVar10 = param_1[0xe];
    uVar6 = func_0800DC10(iVar10 + 0x5c);
    uStack_24 = func_0800E550(iVar10,uVar6);
    goto LAB_0802758a;
  case 0x802746c:
    bVar1 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x0802747c:
    uVar4 = 0x192;
    if (bVar1 != 0) break;
  case 0x8027692:
case_08027692:
    uVar4 = 0x152;
    break;
  case 0x8027482:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar4 = 0x192;
    if (cVar3 == '\0') {
      uVar4 = 0x152;
    }
    break;
  case 0x802749a:
    uVar4 = 0x136;
    break;
  case 0x80274a0:
    uVar4 = 0x19e;
    break;
  case 0x80274a6:
    uVar4 = 0x4e;
    break;
  case 0x80274aa:
    uVar4 = 0x46;
    break;
  case 0x80274ae:
    uVar4 = 0x13e;
    break;
  case 0x80274b4:
    uVar4 = 0x142;
    break;
  case 0x80274ba:
    uVar4 = *(undefined2 *)(param_1 + 0x11);
    iVar10 = param_1[0xe];
    uVar6 = func_0800DC10(iVar10 + 0x5c);
    uVar2 = func_0800E550(iVar10,uVar6);
    puVar8 = auStack_23;
    goto LAB_08027588;
  case 0x80274da:
    uVar4 = 0x1ea;
    iVar10 = param_1[0xe];
    uVar6 = func_0800DC10(iVar10 + 0x5c);
    uVar2 = func_0800E550(iVar10,uVar6);
    puVar8 = auStack_23 + 1;
    goto LAB_08027588;
  case 0x80274f8:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar4 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar4 = 0x186;
      }
      iVar10 = param_1[0xe];
      uVar6 = func_0800DC10(iVar10 + 0x5c);
      uVar2 = func_0800E550(iVar10,uVar6);
      puVar8 = auStack_23 + 2;
      goto LAB_08027588;
    }
  case 0x8027508:
case_08027508:
    uVar4 = 0x192;
    break;
  case 0x8027538:
    uVar4 = 0x76;
    iVar10 = param_1[0xe];
    uVar6 = func_0800DC10(iVar10 + 0x5c);
    uVar2 = func_0800E550(iVar10,uVar6);
    puVar8 = auStack_23 + 3;
    goto LAB_08027588;
  case 0x8027552:
    uVar4 = 0x6e;
    iVar10 = param_1[0xe];
    uVar6 = func_0800DC10(iVar10 + 0x5c);
    uVar2 = func_0800E550(iVar10,uVar6);
    puVar8 = auStack_23 + 4;
    goto LAB_08027588;
  case 0x802756e:
    uVar4 = 0x72;
    iVar10 = param_1[0xe];
    uVar6 = func_0800DC10(iVar10 + 0x5c);
    uVar2 = func_0800E550(iVar10,uVar6);
    puVar8 = auStack_23 + 5;
LAB_08027588:
    *puVar8 = uVar2;
LAB_0802758a:
    uVar5 = func_0800DB60(puVar8);
    *(undefined2 *)(param_1 + 0x1f) = uVar5;
    break;
  case 0x8027592:
    uVar4 = 0x1fa;
    break;
  case 0x8027598:
    uVar4 = 0x196;
    break;
  case 0x802759e:
    uVar4 = 0x112;
    break;
  case 0x80275a4:
    uVar4 = 0x116;
    break;
  case 0x80275aa:
    iVar10 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 == 1) {
      uVar4 = 0xee;
      uVar7 = _DAT_080275e4;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar4 = 0xea;
      uVar7 = _DAT_080275d8;
    }
    else {
      if (bVar1 != 2) break;
      uVar4 = 0xe6;
      uVar7 = _DAT_080275f0;
    }
    goto LAB_08027676;
  case 0x80275f4:
    uVar4 = 0x15a;
    iVar10 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar7 = _DAT_0802760c;
    goto LAB_08027676;
  case 0x8027610:
    uVar4 = 0x9a;
    iVar10 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar7 = _DAT_08027624;
    goto LAB_08027676;
  case 0x8027628:
    uVar4 = 0x106;
    break;
  case 0x802762e:
    uVar4 = 0x102;
    break;
  case 0x8027634:
    uVar4 = 0xfe;
    break;
  case 0x8027638:
    uVar4 = 0xfa;
    break;
  case 0x802763c:
    uVar4 = 0x122;
    break;
  case 0x8027642:
    uVar4 = 0x11e;
    break;
  case 0x8027648:
    uVar4 = 0x11a;
    break;
  case 0x802764e:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar4 = 0x14a;
    if (cVar3 != '\0') {
      uVar4 = 0x10a;
    }
    break;
  case 0x8027664:
    uVar4 = 0xe2;
    iVar10 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar7 = _DAT_08027684;
LAB_08027676:
    if (*(ushort *)(iVar10 + 0x22) != uVar7) {
      func_080321B0(iVar10);
    }
    break;
  case 0x8027688:
    uVar4 = 0x3e;
    break;
  case 0x802768c:
    uVar4 = 0x146;
    break;
  case 0x8027698:
    uVar4 = 0x13a;
    break;
  case 0x802769e:
    uVar4 = 0x42;
    break;
  case 0x80276a2:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar4 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_080276b4:
    uVar4 = 0x156;
    break;
  case 0x80276be:
    uVar4 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar4 = 0xf2;
    }
  }
LAB_080276c8:
  func_080321B0(param_1,uVar4);
  piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar11 = (undefined4 *)*piVar9;
  puVar12 = (undefined4 *)piVar9[1];
  do {
    if (puVar11 == puVar12) {
      uVar6 = puVar12[-1];
LAB_08027702:
      func_08008B6C(uVar6,0xbc);
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    cVar3 = func_0x08008cd0(*puVar11);
    if (cVar3 == '\0') {
      uVar6 = *puVar11;
      goto LAB_08027702;
    }
    puVar11 = puVar11 + 1;
  } while( true );
}

// =============================================================================
// Function: func_0802771C @ 0x0802771C
// =============================================================================
undefined4 func_0802771C(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar7;
  
  puVar7 = &uStack_1c;
  func_0809ABD8(param_1[0xd] + _DAT_08027798);
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0x150000;
  puVar10 = (undefined4 *)param_1[4];
  if (puVar10 != (undefined4 *)0x0) {
    uVar5 = func_0x080d3910(*(int **)*puVar10,*(undefined4 *)(**(int **)*puVar10 + 100));
    func_0805E850(puVar10 + 0x2d,uVar5,0x6a);
    *(undefined1 *)(puVar10 + 0x32) = 1;
    *(undefined1 *)((int)puVar10 + 0xca) = 0;
    *(undefined1 *)((int)puVar10 + 0xcb) = 1;
  }
  *(byte *)(param_1 + 0xf) = 0x31;
  uVar11 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_0802779c;
  uVar6 = (uint)*(byte *)(param_1 + 0xf);
  if (0x39 < uVar6) goto LAB_08027bb0;
  switch(*(uint *)(uVar6 * 4 + _DAT_080277a0) & 0xfffffffe) {
  case 0x802788c:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x3e);
      if (bVar1 == 1) {
        uVar11 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar11 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar11 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar11 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_080279EC;
    }
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08027960;
    }
    goto LAB_08027b98;
  case 0x8027900:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 == '\0') goto case_08027B76;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_080279EC;
    uVar11 = *(undefined2 *)
              (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
              _DAT_0802794c);
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uStack_1c = func_0800E550(iVar8,uVar5);
    goto LAB_08027a6e;
  case 0x8027950:
    bVar1 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08027960:
    uVar11 = 0x192;
    if (bVar1 != 0) break;
  case 0x8027b76:
case_08027B76:
    uVar11 = 0x152;
    break;
  case 0x8027966:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x192;
    if (cVar3 == '\0') {
      uVar11 = 0x152;
    }
    break;
  case 0x802797e:
    uVar11 = 0x136;
    break;
  case 0x8027984:
    uVar11 = 0x19e;
    break;
  case 0x802798a:
    uVar11 = 0x4e;
    break;
  case 0x802798e:
    uVar11 = 0x46;
    break;
  case 0x8027992:
    uVar11 = 0x13e;
    break;
  case 0x8027998:
    uVar11 = 0x142;
    break;
  case 0x802799e:
    uVar11 = *(undefined2 *)(param_1 + 0x11);
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b;
    goto LAB_08027a6c;
  case 0x80279be:
    uVar11 = 0x1ea;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 1;
    goto LAB_08027a6c;
  case 0x80279dc:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar11 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar11 = 0x186;
      }
      iVar8 = param_1[0xe];
      uVar5 = func_0800DC10(iVar8 + 0x5c);
      uVar2 = func_0800E550(iVar8,uVar5);
      puVar7 = auStack_1b + 2;
      goto LAB_08027a6c;
    }
  case 0x80279ec:
case_080279EC:
    uVar11 = 0x192;
    break;
  case 0x8027a1c:
    uVar11 = 0x76;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 3;
    goto LAB_08027a6c;
  case 0x8027a36:
    uVar11 = 0x6e;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 4;
    goto LAB_08027a6c;
  case 0x8027a52:
    uVar11 = 0x72;
    iVar8 = param_1[0xe];
    uVar5 = func_0800DC10(iVar8 + 0x5c);
    uVar2 = func_0800E550(iVar8,uVar5);
    puVar7 = auStack_1b + 5;
LAB_08027a6c:
    *puVar7 = uVar2;
LAB_08027a6e:
    uVar4 = func_0800DB60(puVar7);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x8027a76:
    uVar11 = 0x1fa;
    break;
  case 0x8027a7c:
    uVar11 = 0x196;
    break;
  case 0x8027a82:
    uVar11 = 0x112;
    break;
  case 0x8027a88:
    uVar11 = 0x116;
    break;
  case 0x8027a8e:
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 == 1) {
      uVar11 = 0xee;
      uVar6 = _DAT_08027ac8;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar11 = 0xea;
      uVar6 = _DAT_08027abc;
    }
    else {
      if (bVar1 != 2) break;
      uVar11 = 0xe6;
      uVar6 = _DAT_08027ad4;
    }
    goto LAB_08027b5a;
  case 0x8027ad8:
    uVar11 = 0x15a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08027af0;
    goto LAB_08027b5a;
  case 0x8027af4:
    uVar11 = 0x9a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08027b08;
    goto LAB_08027b5a;
  case 0x8027b0c:
    uVar11 = 0x106;
    break;
  case 0x8027b12:
    uVar11 = 0x102;
    break;
  case 0x8027b18:
    uVar11 = 0xfe;
    break;
  case 0x8027b1c:
    uVar11 = 0xfa;
    break;
  case 0x8027b20:
    uVar11 = 0x122;
    break;
  case 0x8027b26:
    uVar11 = 0x11e;
    break;
  case 0x8027b2c:
    uVar11 = 0x11a;
    break;
  case 0x8027b32:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x14a;
    if (cVar3 != '\0') {
      uVar11 = 0x10a;
    }
    break;
  case 0x8027b48:
    uVar11 = 0xe2;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08027b68;
LAB_08027b5a:
    if (*(ushort *)(iVar8 + 0x22) != uVar6) {
      func_080321B0(iVar8);
    }
    break;
  case 0x8027b6c:
    uVar11 = 0x3e;
    break;
  case 0x8027b70:
    uVar11 = 0x146;
    break;
  case 0x8027b7c:
    uVar11 = 0x13a;
    break;
  case 0x8027b82:
    uVar11 = 0x42;
    break;
  case 0x8027b86:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_08027b98:
    uVar11 = 0x156;
    break;
  case 0x8027ba2:
    uVar11 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar11 = 0xf2;
    }
  }
LAB_08027bb0:
  func_080321B0(param_1,uVar11);
  piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar10 = (undefined4 *)*piVar9;
  puVar12 = (undefined4 *)piVar9[1];
  do {
    if (puVar10 == puVar12) {
      uVar5 = puVar12[-1];
LAB_08027bea:
      func_08008B6C(uVar5,0x6a);
      *(undefined1 *)(param_1 + 0x30) = 1;
      return in_lr;
    }
    cVar3 = func_0x08008cd0(*puVar10);
    if (cVar3 == '\0') {
      uVar5 = *puVar10;
      goto LAB_08027bea;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08027BFC @ 0x08027BFC
// =============================================================================
undefined8 func_08027BFC(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  undefined4 in_lr;
  undefined1 uStack_34;
  undefined1 auStack_33 [6];
  undefined1 uStack_2d;
  undefined1 auStack_2c [8];
  undefined4 *puStack_24;
  
  puVar6 = &uStack_34;
  iVar11 = param_1[0xd] + _DAT_08027d00;
  cVar1 = func_0800F190(iVar11);
  if ((cVar1 == '\0') && (iVar11 = func_0x0800f204(iVar11), iVar11 == 4)) {
    iVar11 = func_0x0800ffd0(&UNK_00001ca0 + param_1[0xd]);
    if (iVar11 == 0) goto LAB_08028182;
    iVar11 = func_0x0800ffd4(&UNK_00001ca0 + param_1[0xd]);
    iVar5 = func_0x0800ffd8(&UNK_00001ca0 + param_1[0xd]);
    puStack_24 = param_1 + 0x30;
    puVar12 = param_1 + 0x1f;
    for (; iVar11 != iVar5; iVar11 = iVar11 + 1) {
      func_0x080d3914((int *)*param_1,iVar11,*(undefined4 *)(*(int *)*param_1 + 0x15c));
    }
    func_08010024(&UNK_00001ca0 + param_1[0xd]);
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x27] = 0;
    puVar14 = (undefined4 *)param_1[4];
    if (puVar14 != (undefined4 *)0x0) {
      bVar2 = *(byte *)(param_1 + 8);
      uVar7 = func_0x080d3910(*(int **)*puVar14,*(undefined4 *)(**(int **)*puVar14 + 100));
      func_0805E850(puVar14 + 0x2d,uVar7,bVar2 + 0x36);
      *(undefined1 *)(puVar14 + 0x32) = 1;
      *(undefined1 *)((int)puVar14 + 0xca) = 0;
      *(undefined1 *)((int)puVar14 + 0xcb) = 1;
    }
    *(byte *)(param_1 + 0xf) = 0x2e;
    *(undefined1 *)puStack_24 = 1;
    uVar13 = 0x192;
    *(short *)puVar12 = (short)_DAT_08027d04;
    uVar8 = (uint)*(byte *)(param_1 + 0xf);
    if (0x39 < uVar8) goto LAB_08028130;
    switch(*(uint *)(uVar8 * 4 + _DAT_08027d08) & 0xfffffffe) {
    case 0x8027df4:
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      if (cVar1 == '\0') {
        bVar2 = *(byte *)((int)param_1 + 0x3e);
        if (bVar2 == 1) goto LAB_08028118;
        if (bVar2 < 2) goto joined_r0x08027ec8;
        if (bVar2 == 2) {
          uVar13 = 0x14e;
        }
      }
      else {
        bVar2 = *(byte *)((int)param_1 + 0x3e);
        if (bVar2 == 1) {
          uVar13 = 0x132;
          if (*(char *)((int)param_1 + 0xb3) == '\0') {
            uVar13 = 0x1c6;
          }
        }
        else if (bVar2 < 2) {
          if (bVar2 == 0) goto case_08027F54;
        }
        else if ((bVar2 == 2) && (uVar13 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar13 = 0x15e;
        }
      }
      break;
    case 0x8027e68:
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      if (cVar1 != '\0') {
        if (*(byte *)((int)param_1 + 0x3f) < 6) {
          uVar13 = *(undefined2 *)
                    (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) *
                     2 + _DAT_08027eb4);
          iVar11 = param_1[0xe];
          uVar7 = func_0800DC10(iVar11 + 0x5c);
          uStack_34 = func_0800E550(iVar11,uVar7);
          goto LAB_08027fc4;
        }
        goto case_08027F54;
      }
    case 0x80280f6:
case_080280F6:
      uVar13 = 0x152;
      break;
    case 0x8027eb8:
      bVar2 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08027ec8:
      uVar13 = 0x192;
      if (bVar2 == 0) goto case_080280F6;
      break;
    case 0x8027ece:
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      uVar13 = 0x192;
      if (cVar1 == '\0') {
        uVar13 = 0x152;
      }
      break;
    case 0x8027ee6:
      uVar13 = 0x136;
      break;
    case 0x8027eec:
      uVar13 = 0x19e;
      break;
    case 0x8027ef2:
      uVar13 = 0x4e;
      break;
    case 0x8027ef6:
      uVar13 = 0x46;
      break;
    case 0x8027efa:
      uVar13 = 0x13e;
      break;
    case 0x8027f00:
      uVar13 = 0x142;
      break;
    case 0x8027f06:
      uVar13 = *(undefined2 *)(param_1 + 0x11);
      iVar11 = param_1[0xe];
      uVar7 = func_0800DC10(iVar11 + 0x5c);
      uVar3 = func_0800E550(iVar11,uVar7);
      puVar6 = auStack_33;
      goto LAB_08027fe8;
    case 0x8027f26:
      uVar13 = 0x1ea;
      iVar11 = param_1[0xe];
      uVar7 = func_0800DC10(iVar11 + 0x5c);
      uVar3 = func_0800E550(iVar11,uVar7);
      puVar6 = auStack_33 + 1;
      goto LAB_08027f9c;
    case 0x8027f44:
      if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
        uVar13 = 0x182;
        if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
          uVar13 = 0x186;
        }
        iVar11 = param_1[0xe];
        uVar7 = func_0800DC10(iVar11 + 0x5c);
        uVar3 = func_0800E550(iVar11,uVar7);
        puVar6 = auStack_33 + 2;
        goto LAB_08027fe8;
      }
    case 0x8027f54:
case_08027F54:
      uVar13 = 0x192;
      break;
    case 0x8027f84:
      uVar13 = 0x76;
      iVar11 = param_1[0xe];
      uVar7 = func_0800DC10(iVar11 + 0x5c);
      uVar3 = func_0800E550(iVar11,uVar7);
      puVar6 = auStack_33 + 3;
LAB_08027f9c:
      *puVar6 = uVar3;
      uVar4 = func_0800DB60();
      *(undefined2 *)puVar12 = uVar4;
      break;
    case 0x8027fa8:
      uVar13 = 0x6e;
      iVar11 = param_1[0xe];
      uVar7 = func_0800DC10(iVar11 + 0x5c);
      auStack_33[4] = func_0800E550(iVar11,uVar7);
      puVar6 = auStack_33 + 4;
LAB_08027fc4:
      uVar4 = func_0800DB60(puVar6);
      *(undefined2 *)puVar12 = uVar4;
      break;
    case 0x8027fce:
      uVar13 = 0x72;
      iVar11 = param_1[0xe];
      uVar7 = func_0800DC10(iVar11 + 0x5c);
      uVar3 = func_0800E550(iVar11,uVar7);
      puVar6 = auStack_33 + 5;
LAB_08027fe8:
      *puVar6 = uVar3;
      uVar4 = func_0800DB60();
      *(undefined2 *)puVar12 = uVar4;
      break;
    case 0x8027ff4:
      uVar13 = 0x1fa;
      break;
    case 0x8027ffa:
      uVar13 = 0x196;
      break;
    case 0x8028000:
      uVar13 = 0x112;
      break;
    case 0x8028006:
      uVar13 = 0x116;
      break;
    case 0x802800c:
      iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) {
        uVar13 = 0xee;
        uVar8 = _DAT_08028048;
        goto LAB_080280da;
      }
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          uVar13 = 0xea;
          uVar8 = _DAT_0802803c;
          goto LAB_080280da;
        }
      }
      else if (bVar2 == 2) {
        uVar13 = 0xe6;
        uVar8 = _DAT_08028054;
        goto LAB_080280da;
      }
      break;
    case 0x8028058:
      uVar13 = 0x15a;
      iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
      uVar8 = _DAT_08028070;
      goto LAB_080280da;
    case 0x8028074:
      uVar13 = 0x9a;
      iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
      uVar8 = _DAT_08028088;
      goto LAB_080280da;
    case 0x802808c:
      uVar13 = 0x106;
      break;
    case 0x8028092:
      uVar13 = 0x102;
      break;
    case 0x8028098:
      uVar13 = 0xfe;
      break;
    case 0x802809c:
      uVar13 = 0xfa;
      break;
    case 0x80280a0:
      uVar13 = 0x122;
      break;
    case 0x80280a6:
      uVar13 = 0x11e;
      break;
    case 0x80280ac:
      uVar13 = 0x11a;
      break;
    case 0x80280b2:
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      uVar13 = 0x14a;
      if (cVar1 != '\0') {
        uVar13 = 0x10a;
      }
      break;
    case 0x80280c8:
      uVar13 = 0xe2;
      iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
      uVar8 = _DAT_080280e8;
LAB_080280da:
      if (*(ushort *)(iVar11 + 0x22) != uVar8) {
        func_080321B0(iVar11);
      }
      break;
    case 0x80280ec:
      uVar13 = 0x3e;
      break;
    case 0x80280f0:
      uVar13 = 0x146;
      break;
    case 0x80280fc:
      uVar13 = 0x13a;
      break;
    case 0x8028102:
      uVar13 = 0x42;
      break;
    case 0x8028106:
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      uVar13 = 0x1c6;
      if (cVar1 == '\0') {
LAB_08028118:
        uVar13 = 0x156;
      }
      break;
    case 0x8028122:
      uVar13 = 0xf6;
      if (*(char *)((int)param_1 + 0x3d) != '\0') {
        uVar13 = 0xf2;
      }
    }
LAB_08028130:
    func_080321B0(param_1,uVar13);
    piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar14 = (undefined4 *)piVar9[1];
    for (puVar12 = (undefined4 *)*piVar9; puVar12 != puVar14; puVar12 = puVar12 + 1) {
      cVar1 = func_0x08008cd0(*puVar12);
      if (cVar1 == '\0') {
        uVar7 = *puVar12;
        goto LAB_08028168;
      }
    }
    uVar7 = puVar14[-1];
LAB_08028168:
    uVar10 = 0x6e;
    goto LAB_0802862e;
  }
  uStack_2d = func_080262C4(param_1);
  iVar11 = func_0800E198(&uStack_2d);
  if (iVar11 == 0) {
LAB_08028182:
    uVar7 = 0;
    goto LAB_08028634;
  }
  func_0x080d3914((int *)*param_1,&uStack_2d,*(undefined4 *)(*(int *)*param_1 + 0x15c));
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(byte *)(param_1 + 0xf) = 0xe;
  uVar13 = 0x192;
  puVar12 = param_1 + 0x1f;
  *(short *)puVar12 = (short)_DAT_080281c8;
  uVar8 = (uint)*(byte *)(param_1 + 0xf);
  if (0x39 < uVar8) goto LAB_080285f4;
  switch(*(uint *)(uVar8 * 4 + _DAT_080281cc) & 0xfffffffe) {
  case 0x80282b8:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 == '\0') {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) goto LAB_080285dc;
      if (bVar2 < 2) goto joined_r0x0802838c;
      if (bVar2 == 2) {
        uVar13 = 0x14e;
      }
    }
    else {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) {
        uVar13 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar13 = 0x1c6;
        }
      }
      else if (bVar2 < 2) {
        if (bVar2 == 0) goto case_08028418;
      }
      else if ((bVar2 == 2) && (uVar13 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
        uVar13 = 0x15e;
      }
    }
    break;
  case 0x802832c:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 != '\0') {
      if (*(byte *)((int)param_1 + 0x3f) < 6) {
        uVar13 = *(undefined2 *)
                  (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2
                  + _DAT_08028378);
        iVar11 = param_1[0xe];
        uVar7 = func_0800DC10(iVar11 + 0x5c);
        uVar3 = func_0800E550(iVar11,uVar7);
        puVar6 = auStack_2c;
        goto LAB_080284ac;
      }
      goto case_08028418;
    }
  case 0x80285ba:
case_080285BA:
    uVar13 = 0x152;
    break;
  case 0x802837c:
    bVar2 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x0802838c:
    uVar13 = 0x192;
    if (bVar2 == 0) goto case_080285BA;
    break;
  case 0x8028392:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar13 = 0x192;
    if (cVar1 == '\0') {
      uVar13 = 0x152;
    }
    break;
  case 0x80283aa:
    uVar13 = 0x136;
    break;
  case 0x80283b0:
    uVar13 = 0x19e;
    break;
  case 0x80283b6:
    uVar13 = 0x4e;
    break;
  case 0x80283ba:
    uVar13 = 0x46;
    break;
  case 0x80283be:
    uVar13 = 0x13e;
    break;
  case 0x80283c4:
    uVar13 = 0x142;
    break;
  case 0x80283ca:
    uVar13 = *(undefined2 *)(param_1 + 0x11);
    iVar11 = param_1[0xe];
    uVar7 = func_0800DC10(iVar11 + 0x5c);
    uVar3 = func_0800E550(iVar11,uVar7);
    puVar6 = auStack_2c + 1;
    goto LAB_08028460;
  case 0x80283ea:
    uVar13 = 0x1ea;
    iVar11 = param_1[0xe];
    uVar7 = func_0800DC10(iVar11 + 0x5c);
    uVar3 = func_0800E550(iVar11,uVar7);
    puVar6 = auStack_2c + 2;
    goto LAB_08028486;
  case 0x8028408:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar13 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar13 = 0x186;
      }
      iVar11 = param_1[0xe];
      uVar7 = func_0800DC10(iVar11 + 0x5c);
      uVar3 = func_0800E550(iVar11,uVar7);
      puVar6 = auStack_2c + 3;
      goto LAB_080284ac;
    }
  case 0x8028418:
case_08028418:
    uVar13 = 0x192;
    break;
  case 0x8028448:
    uVar13 = 0x76;
    iVar11 = param_1[0xe];
    uVar7 = func_0800DC10(iVar11 + 0x5c);
    uVar3 = func_0800E550(iVar11,uVar7);
    puVar6 = auStack_2c + 4;
LAB_08028460:
    *puVar6 = uVar3;
    uVar4 = func_0800DB60();
    *(undefined2 *)puVar12 = uVar4;
    break;
  case 0x802846c:
    uVar13 = 0x6e;
    iVar11 = param_1[0xe];
    uVar7 = func_0800DC10(iVar11 + 0x5c);
    uVar3 = func_0800E550(iVar11,uVar7);
    puVar6 = auStack_2c + 5;
LAB_08028486:
    *puVar6 = uVar3;
    uVar4 = func_0800DB60();
    *(undefined2 *)puVar12 = uVar4;
    break;
  case 0x8028492:
    uVar13 = 0x72;
    iVar11 = param_1[0xe];
    uVar7 = func_0800DC10(iVar11 + 0x5c);
    uVar3 = func_0800E550(iVar11,uVar7);
    puVar6 = auStack_2c + 6;
LAB_080284ac:
    *puVar6 = uVar3;
    uVar4 = func_0800DB60();
    *(undefined2 *)puVar12 = uVar4;
    break;
  case 0x80284b8:
    uVar13 = 0x1fa;
    break;
  case 0x80284be:
    uVar13 = 0x196;
    break;
  case 0x80284c4:
    uVar13 = 0x112;
    break;
  case 0x80284ca:
    uVar13 = 0x116;
    break;
  case 0x80284d0:
    iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar2 = *(byte *)((int)param_1 + 0x3e);
    if (bVar2 == 1) {
      uVar13 = 0xee;
      uVar8 = _DAT_0802850c;
      goto LAB_0802859e;
    }
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar13 = 0xea;
        uVar8 = _DAT_08028500;
        goto LAB_0802859e;
      }
    }
    else if (bVar2 == 2) {
      uVar13 = 0xe6;
      uVar8 = _DAT_08028518;
      goto LAB_0802859e;
    }
    break;
  case 0x802851c:
    uVar13 = 0x15a;
    iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08028534;
    goto LAB_0802859e;
  case 0x8028538:
    uVar13 = 0x9a;
    iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_0802854c;
    goto LAB_0802859e;
  case 0x8028550:
    uVar13 = 0x106;
    break;
  case 0x8028556:
    uVar13 = 0x102;
    break;
  case 0x802855c:
    uVar13 = 0xfe;
    break;
  case 0x8028560:
    uVar13 = 0xfa;
    break;
  case 0x8028564:
    uVar13 = 0x122;
    break;
  case 0x802856a:
    uVar13 = 0x11e;
    break;
  case 0x8028570:
    uVar13 = 0x11a;
    break;
  case 0x8028576:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar13 = 0x14a;
    if (cVar1 != '\0') {
      uVar13 = 0x10a;
    }
    break;
  case 0x802858c:
    uVar13 = 0xe2;
    iVar11 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_080285ac;
LAB_0802859e:
    if (*(ushort *)(iVar11 + 0x22) != uVar8) {
      func_080321B0(iVar11);
    }
    break;
  case 0x80285b0:
    uVar13 = 0x3e;
    break;
  case 0x80285b4:
    uVar13 = 0x146;
    break;
  case 0x80285c0:
    uVar13 = 0x13a;
    break;
  case 0x80285c6:
    uVar13 = 0x42;
    break;
  case 0x80285ca:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar13 = 0x1c6;
    if (cVar1 == '\0') {
LAB_080285dc:
      uVar13 = 0x156;
    }
    break;
  case 0x80285e6:
    uVar13 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar13 = 0xf2;
    }
  }
LAB_080285f4:
  func_080321B0(param_1,uVar13);
  piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar14 = (undefined4 *)piVar9[1];
  for (puVar12 = (undefined4 *)*piVar9; puVar12 != puVar14; puVar12 = puVar12 + 1) {
    cVar1 = func_0x08008cd0(*puVar12);
    if (cVar1 == '\0') {
      uVar7 = *puVar12;
      goto LAB_0802862c;
    }
  }
  uVar7 = puVar14[-1];
LAB_0802862c:
  uVar10 = 0x6c;
LAB_0802862e:
  func_08008B6C(uVar7,uVar10);
  uVar7 = 1;
LAB_08028634:
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_08028644 @ 0x08028644
// =============================================================================
undefined4 func_08028644(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  undefined4 *puVar13;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar7;
  
  puVar7 = &uStack_1c;
  cVar2 = func_0800F190(param_1[0xd] + _DAT_08028690);
  if (cVar2 != '\0') {
    return in_lr;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(byte *)(param_1 + 0xf) = 0xb;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0x150000;
  uVar1 = _DAT_080286f0;
  uVar10 = _DAT_080286c4;
  bVar3 = *(byte *)(param_1 + 8);
  if (bVar3 == 1) {
    param_1[0x25] = 0;
    param_1[0x26] = uVar10;
    param_1[0x28] = 0;
  }
  else if (bVar3 < 2) {
    if (bVar3 == 0) {
      param_1[0x25] = 0;
      param_1[0x26] = uVar1;
      param_1[0x28] = 0;
    }
  }
  else {
    uVar10 = _DAT_080286a4;
    if ((bVar3 == 2) || (uVar10 = _DAT_080286b4, bVar3 == 3)) {
      param_1[0x25] = uVar10;
      param_1[0x26] = 0;
      param_1[0x28] = 0;
    }
  }
  uVar12 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_080286f4;
  uVar6 = (uint)*(byte *)(param_1 + 0xf);
  if (0x39 < uVar6) goto LAB_08028b08;
  switch(*(uint *)(uVar6 * 4 + _DAT_080286f8) & 0xfffffffe) {
  case 0x80287e4:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 != '\0') {
      bVar3 = *(byte *)((int)param_1 + 0x3e);
      if (bVar3 == 1) {
        uVar12 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar12 = 0x1c6;
        }
        break;
      }
      if (1 < bVar3) {
        if ((bVar3 == 2) && (uVar12 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar12 = 0x15e;
        }
        break;
      }
      if (bVar3 != 0) break;
      goto case_08028944;
    }
    bVar3 = *(byte *)((int)param_1 + 0x3e);
    if (bVar3 == 1) goto LAB_08028af0;
    if (1 < bVar3) {
      if (bVar3 == 2) {
        uVar12 = 0x14e;
      }
      break;
    }
    goto joined_r0x080288b8;
  case 0x8028858:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 == '\0') goto case_08028ACE;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08028944;
    uVar12 = *(undefined2 *)
              (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
              _DAT_080288a4);
    iVar8 = param_1[0xe];
    uVar10 = func_0800DC10(iVar8 + 0x5c);
    uStack_1c = func_0800E550(iVar8,uVar10);
    goto LAB_080289c6;
  case 0x80288a8:
    bVar3 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x080288b8:
    uVar12 = 0x192;
    if (bVar3 == 0) {
case_08028ACE:
      uVar12 = 0x152;
    }
    break;
  case 0x80288be:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    uVar12 = 0x192;
    if (cVar2 == '\0') {
      uVar12 = 0x152;
    }
    break;
  case 0x80288d6:
    uVar12 = 0x136;
    break;
  case 0x80288dc:
    uVar12 = 0x19e;
    break;
  case 0x80288e2:
    uVar12 = 0x4e;
    break;
  case 0x80288e6:
    uVar12 = 0x46;
    break;
  case 0x80288ea:
    uVar12 = 0x13e;
    break;
  case 0x80288f0:
    uVar12 = 0x142;
    break;
  case 0x80288f6:
    uVar12 = *(undefined2 *)(param_1 + 0x11);
    iVar8 = param_1[0xe];
    uVar10 = func_0800DC10(iVar8 + 0x5c);
    uVar4 = func_0800E550(iVar8,uVar10);
    puVar7 = auStack_1b;
    goto LAB_080289c4;
  case 0x8028916:
    uVar12 = 0x1ea;
    iVar8 = param_1[0xe];
    uVar10 = func_0800DC10(iVar8 + 0x5c);
    uVar4 = func_0800E550(iVar8,uVar10);
    puVar7 = auStack_1b + 1;
    goto LAB_080289c4;
  case 0x8028934:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar12 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar12 = 0x186;
      }
      iVar8 = param_1[0xe];
      uVar10 = func_0800DC10(iVar8 + 0x5c);
      uVar4 = func_0800E550(iVar8,uVar10);
      puVar7 = auStack_1b + 2;
      goto LAB_080289c4;
    }
  case 0x8028944:
case_08028944:
    uVar12 = 0x192;
    break;
  case 0x8028974:
    uVar12 = 0x76;
    iVar8 = param_1[0xe];
    uVar10 = func_0800DC10(iVar8 + 0x5c);
    uVar4 = func_0800E550(iVar8,uVar10);
    puVar7 = auStack_1b + 3;
    goto LAB_080289c4;
  case 0x802898e:
    uVar12 = 0x6e;
    iVar8 = param_1[0xe];
    uVar10 = func_0800DC10(iVar8 + 0x5c);
    uVar4 = func_0800E550(iVar8,uVar10);
    puVar7 = auStack_1b + 4;
    goto LAB_080289c4;
  case 0x80289aa:
    uVar12 = 0x72;
    iVar8 = param_1[0xe];
    uVar10 = func_0800DC10(iVar8 + 0x5c);
    uVar4 = func_0800E550(iVar8,uVar10);
    puVar7 = auStack_1b + 5;
LAB_080289c4:
    *puVar7 = uVar4;
LAB_080289c6:
    uVar5 = func_0800DB60(puVar7);
    *(undefined2 *)(param_1 + 0x1f) = uVar5;
    break;
  case 0x80289ce:
    uVar12 = 0x1fa;
    break;
  case 0x80289d4:
    uVar12 = 0x196;
    break;
  case 0x80289da:
    uVar12 = 0x112;
    break;
  case 0x80289e0:
    uVar12 = 0x116;
    break;
  case 0x80289e6:
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar3 = *(byte *)((int)param_1 + 0x3e);
    if (bVar3 == 1) {
      uVar12 = 0xee;
      uVar6 = _DAT_08028a20;
    }
    else if (bVar3 < 2) {
      if (bVar3 != 0) break;
      uVar12 = 0xea;
      uVar6 = _DAT_08028a14;
    }
    else {
      if (bVar3 != 2) break;
      uVar12 = 0xe6;
      uVar6 = _DAT_08028a2c;
    }
    goto LAB_08028ab2;
  case 0x8028a30:
    uVar12 = 0x15a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08028a48;
    goto LAB_08028ab2;
  case 0x8028a4c:
    uVar12 = 0x9a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08028a60;
    goto LAB_08028ab2;
  case 0x8028a64:
    uVar12 = 0x106;
    break;
  case 0x8028a6a:
    uVar12 = 0x102;
    break;
  case 0x8028a70:
    uVar12 = 0xfe;
    break;
  case 0x8028a74:
    uVar12 = 0xfa;
    break;
  case 0x8028a78:
    uVar12 = 0x122;
    break;
  case 0x8028a7e:
    uVar12 = 0x11e;
    break;
  case 0x8028a84:
    uVar12 = 0x11a;
    break;
  case 0x8028a8a:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    uVar12 = 0x14a;
    if (cVar2 != '\0') {
      uVar12 = 0x10a;
    }
    break;
  case 0x8028aa0:
    uVar12 = 0xe2;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar6 = _DAT_08028ac0;
LAB_08028ab2:
    if (*(ushort *)(iVar8 + 0x22) != uVar6) {
      func_080321B0(iVar8);
    }
    break;
  case 0x8028ac4:
    uVar12 = 0x3e;
    break;
  case 0x8028ac8:
    uVar12 = 0x146;
    break;
  case 0x8028ace:
    goto case_08028ACE;
  case 0x8028ad4:
    uVar12 = 0x13a;
    break;
  case 0x8028ada:
    uVar12 = 0x42;
    break;
  case 0x8028ade:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    uVar12 = 0x1c6;
    if (cVar2 != '\0') break;
LAB_08028af0:
    uVar12 = 0x156;
    break;
  case 0x8028afa:
    uVar12 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar12 = 0xf2;
    }
  }
LAB_08028b08:
  func_080321B0(param_1,uVar12);
  piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar11 = (undefined4 *)*piVar9;
  puVar13 = (undefined4 *)piVar9[1];
  do {
    if (puVar11 == puVar13) {
      uVar10 = puVar13[-1];
LAB_08028b40:
      func_08008B6C(uVar10,0x6c);
      return in_lr;
    }
    cVar2 = func_0x08008cd0(*puVar11);
    if (cVar2 == '\0') {
      uVar10 = *puVar11;
      goto LAB_08028b40;
    }
    puVar11 = puVar11 + 1;
  } while( true );
}

// =============================================================================
// Function: func_08028B50 @ 0x08028B50
// =============================================================================
undefined4 func_08028B50(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar5;
  
  puVar5 = &uStack_1c;
  *(undefined1 *)(param_1 + 0xf) = 0xe;
  *(undefined1 *)(param_1 + 0x30) = 1;
  iVar9 = param_1[0xd] + _DAT_08028ba0;
  cVar1 = func_0800F190(iVar9);
  if (((cVar1 == '\0') && (iVar9 = func_0x0800f204(iVar9), iVar9 < 4)) && (1 < iVar9)) {
    *(undefined1 *)(param_1 + 0xf) = 0xd;
    uVar7 = _DAT_08028be4;
    bVar2 = *(byte *)(param_1 + 8);
    if (bVar2 == 1) {
      param_1[0x23] = 0;
LAB_08028bf6:
      param_1[0x24] = uVar7;
    }
    else {
      if (bVar2 < 2) {
        if (bVar2 != 0) goto LAB_08028bfa;
        uVar7 = 0xa0000;
        param_1[0x23] = 0;
        goto LAB_08028bf6;
      }
      if (bVar2 == 2) {
        param_1[0x23] = _DAT_08028bc0;
        param_1[0x24] = 0;
      }
      else {
        if (bVar2 != 3) goto LAB_08028bfa;
        param_1[0x23] = 0xa0000;
        param_1[0x24] = 0;
      }
    }
    param_1[0x27] = 0xc0000;
  }
LAB_08028bfa:
  uVar11 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_08028c20;
  if (0x39 < *(byte *)(param_1 + 0xf)) goto LAB_08029034;
  switch(*(uint *)((uint)*(byte *)(param_1 + 0xf) * 4 + _DAT_08028c24) & 0xfffffffe) {
  case 0x8028d10:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 != '\0') {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) {
        uVar11 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar11 = 0x1c6;
        }
        break;
      }
      if (1 < bVar2) {
        if ((bVar2 == 2) && (uVar11 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar11 = 0x15e;
        }
        break;
      }
      if (bVar2 != 0) break;
      goto case_08028E70;
    }
    bVar2 = *(byte *)((int)param_1 + 0x3e);
    if (bVar2 != 1) {
      if (1 < bVar2) {
        if (bVar2 == 2) {
          uVar11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08028de4;
    }
    goto LAB_0802901c;
  case 0x8028d84:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 == '\0') goto case_08028FFA;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08028E70;
    uVar11 = *(undefined2 *)
              (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
              _DAT_08028dd0);
    iVar9 = param_1[0xe];
    uVar7 = func_0800DC10(iVar9 + 0x5c);
    uStack_1c = func_0800E550(iVar9,uVar7);
    goto LAB_08028ef2;
  case 0x8028dd4:
    bVar2 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08028de4:
    uVar11 = 0x192;
    if (bVar2 != 0) break;
  case 0x8028ffa:
case_08028FFA:
    uVar11 = 0x152;
    break;
  case 0x8028dea:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x192;
    if (cVar1 == '\0') {
      uVar11 = 0x152;
    }
    break;
  case 0x8028e02:
    uVar11 = 0x136;
    break;
  case 0x8028e08:
    uVar11 = 0x19e;
    break;
  case 0x8028e0e:
    uVar11 = 0x4e;
    break;
  case 0x8028e12:
    uVar11 = 0x46;
    break;
  case 0x8028e16:
    uVar11 = 0x13e;
    break;
  case 0x8028e1c:
    uVar11 = 0x142;
    break;
  case 0x8028e22:
    uVar11 = *(undefined2 *)(param_1 + 0x11);
    iVar9 = param_1[0xe];
    uVar7 = func_0800DC10(iVar9 + 0x5c);
    uVar3 = func_0800E550(iVar9,uVar7);
    puVar5 = auStack_1b;
    goto LAB_08028ef0;
  case 0x8028e42:
    uVar11 = 0x1ea;
    iVar9 = param_1[0xe];
    uVar7 = func_0800DC10(iVar9 + 0x5c);
    uVar3 = func_0800E550(iVar9,uVar7);
    puVar5 = auStack_1b + 1;
    goto LAB_08028ef0;
  case 0x8028e60:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar11 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar11 = 0x186;
      }
      iVar9 = param_1[0xe];
      uVar7 = func_0800DC10(iVar9 + 0x5c);
      uVar3 = func_0800E550(iVar9,uVar7);
      puVar5 = auStack_1b + 2;
      goto LAB_08028ef0;
    }
  case 0x8028e70:
case_08028E70:
    uVar11 = 0x192;
    break;
  case 0x8028ea0:
    uVar11 = 0x76;
    iVar9 = param_1[0xe];
    uVar7 = func_0800DC10(iVar9 + 0x5c);
    uVar3 = func_0800E550(iVar9,uVar7);
    puVar5 = auStack_1b + 3;
    goto LAB_08028ef0;
  case 0x8028eba:
    uVar11 = 0x6e;
    iVar9 = param_1[0xe];
    uVar7 = func_0800DC10(iVar9 + 0x5c);
    uVar3 = func_0800E550(iVar9,uVar7);
    puVar5 = auStack_1b + 4;
    goto LAB_08028ef0;
  case 0x8028ed6:
    uVar11 = 0x72;
    iVar9 = param_1[0xe];
    uVar7 = func_0800DC10(iVar9 + 0x5c);
    uVar3 = func_0800E550(iVar9,uVar7);
    puVar5 = auStack_1b + 5;
LAB_08028ef0:
    *puVar5 = uVar3;
LAB_08028ef2:
    uVar4 = func_0800DB60(puVar5);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x8028efa:
    uVar11 = 0x1fa;
    break;
  case 0x8028f00:
    uVar11 = 0x196;
    break;
  case 0x8028f06:
    uVar11 = 0x112;
    break;
  case 0x8028f0c:
    uVar11 = 0x116;
    break;
  case 0x8028f12:
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar2 = *(byte *)((int)param_1 + 0x3e);
    if (bVar2 == 1) {
      uVar11 = 0xee;
      uVar8 = _DAT_08028f4c;
    }
    else if (bVar2 < 2) {
      if (bVar2 != 0) break;
      uVar11 = 0xea;
      uVar8 = _DAT_08028f40;
    }
    else {
      if (bVar2 != 2) break;
      uVar11 = 0xe6;
      uVar8 = _DAT_08028f58;
    }
    goto LAB_08028fde;
  case 0x8028f5c:
    uVar11 = 0x15a;
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08028f74;
    goto LAB_08028fde;
  case 0x8028f78:
    uVar11 = 0x9a;
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08028f8c;
    goto LAB_08028fde;
  case 0x8028f90:
    uVar11 = 0x106;
    break;
  case 0x8028f96:
    uVar11 = 0x102;
    break;
  case 0x8028f9c:
    uVar11 = 0xfe;
    break;
  case 0x8028fa0:
    uVar11 = 0xfa;
    break;
  case 0x8028fa4:
    uVar11 = 0x122;
    break;
  case 0x8028faa:
    uVar11 = 0x11e;
    break;
  case 0x8028fb0:
    uVar11 = 0x11a;
    break;
  case 0x8028fb6:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x14a;
    if (cVar1 != '\0') {
      uVar11 = 0x10a;
    }
    break;
  case 0x8028fcc:
    uVar11 = 0xe2;
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08028fec;
LAB_08028fde:
    if (*(ushort *)(iVar9 + 0x22) != uVar8) {
      func_080321B0(iVar9);
    }
    break;
  case 0x8028ff0:
    uVar11 = 0x3e;
    break;
  case 0x8028ff4:
    uVar11 = 0x146;
    break;
  case 0x8029000:
    uVar11 = 0x13a;
    break;
  case 0x8029006:
    uVar11 = 0x42;
    break;
  case 0x802900a:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x1c6;
    if (cVar1 != '\0') break;
LAB_0802901c:
    uVar11 = 0x156;
    break;
  case 0x8029026:
    uVar11 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar11 = 0xf2;
    }
  }
LAB_08029034:
  func_080321B0(param_1,uVar11);
  piVar6 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar10 = (undefined4 *)*piVar6;
  puVar12 = (undefined4 *)piVar6[1];
  do {
    if (puVar10 == puVar12) {
      uVar7 = puVar12[-1];
LAB_0802906c:
      func_08008B6C(uVar7,0x6c);
      return in_lr;
    }
    cVar1 = func_0x08008cd0(*puVar10);
    if (cVar1 == '\0') {
      uVar7 = *puVar10;
      goto LAB_0802906c;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

// =============================================================================
// Function: func_0802907C @ 0x0802907C
// =============================================================================
undefined4 func_0802907C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  iVar3 = *(int *)(param_1 + 0x34) + _DAT_080290d0;
  cVar1 = func_0800F190(iVar3);
  if (cVar1 == '\0') {
    iVar2 = func_0x0800f204(iVar3);
    if (iVar2 == 1) {
      auStack_10[0] = func_0800F258(iVar3);
      iVar3 = func_0x0800df54(auStack_10);
      if (iVar3 == 0x35) {
        func_0x0800ed2c(*(undefined4 *)(param_1 + 0x38));
      }
    }
    func_0x0800f390(*(int *)(param_1 + 0x38) + 0x54);
    func_0x0802a7d8(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080290D4 @ 0x080290D4
// =============================================================================
undefined8 func_080290D4(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar6;
  
  puVar6 = &uStack_1c;
  *(undefined1 *)(param_1 + 0x29) = 1;
  cVar1 = func_0800F190(param_1[0xd] + _DAT_080290fc);
  if (cVar1 == '\0') {
    uVar5 = 0;
    goto LAB_08029550;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  func_08026150(param_1,param_2,param_3);
  uVar9 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_08029134;
  if (0x39 < *(byte *)(param_1 + 0xf)) goto LAB_08029544;
  switch(*(uint *)((uint)*(byte *)(param_1 + 0xf) * 4 + _DAT_08029138) & 0xfffffffe) {
  case 0x8029224:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 == '\0') {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) goto LAB_08029530;
      if (bVar2 < 2) goto joined_r0x080292f8;
      if (bVar2 == 2) {
        uVar9 = 0x14e;
      }
    }
    else {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) {
        uVar9 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar9 = 0x1c6;
        }
      }
      else if (bVar2 < 2) {
        if (bVar2 == 0) goto case_08029384;
      }
      else if ((bVar2 == 2) && (uVar9 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
        uVar9 = 0x15e;
      }
    }
    break;
  case 0x8029298:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 == '\0') goto case_0802950E;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08029384;
    uVar9 = *(undefined2 *)
             (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
             _DAT_080292e4);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uStack_1c = func_0800E550(iVar7,uVar5);
    goto LAB_08029406;
  case 0x80292e8:
    bVar2 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x080292f8:
    uVar9 = 0x192;
    if (bVar2 == 0) goto case_0802950E;
    break;
  case 0x80292fe:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x192;
    if (cVar1 == '\0') {
      uVar9 = 0x152;
    }
    break;
  case 0x8029316:
    uVar9 = 0x136;
    break;
  case 0x802931c:
    uVar9 = 0x19e;
    break;
  case 0x8029322:
    uVar9 = 0x4e;
    break;
  case 0x8029326:
    uVar9 = 0x46;
    break;
  case 0x802932a:
    uVar9 = 0x13e;
    break;
  case 0x8029330:
    uVar9 = 0x142;
    break;
  case 0x8029336:
    uVar9 = *(undefined2 *)(param_1 + 0x11);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b;
    goto LAB_08029404;
  case 0x8029356:
    uVar9 = 0x1ea;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 1;
    goto LAB_08029404;
  case 0x8029374:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar9 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar9 = 0x186;
      }
      iVar7 = param_1[0xe];
      uVar5 = func_0800DC10(iVar7 + 0x5c);
      uVar3 = func_0800E550(iVar7,uVar5);
      puVar6 = auStack_1b + 2;
      goto LAB_08029404;
    }
  case 0x8029384:
case_08029384:
    uVar9 = 0x192;
    break;
  case 0x80293b4:
    uVar9 = 0x76;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 3;
    goto LAB_08029404;
  case 0x80293ce:
    uVar9 = 0x6e;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 4;
    goto LAB_08029404;
  case 0x80293ea:
    uVar9 = 0x72;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 5;
LAB_08029404:
    *puVar6 = uVar3;
LAB_08029406:
    uVar4 = func_0800DB60(puVar6);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x802940e:
    uVar9 = 0x1fa;
    break;
  case 0x8029414:
    uVar9 = 0x196;
    break;
  case 0x802941a:
    uVar9 = 0x112;
    break;
  case 0x8029420:
    uVar9 = 0x116;
    break;
  case 0x8029426:
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar2 = *(byte *)((int)param_1 + 0x3e);
    if (bVar2 == 1) {
      uVar9 = 0xee;
      uVar8 = _DAT_08029460;
      goto LAB_080294f2;
    }
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar9 = 0xea;
        uVar8 = _DAT_08029454;
        goto LAB_080294f2;
      }
    }
    else if (bVar2 == 2) {
      uVar9 = 0xe6;
      uVar8 = _DAT_0802946c;
      goto LAB_080294f2;
    }
    break;
  case 0x8029470:
    uVar9 = 0x15a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08029488;
    goto LAB_080294f2;
  case 0x802948c:
    uVar9 = 0x9a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_080294a0;
    goto LAB_080294f2;
  case 0x80294a4:
    uVar9 = 0x106;
    break;
  case 0x80294aa:
    uVar9 = 0x102;
    break;
  case 0x80294b0:
    uVar9 = 0xfe;
    break;
  case 0x80294b4:
    uVar9 = 0xfa;
    break;
  case 0x80294b8:
    uVar9 = 0x122;
    break;
  case 0x80294be:
    uVar9 = 0x11e;
    break;
  case 0x80294c4:
    uVar9 = 0x11a;
    break;
  case 0x80294ca:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x14a;
    if (cVar1 != '\0') {
      uVar9 = 0x10a;
    }
    break;
  case 0x80294e0:
    uVar9 = 0xe2;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08029500;
LAB_080294f2:
    if (*(ushort *)(iVar7 + 0x22) != uVar8) {
      func_080321B0(iVar7);
    }
    break;
  case 0x8029504:
    uVar9 = 0x3e;
    break;
  case 0x8029508:
    uVar9 = 0x146;
    break;
  case 0x802950e:
case_0802950E:
    uVar9 = 0x152;
    break;
  case 0x8029514:
    uVar9 = 0x13a;
    break;
  case 0x802951a:
    uVar9 = 0x42;
    break;
  case 0x802951e:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x1c6;
    if (cVar1 == '\0') {
LAB_08029530:
      uVar9 = 0x156;
    }
    break;
  case 0x8029536:
    uVar9 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar9 = 0xf2;
    }
  }
LAB_08029544:
  func_080321B0(param_1,uVar9);
  uVar5 = 1;
LAB_08029550:
  return CONCAT44(in_lr,uVar5);
}

// =============================================================================
// Function: func_08029558 @ 0x08029558
// =============================================================================
undefined8 func_08029558(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 in_lr;
  undefined1 uStack_1c;
  undefined1 auStack_1b [7];
  undefined1 *puVar6;
  
  puVar6 = &uStack_1c;
  *(undefined1 *)(param_1 + 0x29) = 1;
  cVar1 = func_0800F190(param_1[0xd] + _DAT_08029578);
  if (cVar1 == '\0') {
    uVar5 = 0;
    goto LAB_080299c8;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  func_08025FC4(param_1);
  uVar9 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_080295ac;
  if (0x39 < *(byte *)(param_1 + 0xf)) goto LAB_080299bc;
  switch(*(uint *)((uint)*(byte *)(param_1 + 0xf) * 4 + _DAT_080295b0) & 0xfffffffe) {
  case 0x802969c:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 == '\0') {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) goto LAB_080299a8;
      if (bVar2 < 2) goto joined_r0x08029770;
      if (bVar2 == 2) {
        uVar9 = 0x14e;
      }
    }
    else {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) {
        uVar9 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar9 = 0x1c6;
        }
      }
      else if (bVar2 < 2) {
        if (bVar2 == 0) goto case_080297FC;
      }
      else if ((bVar2 == 2) && (uVar9 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
        uVar9 = 0x15e;
      }
    }
    break;
  case 0x8029710:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 == '\0') goto case_08029986;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_080297FC;
    uVar9 = *(undefined2 *)
             (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
             _DAT_0802975c);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uStack_1c = func_0800E550(iVar7,uVar5);
    goto LAB_0802987e;
  case 0x8029760:
    bVar2 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08029770:
    uVar9 = 0x192;
    if (bVar2 == 0) goto case_08029986;
    break;
  case 0x8029776:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x192;
    if (cVar1 == '\0') {
      uVar9 = 0x152;
    }
    break;
  case 0x802978e:
    uVar9 = 0x136;
    break;
  case 0x8029794:
    uVar9 = 0x19e;
    break;
  case 0x802979a:
    uVar9 = 0x4e;
    break;
  case 0x802979e:
    uVar9 = 0x46;
    break;
  case 0x80297a2:
    uVar9 = 0x13e;
    break;
  case 0x80297a8:
    uVar9 = 0x142;
    break;
  case 0x80297ae:
    uVar9 = *(undefined2 *)(param_1 + 0x11);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b;
    goto LAB_0802987c;
  case 0x80297ce:
    uVar9 = 0x1ea;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 1;
    goto LAB_0802987c;
  case 0x80297ec:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar9 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar9 = 0x186;
      }
      iVar7 = param_1[0xe];
      uVar5 = func_0800DC10(iVar7 + 0x5c);
      uVar3 = func_0800E550(iVar7,uVar5);
      puVar6 = auStack_1b + 2;
      goto LAB_0802987c;
    }
  case 0x80297fc:
case_080297FC:
    uVar9 = 0x192;
    break;
  case 0x802982c:
    uVar9 = 0x76;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 3;
    goto LAB_0802987c;
  case 0x8029846:
    uVar9 = 0x6e;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 4;
    goto LAB_0802987c;
  case 0x8029862:
    uVar9 = 0x72;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar3 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_1b + 5;
LAB_0802987c:
    *puVar6 = uVar3;
LAB_0802987e:
    uVar4 = func_0800DB60(puVar6);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x8029886:
    uVar9 = 0x1fa;
    break;
  case 0x802988c:
    uVar9 = 0x196;
    break;
  case 0x8029892:
    uVar9 = 0x112;
    break;
  case 0x8029898:
    uVar9 = 0x116;
    break;
  case 0x802989e:
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar2 = *(byte *)((int)param_1 + 0x3e);
    if (bVar2 == 1) {
      uVar9 = 0xee;
      uVar8 = _DAT_080298d8;
      goto LAB_0802996a;
    }
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar9 = 0xea;
        uVar8 = _DAT_080298cc;
        goto LAB_0802996a;
      }
    }
    else if (bVar2 == 2) {
      uVar9 = 0xe6;
      uVar8 = _DAT_080298e4;
      goto LAB_0802996a;
    }
    break;
  case 0x80298e8:
    uVar9 = 0x15a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08029900;
    goto LAB_0802996a;
  case 0x8029904:
    uVar9 = 0x9a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08029918;
    goto LAB_0802996a;
  case 0x802991c:
    uVar9 = 0x106;
    break;
  case 0x8029922:
    uVar9 = 0x102;
    break;
  case 0x8029928:
    uVar9 = 0xfe;
    break;
  case 0x802992c:
    uVar9 = 0xfa;
    break;
  case 0x8029930:
    uVar9 = 0x122;
    break;
  case 0x8029936:
    uVar9 = 0x11e;
    break;
  case 0x802993c:
    uVar9 = 0x11a;
    break;
  case 0x8029942:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x14a;
    if (cVar1 != '\0') {
      uVar9 = 0x10a;
    }
    break;
  case 0x8029958:
    uVar9 = 0xe2;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_08029978;
LAB_0802996a:
    if (*(ushort *)(iVar7 + 0x22) != uVar8) {
      func_080321B0(iVar7);
    }
    break;
  case 0x802997c:
    uVar9 = 0x3e;
    break;
  case 0x8029980:
    uVar9 = 0x146;
    break;
  case 0x8029986:
case_08029986:
    uVar9 = 0x152;
    break;
  case 0x802998c:
    uVar9 = 0x13a;
    break;
  case 0x8029992:
    uVar9 = 0x42;
    break;
  case 0x8029996:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x1c6;
    if (cVar1 == '\0') {
LAB_080299a8:
      uVar9 = 0x156;
    }
    break;
  case 0x80299ae:
    uVar9 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar9 = 0xf2;
    }
  }
LAB_080299bc:
  func_080321B0(param_1,uVar9);
  uVar5 = 1;
LAB_080299c8:
  return CONCAT44(in_lr,uVar5);
}

// =============================================================================
// Function: func_080299D0 @ 0x080299D0
// =============================================================================
undefined4 func_080299D0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  func_080321B0(param_1,0x192);
  return in_lr;
}

// =============================================================================
// Function: func_080299EC @ 0x080299EC
// =============================================================================
undefined4 func_080299EC(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  undefined4 in_lr;
  undefined1 uStack_28;
  undefined1 auStack_27 [7];
  undefined1 *puVar7;
  
  puVar7 = &uStack_28;
  *(undefined1 *)(param_1 + 0x29) = 1;
  func_0802A588(param_1);
  cVar1 = func_0800F190(param_1[0xe] + 0x54);
  if (cVar1 == '\0') {
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar12 = (undefined4 *)piVar5[1];
    for (puVar10 = (undefined4 *)*piVar5; puVar10 != puVar12; puVar10 = puVar10 + 1) {
      cVar1 = func_0x08008cd0(*puVar10);
      if (cVar1 == '\0') {
        uVar6 = *puVar10;
        goto LAB_08029a5a;
      }
    }
    uVar6 = puVar12[-1];
LAB_08029a5a:
    func_08008B6C(uVar6,0x6a);
    *(undefined1 *)(param_1 + 0xf) = 0x11;
    uVar6 = _DAT_08029ab8;
    bVar2 = *(byte *)(param_1 + 8);
    if (bVar2 == 1) {
      param_1[0x23] = 0;
LAB_08029aca:
      param_1[0x24] = uVar6;
      param_1[0x27] = 0xc0000;
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar6 = 0xa0000;
        param_1[0x23] = 0;
        goto LAB_08029aca;
      }
    }
    else {
      uVar6 = _DAT_08029a90;
      if (bVar2 != 2) {
        if (bVar2 != 3) goto LAB_08029ae4;
        uVar6 = 0xa0000;
      }
      param_1[0x23] = uVar6;
      param_1[0x24] = 0;
      param_1[0x27] = 0xc0000;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
LAB_08029ae4:
  uVar11 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_08029b00;
  if (0x39 < *(byte *)(param_1 + 0xf)) goto LAB_08029f10;
  switch(*(uint *)((uint)*(byte *)(param_1 + 0xf) * 4 + _DAT_08029b04) & 0xfffffffe) {
  case 0x8029bf0:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 != '\0') {
      bVar2 = *(byte *)((int)param_1 + 0x3e);
      if (bVar2 == 1) {
        uVar11 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar11 = 0x1c6;
        }
        break;
      }
      if (1 < bVar2) {
        if ((bVar2 == 2) && (uVar11 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar11 = 0x15e;
        }
        break;
      }
      if (bVar2 != 0) break;
      goto case_08029D50;
    }
    bVar2 = *(byte *)((int)param_1 + 0x3e);
    if (bVar2 != 1) {
      if (1 < bVar2) {
        if (bVar2 == 2) {
          uVar11 = 0x14e;
        }
        break;
      }
      goto joined_r0x08029cc4;
    }
    goto LAB_08029efc;
  case 0x8029c64:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar1 == '\0') goto case_08029EDA;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_08029D50;
    uVar11 = *(undefined2 *)
              (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
              _DAT_08029cb0);
    iVar8 = param_1[0xe];
    uVar6 = func_0800DC10(iVar8 + 0x5c);
    uStack_28 = func_0800E550(iVar8,uVar6);
    goto LAB_08029dd2;
  case 0x8029cb4:
    bVar2 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x08029cc4:
    uVar11 = 0x192;
    if (bVar2 != 0) break;
  case 0x8029eda:
case_08029EDA:
    uVar11 = 0x152;
    break;
  case 0x8029cca:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x192;
    if (cVar1 == '\0') {
      uVar11 = 0x152;
    }
    break;
  case 0x8029ce2:
    uVar11 = 0x136;
    break;
  case 0x8029ce8:
    uVar11 = 0x19e;
    break;
  case 0x8029cee:
    uVar11 = 0x4e;
    break;
  case 0x8029cf2:
    uVar11 = 0x46;
    break;
  case 0x8029cf6:
    uVar11 = 0x13e;
    break;
  case 0x8029cfc:
    uVar11 = 0x142;
    break;
  case 0x8029d02:
    uVar11 = *(undefined2 *)(param_1 + 0x11);
    iVar8 = param_1[0xe];
    uVar6 = func_0800DC10(iVar8 + 0x5c);
    uVar3 = func_0800E550(iVar8,uVar6);
    puVar7 = auStack_27;
    goto LAB_08029dd0;
  case 0x8029d22:
    uVar11 = 0x1ea;
    iVar8 = param_1[0xe];
    uVar6 = func_0800DC10(iVar8 + 0x5c);
    uVar3 = func_0800E550(iVar8,uVar6);
    puVar7 = auStack_27 + 1;
    goto LAB_08029dd0;
  case 0x8029d40:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar11 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar11 = 0x186;
      }
      iVar8 = param_1[0xe];
      uVar6 = func_0800DC10(iVar8 + 0x5c);
      uVar3 = func_0800E550(iVar8,uVar6);
      puVar7 = auStack_27 + 2;
      goto LAB_08029dd0;
    }
  case 0x8029d50:
case_08029D50:
    uVar11 = 0x192;
    break;
  case 0x8029d80:
    uVar11 = 0x76;
    iVar8 = param_1[0xe];
    uVar6 = func_0800DC10(iVar8 + 0x5c);
    uVar3 = func_0800E550(iVar8,uVar6);
    puVar7 = auStack_27 + 3;
    goto LAB_08029dd0;
  case 0x8029d9a:
    uVar11 = 0x6e;
    iVar8 = param_1[0xe];
    uVar6 = func_0800DC10(iVar8 + 0x5c);
    uVar3 = func_0800E550(iVar8,uVar6);
    puVar7 = auStack_27 + 4;
    goto LAB_08029dd0;
  case 0x8029db6:
    uVar11 = 0x72;
    iVar8 = param_1[0xe];
    uVar6 = func_0800DC10(iVar8 + 0x5c);
    uVar3 = func_0800E550(iVar8,uVar6);
    puVar7 = auStack_27 + 5;
LAB_08029dd0:
    *puVar7 = uVar3;
LAB_08029dd2:
    uVar4 = func_0800DB60(puVar7);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x8029dda:
    uVar11 = 0x1fa;
    break;
  case 0x8029de0:
    uVar11 = 0x196;
    break;
  case 0x8029de6:
    uVar11 = 0x112;
    break;
  case 0x8029dec:
    uVar11 = 0x116;
    break;
  case 0x8029df2:
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar2 = *(byte *)((int)param_1 + 0x3e);
    if (bVar2 == 1) {
      uVar11 = 0xee;
      uVar9 = _DAT_08029e2c;
    }
    else if (bVar2 < 2) {
      if (bVar2 != 0) break;
      uVar11 = 0xea;
      uVar9 = _DAT_08029e20;
    }
    else {
      if (bVar2 != 2) break;
      uVar11 = 0xe6;
      uVar9 = _DAT_08029e38;
    }
    goto LAB_08029ebe;
  case 0x8029e3c:
    uVar11 = 0x15a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar9 = _DAT_08029e54;
    goto LAB_08029ebe;
  case 0x8029e58:
    uVar11 = 0x9a;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar9 = _DAT_08029e6c;
    goto LAB_08029ebe;
  case 0x8029e70:
    uVar11 = 0x106;
    break;
  case 0x8029e76:
    uVar11 = 0x102;
    break;
  case 0x8029e7c:
    uVar11 = 0xfe;
    break;
  case 0x8029e80:
    uVar11 = 0xfa;
    break;
  case 0x8029e84:
    uVar11 = 0x122;
    break;
  case 0x8029e8a:
    uVar11 = 0x11e;
    break;
  case 0x8029e90:
    uVar11 = 0x11a;
    break;
  case 0x8029e96:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x14a;
    if (cVar1 != '\0') {
      uVar11 = 0x10a;
    }
    break;
  case 0x8029eac:
    uVar11 = 0xe2;
    iVar8 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar9 = _DAT_08029ecc;
LAB_08029ebe:
    if (*(ushort *)(iVar8 + 0x22) != uVar9) {
      func_080321B0(iVar8);
    }
    break;
  case 0x8029ed0:
    uVar11 = 0x3e;
    break;
  case 0x8029ed4:
    uVar11 = 0x146;
    break;
  case 0x8029ee0:
    uVar11 = 0x13a;
    break;
  case 0x8029ee6:
    uVar11 = 0x42;
    break;
  case 0x8029eea:
    cVar1 = func_0800F190(param_1[0xe] + 0x54);
    uVar11 = 0x1c6;
    if (cVar1 != '\0') break;
LAB_08029efc:
    uVar11 = 0x156;
    break;
  case 0x8029f02:
    uVar11 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar11 = 0xf2;
    }
  }
LAB_08029f10:
  func_080321B0(param_1,uVar11);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_08029F30 @ 0x08029F30
// =============================================================================
undefined4 func_08029F30(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 in_lr;
  undefined1 uStack_20;
  undefined1 auStack_1f [7];
  
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = _DAT_08029fd0;
  param_1[0x24] = 0;
  param_1[0x27] = 0x110000;
  puVar10 = (undefined4 *)param_1[4];
  if (puVar10 != (undefined4 *)0x0) {
    func_0x0800db2c(&uStack_20,param_2);
    uVar4 = func_0800DB60(&uStack_20);
    uVar6 = func_0x080d3910(*(int **)*puVar10,*(undefined4 *)(**(int **)*puVar10 + 100));
    func_0805E850(puVar10 + 0x2d,uVar6,uVar4);
    *(undefined1 *)(puVar10 + 0x32) = 1;
    *(undefined1 *)((int)puVar10 + 0xca) = 0;
    *(undefined1 *)((int)puVar10 + 0xcb) = 1;
  }
  *(byte *)(param_1 + 0xf) = 0x34;
  *(char *)((int)param_1 + 0x3d) = 'x';
  uVar4 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_08029fd4;
  uVar7 = (uint)*(byte *)(param_1 + 0xf);
  if (0x39 < uVar7) goto LAB_0802a3e0;
  switch(*(uint *)(uVar7 * 4 + _DAT_08029fd8) & 0xfffffffe) {
  case 0x802a0c4:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x3e);
      if (bVar1 == 1) {
        uVar4 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar4 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar4 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar4 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_0802A224;
    }
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar4 = 0x14e;
        }
        break;
      }
      goto joined_r0x0802a198;
    }
    goto LAB_0802a3d0;
  case 0x802a138:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      if (*(byte *)((int)param_1 + 0x3f) < 6) {
        uVar4 = *(undefined2 *)
                 (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2 +
                 _DAT_0802a184);
        iVar9 = param_1[0xe];
        uVar6 = func_0800DC10(iVar9 + 0x5c);
        uVar2 = func_0800E550(iVar9,uVar6);
        puVar8 = auStack_1f;
        goto LAB_0802a2a4;
      }
      goto case_0802A224;
    }
  case 0x802a3ae:
case_0802A3AE:
    uVar4 = 0x152;
    break;
  case 0x802a188:
    bVar1 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x0802a198:
    uVar4 = 0x192;
    if (bVar1 != 0) break;
    goto case_0802A3AE;
  case 0x802a19e:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar4 = 0x192;
    if (cVar3 == '\0') {
      uVar4 = 0x152;
    }
    break;
  case 0x802a1b6:
    uVar4 = 0x136;
    break;
  case 0x802a1bc:
    uVar4 = 0x19e;
    break;
  case 0x802a1c2:
    uVar4 = 0x4e;
    break;
  case 0x802a1c6:
    uVar4 = 0x46;
    break;
  case 0x802a1ca:
    uVar4 = 0x13e;
    break;
  case 0x802a1d0:
    uVar4 = 0x142;
    break;
  case 0x802a1d6:
    uVar4 = *(undefined2 *)(param_1 + 0x11);
    iVar9 = param_1[0xe];
    uVar6 = func_0800DC10(iVar9 + 0x5c);
    uVar2 = func_0800E550(iVar9,uVar6);
    puVar8 = auStack_1f + 1;
    goto LAB_0802a2a4;
  case 0x802a1f6:
    uVar4 = 0x1ea;
    iVar9 = param_1[0xe];
    uVar6 = func_0800DC10(iVar9 + 0x5c);
    uVar2 = func_0800E550(iVar9,uVar6);
    puVar8 = auStack_1f + 2;
    goto LAB_0802a2a4;
  case 0x802a214:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar4 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar4 = 0x186;
      }
      iVar9 = param_1[0xe];
      uVar6 = func_0800DC10(iVar9 + 0x5c);
      uVar2 = func_0800E550(iVar9,uVar6);
      puVar8 = auStack_1f + 3;
      goto LAB_0802a2a4;
    }
  case 0x802a224:
case_0802A224:
    uVar4 = 0x192;
    break;
  case 0x802a252:
    uVar4 = 0x76;
    iVar9 = param_1[0xe];
    uVar6 = func_0800DC10(iVar9 + 0x5c);
    uVar2 = func_0800E550(iVar9,uVar6);
    puVar8 = auStack_1f + 4;
    goto LAB_0802a2a4;
  case 0x802a26e:
    uVar4 = 0x6e;
    iVar9 = param_1[0xe];
    uVar6 = func_0800DC10(iVar9 + 0x5c);
    uVar2 = func_0800E550(iVar9,uVar6);
    puVar8 = auStack_1f + 5;
    goto LAB_0802a2a4;
  case 0x802a28a:
    uVar4 = 0x72;
    iVar9 = param_1[0xe];
    uVar6 = func_0800DC10(iVar9 + 0x5c);
    uVar2 = func_0800E550(iVar9,uVar6);
    puVar8 = auStack_1f + 6;
LAB_0802a2a4:
    *puVar8 = uVar2;
    uVar5 = func_0800DB60();
    *(undefined2 *)(param_1 + 0x1f) = uVar5;
    break;
  case 0x802a2ae:
    uVar4 = 0x1fa;
    break;
  case 0x802a2b4:
    uVar4 = 0x196;
    break;
  case 0x802a2ba:
    uVar4 = 0x112;
    break;
  case 0x802a2c0:
    uVar4 = 0x116;
    break;
  case 0x802a2c6:
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 == 1) {
      uVar4 = 0xee;
      uVar7 = _DAT_0802a300;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar4 = 0xea;
      uVar7 = _DAT_0802a2f4;
    }
    else {
      if (bVar1 != 2) break;
      uVar4 = 0xe6;
      uVar7 = _DAT_0802a30c;
    }
    goto LAB_0802a392;
  case 0x802a310:
    uVar4 = 0x15a;
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar7 = _DAT_0802a328;
    goto LAB_0802a392;
  case 0x802a32c:
    uVar4 = 0x9a;
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar7 = _DAT_0802a340;
    goto LAB_0802a392;
  case 0x802a344:
    uVar4 = 0x106;
    break;
  case 0x802a34a:
    uVar4 = 0x102;
    break;
  case 0x802a350:
    uVar4 = 0xfe;
    break;
  case 0x802a354:
    uVar4 = 0xfa;
    break;
  case 0x802a358:
    uVar4 = 0x122;
    break;
  case 0x802a35e:
    uVar4 = 0x11e;
    break;
  case 0x802a364:
    uVar4 = 0x11a;
    break;
  case 0x802a36a:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar4 = 0x14a;
    if (cVar3 != '\0') {
      uVar4 = 0x10a;
    }
    break;
  case 0x802a380:
    uVar4 = 0xe2;
    iVar9 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar7 = _DAT_0802a3a0;
LAB_0802a392:
    if (*(ushort *)(iVar9 + 0x22) != uVar7) {
      func_080321B0(iVar9);
    }
    break;
  case 0x802a3a4:
    uVar4 = 0x3e;
    break;
  case 0x802a3a8:
    uVar4 = 0x146;
    break;
  case 0x802a3b4:
    uVar4 = 0x13a;
    break;
  case 0x802a3ba:
    uVar4 = 0x42;
    break;
  case 0x802a3be:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar4 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_0802a3d0:
    uVar4 = 0x156;
    break;
  case 0x802a3d6:
    uVar4 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar4 = 0xf2;
    }
  }
LAB_0802a3e0:
  func_080321B0(param_1,uVar4);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802A400 @ 0x0802A400
// =============================================================================
undefined4 func_0802A400(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xa4) = 1;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x150000;
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  if (puVar5 != (undefined4 *)0x0) {
    uVar2 = func_0800DCE0(param_2);
    uVar3 = func_0x080d3910(*(int **)*puVar5,*(undefined4 *)(**(int **)*puVar5 + 100));
    func_0805E850(puVar5 + 0x2d,uVar3,uVar2);
    *(undefined1 *)(puVar5 + 0x32) = 1;
    *(undefined1 *)((int)puVar5 + 0xca) = 0;
    *(undefined1 *)((int)puVar5 + 0xcb) = 1;
  }
  iVar6 = *(int *)(param_1 + 0x14);
  uVar3 = func_0800DD08(param_2);
  uVar4 = func_0800DD3C(param_2);
  func_0x080d3918(param_1,uVar3,uVar4,*(undefined4 *)(iVar6 + 100));
  iVar6 = func_0800DDAC(param_2);
  if (iVar6 == 0) {
    uVar1 = 0x36;
  }
  else {
    uVar1 = 0x37;
  }
  *(undefined1 *)(param_1 + 0x3c) = uVar1;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  func_080321B0(param_1,0x146);
  return in_lr;
}

// =============================================================================
// Function: func_0802A4C0 @ 0x0802A4C0
// =============================================================================
undefined4 func_0802A4C0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  if ((param_3 == 1) || (param_3 == 0)) {
    *(char *)(param_1 + 0x89) = (char)param_3;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = func_0x080d3910(*(int **)*puVar2,*(undefined4 *)(**(int **)*puVar2 + 100));
    func_0805E850(puVar2 + 0x2d,uVar1,param_2);
    *(undefined1 *)(puVar2 + 0x32) = 1;
    *(undefined1 *)((int)puVar2 + 0xca) = 0;
    *(undefined1 *)((int)puVar2 + 0xcb) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802A510 @ 0x0802A510
// =============================================================================
undefined4 func_0802A510(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8c) = _DAT_0802a584;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x110000;
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x38);
    uVar2 = func_0800DC10(iVar3 + 0x5c);
    auStack_18[0] = func_0800E550(iVar3,uVar2);
    uVar1 = func_0800DB60(auStack_18);
    uVar2 = func_0x080d3910(*(int **)*puVar4,*(undefined4 *)(**(int **)*puVar4 + 100));
    func_0805E850(puVar4 + 0x2d,uVar2,uVar1);
    *(undefined1 *)(puVar4 + 0x32) = 1;
    *(undefined1 *)((int)puVar4 + 0xca) = 0;
    *(undefined1 *)((int)puVar4 + 0xcb) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802AA84 @ 0x0802AA84
// =============================================================================
undefined8 func_0802AA84(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  byte abStack_28 [8];
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar7 = 0;
  iVar5 = *(int *)(param_1 + 0x34) + _DAT_0802aad8;
  cVar1 = func_0800DC34(iVar5);
  if (cVar1 == '\0') {
    iVar7 = *(int *)(param_1 + 0x34) + _DAT_0802aadc;
    uVar2 = func_0800DC10(iVar5);
    uStack_20 = func_0800E550(iVar7,uVar2);
    iVar7 = func_080246BC(0);
  }
  iVar5 = *(int *)(param_1 + 0x34) + _DAT_0802aae0;
  for (uVar6 = 0; uVar3 = func_0x0800f5f8(iVar5), uVar6 < uVar3; uVar6 = uVar6 + 1) {
    uVar2 = func_0x0800f868(iVar5,uVar6);
    cVar1 = func_0800DC34();
    if (cVar1 == '\0') {
      iVar4 = *(int *)(param_1 + 0x34) + _DAT_0802ab90;
      uVar2 = func_0800DC10(uVar2);
      uStack_1f = func_0800E550(iVar4,uVar2);
      iVar7 = func_080246BC(iVar7);
    }
  }
  iVar5 = *(int *)(param_1 + 0x34);
  uVar6 = 0;
  do {
    uVar2 = func_0x0800b408(iVar5 + 0x380,uVar6);
    cVar1 = func_0800DC34();
    if (cVar1 == '\0') {
      iVar4 = *(int *)(param_1 + 0x34) + _DAT_0802ab90;
      uVar2 = func_0800DC10(uVar2);
      uStack_1e = func_0800E550(iVar4,uVar2);
      iVar7 = func_080246BC(iVar7);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x40);
  memcpy(abStack_28,_DAT_0802ab94,7);
  return CONCAT44(in_lr,(uint)abStack_28[iVar7]);
}

// =============================================================================
// Function: func_0802AB98 @ 0x0802AB98
// =============================================================================
short * func_0802AB98(short *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  
  if (param_3 == 1) {
    sVar1 = *(short *)(param_2 + 10);
    sVar2 = *(short *)(param_2 + 0xe);
    *param_1 = sVar1 + -4;
    param_1[1] = sVar2 + -0x14;
    sVar1 = sVar1 + 4;
  }
  else {
    if (param_3 < 2) {
      if (param_3 == 0) {
        sVar1 = *(short *)(param_2 + 10);
        sVar2 = *(short *)(param_2 + 0xe);
        *param_1 = sVar1 + -4;
        param_1[1] = sVar2 + -6;
        param_1[2] = sVar1 + 4;
        param_1[3] = sVar2 + 0x12;
        return param_1;
      }
LAB_0802ac1a:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      return param_1;
    }
    if (param_3 == 2) {
      sVar1 = *(short *)(param_2 + 10);
      sVar2 = *(short *)(param_2 + 0xe);
      *param_1 = sVar1 + -0x14;
      param_1[1] = sVar2 + -0xe;
      sVar1 = sVar1 + 4;
    }
    else {
      if (param_3 != 3) goto LAB_0802ac1a;
      sVar1 = *(short *)(param_2 + 10);
      sVar2 = *(short *)(param_2 + 0xe);
      *param_1 = sVar1 + -4;
      param_1[1] = sVar2 + -0xe;
      sVar1 = sVar1 + 0x14;
    }
  }
  param_1[2] = sVar1;
  param_1[3] = sVar2 + 2;
  return param_1;
}

// =============================================================================
// Function: func_0802AC2C @ 0x0802AC2C
// =============================================================================
undefined4 func_0802AC2C(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  int *piStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  char cStack_24;
  
  piStack_40 = (int *)*param_1;
  uStack_3c = (uint)*(ushort *)(param_1 + 1);
  iStack_38 = (int)*(short *)((int)param_1 + 10);
  iStack_34 = (int)*(short *)((int)param_1 + 0xe);
  func_0802AB98(&uStack_58,param_1,*(undefined1 *)(param_1 + 8));
  uStack_50 = uStack_58;
  uStack_4c = uStack_54;
  uStack_30 = 100;
  iStack_2c = 0;
  uVar5 = 0x2b;
  do {
    uStack_28 = uVar5;
    iVar2 = func_0x080d3914(piStack_40,uVar5,*(undefined4 *)(*piStack_40 + 0x40));
    cStack_24 = '\0';
    if ((iVar2 != 0) && (*(ushort *)(iVar2 + 4) == uStack_3c)) {
      func_0x080d3914(&sStack_48,iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc));
      if (((int)(short)uStack_50 - (int)sStack_44 & (int)sStack_48 - (int)(short)uStack_4c &
           (int)uStack_50._2_2_ - (int)sStack_42 & (int)sStack_46 - (int)uStack_4c._2_2_) < 0) {
        iVar4 = param_2 >> 0x10;
        if (iVar4 != 0) {
          uVar3 = param_3;
          if (0 < iVar4) {
            uVar3 = *(undefined4 *)(iVar4 * 4 + *(int *)(iVar2 + (short)param_3) + -4);
          }
          cVar1 = func_0x080d3910(iVar2 + (short)param_2,uVar3);
          if (cVar1 == '\0') goto LAB_0802ad20;
        }
        cStack_24 = '\x01';
      }
    }
LAB_0802ad20:
    if ((cStack_24 != '\0') &&
       ((iVar4 = *(short *)(iVar2 + 10) - iStack_38, iVar2 = *(short *)(iVar2 + 0xe) - iStack_34,
        iVar2 = iVar4 * iVar4 + iVar2 * iVar2, uStack_30 == 100 || (iVar2 < iStack_2c)))) {
      uStack_30 = uStack_28;
      iStack_2c = iVar2;
    }
    uVar5 = uVar5 + 1;
    if (0x45 < uVar5) {
      *(undefined1 *)((int)param_1 + 0xb2) = (undefined1)uStack_30;
      return in_lr;
    }
  } while( true );
}

// =============================================================================
// Function: func_0802AD80 @ 0x0802AD80
// =============================================================================
undefined4 func_0802AD80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  undefined4 auStack_2c [2];
  undefined4 auStack_24 [2];
  undefined4 auStack_1c [2];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar5 = &uStack_3c;
  iVar1 = func_0x0800e958(param_1[0xe]);
  func_0800ED8C(param_1[0xe]);
  iVar2 = func_0x0800e958(param_1[0xe]);
  if (iVar1 == iVar2) {
    return in_lr;
  }
  uVar3 = func_0x0800e958(param_1[0xe]);
  if (uVar3 == _DAT_0802adc0) {
    piVar4 = (int *)*param_1;
    puVar6 = (undefined4 *)(*piVar4 + 0x140);
    puVar5 = auStack_2c;
    auStack_2c[0] = 0x338;
  }
  else if (_DAT_0802adc0 < uVar3) {
    if (uVar3 == _DAT_0802ade0) {
      piVar4 = (int *)*param_1;
      puVar6 = (undefined4 *)(*piVar4 + 0x140);
      puVar5 = auStack_1c;
      auStack_1c[0] = _DAT_0802ae78;
    }
    else {
      if (_DAT_0802ade0 < uVar3) {
        if (uVar3 != _DAT_0802adf0) {
          return in_lr;
        }
        uStack_14 = _DAT_0802aea0;
        uStack_10 = 0;
        func_0x080d3918((int *)*param_1,&uStack_14,1,*(undefined4 *)(*(int *)*param_1 + 0x140));
        return in_lr;
      }
      if (uVar3 != _DAT_0802ade4) {
        return in_lr;
      }
      piVar4 = (int *)*param_1;
      puVar6 = (undefined4 *)(*piVar4 + 0x140);
      puVar5 = auStack_24;
      auStack_24[0] = _DAT_0802ae54;
    }
  }
  else {
    if (uVar3 == _DAT_0802adc4) {
      piVar4 = (int *)*param_1;
      uStack_3c = _DAT_0802ae0c;
      uStack_38 = 0;
      uVar7 = *(undefined4 *)(*piVar4 + 0x140);
      goto LAB_0802ae6e;
    }
    if (uVar3 != _DAT_0802adc8) {
      return in_lr;
    }
    piVar4 = (int *)*param_1;
    puVar6 = (undefined4 *)(*piVar4 + 0x140);
    puVar5 = auStack_34;
    auStack_34[0] = _DAT_0802ae24;
  }
  puVar5[1] = 0;
  uVar7 = *puVar6;
LAB_0802ae6e:
  func_0x080d3918(piVar4,puVar5,1,uVar7);
  return in_lr;
}

// =============================================================================
// Function: func_0802AEA4 @ 0x0802AEA4
// =============================================================================
undefined8 func_0802AEA4(undefined4 *param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 in_lr;
  int iStack_2c;
  int iStack_28;
  ushort uStack_24;
  ushort uStack_22;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = *(ushort *)(param_1 + 1);
  func_0x080d3918(&iStack_2c,(int *)*param_1,(uint)uVar1,*(undefined4 *)(*(int *)*param_1 + 0x34));
  func_0x080d3914(&uStack_20,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_18 = uStack_20;
  uStack_14 = uStack_1c;
  cVar2 = func_080AC070(&iStack_2c,&uStack_18);
  if (cVar2 == '\0') {
    if (_DAT_0802af2c < uVar1 - 0x34) {
LAB_0802b048:
      uVar7 = 0;
      goto LAB_0802b04a;
    }
    iVar3 = (int)(short)uStack_18;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    iVar4 = (int)uStack_18._2_2_;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    uVar8 = (uint)uStack_24;
    if (((iStack_2c == 0) || (uVar8 < (uint)(iVar3 >> 3))) || ((uint)uStack_22 < (uint)(iVar4 >> 3))
       ) {
      puVar6 = (uint *)0x0;
    }
    else {
      uVar5 = uVar8 * (iVar4 >> 3) + (iVar3 >> 3);
      if (iStack_28 != 0) {
        uVar5 = (uint)*(byte *)(iStack_28 + uVar5);
      }
      puVar6 = (uint *)(iStack_2c + uVar5 * 4);
    }
    if ((puVar6 == (uint *)0x0) || ((*puVar6 & _DAT_0802af80) == 0)) {
      iVar3 = (int)(short)uStack_18;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      iVar4 = uStack_14._2_2_ + -1;
      if (iVar4 < 0) {
        iVar4 = uStack_14._2_2_ + 6;
      }
      if (((iStack_2c == 0) || (uVar8 < (uint)(iVar3 >> 3))) ||
         ((uint)uStack_22 < (uint)(iVar4 >> 3))) {
        puVar6 = (uint *)0x0;
      }
      else {
        uVar5 = uVar8 * (iVar4 >> 3) + (iVar3 >> 3);
        if (iStack_28 != 0) {
          uVar5 = (uint)*(byte *)(iStack_28 + uVar5);
        }
        puVar6 = (uint *)(iStack_2c + uVar5 * 4);
      }
      if ((puVar6 == (uint *)0x0) || ((*puVar6 & _DAT_0802afd0) == 0)) {
        iVar3 = (short)uStack_14 + -1;
        if (iVar3 < 0) {
          iVar3 = (short)uStack_14 + 6;
        }
        iVar4 = (int)uStack_18._2_2_;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 7;
        }
        if (((iStack_2c == 0) || (uVar8 < (uint)(iVar3 >> 3))) ||
           ((uint)uStack_22 < (uint)(iVar4 >> 3))) {
          puVar6 = (uint *)0x0;
        }
        else {
          uVar5 = uVar8 * (iVar4 >> 3) + (iVar3 >> 3);
          if (iStack_28 != 0) {
            uVar5 = (uint)*(byte *)(iStack_28 + uVar5);
          }
          puVar6 = (uint *)(iStack_2c + uVar5 * 4);
        }
        if ((puVar6 == (uint *)0x0) || ((*puVar6 & _DAT_0802b024) == 0)) {
          iVar3 = (short)uStack_14 + -1;
          if (iVar3 < 0) {
            iVar3 = (short)uStack_14 + 6;
          }
          iVar4 = uStack_14._2_2_ + -1;
          if (iVar4 < 0) {
            iVar4 = uStack_14._2_2_ + 6;
          }
          if (((iStack_2c == 0) || (uVar8 < (uint)(iVar3 >> 3))) ||
             ((uint)uStack_22 < (uint)(iVar4 >> 3))) {
            puVar6 = (uint *)0x0;
          }
          else {
            iVar3 = uVar8 * (iVar4 >> 3) + (iVar3 >> 3);
            if (iStack_28 == 0) {
              puVar6 = (uint *)(iStack_2c + iVar3 * 4);
            }
            else {
              puVar6 = (uint *)(iStack_2c + (uint)*(byte *)(iStack_28 + iVar3) * 4);
            }
          }
          if ((puVar6 == (uint *)0x0) || ((*puVar6 & _DAT_0802b044) == 0)) goto LAB_0802b048;
        }
      }
    }
  }
  uVar7 = 1;
LAB_0802b04a:
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_0802B054 @ 0x0802B054
// =============================================================================
undefined4 func_0802B054(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar3 = func_0809DFAC(param_1[0xd] + _DAT_0802b130);
  if (cVar3 == '\t') {
    bVar1 = *(byte *)(param_1[0xd] + _DAT_0802b134);
    if (((bVar1 & 0x30) == 0) && (iVar4 = func_0x0800f204(param_1[0xe] + 0x54), iVar4 == 1)) {
      auStack_3c[0] = func_0800F258(param_1[0xe] + 0x54);
      iVar4 = func_0x0800df54(auStack_3c);
      if (iVar4 == 0x25) {
        uStack_38 = 0x330;
        uStack_34 = bVar1 & 0x30;
        func_0x080d3918((int *)*param_1,&uStack_38,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
      }
    }
  }
  cVar3 = func_0809E02C(param_1[0xd] + _DAT_0802b130);
  if (cVar3 == '\t') {
    bVar1 = *(byte *)(param_1[0xd] + _DAT_0802b138);
    if (((bVar1 & 0x18) == 0) && (iVar4 = func_0x0800f204(param_1[0xe] + 0x54), iVar4 == 1)) {
      uStack_30 = func_0800F258(param_1[0xe] + 0x54);
      iVar4 = func_0x0800df54();
      if (iVar4 == 0x26) {
        uStack_2c = _DAT_0802b13c;
        uStack_28 = bVar1 & 0x18;
        func_0x080d3918((int *)*param_1,&uStack_2c,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
      }
    }
  }
  if ((*(byte *)(param_1[0xd] + _DAT_0802b140) & 0xc0) == 0) {
    bVar2 = true;
    puVar5 = _DAT_0802b144;
    for (uVar6 = 0; uVar6 < 9; uVar6 = uVar6 + 1) {
      cVar3 = func_0800B124(param_1[0xd] + 0x54,*puVar5);
      if (cVar3 == '\0') {
        bVar2 = false;
        break;
      }
      puVar5 = puVar5 + 1;
    }
    iVar4 = _DAT_0802b1d4;
    if (bVar2) {
      cVar3 = func_0x0809e184(param_1[0xd] + _DAT_0802b1d4);
      if ((((cVar3 != '\0') && (cVar3 = func_0x0809e194(param_1[0xd] + iVar4), cVar3 != '\0')) &&
          (cVar3 = func_0809DFAC(param_1[0xd] + iVar4), cVar3 != '\0')) &&
         (cVar3 = func_0x0809e1a4(param_1[0xd] + iVar4), cVar3 != '\0')) {
        uStack_24 = _DAT_0802b1d8;
        uStack_20 = 0;
        func_0x080d3918((int *)*param_1,&uStack_24,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
      }
    }
  }
  if ((*(byte *)(param_1[0xd] + _DAT_0802b1dc) & 3) == 0) {
    bVar2 = true;
    puVar5 = _DAT_0802b1e0;
    for (uVar6 = 0; uVar6 < 0xe; uVar6 = uVar6 + 1) {
      cVar3 = func_0800B124(param_1[0xd] + 0x54,*puVar5);
      if (cVar3 == '\0') {
        bVar2 = false;
        break;
      }
      puVar5 = puVar5 + 1;
    }
    if (((bVar2) && (cVar3 = func_0809C32C(&UNK_00003480 + param_1[0xd]), cVar3 != '\0')) &&
       ((cVar3 = func_0x0809e174(param_1[0xd] + _DAT_0802b258), cVar3 != '\0' &&
        (cVar3 = func_0809E02C(param_1[0xd] + _DAT_0802b258), cVar3 != '\0')))) {
      uStack_1c = _DAT_0802b25c;
      uStack_18 = 0;
      func_0x080d3918((int *)*param_1,&uStack_1c,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802B3B4 @ 0x0802B3B4
// =============================================================================
undefined4 func_0802B3B4(int *param_1)

{
  ushort uVar1;
  char cVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 in_lr;
  
  func_0803260C();
  iVar5 = *param_1;
  puVar4 = (ushort *)(iVar5 + 0x7c);
  uVar1 = *puVar4;
  if ((uVar1 != _DAT_0802b40c) && ((char)param_1[0x11] == '\0')) {
    *puVar4 = (ushort)_DAT_0802b40c | uVar1;
  }
  if (*(char *)(iVar5 + 0x88) == '\x01') {
    piVar3 = (int *)((int)param_1 + 0xcb);
    if (*(char *)piVar3 == '\0') {
      iVar5 = func_0805E8F0(param_1 + 0x2d);
      if (-1 < iVar5 * 0x40000000) goto LAB_0802b414;
      piVar3 = param_1 + 0x32;
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    *(char *)piVar3 = cVar2;
  }
LAB_0802b414:
  uVar7 = 0;
  piVar3 = param_1 + 0x3f;
  puVar6 = (undefined1 *)((int)param_1 + _DAT_0802b448);
  param_1 = param_1 + 0x34;
  do {
    if ((char)*param_1 != '\0') {
      if (*(char *)((int)piVar3 + 0x17) == '\0') {
        iVar5 = func_0805E8F0(piVar3);
        if (iVar5 * 0x40000000 < 0) {
          *(undefined1 *)(piVar3 + 5) = 1;
        }
      }
      else {
        *puVar6 = 0;
        iVar5 = 2;
      }
      if (iVar5 * 0x20000000 < 0) {
        *(char *)param_1 = '\0';
      }
    }
    piVar3 = piVar3 + 0x12;
    puVar6 = puVar6 + 0x48;
    param_1 = param_1 + 0x12;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  return in_lr;
}

// =============================================================================
// Function: func_0802B46C @ 0x0802B46C
// =============================================================================
undefined4 func_0802B46C(int *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 uStack_1c;
  
  iVar4 = *param_1;
  uVar7 = (uint)*(byte *)(param_1 + 0xa0);
  uVar2 = *(undefined2 *)(iVar4 + 10);
  uVar3 = *(undefined2 *)(iVar4 + 0xe);
  bVar1 = *(byte *)(iVar4 + 0x20);
  uVar6 = uVar7 & 1;
  piVar5 = param_1 + uVar7 * 0x12 + 0x34;
  *(undefined1 *)piVar5 = 1;
  uStack_1c = CONCAT22(uVar3,uVar2);
  piVar5[0x11] = uStack_1c;
  iVar4 = _DAT_0802b4cc;
  if (bVar1 == 1) {
LAB_0802b4de:
    iVar4 = uVar6 + iVar4;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar4 = uVar6 + _DAT_0802b4d8;
        goto LAB_0802b4e0;
      }
      iVar4 = _DAT_0802b518;
      if (bVar1 == 3) goto LAB_0802b4de;
    }
    iVar4 = uVar6 + 0x650;
  }
LAB_0802b4e0:
  func_0805E860(piVar5 + 0xb,iVar4);
  *(undefined1 *)(piVar5 + 0x10) = 1;
  *(undefined1 *)((int)piVar5 + 0x42) = 0;
  *(undefined1 *)((int)piVar5 + 0x43) = 1;
  uVar6 = 0;
  if (uVar7 + 1 < 6) {
    uVar6 = uVar7 + 1;
  }
  *(char *)(param_1 + 0xa0) = (char)uVar6;
  return in_lr;
}

// =============================================================================
// Function: func_0802B51C @ 0x0802B51C
// =============================================================================
undefined4 func_0802B51C(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ushort *puVar13;
  int iVar14;
  undefined4 in_lr;
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined4 auStack_74 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 *apuStack_5c [2];
  undefined2 *apuStack_54 [2];
  int *piStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  
  puStack_44 = (undefined4 *)*param_1;
  uVar1 = *(ushort *)(puStack_44 + 1);
  piVar11 = (int *)*puStack_44;
  uStack_40 = (uint)*(byte *)(param_1 + 0x11);
  iVar14 = puStack_44[2];
  iVar6 = puStack_44[3];
  uStack_64 = *param_2;
  uStack_60 = param_2[2];
  piStack_4c = param_1;
  puStack_48 = param_2;
  iVar7 = func_08032900(uVar1,iVar14 >> 0x10,iVar6 >> 0x10);
  puVar5 = puStack_44;
  *(char *)((int)piStack_4c + 0x8b) = (char)iVar7;
  if ((*(char *)(puStack_44 + 0x22) == '\x01') && (*(char *)(puStack_44 + 0x29) != '\0')) {
    iStack_3c = (iVar14 + puStack_44[0x23] >> 0x10) - (int)*(short *)(puStack_48 + 3);
    iVar6 = iVar6 + puStack_44[0x24];
    iVar14 = iVar6 >> 0x10;
    sVar2 = *(short *)((int)puStack_48 + 0xe);
    iStack_38 = 0x8000 - iVar14;
    if (*(char *)((int)puStack_44 + 0x89) == '\x01') {
      uVar9 = func_0x080d3910(piVar11,*(undefined4 *)(*piVar11 + 0x58));
      ScriptEngine_SetVariable(uVar9,puStack_48[2],iStack_3c,iVar14 - sVar2,0);
    }
    piVar10 = piStack_4c;
    iStack_24 = (iVar6 - puVar5[0x27] >> 0x10) - (int)*(short *)((int)puStack_48 + 0xe);
    uVar8 = 2;
    if ((0xf < (int)puVar5[0x27] >> 0x10) && ((8 < uVar1 || (iVar7 == 1)))) {
      uVar8 = 1;
    }
    piVar12 = piStack_4c + 0x23;
    func_0x080d3918(auStack_84,(int *)piStack_4c[0x2d],
                    *(undefined2 *)(piStack_4c[0x2e] + (uint)*(ushort *)(piStack_4c + 0x30) * 4),
                    *(undefined4 *)(*(int *)piStack_4c[0x2d] + 0x10));
    if ((-piStack_4c[0x25] | piStack_4c[0x25]) < 0) {
      iVar6 = func_0x080d391c(uStack_60,iStack_3c,iStack_24,
                              uVar8 << 2 | uVar8 | uVar8 << 4 | uVar8 << 6,iStack_38,auStack_84,
                              *piVar12,(short)piVar10[0x26],piStack_4c + 0x27);
    }
    else {
      iVar6 = 0;
    }
    if ((iVar6 != 0) && ((char)piVar10[0x32] != '\0')) {
      func_080A480C(piVar12,uStack_64,auStack_7c);
      if (*(char *)((int)piVar10 + 0xc9) == '\0') {
        if (*(char *)((int)piVar10 + 0xca) == '\0') {
          func_080A4944(piVar12,auStack_74,1);
          *(char *)((int)piVar10 + 0xca) = '\x01';
        }
      }
      else {
        func_080A4944(piVar12,auStack_74,1);
      }
      *(char *)(piVar10 + 0x32) = '\0';
    }
  }
  uStack_34 = 0;
  puStack_30 = &uStack_64;
  piStack_2c = piStack_4c + 0x39;
  piVar12 = piStack_4c + 0x36;
  piVar10 = piStack_4c + 0x35;
  piStack_28 = piStack_4c + 0x34;
  do {
    sVar2 = *(short *)(puStack_48 + 3);
    sVar3 = *(short *)((int)puStack_48 + 0xe);
    if ((char)*piStack_28 != '\0') {
      iVar6 = piVar12[0xf];
      sVar4 = *(short *)((int)piVar12 + 0x3e);
      func_0x080d3918(auStack_84,(int *)piVar12[9],
                      *(undefined2 *)(piVar12[10] + (uint)*(ushort *)(piVar12 + 0xc) * 4),
                      *(undefined4 *)(*(int *)piVar12[9] + 0x10));
      if ((-piVar12[1] | piVar12[1]) < 0) {
        iVar6 = func_0x080d391c(uStack_60,(int)(short)iVar6 - (int)sVar2,(int)sVar4 - (int)sVar3,
                                0xaa,0x8000,auStack_84,*piVar10,(short)piVar12[2],piStack_2c);
      }
      else {
        iVar6 = 0;
      }
      if ((iVar6 != 0) && ((char)piVar10[0xf] != '\0')) {
        func_080A480C(piVar10,*puStack_30,auStack_7c);
        if (*(char *)((int)piVar10 + 0x3d) == '\0') {
          if (*(char *)((int)piVar10 + 0x3e) == '\0') {
            func_080A4944(piVar10,auStack_74,1);
            *(char *)((int)piVar10 + 0x3e) = '\x01';
          }
        }
        else {
          func_080A4944(piVar10,auStack_74,1);
        }
        *(char *)(piVar10 + 0xf) = '\0';
      }
    }
    piStack_2c = piStack_2c + 0x12;
    piVar12 = piVar12 + 0x12;
    piVar10 = piVar10 + 0x12;
    piStack_28 = piStack_28 + 0x12;
    uStack_34 = uStack_34 + 1;
  } while (uStack_34 < 6);
  func_0x08032690(piStack_4c,puStack_48);
  if ((uStack_40 != 0) || (*(char *)((int)piStack_4c + _DAT_0802b810) != '\0')) {
    uVar8 = func_0x0800e4fc(puStack_44[0xe]);
    if (uVar8 < 0x50) {
      if (*(char *)((int)piStack_4c + _DAT_0802b8e4) != '\0') {
        piVar10 = (int *)func_0x080d3910(piVar11,*(undefined4 *)(*piVar11 + 0x68));
        iVar6 = *piVar10;
        func_0x080d3918(apuStack_5c,piVar10,
                        (uint)*(ushort *)((int)puStack_44 + 0x22) + (uint)*(byte *)(puStack_44 + 8),
                        *(undefined4 *)(iVar6 + 0xc));
        func_0x080d3918(auStack_84,piVar10,*apuStack_5c[0],*(undefined4 *)(iVar6 + 0x10));
        uVar9 = func_0x080d3914(piVar11,0,*(undefined4 *)(*piVar11 + 0x48));
        func_0x080d391c(piVar11,auStack_74[0],uVar9,1);
      }
    }
    else {
      uVar9 = func_0x080d3914(piVar11,0,*(undefined4 *)(*piVar11 + 0x48));
      func_0x080d391c(piVar11,_DAT_0802b814,uVar9,1);
    }
    puVar13 = (ushort *)(puStack_44 + 0x1f);
    if (*puVar13 != _DAT_0802b8e8) {
      piVar10 = (int *)func_0x080d3910(piVar11,*(undefined4 *)(*piVar11 + 100));
      iVar6 = *piVar10;
      func_0x080d3918(apuStack_54,piVar10,*puVar13,*(undefined4 *)(iVar6 + 0xc));
      func_0x080d3918(auStack_84,piVar10,*apuStack_54[0],*(undefined4 *)(iVar6 + 0x10));
      uVar9 = func_0x080d3914(piVar11,2,*(undefined4 *)(*piVar11 + 0x48));
      func_0x080d391c(piVar11,auStack_74[0],uVar9,1);
    }
    *(undefined1 *)((int)piStack_4c + _DAT_0802b8e4) = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802B8EC @ 0x0802B8EC
// =============================================================================
void func_0802B8EC(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(200);
  func_08024974(uVar1,param_1,param_2);
  return;
}

// =============================================================================
// Function: func_0802B908 @ 0x0802B908
// =============================================================================
undefined8 func_0802B908(int param_1,undefined4 param_2,int param_3)

{
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  func_0800E924(auStack_14,param_3 + _DAT_0802b93c);
  Entity_UpdatePositions(param_1,param_2,auStack_14,2,0x192);
  *(undefined4 *)(param_1 + 0x14) = _DAT_0802b940;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0802B944 @ 0x0802B944
// =============================================================================
undefined8 func_0802B944(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  undefined1 auStack_28 [6];
  undefined1 uStack_22;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  
  uVar1 = (ushort)_DAT_0802b9b8;
  uStack_20 = uVar1 & uStack_20 & 0x3ff | 0x234;
  uStack_1e = uVar1 & uStack_1e & 0x3ff;
  uStack_1c = uVar1 & uStack_1c;
  memcpy(auStack_28,&uStack_20,6);
  uStack_22 = 0;
  Entity_UpdatePositions(param_1,param_2,auStack_28,2,0);
  *(undefined4 *)(param_1 + 0x14) = _DAT_0802b9bc;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0802B9C0 @ 0x0802B9C0
// =============================================================================
undefined8 func_0802B9C0(int param_1)

{
  undefined4 in_lr;
  
  func_0802B944();
  *(undefined4 *)(param_1 + 0x14) = _DAT_0802ba0c;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  func_0801FDC0(param_1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0802BA10 @ 0x0802BA10
// =============================================================================
void func_0802BA10(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0xd0);
  func_0802BF2C(uVar1,param_1);
  return;
}

// =============================================================================
// Function: func_0802BA28 @ 0x0802BA28
// =============================================================================
undefined4 func_0802BA28(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(char *)(param_1 + 0x54) != '\0') {
      func_0802BA74(param_1);
      sVar1 = func_0802BC48(param_1);
      if (*(short *)(param_1 + 0x22) != sVar1) {
        func_080321B0(param_1);
      }
    }
  }
  else {
    *(char *)(param_1 + 0x58) = '\0';
  }
  func_0803242C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0802BAE4 @ 0x0802BAE4
// =============================================================================
undefined4 func_0802BAE4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *unaff_r7;
  undefined1 *unaff_r10;
  int in_lr;
  undefined4 in_stack_00000010;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  (*(code *)(in_lr + 0xffe))();
  *(undefined4 *)(unaff_r10 + 0x14) = 0;
  *(undefined4 *)(unaff_r10 + 0x18) = 0;
  if (*(short *)(unaff_r7 + 9) == 0) {
    *(undefined1 *)(unaff_r7 + 0xd) = 0;
    uVar7 = (uint)*(short *)((int)unaff_r7 + 10);
    uVar6 = (uint)*(short *)((int)unaff_r7 + 0xe);
    bVar1 = *(byte *)(unaff_r7 + 8);
    if (bVar1 == 1) {
      uVar6 = uVar6 - 0x14;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar6 = uVar6 + 0x14;
      }
    }
    else if (bVar1 == 2) {
      uVar7 = uVar7 - 0x14;
    }
    else if (bVar1 == 3) {
      uVar7 = uVar7 + 0x14;
    }
    uVar4 = (ushort)_DAT_0802bbc8;
    uVar3 = (ushort)_DAT_0802bbcc;
    uVar2 = uVar3 & (ushort)uStack_14 | *(ushort *)(unaff_r7 + 1) & uVar4;
    uStack_14._1_1_ = (byte)(uVar2 >> 8);
    uStack_14._0_2_ = CONCAT11(uStack_14._1_1_ & 3 | (byte)((uVar7 & 0x3f) << 2),(char)uVar2);
    uVar2 = uVar3 & uStack_14._2_2_ | (ushort)((uVar7 & 0xffff) >> 6) & uVar4;
    uStack_14 = CONCAT22(uVar2,(ushort)uStack_14);
    uVar5 = uStack_14;
    uStack_14._3_1_ = (byte)(uVar2 >> 8);
    uStack_14 = CONCAT13(uStack_14._3_1_ & 3 | (byte)((uVar6 & 0x3f) << 2),(int3)uVar5);
    uStack_10 = CONCAT22(uStack_10._2_2_,
                         uVar3 & (ushort)uStack_10 | (ushort)((uVar6 & 0xffff) >> 6) & uVar4);
    func_0x080d3918((int *)*unaff_r7,&uStack_14,*(undefined2 *)((int)unaff_r7 + 0x56),
                    *(undefined4 *)(*(int *)*unaff_r7 + 0xbc));
    *unaff_r10 = 0;
    *(undefined1 *)((int)unaff_r7 + 0x59) = 0;
  }
  return in_stack_00000010;
}

// =============================================================================
// Function: func_0802BC48 @ 0x0802BC48
// =============================================================================
undefined8 func_0802BC48(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)auStack_4;
  uVar1 = 0x192;
  if (*(byte *)(param_1 + 0x34) < 5) {
    switch(*(uint *)(PTR_case_0802BC68_0802bc64 + (uint)*(byte *)(param_1 + 0x34) * 4) & 0xfffffffe)
    {
    case 0x802bc68:
      puVar2 = (undefined4 *)&stack0x0000004c;
      param_1 = 0;
    case 0x802bc7c:
      uVar1 = 0x152;
      if (*(char *)(param_1 + 0x59) == '\0') {
        uVar1 = 0x192;
      }
      break;
    case 0x802bc8e:
      uVar1 = 0x19e;
      break;
    case 0x802bc94:
      uVar1 = 0x146;
      break;
    case 0x802bc9a:
      uVar1 = 0x42;
    }
  }
  return CONCAT44(*puVar2,uVar1);
}

// =============================================================================
// Function: func_0802BCA4 @ 0x0802BCA4
// =============================================================================
undefined4 func_0802BCA4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3c) = _DAT_0802bd4c;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x110000;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar3 != (undefined4 *)0x0) {
    func_0x0800db2c(auStack_1c,param_2);
    uVar1 = func_0800DB60(auStack_1c);
    uVar2 = func_0x080d3910(*(int **)*puVar3,*(undefined4 *)(**(int **)*puVar3 + 100));
    func_0805E850(puVar3 + 0x2d,uVar2,uVar1);
    *(undefined1 *)(puVar3 + 0x32) = 1;
    *(undefined1 *)((int)puVar3 + 0xca) = 0;
    *(undefined1 *)((int)puVar3 + 0xcb) = 1;
    *(undefined2 *)(puVar3 + 0x33) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x34) = 4;
  *(undefined1 *)(param_1 + 0x35) = 0x14;
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar1 = func_0802BC48(param_1);
  func_080321B0(param_1,uVar1);
  *(undefined1 *)(param_1 + 0x54) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802BD50 @ 0x0802BD50
// =============================================================================
undefined4 func_0802BD50(int param_1,undefined2 param_2,char param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x56) = param_2;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x150000;
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4 != (undefined4 *)0x0) {
    if (param_3 == '\0') {
      uVar3 = func_0x080d3910(*(int **)*puVar4,*(undefined4 *)(**(int **)*puVar4 + 100));
    }
    else {
      uVar3 = func_0x080d3910(*(int **)*puVar4,*(undefined4 *)(**(int **)*puVar4 + 0x68));
    }
    func_0805E850(puVar4 + 0x2d,uVar3,param_2);
    *(undefined1 *)(puVar4 + 0x32) = 1;
    *(undefined1 *)((int)puVar4 + 0xca) = 0;
    *(undefined1 *)((int)puVar4 + 0xcb) = 1;
  }
  *(undefined1 *)(param_1 + 0x34) = 3;
  uVar3 = _DAT_0802be24;
  bVar1 = *(byte *)(param_1 + 0x20);
  if (bVar1 == 1) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
LAB_0802be36:
    *(undefined4 *)(param_1 + 0x40) = uVar3;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0802be3a;
      uVar3 = 0xa0000;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto LAB_0802be36;
    }
    if (bVar1 == 2) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_0802be00;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_0802be3a;
      *(undefined4 *)(param_1 + 0x3c) = 0xa0000;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0xc0000;
LAB_0802be3a:
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar2 = func_0802BC48(param_1);
  func_080321B0(param_1,uVar2);
  *(undefined1 *)(param_1 + 0x54) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802BE68 @ 0x0802BE68
// =============================================================================
undefined4 func_0802BE68(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  uVar3 = _DAT_0802bebc;
  if (bVar1 == 1) {
LAB_0802bec6:
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar3;
  }
  else {
    if (bVar1 < 2) {
      uVar3 = _DAT_0802bef8;
      if (bVar1 != 0) goto LAB_0802becc;
      goto LAB_0802bec6;
    }
    if (bVar1 == 2) {
      *(undefined4 *)(param_1 + 0x44) = _DAT_0802be98;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_0802becc;
      *(undefined4 *)(param_1 + 0x44) = _DAT_0802beac;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
LAB_0802becc:
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar2 = func_0802BC48(param_1);
  func_080321B0(param_1,uVar2);
  *(undefined1 *)(param_1 + 0x54) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802BEFC @ 0x0802BEFC
// =============================================================================
undefined4 func_0802BEFC(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x34) = 2;
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar1 = func_0802BC48(param_1);
  func_080321B0(param_1,uVar1);
  *(undefined1 *)(param_1 + 0x54) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802BFA0 @ 0x0802BFA0
// =============================================================================
undefined4 func_0802BFA0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  func_0803260C();
  if (*(char *)(*param_1 + 0x38) == '\x01') {
    piVar3 = (int *)((int)param_1 + 0xcb);
    if (*(char *)piVar3 == '\0') {
      iVar2 = func_0805E8F0(param_1 + 0x2d);
      if (-1 < iVar2 * 0x40000000) {
        return in_lr;
      }
      piVar3 = param_1 + 0x32;
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    *(char *)piVar3 = cVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802BFE4 @ 0x0802BFE4
// =============================================================================
undefined4 func_0802BFE4(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 in_lr;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined4 auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 *apuStack_50 [2];
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  char *pcStack_28;
  int iStack_24;
  
  puVar6 = (undefined4 *)*param_1;
  uStack_48 = (uint)*(ushort *)(puVar6 + 1);
  piVar5 = (int *)*puVar6;
  uStack_44 = (uint)*(byte *)(param_1 + 0x11);
  iStack_24 = puVar6[2];
  iStack_40 = puVar6[3];
  uStack_58 = *param_2;
  uStack_54 = param_2[2];
  iStack_3c = func_08032900(uStack_48,iStack_24 >> 0x10,iStack_40 >> 0x10);
  *(undefined1 *)((int)param_1 + 0x8b) = (undefined1)iStack_3c;
  if (*(char *)(puVar6 + 0xe) == '\x01') {
    iStack_38 = (iStack_24 + puVar6[0xf] >> 0x10) - (int)*(short *)(param_2 + 3);
    iVar7 = iStack_40 + puVar6[0x10];
    iVar9 = iVar7 >> 0x10;
    sVar1 = *(short *)((int)param_2 + 0xe);
    iStack_34 = 0x8000 - iVar9;
    if (*(char *)((int)puVar6 + 0x39) == '\x01') {
      uVar4 = func_0x080d3910(piVar5,*(undefined4 *)(*piVar5 + 0x58));
      ScriptEngine_SetVariable(uVar4,param_2[2],iStack_38,iVar9 - sVar1,0);
    }
    iStack_30 = (iVar7 - puVar6[0x13] >> 0x10) - (int)*(short *)((int)param_2 + 0xe);
    if ((int)uStack_48 < 9) {
      uVar2 = 1;
      if (iStack_3c != 1) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
    puVar8 = param_1 + 0x23;
    puStack_2c = &uStack_58;
    func_0x080d3918(auStack_78,(int *)param_1[0x2d],
                    *(undefined2 *)(param_1[0x2e] + (uint)*(ushort *)(param_1 + 0x30) * 4),
                    *(undefined4 *)(*(int *)param_1[0x2d] + 0x10));
    if ((int)(-param_1[0x25] | param_1[0x25]) < 0) {
      iVar9 = func_0x080d391c(puStack_2c[1],iStack_38,iStack_30,
                              uVar2 << 2 | uVar2 | uVar2 << 4 | uVar2 << 6,iStack_34,auStack_78,
                              *puVar8,*(undefined2 *)(param_1 + 0x26),param_1 + 0x27);
    }
    else {
      iVar9 = 0;
    }
    if ((iVar9 != 0) && (pcStack_28 = (char *)(param_1 + 0x32), *pcStack_28 != '\0')) {
      func_080A480C(puVar8,*puStack_2c,auStack_70);
      if (*(char *)((int)param_1 + 0xc9) == '\0') {
        if (*(char *)((int)param_1 + 0xca) == '\0') {
          func_080A4944(puVar8,auStack_68,1);
          *(char *)((int)param_1 + 0xca) = '\x01';
        }
      }
      else {
        func_080A4944(puVar8,auStack_68,1);
      }
      *pcStack_28 = '\0';
    }
  }
  func_0x08032690(param_1,param_2);
  if (((uStack_44 != 0) && (*(char *)(puVar6 + 0xe) != '\x01')) &&
     (*(ushort *)(param_1 + 0x33) != _DAT_0802c20c)) {
    piVar3 = (int *)func_0x080d3910(piVar5,*(undefined4 *)(*piVar5 + 100));
    iVar9 = *piVar3;
    func_0x080d3918(apuStack_50,piVar3,*(ushort *)(param_1 + 0x33),*(undefined4 *)(iVar9 + 0xc));
    func_0x080d3918(auStack_78,piVar3,*apuStack_50[0],*(undefined4 *)(iVar9 + 0x10));
    uVar4 = func_0x080d3914(piVar5,2,*(undefined4 *)(*piVar5 + 0x48));
    func_0x080d391c(piVar5,auStack_68[0],uVar4,1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802C210 @ 0x0802C210
// =============================================================================
void func_0802C210(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x5c);
  func_0802B9C0(uVar1,param_1);
  return;
}

// =============================================================================
// Function: func_0802C228 @ 0x0802C228
// =============================================================================
undefined4 func_0802C228(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(*(int **)*param_1,*(undefined4 *)(**(int **)*param_1 + 100));
  func_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined1 *)((int)param_1 + 0xcb) = 1;
  *(short *)(param_1 + 0x33) = (short)param_2;
  return in_lr;
}

// =============================================================================
// Function: func_0802C264 @ 0x0802C264
// =============================================================================
undefined4 func_0802C264(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(*(int **)*param_1,*(undefined4 *)(**(int **)*param_1 + 0x68));
  func_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined1 *)((int)param_1 + 0xcb) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802C29C @ 0x0802C29C
// =============================================================================
undefined4 func_0802C29C(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(*(int **)*param_1,*(undefined4 *)(**(int **)*param_1 + 100));
  func_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined1 *)((int)param_1 + 0xcb) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0802C2E0 @ 0x0802C2E0
// =============================================================================
undefined4
func_0802C2E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *unaff_r4;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *unaff_r6;
  undefined4 *unaff_r8;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xf) = 9;
  puVar2 = PTR_case_0802C30C_0802c308;
  iVar9 = 0;
  if (0xd < *(byte *)((int)param_1 + 0x3f)) goto LAB_0802c840;
  switch(*(uint *)(PTR_case_0802C30C_0802c308 + (uint)*(byte *)((int)param_1 + 0x3f) * 4) &
         0xfffffffe) {
  case 0x802c30c:
    *param_4 = param_3;
    param_4[1] = param_4;
    param_4[2] = unaff_r4;
    param_4[3] = 0;
    param_4[4] = unaff_r8;
    *param_4 = 0;
    param_4[1] = param_4;
    param_4[2] = unaff_r4;
    param_4[3] = 0;
    param_4[4] = unaff_r8;
    *unaff_r4 = unaff_r6;
    puVar7 = unaff_r4 + 1;
    *param_4 = 0;
    param_4[1] = param_4;
    param_4[2] = puVar7;
    param_4[3] = 0;
    param_4[4] = unaff_r8;
    *param_4 = 0;
    param_4[1] = param_4;
    param_4[2] = puVar7;
    param_4[3] = 0;
    param_4[4] = unaff_r8;
    *param_4 = 0;
    param_4[1] = unaff_r6;
    *puVar7 = 0;
    unaff_r4[2] = 0;
    unaff_r4[3] = unaff_r6;
    unaff_r4[4] = unaff_r8;
    puVar7 = unaff_r4 + 5;
    _Reset = 0;
    _PrefetchAbort = puVar2;
    _DataAbort = 0;
    _IRQ = 0xc;
    _UndefinedInstruction = puVar7;
    _SupervisorCall = unaff_r6;
    _NotUsed = param_4 + 2;
    _FIQ = unaff_r6;
    _UNK_00000020 = unaff_r8;
    *unaff_r6 = puVar2;
    unaff_r6[1] = unaff_r8;
    puVar10 = unaff_r6 + 2;
    *puVar10 = 0;
    unaff_r6[3] = puVar7;
    unaff_r6[4] = puVar10;
    unaff_r6[5] = unaff_r8;
    *unaff_r8 = puVar2;
    unaff_r8[1] = param_4 + 2;
    unaff_r8[2] = 0xc;
    unaff_r8[3] = puVar10;
    unaff_r8[4] = puVar7;
    unaff_r8[5] = 0xc;
    unaff_r8[6] = unaff_r8 + 4;
  case 0x802c344:
    func_0802A4C0(param_1,0xa2,1);
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x27] = 0x100000;
    uVar3 = _DAT_0802c434;
    uVar6 = _DAT_0802c3a8;
    bVar1 = *(byte *)(param_1 + 8);
    if (bVar1 == 1) {
      param_1[0x25] = 0;
LAB_0802c3b8:
      param_1[0x26] = uVar6;
LAB_0802c3ba:
      param_1[0x28] = 0x28000;
    }
    else {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          param_1[0x25] = _DAT_0802c388;
          param_1[0x26] = 0;
        }
        else {
          if (bVar1 != 3) goto case_0802C3BC;
          param_1[0x25] = _DAT_0802c398;
          param_1[0x26] = 0;
        }
        goto LAB_0802c3ba;
      }
      if (bVar1 == 0) {
        param_1[0x25] = 0;
        uVar6 = uVar3;
        goto LAB_0802c3b8;
      }
    }
case_0802C3BC:
    *(undefined2 *)(param_1 + 0x11) =
         *(undefined2 *)
          (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 8 +
          _DAT_0802c438);
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c40c;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c40c:
    iVar9 = _DAT_0802c438;
    func_08008B6C(uVar6,*(undefined2 *)
                         (((uint)*(byte *)((int)param_1 + 0x3f) * 7 +
                          (uint)*(byte *)(param_1 + 0x10)) * 8 + _DAT_0802c438 + 2));
    cVar4 = func_08025944(param_1);
joined_r0x0802c4b2:
    if (cVar4 == '\0') {
      iVar9 = (int)*(char *)(((uint)*(byte *)((int)param_1 + 0x3f) * 7 +
                             (uint)*(byte *)(param_1 + 0x10)) * 8 + iVar9 + 4);
    }
    else {
      iVar9 = (int)*(char *)(((uint)*(byte *)((int)param_1 + 0x3f) * 7 +
                             (uint)*(byte *)(param_1 + 0x10)) * 8 + iVar9 + 5);
    }
    goto LAB_0802c840;
  case 0x802c3bc:
    goto case_0802C3BC;
  case 0x802c440:
    *(undefined2 *)(param_1 + 0x11) =
         *(undefined2 *)
          (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 8 +
          _DAT_0802c4c8);
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c490;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c490:
    iVar9 = _DAT_0802c4c8;
    func_08008B6C(uVar6,*(undefined2 *)
                         (((uint)*(byte *)((int)param_1 + 0x3f) * 7 +
                          (uint)*(byte *)(param_1 + 0x10)) * 8 + _DAT_0802c4c8 + 2));
    cVar4 = func_08025944(param_1);
    goto joined_r0x0802c4b2;
  case 0x802c4e4:
    *(undefined2 *)(param_1 + 0x11) = 0x1ae;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c522;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c522:
    func_08008B6C(uVar6,0x9d);
    puVar7 = _DAT_0802c54c;
    break;
  case 0x802c554:
    *(undefined2 *)(param_1 + 0x11) = 0x1be;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c592;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c592:
    func_08008B6C(uVar6,0x9d);
    puVar7 = _DAT_0802c59c;
    break;
  case 0x802c5a4:
    *(undefined2 *)(param_1 + 0x11) = 0x1ba;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c5de;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c5de:
    func_08008B6C(uVar6,0x94);
    goto LAB_0802c5e4;
  case 0x802c5ee:
    *(undefined2 *)(param_1 + 0x11) = 0x1aa;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c62c;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c62c:
    func_08008B6C(uVar6,0x93);
    func_0802AC2C(param_1,*_DAT_0802c664,_DAT_0802c664[1]);
    if (*(byte *)((int)param_1 + 0xb2) - 0x2b < 0x1b) {
      iVar9 = func_0x080d3914((int *)*param_1,(uint)*(byte *)((int)param_1 + 0xb2),
                              *(undefined4 *)(*(int *)*param_1 + 0x40));
    }
    else {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      func_0x080d3914(iVar9,0x3c,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x88));
    }
LAB_0802c5e4:
    iVar9 = -2;
    goto LAB_0802c840;
  case 0x802c682:
    *(undefined2 *)(param_1 + 0x11) = 0x1b6;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c6c0;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c6c0:
    func_08008B6C(uVar6,0x9f);
    puVar7 = _DAT_0802c6cc;
    break;
  case 0x802c6d4:
    *(undefined2 *)(param_1 + 0x11) = 0x1b2;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c712;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c712:
    func_08008B6C(uVar6,0xa0);
    func_0802AC2C(param_1,*_DAT_0802c748,_DAT_0802c748[1]);
    if (*(byte *)((int)param_1 + 0xb2) - 0x2b < 0x1b) {
      iVar9 = func_0x080d3914((int *)*param_1,(uint)*(byte *)((int)param_1 + 0xb2),
                              *(undefined4 *)(*(int *)*param_1 + 0x40));
    }
    else {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      func_0x080d3914(iVar9,0x3c,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x88));
    }
    iVar9 = -8;
    goto LAB_0802c840;
  case 0x802c76a:
    *(undefined2 *)(param_1 + 0x11) = 0x1a6;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c7a4;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c7a4:
    func_08008B6C(uVar6,0x9e);
    goto LAB_0802c83c;
  case 0x802c7b0:
    *(undefined2 *)(param_1 + 0x11) = 0x1a2;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar10 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      cVar4 = func_0x08008cd0(*puVar7);
      if (cVar4 == '\0') {
        uVar6 = *puVar7;
        goto LAB_0802c7ee;
      }
    }
    uVar6 = puVar10[-1];
LAB_0802c7ee:
    func_08008B6C(uVar6,0x9d);
    func_0802AC2C(param_1,*_DAT_0802c824,_DAT_0802c824[1]);
    bVar1 = *(byte *)((int)param_1 + 0xb2);
    goto joined_r0x0802c80a;
  }
  func_0802AC2C(param_1,*puVar7,puVar7[1]);
  bVar1 = *(byte *)((int)param_1 + 0xb2);
joined_r0x0802c80a:
  if (bVar1 - 0x2b < 0x1b) {
    iVar9 = func_0x080d3914((int *)*param_1,(uint)bVar1,*(undefined4 *)(*(int *)*param_1 + 0x40));
  }
  else {
    iVar9 = 0;
  }
  if (iVar9 != 0) {
    func_0x080d3914(iVar9,0x3c,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x88));
  }
LAB_0802c83c:
  iVar9 = -4;
LAB_0802c840:
  iVar8 = param_1[5];
  uVar6 = func_08025B10(param_1);
  func_0x080d3918(param_1,iVar9,uVar6,*(undefined4 *)(iVar8 + 100));
  return in_lr;
}

// =============================================================================
// Function: func_0802C860 @ 0x0802C860
// =============================================================================
undefined4 func_0802C860(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  *(undefined1 *)(param_1 + 0xf) = 10;
  *(undefined1 *)((int)param_1 + 0x3d) = 0x14;
  func_0802A510(param_1);
  piVar2 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar4 = (undefined4 *)*piVar2;
  puVar6 = (undefined4 *)piVar2[1];
  do {
    if (puVar4 == puVar6) {
      uVar3 = puVar6[-1];
LAB_0802c8a8:
      func_08008B6C(uVar3,0xbc);
      iVar5 = param_1[0xe];
      uVar3 = func_0800DC10(iVar5 + 0x5c);
      auStack_14[0] = func_0800E550(iVar5,uVar3);
      iVar5 = func_0x0800db30(auStack_14);
      if (iVar5 == 0x4d) {
        iVar5 = param_1[5];
        uVar3 = func_08025B10(param_1);
        func_0x080d3918(param_1,0xfffffffe,uVar3,*(undefined4 *)(iVar5 + 100));
      }
      else {
        iVar5 = param_1[5];
        uVar3 = func_08025B10(param_1);
        func_0x080d3918(param_1,0,uVar3,*(undefined4 *)(iVar5 + 100));
      }
      return in_lr;
    }
    cVar1 = func_0x08008cd0(*puVar4);
    if (cVar1 == '\0') {
      uVar3 = *puVar4;
      goto LAB_0802c8a8;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

// =============================================================================
// Function: func_0802C908 @ 0x0802C908
// =============================================================================
undefined4 func_0802C908(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 in_lr;
  
  if ((*(byte *)((int)param_1 + 0x41) != 0) &&
     (pbVar6 = (byte *)(param_1 + 0x10),
     (int)(uint)*pbVar6 < (int)(*(byte *)((int)param_1 + 0x41) - 1))) {
    pcVar5 = (char *)((int)param_1 + 0x42);
    cVar2 = *pcVar5;
    *pcVar5 = cVar2 + '\x01';
    if ((char)(cVar2 + '\x01') == '\x14') {
      *pcVar5 = '\0';
      bVar1 = *pbVar6;
      *pbVar6 = bVar1 + 1;
      if ((byte)(bVar1 + 1) == 5) {
        piVar3 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
        puVar8 = (undefined4 *)piVar3[1];
        for (puVar7 = (undefined4 *)*piVar3; puVar7 != puVar8; puVar7 = puVar7 + 1) {
          cVar2 = func_0x08008cd0(*puVar7);
          if (cVar2 == '\0') {
            uVar4 = *puVar7;
            goto LAB_0802c978;
          }
        }
        uVar4 = puVar8[-1];
LAB_0802c978:
        func_08008B6C(uVar4,0xb8);
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802C984 @ 0x0802C984
// =============================================================================
undefined4 func_0802C984(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 in_lr;
  int iStack_24;
  int iStack_20;
  ushort uStack_1c;
  ushort uStack_1a;
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  cVar2 = func_0800DC34(param_1[0xe] + 0x5c);
  if (cVar2 == '\0') {
    iVar8 = param_1[0xe];
    uVar4 = func_0800DC10(iVar8 + 0x5c);
    uStack_18 = func_0800E550(iVar8,uVar4);
    uVar5 = func_0x0800db30();
    if (uVar5 < 0x51) {
      switch(*(uint *)(PTR_case_0802C9DC_0802c9d8 + uVar5 * 4) & 0xfffffffe) {
      case 0x802c9dc:
        param_1 = *(undefined4 **)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)
                                                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(
                                                  int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *
                                                  )(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(
                                                  int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *
                                                  )(*(int *)**(undefined4 **)
                                                              **(undefined4 **)
                                                                **(undefined4 **)
                                                                  (**(int **)**(undefined4 **)
                                                                               **(undefined4 **)
                                                                                 **(undefined4 **)
                                                                                   (param_4 + 0x20)
                                                                  + 0x40) + 4) + 8) + 8) + 8) + 8) +
                                                  8) + 8) + 8) + 8) + 0x18) + 4) + 4) + 4) + 4) + 4)
                                                  + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4)
                                                  + 4) + 4) + 4) + 4) + 8) + 0x20) + 0x10);
      case 0x802cb20:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 0;
        break;
      case 0x802cb28:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 3;
        break;
      case 0x802cb30:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 1;
        break;
      case 0x802cb38:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 4;
        break;
      case 0x802cb40:
        iVar10 = (int)*(short *)((int)param_1 + 10);
        iVar8 = (int)*(short *)((int)param_1 + 0xe);
        bVar1 = *(byte *)(param_1 + 8);
        if (bVar1 == 1) {
          iVar8 = iVar8 + -0x10;
        }
        else if (bVar1 < 2) {
          if (bVar1 == 0) {
            iVar8 = iVar8 + 0x10;
          }
        }
        else if (bVar1 == 2) {
          iVar10 = iVar10 + -0x10;
        }
        else if (bVar1 == 3) {
          iVar10 = iVar10 + 0x10;
        }
        piVar12 = (int *)*param_1;
        func_0x080d3918(&iStack_24,piVar12,*(undefined2 *)(param_1 + 1),
                        *(undefined4 *)(*piVar12 + 0x34));
        if (((iStack_24 == 0) || ((uint)uStack_1c < (uint)(iVar10 >> 3))) ||
           ((uint)uStack_1a < (uint)(iVar8 >> 3))) {
          piVar6 = (int *)0x0;
        }
        else {
          uVar5 = (iVar8 >> 3) * (uint)uStack_1c + (iVar10 >> 3);
          if (iStack_20 != 0) {
            uVar5 = (uint)*(byte *)(iStack_20 + uVar5);
          }
          piVar6 = (int *)(iStack_24 + uVar5 * 4);
        }
        if ((piVar6 != (int *)0x0) && (*piVar6 * 0x40000000 < 0)) {
          *(undefined1 *)(param_1 + 0xf) = 0x1b;
          *(undefined1 *)((int)param_1 + 0x3f) = 0xf;
          iVar8 = param_1[5];
          uVar4 = func_08025B10(param_1);
          func_0x080d3918(param_1,0xfffffffe,uVar4,*(undefined4 *)(iVar8 + 100));
          piVar12 = (int *)func_0x080d3910(piVar12,*(undefined4 *)(*piVar12 + 0x14c));
          puVar9 = (undefined4 *)*piVar12;
          puVar11 = (undefined4 *)piVar12[1];
          do {
            if (puVar9 == puVar11) {
              uVar4 = puVar11[-1];
LAB_0802cc18:
              func_08008B6C(uVar4,0x92);
              return in_lr;
            }
            cVar2 = func_0x08008cd0(*puVar9);
            if (cVar2 == '\0') {
              uVar4 = *puVar9;
              goto LAB_0802cc18;
            }
            puVar9 = puVar9 + 1;
          } while( true );
        }
        iVar8 = func_0x0800e94c(param_1[0xe]);
        if (iVar8 == 0) {
          puVar7 = (undefined1 *)((int)param_1 + 0x3f);
          uVar3 = 0xf;
          goto LAB_0802cdc2;
        }
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 2;
        break;
      case 0x802cc3a:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 5;
        break;
      case 0x802cc42:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 6;
        break;
      case 0x802cc4a:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 7;
        break;
      case 0x802cc52:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 8;
        break;
      case 0x802cc5a:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 9;
        break;
      case 0x802cc62:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 10;
        break;
      case 0x802cc6a:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 0xb;
        break;
      case 0x802cc72:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 0xc;
        break;
      case 0x802cc7a:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 0xd;
        break;
      case 0x802cc82:
        puVar7 = (undefined1 *)((int)param_1 + 0x3f);
        uVar3 = 0xe;
      }
    }
    else {
      puVar7 = (undefined1 *)((int)param_1 + 0x3f);
      uVar3 = 0xf;
    }
    *puVar7 = uVar3;
    iVar8 = param_1[0xe];
    uVar4 = func_0800DC10(iVar8 + 0x5c);
    uStack_17 = func_0800E550(iVar8,uVar4);
    uVar5 = func_0x0800db30();
    if (uVar5 < 0x30) {
      switch(*(uint *)(PTR_case_0802CCC4_0802ccc0 + uVar5 * 4) & 0xfffffffe) {
      case 0x802ccc4:
      case 0x802cd84:
        puVar7 = (undefined1 *)((int)param_1 + 0x41);
        uVar3 = 1;
        break;
      case 0x802cd8c:
        puVar7 = (undefined1 *)((int)param_1 + 0x41);
        uVar3 = 2;
        break;
      case 0x802cd94:
        puVar7 = (undefined1 *)((int)param_1 + 0x41);
        uVar3 = 3;
        break;
      case 0x802cd9c:
        puVar7 = (undefined1 *)((int)param_1 + 0x41);
        uVar3 = 4;
        break;
      case 0x802cda4:
        puVar7 = (undefined1 *)((int)param_1 + 0x41);
        uVar3 = 5;
        break;
      case 0x802cdac:
        puVar7 = (undefined1 *)((int)param_1 + 0x41);
        uVar3 = 6;
        break;
      case 0x802cdb4:
        puVar7 = (undefined1 *)((int)param_1 + 0x41);
        uVar3 = 7;
      }
    }
    else {
      puVar7 = (undefined1 *)((int)param_1 + 0x41);
      uVar3 = 0;
    }
  }
  else {
    puVar7 = (undefined1 *)((int)param_1 + 0x3f);
    uVar3 = 0xf;
  }
LAB_0802cdc2:
  *puVar7 = uVar3;
  return in_lr;
}

// =============================================================================
// Function: func_0802CDCC @ 0x0802CDCC
// =============================================================================
undefined4 func_0802CDCC(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  int *piStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  cVar3 = *(char *)((int)param_1 + 0xb3);
  if (cVar3 == '\0') {
    if (*(char *)(param_1 + 0x2d) != '\0') {
      cVar3 = *(char *)(param_1 + 0x2d) + -1;
LAB_0802ce2e:
      *(char *)(param_1 + 0x2d) = cVar3;
    }
  }
  else {
    cVar3 = cVar3 + -1;
    *(char *)((int)param_1 + 0xb3) = cVar3;
    if (cVar3 == '\0') {
      uVar7 = 0x2b;
      do {
        iVar4 = func_0x080d3914((int *)*param_1,uVar7,*(undefined4 *)(*(int *)*param_1 + 0x40));
        if (iVar4 != 0) {
          func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x40));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x46);
    }
    else if (*(byte *)(param_1 + 0x2d) < 0x5a) {
      cVar3 = *(byte *)(param_1 + 0x2d) + 1;
      goto LAB_0802ce2e;
    }
  }
  piStack_4c = (int *)*param_1;
  uStack_48 = (uint)*(ushort *)(param_1 + 1);
  if ((((param_1[6] != 0) || (param_1[7] != 0)) && (*(char *)(param_1 + 0xf) != ',')) &&
     (*(char *)(param_1 + 0xf) != '5')) {
    func_0x080d3914(&uStack_94,param_1,*(undefined4 *)(param_1[5] + 0xc));
    uStack_8c = uStack_94;
    uStack_88 = uStack_90;
    uVar7 = func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x40));
    uStack_44 = (uVar7 ^ 1) & 0xff;
    uStack_40 = (uint)*(byte *)(param_1 + 8);
    uStack_3c = (uint)*(byte *)(param_1 + 0x2d);
    uStack_84 = CONCAT22(*(short *)((int)param_1 + 0x1e) + uStack_8c._2_2_,
                         *(short *)((int)param_1 + 0x1a) + (short)uStack_8c);
    uStack_80 = CONCAT22(*(short *)((int)param_1 + 0x1e) + uStack_88._2_2_,
                         *(short *)((int)param_1 + 0x1a) + (short)uStack_88);
    uStack_7c = uStack_84;
    uStack_78 = uStack_80;
    if (*(char *)((int)param_1 + 0x3e) == '\x02') {
      uStack_38 = 0x15;
      iStack_34 = _DAT_0802d010;
    }
    else {
      uStack_38 = 0x3c;
      iStack_34 = _DAT_0802cee4;
    }
    uStack_30 = 0;
    if (uStack_38 != 0) {
      do {
        iStack_2c = *(int *)(uStack_30 * 4 + iStack_34);
        iStack_28 = func_0x080d3914(piStack_4c,iStack_2c,*(undefined4 *)(*piStack_4c + 0x40));
        if ((iStack_28 != 0) && (*(ushort *)(iStack_28 + 4) == uStack_48)) {
          func_0x080d3914(&uStack_74,iStack_28,*(undefined4 *)(*(int *)(iStack_28 + 0x14) + 0xc));
          uStack_6c = uStack_74;
          uVar1 = uStack_6c;
          uStack_68 = uStack_70;
          uVar2 = uStack_68;
          uStack_6c._0_2_ = (short)uStack_74;
          iVar4 = (int)(short)uStack_6c;
          uStack_68._0_2_ = (short)uStack_70;
          iVar8 = (int)(short)uStack_68;
          uStack_6c._2_2_ = (short)((uint)uStack_74 >> 0x10);
          iStack_24 = (int)uStack_6c._2_2_;
          uStack_68._2_2_ = (short)((uint)uStack_70 >> 0x10);
          iVar6 = (int)uStack_68._2_2_;
          uStack_6c = uVar1;
          uStack_68 = uVar2;
          if (-1 < (iVar4 - (short)uStack_88 & (short)uStack_8c - iVar8 &
                    iStack_24 - uStack_88._2_2_ & uStack_8c._2_2_ - iVar6)) {
            if ((iVar4 - (short)uStack_78 & (short)uStack_7c - iVar8 & iStack_24 - uStack_78._2_2_ &
                uStack_7c._2_2_ - iVar6) < 0) {
              param_1[6] = 0;
              param_1[7] = 0;
              if ((uStack_44 != 0) && (iStack_2c - 0x2bU < 0x1b)) {
                func_0x080d3918(iStack_28,uStack_40,uStack_3c,
                                *(undefined4 *)(*(int *)(iStack_28 + 0x14) + 0x84));
                *(undefined1 *)((int)param_1 + 0xb3) = 8;
              }
            }
          }
        }
        uStack_30 = uStack_30 + 1;
      } while (uStack_30 < uStack_38);
    }
  }
  if ((param_1[6] == 0) && (param_1[7] == 0)) {
    return in_lr;
  }
  iVar8 = param_1[2];
  iVar9 = param_1[3];
  iVar4 = param_1[6] + iVar8;
  iVar6 = param_1[7] + iVar9;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else {
    iVar5 = func_0x080d3914(piStack_4c,uStack_48,*(undefined4 *)(*piStack_4c + 0x2c));
    if (iVar5 * 0x10000 < iVar4) {
      iVar4 = iVar5 * 0x10000;
    }
  }
  if (iVar6 < 0) {
    iVar5 = 0;
LAB_0802d048:
    iVar6 = iVar5;
  }
  else {
    iVar5 = func_0x080d3914(piStack_4c,uStack_48,*(undefined4 *)(*piStack_4c + 0x30));
    iVar5 = iVar5 * 0x10000;
    if (iVar5 < iVar6) goto LAB_0802d048;
  }
  if (1 < (byte)(*(char *)(param_1 + 0xf) - 0x2cU)) {
    func_0x080d3918(auStack_a0,piStack_4c,uStack_48,*(undefined4 *)(*piStack_4c + 0x34));
    func_0x080d3914(&uStack_64,param_1,*(undefined4 *)(param_1[5] + 0xc));
    uStack_5c = uStack_64;
    uStack_58 = uStack_60;
    cVar3 = func_080AC070(auStack_a0,&uStack_5c);
    if (cVar3 != '\0') {
      param_1[2] = iVar4;
      param_1[3] = iVar6;
      goto LAB_0802d122;
    }
    iVar8 = (iVar4 >> 0x10) - (iVar8 >> 0x10);
    iVar9 = (iVar6 >> 0x10) - (iVar9 >> 0x10);
    sStack_54 = (short)iVar8 + (short)uStack_5c;
    sStack_52 = (short)iVar9 + uStack_5c._2_2_;
    sStack_50 = (short)iVar8 + (short)uStack_58;
    sStack_4e = (short)iVar9 + uStack_58._2_2_;
    cVar3 = func_080AC070(auStack_a0);
    if (cVar3 == '\x01') {
      if (iVar8 < 1) {
        if (iVar8 < 0) {
          func_0802536C(param_1,2,-iVar8);
        }
        else if (iVar9 < 1) {
          if (iVar9 < 0) {
            func_0802536C(param_1,1,-iVar9);
          }
        }
        else {
          func_0802536C(param_1,0,iVar9);
        }
      }
      else {
        func_0802536C(param_1,3,iVar8);
      }
      goto LAB_0802d122;
    }
  }
  param_1[2] = iVar4;
  param_1[3] = iVar6;
LAB_0802d122:
  cVar3 = func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x40));
  if (cVar3 != '\0') {
    iVar4 = func_0x080d3914(piStack_4c,0x2c,*(undefined4 *)(*piStack_4c + 0x40));
    *(undefined4 *)(iVar4 + 8) = param_1[2];
    *(undefined4 *)(iVar4 + 0xc) = param_1[3];
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802D158 @ 0x0802D158
// =============================================================================
undefined8 func_0802D158(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  undefined1 uStack_18;
  undefined1 auStack_17 [7];
  undefined1 *puVar6;
  
  puVar6 = &uStack_18;
  uVar9 = 0x192;
  *(short *)(param_1 + 0x1f) = (short)_DAT_0802d17c;
  if (0x39 < *(byte *)(param_1 + 0xf)) goto LAB_0802d590;
  switch(*(uint *)((uint)*(byte *)(param_1 + 0xf) * 4 + _DAT_0802d180) & 0xfffffffe) {
  case 0x802d26c:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 != '\0') {
      bVar1 = *(byte *)((int)param_1 + 0x3e);
      if (bVar1 == 1) {
        uVar9 = 0x132;
        if (*(char *)((int)param_1 + 0xb3) == '\0') {
          uVar9 = 0x1c6;
        }
        break;
      }
      if (1 < bVar1) {
        if ((bVar1 == 2) && (uVar9 = 0x132, *(char *)((int)param_1 + 0xb3) == '\0')) {
          uVar9 = 0x15e;
        }
        break;
      }
      if (bVar1 != 0) break;
      goto case_0802D3CC;
    }
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          uVar9 = 0x14e;
        }
        break;
      }
      goto joined_r0x0802d340;
    }
    goto LAB_0802d57c;
  case 0x802d2e0:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar3 == '\0') goto case_0802D55A;
    if (5 < *(byte *)((int)param_1 + 0x3f)) goto case_0802D3CC;
    uVar9 = (uint)*(ushort *)
                   (((uint)*(byte *)((int)param_1 + 0x3f) * 7 + (uint)*(byte *)(param_1 + 0x10)) * 2
                   + _DAT_0802d32c);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uStack_18 = func_0800E550(iVar7,uVar5);
    goto LAB_0802d44e;
  case 0x802d330:
    bVar1 = func_0800F190(param_1[0xe] + 0x54);
joined_r0x0802d340:
    uVar9 = 0x192;
    if (bVar1 != 0) break;
  case 0x802d55a:
case_0802D55A:
    uVar9 = 0x152;
    break;
  case 0x802d346:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x192;
    if (cVar3 == '\0') {
      uVar9 = 0x152;
    }
    break;
  case 0x802d35e:
    uVar9 = 0x136;
    break;
  case 0x802d364:
    uVar9 = 0x19e;
    break;
  case 0x802d36a:
    uVar9 = 0x4e;
    break;
  case 0x802d36e:
    uVar9 = 0x46;
    break;
  case 0x802d372:
    uVar9 = 0x13e;
    break;
  case 0x802d378:
    uVar9 = 0x142;
    break;
  case 0x802d37e:
    uVar9 = (uint)*(ushort *)(param_1 + 0x11);
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_17;
    goto LAB_0802d44c;
  case 0x802d39e:
    uVar9 = 0x1ea;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_17 + 1;
    goto LAB_0802d44c;
  case 0x802d3bc:
    if (*(byte *)((int)param_1 + 0x4e) != *(byte *)((int)param_1 + 0x4f)) {
      uVar9 = 0x182;
      if ((uint)*(byte *)((int)param_1 + 0x4f) - (uint)*(byte *)((int)param_1 + 0x4e) == 1) {
        uVar9 = 0x186;
      }
      iVar7 = param_1[0xe];
      uVar5 = func_0800DC10(iVar7 + 0x5c);
      uVar2 = func_0800E550(iVar7,uVar5);
      puVar6 = auStack_17 + 2;
      goto LAB_0802d44c;
    }
  case 0x802d3cc:
case_0802D3CC:
    uVar9 = 0x192;
    break;
  case 0x802d3fc:
    uVar9 = 0x76;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_17 + 3;
    goto LAB_0802d44c;
  case 0x802d416:
    uVar9 = 0x6e;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_17 + 4;
    goto LAB_0802d44c;
  case 0x802d432:
    uVar9 = 0x72;
    iVar7 = param_1[0xe];
    uVar5 = func_0800DC10(iVar7 + 0x5c);
    uVar2 = func_0800E550(iVar7,uVar5);
    puVar6 = auStack_17 + 5;
LAB_0802d44c:
    *puVar6 = uVar2;
LAB_0802d44e:
    uVar4 = func_0800DB60(puVar6);
    *(undefined2 *)(param_1 + 0x1f) = uVar4;
    break;
  case 0x802d45a:
    uVar9 = 0x1fa;
    break;
  case 0x802d460:
    uVar9 = 0x196;
    break;
  case 0x802d466:
    uVar9 = 0x112;
    break;
  case 0x802d46c:
    uVar9 = 0x116;
    break;
  case 0x802d472:
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    bVar1 = *(byte *)((int)param_1 + 0x3e);
    if (bVar1 == 1) {
      uVar9 = 0xee;
      uVar8 = _DAT_0802d4ac;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) break;
      uVar9 = 0xea;
      uVar8 = _DAT_0802d4a0;
    }
    else {
      if (bVar1 != 2) break;
      uVar9 = 0xe6;
      uVar8 = _DAT_0802d4b8;
    }
    goto LAB_0802d53e;
  case 0x802d4bc:
    uVar9 = 0x15a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_0802d4d4;
    goto LAB_0802d53e;
  case 0x802d4d8:
    uVar9 = 0x9a;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_0802d4ec;
    goto LAB_0802d53e;
  case 0x802d4f0:
    uVar9 = 0x106;
    break;
  case 0x802d4f6:
    uVar9 = 0x102;
    break;
  case 0x802d4fc:
    uVar9 = 0xfe;
    break;
  case 0x802d500:
    uVar9 = 0xfa;
    break;
  case 0x802d504:
    uVar9 = 0x122;
    break;
  case 0x802d50a:
    uVar9 = 0x11e;
    break;
  case 0x802d510:
    uVar9 = 0x11a;
    break;
  case 0x802d516:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x14a;
    if (cVar3 != '\0') {
      uVar9 = 0x10a;
    }
    break;
  case 0x802d52c:
    uVar9 = 0xe2;
    iVar7 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
    uVar8 = _DAT_0802d54c;
LAB_0802d53e:
    if (*(ushort *)(iVar7 + 0x22) != uVar8) {
      func_080321B0(iVar7);
    }
    break;
  case 0x802d550:
    uVar9 = 0x3e;
    break;
  case 0x802d554:
    uVar9 = 0x146;
    break;
  case 0x802d560:
    uVar9 = 0x13a;
    break;
  case 0x802d566:
    uVar9 = 0x42;
    break;
  case 0x802d56a:
    cVar3 = func_0800F190(param_1[0xe] + 0x54);
    uVar9 = 0x1c6;
    if (cVar3 != '\0') break;
LAB_0802d57c:
    uVar9 = 0x156;
    break;
  case 0x802d582:
    uVar9 = 0xf6;
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      uVar9 = 0xf2;
    }
  }
LAB_0802d590:
  return CONCAT44(in_lr,uVar9);
}

// =============================================================================
// Function: func_0802D59C @ 0x0802D59C
// =============================================================================
undefined4 func_0802D59C(undefined4 *param_1,ushort *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  undefined4 in_lr;
  undefined4 uStack_40;
  ushort uStack_3c;
  int iStack_38;
  int iStack_34;
  ushort uStack_30;
  ushort uStack_2e;
  uint auStack_2c [3];
  
  auStack_2c[2] = 0;
  uVar9 = 0;
  if (param_2 != (ushort *)0x0) {
    auStack_2c[2] = (uint)*param_2;
    uVar9 = param_2[2];
  }
  puVar1 = (undefined1 *)((int)param_1 + 0x3e);
  *puVar1 = 0;
  pbVar2 = (byte *)(param_1 + 8);
  if ((*(char *)((int)param_1 + 0xc3) == '\0') && ((uVar9 & 1) != 0)) {
    func_0801FE94(&uStack_40,param_1);
    bVar6 = *pbVar2;
    if (bVar6 == 1) {
      uVar7 = (ushort)_DAT_0802d624;
      uVar5 = ((uStack_3c & _DAT_0802d624) << 6 | (uint)(uStack_40._3_1_ >> 2)) * 0x10000 +
              _DAT_0802d628;
LAB_0802d646:
      uStack_40 = CONCAT13(uStack_40._3_1_ & 3 | (byte)((uVar5 >> 0x10 & 0x3f) << 2),
                           (undefined3)uStack_40);
      uStack_3c = (ushort)_DAT_0802d66c & uStack_3c | (ushort)(uVar5 >> 0x16) & uVar7;
    }
    else if (bVar6 < 2) {
      if (bVar6 == 0) {
        uVar7 = (ushort)_DAT_0802d668;
        uVar5 = ((uStack_3c & _DAT_0802d668) << 6 | (uint)(uStack_40._3_1_ >> 2)) * 0x10000 +
                0x100000;
        goto LAB_0802d646;
      }
    }
    else {
      if (bVar6 == 2) {
        uVar5 = ((int)(uStack_40 << 6) >> 0x10) - 0x10;
      }
      else {
        if (bVar6 != 3) goto LAB_0802d68e;
        uVar5 = ((int)(uStack_40 << 6) >> 0x10) + 0x10;
      }
      uStack_40 = _DAT_0802d6e0 & uStack_40 | (uVar5 & 0xffff) << 10;
    }
LAB_0802d68e:
    func_0x080d3918(&iStack_38,(int *)*param_1,*(undefined2 *)(param_1 + 1),
                    *(undefined4 *)(*(int *)*param_1 + 0x34));
    uVar5 = (int)(uStack_40 << 6) >> 0x13;
    uVar8 = (int)(((uStack_3c & _DAT_0802d6e4) << 6 | uStack_40 >> 0x1a) << 0x10) >> 0x13;
    if (((iStack_38 == 0) || (uStack_30 < uVar5)) || (uStack_2e < uVar8)) {
      puVar3 = (uint *)0x0;
    }
    else {
      uVar5 = uVar8 * uStack_30 + uVar5;
      if (iStack_34 != 0) {
        uVar5 = (uint)*(byte *)(iStack_34 + uVar5);
      }
      puVar3 = (uint *)(iStack_38 + uVar5 * 4);
    }
    if ((puVar3 != (uint *)0x0) && ((_DAT_0802d718 & *(ushort *)((int)puVar3 + 2)) != 0)) {
      auStack_2c[0] = *puVar3 >> 0x11;
      auStack_2c[1] = 0;
      func_0x080d3918((int *)*param_1,auStack_2c,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
      return in_lr;
    }
  }
  uVar5 = 0;
  uVar8 = 0;
  bVar6 = *pbVar2;
  if ((*(char *)((int)param_1 + 0xc3) != '\0') || ((uVar9 & 3) != 0)) {
    *(undefined1 *)(param_1 + 0xf) = 0x23;
    goto LAB_0802d7f8;
  }
  if ((auStack_2c[2] & 0x1ff) >> 8 == 0 &&
      ((auStack_2c[2] & 0x1f) >> 4 == 0 &&
      ((auStack_2c[2] & 0x3f) >> 5 == 0 &&
      ((auStack_2c[2] & 0x7f) >> 6 == 0 && (auStack_2c[2] & 0xff) >> 7 == 0)))) goto LAB_0802d7f8;
  if ((auStack_2c[2] & 0x20) == 0) {
    if ((auStack_2c[2] & 0x10) == 0) {
      if ((auStack_2c[2] & 0x40) == 0) {
        if ((auStack_2c[2] & 0x80) != 0) {
          bVar6 = 0;
        }
      }
      else {
        bVar6 = 1;
      }
    }
    else {
      bVar6 = 3;
    }
  }
  else {
    bVar6 = 2;
  }
  if (bVar6 == 1) {
    uVar8 = 0xfe;
  }
  else if (bVar6 < 2) {
    if (bVar6 == 0) {
      uVar8 = 2;
    }
  }
  else if (bVar6 == 2) {
    uVar5 = 0xfe;
  }
  else if (bVar6 == 3) {
    uVar5 = 2;
  }
  if ((*(byte *)(param_1[0xd] + _DAT_0802d7d8) & 1) == 0) {
    if ((auStack_2c[2] & 0x100) == 0) {
LAB_0802d7f6:
      *puVar1 = 1;
      goto LAB_0802d7f8;
    }
  }
  else if ((auStack_2c[2] & 0x100) != 0) goto LAB_0802d7f6;
  *puVar1 = 2;
  uVar5 = (uVar5 & 0x7f) << 1;
  uVar8 = (uVar8 & 0x7f) << 1;
LAB_0802d7f8:
  param_1[6] = (int)(uVar5 << 0x18) >> 8;
  param_1[7] = (int)(uVar8 << 0x18) >> 8;
  if (*pbVar2 != bVar6) {
    func_08032198(param_1,bVar6);
  }
  iVar4 = func_0x080d3914((int *)*param_1,0x2c,*(undefined4 *)(*(int *)*param_1 + 0x40));
  if (*(byte *)(iVar4 + 0x20) != bVar6) {
    func_08032198(iVar4,bVar6);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802D844 @ 0x0802D844
// =============================================================================
undefined4 func_0802D844(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (uint)*(ushort *)(param_2 + 4);
  }
  if ((*(char *)(param_1 + 0xc3) != '\0') || ((_DAT_0802d88c & uVar1) != 0)) {
    func_080323C8(param_1);
    *(undefined1 *)(param_1 + 0x3c) = 0x18;
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 0x40) == 0) {
          if (((uVar1 & 0x80) != 0) && (*(char *)(param_1 + 0x20) != '\0')) {
            func_08032198(param_1,0);
          }
        }
        else if (*(char *)(param_1 + 0x20) != '\x01') {
          func_08032198(param_1,1);
        }
      }
      else if (*(char *)(param_1 + 0x20) != '\x03') {
        func_08032198(param_1,3);
      }
    }
    else if (*(char *)(param_1 + 0x20) != '\x02') {
      func_08032198(param_1,2);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802D8E8 @ 0x0802D8E8
// =============================================================================
undefined4 func_0802D8E8(undefined4 *param_1,ushort *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  uVar2 = 0;
  uStack_10 = 0;
  uVar3 = 0;
  if (param_2 != (ushort *)0x0) {
    uVar2 = (uint)*param_2;
    uStack_10 = (uint)param_2[2];
    uVar3 = (uint)param_2[4];
  }
  if (*(char *)((int)param_1 + 0xc3) != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  uVar2 = (uVar2 & 3) >> 1 | (uVar2 & 0x3ff) >> 9;
  bVar1 = (byte)uVar2;
  if (uVar2 != 0) {
    if ((uVar3 & 0x7f) >> 6 != 0 || (uVar3 & 0x3f) >> 5 != 0) {
      func_08025A40(param_1,1);
      return in_lr;
    }
    uStack_14 = (uStack_10 & 0x3ff) >> 9 |
                (uStack_10 & 3) >> 1 | (uVar3 & 0xff) >> 7 | (uVar3 & 0x1f) >> 4;
    if (uStack_14 != 0) {
      func_08025A40(param_1,0);
      return in_lr;
    }
    bVar1 = (byte)uStack_10 & 1;
    if ((uStack_10 & 1) != 0) {
      uStack_18 = _DAT_0802d990;
      func_0x080d3918((int *)*param_1,&uStack_18,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if ((uStack_10 & 0x100) == 0) {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 0xf) = bVar1;
  return in_lr;
}

// =============================================================================
// Function: func_0802D9AC @ 0x0802D9AC
// =============================================================================
undefined4 func_0802D9AC(undefined4 *param_1,ushort *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 in_lr;
  undefined1 auStack_2c [4];
  undefined4 auStack_28 [2];
  undefined4 auStack_20 [2];
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0;
  uVar6 = 0;
  if (param_2 != (ushort *)0x0) {
    uStack_18 = (uint)*param_2;
    uStack_14 = (uint)param_2[2];
    uVar6 = (uint)param_2[4];
  }
  if (*(char *)((int)param_1 + 0xc3) == '\0') {
    if ((uStack_18 & 1) == 0 && (uStack_18 & 0x3ff) >> 9 == 0) {
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else if ((uVar6 & 0x7f) >> 6 == 0 && (uVar6 & 0x3f) >> 5 == 0) {
      if ((uStack_14 & 0x3ff) >> 9 == 0 &&
          ((uStack_14 & 1) == 0 && ((uVar6 & 0xff) >> 7 == 0 && (uVar6 & 0x1f) >> 4 == 0))) {
        if ((uStack_14 & 2) == 0) {
          if ((uStack_14 & 0x100) != 0) {
            *(byte *)(param_1 + 0xf) = (byte)uStack_14 & 2;
          }
        }
        else {
          if ((_DAT_0802da8c & uStack_18) == _DAT_0802da8c) {
            piVar2 = (int *)*param_1;
            puVar7 = (undefined4 *)(*piVar2 + (_DAT_0802da8c - 0xc1));
            puVar8 = auStack_28;
            auStack_28[0] = _DAT_0802da90;
          }
          else {
            if ((uStack_18 & 1) == 0) {
              if ((uStack_18 & 0x200) == 0) {
                return in_lr;
              }
              cVar1 = func_0800F190(param_1[0xe] + 0x54);
              if (cVar1 != '\0') {
                func_08025A40(param_1,0);
                return in_lr;
              }
              cVar1 = func_0x0800f388(param_1[0xe] + 0x54);
              if ((cVar1 != '\0') || (iVar3 = func_0x0800f204(param_1[0xe] + 0x54), iVar3 != 0)) {
                *(undefined1 *)(param_1 + 0xf) = 0;
                return in_lr;
              }
              func_0800F20C(auStack_2c,param_1[0xe] + 0x54);
              iVar3 = param_1[5];
              uVar4 = func_0800DD08(auStack_2c);
              uVar5 = func_0800DD3C(auStack_2c);
              func_0x080d3918(param_1,uVar4,uVar5,*(undefined4 *)(iVar3 + 100));
              iVar3 = func_0800DDAC(auStack_2c);
              if (iVar3 == 0) {
                *(undefined1 *)(param_1 + 0xf) = 0xf;
                piVar2 = (int *)func_0x080d3910((int *)*param_1,
                                                *(undefined4 *)(*(int *)*param_1 + 0x14c));
                puVar7 = (undefined4 *)piVar2[1];
                for (puVar8 = (undefined4 *)*piVar2; puVar8 != puVar7; puVar8 = puVar8 + 1) {
                  cVar1 = func_0x08008cd0(*puVar8);
                  if (cVar1 == '\0') {
                    uVar4 = *puVar8;
                    goto LAB_0802db62;
                  }
                }
                uVar4 = puVar7[-1];
LAB_0802db62:
                func_08008B6C(uVar4,0x65);
              }
              else {
                *(undefined1 *)(param_1 + 0xf) = 0x10;
                piVar2 = (int *)func_0x080d3910((int *)*param_1,
                                                *(undefined4 *)(*(int *)*param_1 + 0x14c));
                puVar7 = (undefined4 *)piVar2[1];
                for (puVar8 = (undefined4 *)*piVar2; puVar8 != puVar7; puVar8 = puVar8 + 1) {
                  cVar1 = func_0x08008cd0(*puVar8);
                  if (cVar1 == '\0') {
                    uVar4 = *puVar8;
                    goto LAB_0802dba4;
                  }
                }
                uVar4 = puVar7[-1];
LAB_0802dba4:
                func_08008B6C(uVar4,0x66);
              }
              func_0x0802a7d8(param_1);
              func_0x0800f390(param_1[0xe] + 0x54);
              return in_lr;
            }
            piVar2 = (int *)*param_1;
            puVar7 = (undefined4 *)(*piVar2 + 0x140);
            puVar8 = auStack_20;
            auStack_20[0] = _DAT_0802dac0;
          }
          puVar8[1] = 0;
          func_0x080d3918(piVar2,puVar8,0,*puVar7);
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
      }
      else {
        cVar1 = func_0800F190(param_1[0xe] + 0x54);
        if (cVar1 == '\0') {
          func_080257D0(param_1,0);
        }
        else {
          func_08025838(param_1,0);
        }
      }
    }
    else {
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      if (cVar1 == '\0') {
        func_080257D0(param_1,1);
      }
      else {
        func_08025838(param_1,1);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802DBF0 @ 0x0802DBF0
// =============================================================================
undefined4 func_0802DBF0(undefined4 *param_1,ushort *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  uint uStack_18;
  uint uStack_14;
  
  bVar1 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if (param_2 != (ushort *)0x0) {
    uStack_18 = (uint)*param_2;
    uStack_14 = (uint)param_2[2];
  }
  if (*(char *)((int)param_1 + 0xc3) != '\0') {
LAB_0802de26:
    *(byte *)(param_1 + 0xf) = bVar1;
    return in_lr;
  }
  if ((uStack_18 & 0x200) == 0) {
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 == '\0') {
LAB_0802de86:
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xf) = 0x16;
    *(undefined1 *)((int)param_1 + 0x79) = 3;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar8 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      cVar2 = func_0x08008cd0(*puVar7);
      if (cVar2 == '\0') goto LAB_0802de2e;
    }
  }
  else if ((uStack_14 & 0x7f) >> 6 == 0 && (uStack_14 & 0x3f) >> 5 == 0) {
    if ((uStack_14 & 0xff) >> 7 == 0 && (uStack_14 & 0x1f) >> 4 == 0) {
      if ((uStack_14 & 1) != 0) {
        cVar2 = func_0800F190(param_1[0xe] + 0x54);
        if (cVar2 != '\0') {
          func_08025838(param_1,1);
          return in_lr;
        }
        func_080257D0(param_1,1);
        return in_lr;
      }
      bVar1 = (byte)uStack_14 & 2;
      if ((uStack_14 & 2) != 0) {
        cVar2 = func_0800F190(param_1[0xe] + 0x54);
        if (cVar2 != '\0') {
          func_08025A40(param_1,0);
          return in_lr;
        }
        cVar2 = func_0x0800f388(param_1[0xe] + 0x54);
        if ((cVar2 != '\0') || (iVar3 = func_0x0800f204(param_1[0xe] + 0x54), iVar3 != 0)) {
          *(undefined1 *)(param_1 + 0xf) = 0;
          return in_lr;
        }
        func_0800F20C(auStack_1c,param_1[0xe] + 0x54);
        iVar3 = param_1[5];
        uVar6 = func_0800DD08(auStack_1c);
        uVar4 = func_0800DD3C(auStack_1c);
        func_0x080d3918(param_1,uVar6,uVar4,*(undefined4 *)(iVar3 + 100));
        iVar3 = func_0800DDAC(auStack_1c);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0xf) = 0xf;
          piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c))
          ;
          puVar8 = (undefined4 *)piVar5[1];
          for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar8; puVar7 = puVar7 + 1) {
            cVar2 = func_0x08008cd0(*puVar7);
            if (cVar2 == '\0') {
              uVar6 = *puVar7;
              goto LAB_0802ddba;
            }
          }
          uVar6 = puVar8[-1];
LAB_0802ddba:
          func_08008B6C(uVar6,0x65);
        }
        else {
          *(undefined1 *)(param_1 + 0xf) = 0x10;
          piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c))
          ;
          puVar8 = (undefined4 *)piVar5[1];
          for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar8; puVar7 = puVar7 + 1) {
            cVar2 = func_0x08008cd0(*puVar7);
            if (cVar2 == '\0') {
              uVar6 = *puVar7;
              goto LAB_0802ddfc;
            }
          }
          uVar6 = puVar8[-1];
LAB_0802ddfc:
          func_08008B6C(uVar6,0x66);
        }
        func_0x0802a7d8(param_1);
        func_0x0800f390(param_1[0xe] + 0x54);
        return in_lr;
      }
      if ((uStack_14 & 0x100) == 0) {
        return in_lr;
      }
      goto LAB_0802de26;
    }
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 == '\0') goto LAB_0802de86;
    *(undefined1 *)(param_1 + 0xf) = 0x16;
    *(undefined1 *)((int)param_1 + 0x79) = 2;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar8 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      cVar2 = func_0x08008cd0(*puVar7);
      if (cVar2 == '\0') goto LAB_0802de2e;
    }
  }
  else {
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 == '\0') goto LAB_0802de86;
    *(undefined1 *)(param_1 + 0xf) = 0x16;
    *(undefined1 *)((int)param_1 + 0x79) = 1;
    piVar5 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar8 = (undefined4 *)piVar5[1];
    for (puVar7 = (undefined4 *)*piVar5; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      cVar2 = func_0x08008cd0(*puVar7);
      if (cVar2 == '\0') goto LAB_0802de2e;
    }
  }
  uVar6 = puVar8[-1];
LAB_0802de7e:
  func_08008B6C(uVar6,0x67);
  return in_lr;
LAB_0802de2e:
  uVar6 = *puVar7;
  goto LAB_0802de7e;
}

// =============================================================================
// Function: func_0802DE94 @ 0x0802DE94
// =============================================================================
undefined4 func_0802DE94(undefined4 *param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  
  uVar6 = 0;
  uStack_1c = 0;
  if (param_2 != (ushort *)0x0) {
    uVar6 = *param_2;
    uStack_1c = (uint)param_2[2];
  }
  if (*(char *)((int)param_1 + 0xc3) == '\0') {
    if ((uVar6 & 2) == 0) {
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      if (cVar1 == '\0') {
        func_080258A0(param_1);
        return in_lr;
      }
      uVar7 = 0;
      if (*(char *)((int)param_1 + 0x3f) != '\x0f') {
        if (*(char *)((int)param_1 + 0x3f) == '\x0e') {
          func_0802C860(param_1);
          return in_lr;
        }
        func_0802C2E0(param_1);
        return in_lr;
      }
    }
    else {
      cVar1 = func_0800F190(param_1[0xe] + 0x54);
      if (cVar1 != '\0') {
        func_0802C908(param_1);
      }
      if ((uStack_1c & 0x1f) >> 4 != 0 ||
          ((uStack_1c & 0x3f) >> 5 != 0 ||
          ((uStack_1c & 0x7f) >> 6 != 0 || (uStack_1c & 0xff) >> 7 != 0))) {
        if ((uStack_1c & 0x20) != 0) {
          if (*(char *)(param_1 + 8) == '\x02') {
            return in_lr;
          }
          func_08032198(param_1,2);
          return in_lr;
        }
        if ((uStack_1c & 0x10) != 0) {
          if (*(char *)(param_1 + 8) == '\x03') {
            return in_lr;
          }
          func_08032198(param_1,3);
          return in_lr;
        }
        if ((uStack_1c & 0x40) != 0) {
          if (*(char *)(param_1 + 8) == '\x01') {
            return in_lr;
          }
          func_08032198(param_1,1);
          return in_lr;
        }
        if ((uStack_1c & 0x80) == 0) {
          return in_lr;
        }
        if (*(char *)(param_1 + 8) == '\0') {
          return in_lr;
        }
        func_08032198(param_1,0);
        return in_lr;
      }
      uVar7 = uStack_1c >> 8 & 1;
      if ((uStack_1c & 0x100) != 0) {
        *(undefined1 *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      if ((uStack_1c & 1) == 0) {
        if ((uStack_1c & 0x200) == 0) {
          return in_lr;
        }
        cVar1 = func_0800F190(param_1[0xe] + 0x54);
        if (cVar1 != '\0') {
          func_08025A40(param_1,0);
          return in_lr;
        }
        cVar1 = func_0x0800f388(param_1[0xe] + 0x54);
        if ((cVar1 == '\0') && (iVar2 = func_0x0800f204(param_1[0xe] + 0x54), iVar2 == 0)) {
          func_0800F20C(auStack_20,param_1[0xe] + 0x54);
          iVar2 = param_1[5];
          uVar3 = func_0800DD08(auStack_20);
          uVar4 = func_0800DD3C(auStack_20);
          func_0x080d3918(param_1,uVar3,uVar4,*(undefined4 *)(iVar2 + 100));
          iVar2 = func_0800DDAC(auStack_20);
          if (iVar2 == 0) {
            *(undefined1 *)(param_1 + 0xf) = 0xf;
            piVar5 = (int *)func_0x080d3910((int *)*param_1,
                                            *(undefined4 *)(*(int *)*param_1 + 0x14c));
            puVar9 = (undefined4 *)piVar5[1];
            for (puVar8 = (undefined4 *)*piVar5; puVar8 != puVar9; puVar8 = puVar8 + 1) {
              cVar1 = func_0x08008cd0(*puVar8);
              if (cVar1 == '\0') {
                uVar3 = *puVar8;
                goto LAB_0802e056;
              }
            }
            uVar3 = puVar9[-1];
LAB_0802e056:
            func_08008B6C(uVar3,0x65);
          }
          else {
            *(undefined1 *)(param_1 + 0xf) = 0x10;
            piVar5 = (int *)func_0x080d3910((int *)*param_1,
                                            *(undefined4 *)(*(int *)*param_1 + 0x14c));
            puVar9 = (undefined4 *)piVar5[1];
            for (puVar8 = (undefined4 *)*piVar5; puVar8 != puVar9; puVar8 = puVar8 + 1) {
              cVar1 = func_0x08008cd0(*puVar8);
              if (cVar1 == '\0') {
                uVar3 = *puVar8;
                goto LAB_0802e098;
              }
            }
            uVar3 = puVar9[-1];
LAB_0802e098:
            func_08008B6C(uVar3,0x66);
          }
          func_0x0802a7d8(param_1);
          func_0x0800f390(param_1[0xe] + 0x54);
          return in_lr;
        }
        goto LAB_0802e0ae;
      }
      uStack_18 = _DAT_0802dfac;
      uStack_14 = uVar7;
      func_0x080d3918((int *)*param_1,&uStack_18,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
    }
    *(char *)(param_1 + 0xf) = (char)uVar7;
  }
  else {
LAB_0802e0ae:
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0802E0FC @ 0x0802E0FC
// =============================================================================
undefined4 func_0802E0FC(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  ushort uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  ushort uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 in_lr;
  undefined1 auStack_a4 [8];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  ushort uStack_94;
  int iStack_90;
  int iStack_8c;
  ushort uStack_88;
  ushort uStack_86;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 auStack_46 [2];
  uint auStack_44 [2];
  undefined1 *puStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  byte *pbStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  
  uVar14 = 0;
  uStack_7c = 0;
  if (param_2 != (ushort *)0x0) {
    uVar14 = *param_2;
    uStack_7c = (uint)param_2[2];
  }
  bVar8 = *(byte *)((int)param_1 + 0xc3);
  uStack_80 = (uint)bVar8;
  if (uStack_80 != 0) {
    *(undefined1 *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  if ((uVar14 & 1) != 0) {
    if ((uStack_7c & 2) != 0) {
      uStack_84 = 0x3ce;
      func_0x080d3918((int *)*param_1,&uStack_84,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
      *(byte *)(param_1 + 0xf) = bVar8;
      return in_lr;
    }
    bVar8 = uStack_7c._1_1_ & 2;
    if ((uStack_7c & 0x200) != 0) {
      cVar2 = func_0800F190(param_1[0xe] + 0x54);
      if (cVar2 == '\0') {
        func_080257D0(param_1,1);
        return in_lr;
      }
      func_08025838(param_1,0);
      return in_lr;
    }
    if ((uStack_7c & 0x100) == 0) {
      func_0x0802ebe6();
    }
    *(byte *)(param_1 + 0xf) = bVar8;
    return in_lr;
  }
  puVar13 = param_1 + 0xf;
  *(undefined1 *)puVar13 = 0;
  piVar9 = (int *)*param_1;
  func_0801FE94(auStack_a4,param_1);
  pbVar12 = (byte *)(param_1 + 8);
  puStack_3c = auStack_a4;
  func_0802AB98(&uStack_78,param_1,*pbVar12);
  uStack_70 = uStack_78;
  uStack_6c = uStack_74;
  iVar3 = func_0x080d3918(piVar9,auStack_a4,&uStack_70,*(undefined4 *)(*piVar9 + 0x134));
  uStack_38 = 0;
  iStack_34 = 0;
  pbStack_2c = pbVar12;
  puStack_28 = puVar13;
  switch(iVar3) {
  case 0x2b:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 != '\0') {
      piVar9 = (int *)*param_1;
      iVar4 = func_0x080d3914(piVar9,iVar3,*(undefined4 *)(*piVar9 + 0x40));
      if (iVar4 != 0) {
        func_0x080d3914(iVar4,0x3c,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x88));
      }
      func_0x080d3914(piVar9,iVar3,*(undefined4 *)(*piVar9 + 0x3c));
      func_08025E38(param_1);
      return in_lr;
    }
    break;
  case 0x2c:
    func_08009C3C(param_1[0xd] + 0x14);
    iVar3 = func_0809BC10();
    if (iVar3 == 1) {
      cVar2 = func_0800F190(param_1[0xe] + 0x54);
      if (cVar2 == '\0') {
        uStack_48 = func_080262C4(param_1);
        iVar3 = func_0800E198(&uStack_48);
        if (iVar3 != 0) {
          piVar9 = (int *)*param_1;
          func_0x080d3914(piVar9,&uStack_48,*(undefined4 *)(*piVar9 + 0x15c));
          *(undefined1 *)puStack_28 = 0xe;
          iStack_34 = 1;
          iVar3 = func_0x080d3914(piVar9,0x2c,*(undefined4 *)(*piVar9 + 0x40));
          if (iVar3 != 0) {
            func_0x080d3914(iVar3,0x3c,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x88));
            func_08032384(iVar3,5,0);
          }
          piVar9 = (int *)func_0x080d3910(piVar9,*(undefined4 *)(*piVar9 + 0x14c));
          puVar16 = (undefined4 *)piVar9[1];
          for (puVar13 = (undefined4 *)*piVar9; puVar13 != puVar16; puVar13 = puVar13 + 1) {
            cVar2 = func_0x08008cd0(*puVar13);
            if (cVar2 == '\0') goto LAB_0802e57e;
          }
          goto LAB_0802e5f6;
        }
      }
      else {
        func_0x080d3918(&uStack_9c,piVar9,*(undefined2 *)(param_1 + 1),
                        *(undefined4 *)(*piVar9 + 0x34));
        uVar14 = *(ushort *)((int)param_1 + 10);
        uVar11 = *(ushort *)((int)param_1 + 0xe);
        uStack_68 = CONCAT22(uVar11 - 9,uVar14 - 7);
        uStack_64 = CONCAT22(uVar11 + 5,uVar14 + 7);
        uStack_60 = uStack_68;
        uStack_5c = uStack_64;
        cVar2 = func_080AC070(&uStack_9c,&uStack_60);
        if (cVar2 == '\x01') {
          func_08024724(&uStack_58,&uStack_9c,&uStack_60);
          uStack_54 = uStack_58;
          uVar7 = uStack_54;
          uStack_54._0_2_ = (short)uStack_58;
          uVar14 = uVar14 + (short)uStack_54;
          uStack_54._2_2_ = (short)((uint)uStack_58 >> 0x10);
          uVar11 = uVar11 + uStack_54._2_2_;
          sStack_50 = uVar14 - 7;
          sStack_4e = uVar11 - 9;
          sStack_4c = uVar14 + 7;
          sStack_4a = uVar11 + 5;
          uStack_54 = uVar7;
          cVar2 = func_080AC070(&uStack_9c);
          if (cVar2 == '\x01') break;
        }
        iVar3 = func_0x080d3914(piVar9,0x2c,*(undefined4 *)(*piVar9 + 0x40));
        func_08021EE0();
        *(uint *)(iVar3 + 8) = (uint)uVar14 * 0x10000;
        *(uint *)(iVar3 + 0xc) = (uint)uVar11 * 0x10000;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        bVar8 = *pbStack_2c;
        if (bVar8 == 1) {
          if (*(char *)(iVar3 + 0x20) != '\x03') {
            func_08032198(iVar3,3);
          }
        }
        else if (bVar8 < 2) {
          if ((bVar8 == 0) && (*(char *)(iVar3 + 0x20) != '\x02')) {
            func_08032198(iVar3,2);
          }
        }
        else if (bVar8 == 2) {
          if (*(char *)(iVar3 + 0x20) != '\x01') {
            func_08032198(iVar3,1);
          }
        }
        else if ((bVar8 == 3) && (*(char *)(iVar3 + 0x20) != '\0')) {
          func_08032198(iVar3,0);
        }
        uVar7 = func_0x080d0ec8((uint)uVar14 * 0x10000 - param_1[2],0x18);
        param_1[0x2e] = uVar7;
        uVar7 = func_0x080d0ec8((uint)uVar11 * 0x10000 - param_1[3],0x18);
        param_1[0x2f] = uVar7;
        param_1[6] = param_1[0x2e];
        param_1[7] = param_1[0x2f];
        iStack_34 = 1;
        puVar5 = (undefined *)0x22;
code_r0x0802e480:
        *(char *)puStack_28 = (char)puVar5;
      }
    }
    else {
      uStack_38 = 9;
    }
    break;
  default:
    iVar3 = func_0x080d3914((int *)*param_1,iVar3,*(undefined4 *)(*(int *)*param_1 + 300));
    if (iVar3 != 0) {
      uStack_38 = func_0x080d3910(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x34));
      uStack_38 = uStack_38 & 0xffff;
    }
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 != '\0') {
      piVar9 = (int *)*param_1;
      iVar4 = func_0x080d3914(piVar9,iVar3,*(undefined4 *)(*piVar9 + 0x40));
      if (iVar4 != 0) {
        func_0x080d3914(iVar4,0x3c,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x88));
      }
      func_0x080d3914(piVar9,iVar3,*(undefined4 *)(*piVar9 + 0x3c));
      func_08025EFC(param_1,iVar3 - 0x2eU & 0xff);
      return in_lr;
    }
    break;
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
    *(char *)((int)param_1 + 0xb1) = (char)iVar3 + -0x36;
    iVar3 = func_0800D3D0(param_1[0xd] + 0x5f0);
    uStack_38 = 0xd;
    if (iVar3 != 0) {
      uStack_38 = 8;
    }
    break;
  case 0x4a:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 != '\0') {
      func_0x080d3914((int *)*param_1,iVar3,*(undefined4 *)(*(int *)*param_1 + 0x3c));
      func_08025FC4(param_1);
      return in_lr;
    }
    uStack_47 = func_080262C4(param_1);
    iVar3 = func_0800E198(&uStack_47);
    if (iVar3 != 0) {
      iVar3 = func_0x080d3914((int *)*param_1,0x4a,*(undefined4 *)(*(int *)*param_1 + 0x40));
      iVar4 = func_0x0800ffd0(*(undefined4 *)(iVar3 + 0x18));
      if (iVar4 != 0x1e) {
        func_08037EB4(iVar3,&uStack_47);
        *(undefined1 *)puStack_28 = 0xe;
        iStack_34 = 1;
        piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
        puVar16 = (undefined4 *)piVar9[1];
        for (puVar13 = (undefined4 *)*piVar9; puVar13 != puVar16; puVar13 = puVar13 + 1) {
          cVar2 = func_0x08008cd0(*puVar13);
          if (cVar2 == '\0') goto LAB_0802e57e;
        }
LAB_0802e5f6:
        uVar7 = puVar16[-1];
        goto LAB_0802e5fa;
      }
      uStack_38 = 0x3cd;
    }
    break;
  case 0x4b:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 != '\0') {
      func_0x080d3914((int *)*param_1,0x4b,*(undefined4 *)(*(int *)*param_1 + 0x40));
      cVar2 = func_0x08038108();
      if (cVar2 == '\0') {
        func_0x080d3914((int *)*param_1,iVar3,*(undefined4 *)(*(int *)*param_1 + 0x3c));
        func_0x0800df50(auStack_46,0x35);
        func_0800F040(&uStack_9c,auStack_46[0]);
        goto LAB_0802e786;
      }
    }
    break;
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    cVar2 = func_0800F190(param_1[0xe] + 0x54);
    if (cVar2 != '\0') {
      iVar4 = func_0800C6A0(param_1[0xd] + 0x410,iVar3 + -0x4c);
      if (iVar4 != 0) {
        uVar15 = *(byte *)(iVar4 + 6) & 7;
        uVar7 = 0xf;
        if (uVar15 < 6) {
          puVar5 = (&case_0802E6C4)[uVar15];
          switch((uint)puVar5 & 0xfffffffe) {
          case 0x802e6c4:
            goto code_r0x0802e480;
          case 0x802e6dc:
            uVar7 = 0xf;
            break;
          case 0x802e6e0:
            uVar7 = 0x10;
            break;
          case 0x802e6e6:
            uVar7 = 0x11;
            break;
          case 0x802e6ec:
            uVar7 = 0x12;
            break;
          case 0x802e6f2:
            uVar7 = 0x13;
            break;
          case 0x802e6f8:
            uVar7 = 0x14;
          }
        }
        func_0x080d3914((int *)*param_1,iVar3,*(undefined4 *)(*(int *)*param_1 + 0x3c));
        func_0800C9B8(param_1[0xd] + 0x410,iVar3 + -0x4c);
        func_0x0800dca8(&uStack_98,uVar7);
        func_0800F004(&uStack_9c,uStack_98 & 0xffffff);
LAB_0802e786:
        func_08026150(param_1,&uStack_9c,0);
        return in_lr;
      }
    }
    break;
  case 100:
    break;
  }
case_0802E7BA:
  if (iStack_34 != 0) {
    return in_lr;
  }
  if (uStack_38 != 0) goto LAB_0802e906;
  memcpy(&uStack_9c,puStack_3c,6);
  bVar8 = *pbStack_2c;
  if (bVar8 == 1) {
    uVar15 = ((uStack_98 & 0xffff & _DAT_0802e830) << 6 | (uint)(uStack_9c._3_1_ >> 2)) * 0x10000 +
             _DAT_0802e834;
    uStack_9c = CONCAT13(uStack_9c._3_1_ & 3 | (byte)((uVar15 >> 0x10 & 0x3f) << 2),
                         (undefined3)uStack_9c);
    uStack_98 = CONCAT22(uStack_98._2_2_,
                         (ushort)_DAT_0802e838 & (ushort)uStack_98 |
                         (ushort)(uVar15 >> 0x16) & (ushort)_DAT_0802e830);
  }
  else if (bVar8 < 2) {
    if (bVar8 == 0) {
      uVar15 = ((uStack_98 & 0xffff & _DAT_0802e874) << 6 | (uint)(uStack_9c._3_1_ >> 2)) * 0x10000
               + 0x100000;
      uStack_9c = CONCAT13(uStack_9c._3_1_ & 3 | (byte)((uVar15 >> 0x10 & 0x3f) << 2),
                           (undefined3)uStack_9c);
      uStack_98 = CONCAT22(uStack_98._2_2_,
                           (ushort)_DAT_0802e878 & (ushort)uStack_98 |
                           (ushort)(uVar15 >> 0x16) & (ushort)_DAT_0802e874);
    }
  }
  else {
    if (bVar8 == 2) {
      uVar15 = ((int)(uStack_9c << 6) >> 0x10) - 0x10;
    }
    else {
      if (bVar8 != 3) goto LAB_0802e89a;
      uVar15 = ((int)(uStack_9c << 6) >> 0x10) + 0x10;
    }
    uStack_9c = _DAT_0802e8ec & uStack_9c | (uVar15 & 0xffff) << 10;
  }
LAB_0802e89a:
  func_0x080d3918(&iStack_90,(int *)*param_1,*(undefined2 *)(param_1 + 1),
                  *(undefined4 *)(*(int *)*param_1 + 0x34));
  uVar15 = (int)(uStack_9c << 6) >> 0x13;
  uVar10 = (int)(((uStack_98 & 0xffff & _DAT_0802e8f0) << 6 | uStack_9c >> 0x1a) << 0x10) >> 0x13;
  if (((iStack_90 == 0) || (uStack_88 < uVar15)) || (uStack_86 < uVar10)) {
    puVar6 = (uint *)0x0;
  }
  else {
    uVar15 = uVar10 * uStack_88 + uVar15;
    if (iStack_8c != 0) {
      uVar15 = (uint)*(byte *)(iStack_8c + uVar15);
    }
    puVar6 = (uint *)(iStack_90 + uVar15 * 4);
  }
  if (puVar6 != (uint *)0x0) {
    uStack_38 = *puVar6 >> 0x11;
  }
  if (uStack_38 != 0) {
LAB_0802e906:
    auStack_44[0] = uStack_38;
    auStack_44[1] = 0;
    func_0x080d3918((int *)*param_1,auStack_44,0,*(undefined4 *)(*(int *)*param_1 + 0x140));
    *(undefined1 *)puStack_28 = 0;
    return in_lr;
  }
  cVar2 = func_0800F190(param_1[0xe] + 0x54);
  if (cVar2 != '\0') {
    uVar10 = (uint)*(short *)((int)param_1 + 10);
    uVar15 = (uint)*(short *)((int)param_1 + 0xe);
    bVar8 = *pbStack_2c;
    if (bVar8 == 1) {
      uVar15 = uVar15 - 0x10;
    }
    else if (bVar8 < 2) {
      if (bVar8 == 0) {
        uVar15 = uVar15 + 0x10;
      }
    }
    else if (bVar8 == 2) {
      uVar10 = uVar10 - 0x10;
    }
    else if (bVar8 == 3) {
      uVar10 = uVar10 + 0x10;
    }
    func_0x0800efec(&uStack_9c);
    puStack_30 = (undefined4 *)(*(int *)*param_1 + 0xe0);
    uVar1 = (ushort)_DAT_0802ebf8;
    uVar11 = (ushort)_DAT_0802ebfc;
    uVar14 = uVar11 & (ushort)uStack_98 | *(ushort *)(param_1 + 1) & uVar1;
    iStack_24 = (uVar10 & 0x3f) << 2;
    uStack_98._1_1_ = (byte)(uVar14 >> 8);
    uStack_98._0_2_ = CONCAT11(uStack_98._1_1_ & 3 | (byte)iStack_24,(char)uVar14);
    uVar14 = uVar11 & uStack_98._2_2_ | (ushort)((uVar10 & 0xffff) >> 6) & uVar1;
    uStack_98 = CONCAT22(uVar14,(ushort)uStack_98);
    uVar7 = uStack_98;
    uStack_98._3_1_ = (byte)(uVar14 >> 8);
    uStack_98 = CONCAT13(uStack_98._3_1_ & 3 | (byte)((uVar15 & 0x3f) << 2),(int3)uVar7);
    uStack_94 = uVar11 & uStack_94 | (ushort)((uVar15 & 0xffff) >> 6) & uVar1;
    func_0x080d3918((int *)*param_1,&uStack_98,&uStack_9c,*puStack_30);
    cVar2 = func_0800F06C(&uStack_9c);
    if (cVar2 != '\0') {
      return in_lr;
    }
    func_08026150(param_1,&uStack_9c,0);
    return in_lr;
  }
  iVar3 = func_0x0802a7e0(param_1);
  if (iVar3 == 1) {
    *(undefined1 *)puStack_28 = 0xd;
    uVar7 = _DAT_0802ea40;
    bVar8 = *pbStack_2c;
    if (bVar8 == 1) {
      param_1[0x23] = 0;
LAB_0802ea52:
      param_1[0x24] = uVar7;
LAB_0802ea54:
      param_1[0x27] = 0xc0000;
    }
    else {
      if (1 < bVar8) {
        if (bVar8 == 2) {
          param_1[0x23] = _DAT_0802ea1c;
          param_1[0x24] = 0;
        }
        else {
          if (bVar8 != 3) goto LAB_0802ea56;
          param_1[0x23] = 0xa0000;
          param_1[0x24] = 0;
        }
        goto LAB_0802ea54;
      }
      if (bVar8 == 0) {
        uVar7 = 0xa0000;
        param_1[0x23] = 0;
        goto LAB_0802ea52;
      }
    }
LAB_0802ea56:
    piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar16 = (undefined4 *)piVar9[1];
    for (puVar13 = (undefined4 *)*piVar9; puVar13 != puVar16; puVar13 = puVar13 + 1) {
      cVar2 = func_0x08008cd0(*puVar13);
      if (cVar2 == '\0') goto LAB_0802ea82;
    }
  }
  else if (iVar3 < 2) {
    if (iVar3 != 0) {
      return in_lr;
    }
    *(undefined1 *)puStack_28 = 0xb;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x27] = 0x150000;
    bVar8 = *pbStack_2c;
    uVar7 = _DAT_0802e9a8;
    if (bVar8 == 1) {
LAB_0802e9ae:
      param_1[0x25] = 0;
      param_1[0x26] = uVar7;
LAB_0802e9b2:
      param_1[0x28] = 0;
    }
    else {
      if (1 < bVar8) {
        if (bVar8 == 2) {
          param_1[0x25] = _DAT_0802e994;
          param_1[0x26] = 0;
        }
        else {
          if (bVar8 != 3) goto LAB_0802e9b4;
          param_1[0x25] = _DAT_0802e9a0;
          param_1[0x26] = 0;
        }
        goto LAB_0802e9b2;
      }
      uVar7 = _DAT_0802e9e4;
      if (bVar8 == 0) goto LAB_0802e9ae;
    }
LAB_0802e9b4:
    piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar16 = (undefined4 *)piVar9[1];
    for (puVar13 = (undefined4 *)*piVar9; puVar13 != puVar16; puVar13 = puVar13 + 1) {
      cVar2 = func_0x08008cd0(*puVar13);
      if (cVar2 == '\0') goto LAB_0802ea82;
    }
  }
  else {
    if (iVar3 == 2) {
      return in_lr;
    }
    if (iVar3 != 3) {
      return in_lr;
    }
    *(undefined1 *)puStack_28 = 0xc;
    func_0x0802a7d8(param_1);
    func_0x0800f390(param_1[0xe] + 0x54);
    iVar3 = param_1[0xd] + _DAT_0802eb10;
    func_0801FE94(&uStack_9c,param_1);
    memcpy(iVar3,&uStack_9c,6);
    func_0x080d3914((int *)*param_1,0x4b,*(undefined4 *)(*(int *)*param_1 + 0x38));
    iVar3 = func_0x080d3914((int *)*param_1,0x4b,*(undefined4 *)(*(int *)*param_1 + 0x40));
    if (iVar3 == 0) {
      return in_lr;
    }
    func_0x080380ec(iVar3,*pbStack_2c);
    piVar9 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
    puVar16 = (undefined4 *)piVar9[1];
    for (puVar13 = (undefined4 *)*piVar9; puVar13 != puVar16; puVar13 = puVar13 + 1) {
      cVar2 = func_0x08008cd0(*puVar13);
      if (cVar2 == '\0') goto LAB_0802ea82;
    }
  }
  uVar7 = puVar16[-1];
LAB_0802eb06:
  func_08008B6C(uVar7,0x6c);
  return in_lr;
LAB_0802e57e:
  uVar7 = *puVar13;
LAB_0802e5fa:
  func_08008B6C(uVar7,0x6e);
  goto case_0802E7BA;
LAB_0802ea82:
  uVar7 = *puVar13;
  goto LAB_0802eb06;
}

// =============================================================================
// Function: func_0802EC00 @ 0x0802EC00
// =============================================================================
undefined4 func_0802EC00(undefined4 *param_1,ushort *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 in_lr;
  byte abStack_34 [4];
  undefined1 auStack_30 [8];
  uint uStack_28;
  uint uStack_24;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  cVar1 = *(char *)((int)param_1 + 0xc3);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xf) = cVar1;
    *(undefined2 *)((int)param_1 + 0xa6) = 0;
    *(char *)((int)param_1 + 0xc3) = '\0';
    func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x6c));
    return in_lr;
  }
  cVar1 = func_0802AEA4(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0x35;
    *(undefined2 *)((int)param_1 + 0xa6) = 0;
    return in_lr;
  }
  iVar9 = param_1[0xe] + 0x54;
  cVar1 = func_0800F190(iVar9);
  if ((cVar1 != '\0') || (iVar3 = func_0x0800f204(iVar9), iVar3 != 5)) goto LAB_0802eda2;
  iVar3 = func_0800F360(iVar9);
  if (iVar3 != _DAT_0802eca0) {
    if (_DAT_0802eca0 < iVar3) {
      if (iVar3 != 0x18c) {
        if (iVar3 < 0x18d) {
          if (iVar3 != 0x167) {
            if (iVar3 < 0x168) {
              if (iVar3 == 0x15f) {
                piVar15 = (int *)func_0x080d3910((int *)*param_1,
                                                 *(undefined4 *)(*(int *)*param_1 + 0x14c));
                puVar12 = (undefined4 *)*piVar15;
                puVar14 = (undefined4 *)piVar15[1];
                do {
                  if (puVar12 == puVar14) {
                    uVar7 = puVar14[-1];
LAB_0802ed44:
                    func_08008B6C(uVar7,0xb6);
                    func_0x0800f390(param_1[0xe] + 0x54);
                    param_1[0x23] = _DAT_0802ed74;
                    param_1[0x24] = 0;
                    param_1[0x27] = 0x110000;
                    *(undefined1 *)(param_1 + 0xf) = 0x2f;
                    *(undefined2 *)((int)param_1 + 0xa6) = 0;
                    *(undefined1 *)((int)param_1 + 0x3d) = 0x78;
                    return in_lr;
                  }
                  cVar1 = func_0x08008cd0(*puVar12);
                  if (cVar1 == '\0') {
                    uVar7 = *puVar12;
                    goto LAB_0802ed44;
                  }
                  puVar12 = puVar12 + 1;
                } while( true );
              }
              goto LAB_0802eda2;
            }
            iVar4 = 0x180;
LAB_0802ecea:
            if (iVar3 != iVar4) goto LAB_0802eda2;
            goto LAB_0802ed78;
          }
        }
        else {
          if (iVar3 == 0x1a6) goto LAB_0802ed78;
          iVar4 = _DAT_0802ecf8;
          if (iVar3 < 0x1a7) {
            iVar4 = 0x191;
            goto LAB_0802ecea;
          }
LAB_0802ecf2:
          if (iVar3 != iVar4) goto LAB_0802eda2;
        }
LAB_0802ed82:
        uVar2 = 0x39;
        goto LAB_0802ed8a;
      }
    }
    else if (iVar3 != 0x6b) {
      if (iVar3 < 0x6c) {
        if ((iVar3 != 0xb) && (iVar3 != 0x62)) {
LAB_0802eda2:
          pbVar5 = (byte *)((int)param_1 + 0x3e);
          if ((*pbVar5 == 0) && (cVar1 = func_0800F190(iVar9), cVar1 != '\0')) {
            puVar6 = (ushort *)((int)param_1 + 0xa6);
            if (600 < *puVar6) {
              *(undefined1 *)(param_1 + 0xf) = 0x17;
              *puVar6 = 0;
              return in_lr;
            }
            *puVar6 = *puVar6 + 1;
          }
          else {
            *(undefined2 *)((int)param_1 + 0xa6) = 0;
          }
          puVar6 = (ushort *)((int)param_1 + 0xa6);
          if (*pbVar5 == 0) {
            *(undefined1 *)(param_1 + 0x31) = 0;
          }
          else if (*pbVar5 < 3) {
            *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x01';
          }
          uStack_24 = 0;
          uStack_28 = 0;
          if (param_2 != (ushort *)0x0) {
            uStack_24 = (uint)*param_2;
            uStack_28 = (uint)param_2[2];
          }
          *pbVar5 = 0;
          if ((uStack_28 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xf) = 1;
            *puVar6 = 0;
            goto LAB_0802efa2;
          }
          if ((uStack_28 & 2) != 0) {
            *(undefined1 *)(param_1 + 0xf) = 2;
            *puVar6 = (ushort)uStack_28 & 1;
            cVar1 = func_0800F190(param_1[0xe] + 0x54);
            if (cVar1 != '\0') {
              func_0802C984(param_1);
            }
            goto LAB_0802efa2;
          }
          if ((uStack_28 & 0x200) != 0) {
            *(undefined1 *)(param_1 + 0xf) = 3;
            *puVar6 = (ushort)uStack_28 & 2;
            goto LAB_0802efa2;
          }
          if ((uStack_24 & 0x1ff) >> 8 == 0 &&
              ((uStack_24 & 0x1f) >> 4 == 0 &&
              ((uStack_24 & 0x3f) >> 5 == 0 &&
              ((uStack_24 & 0x7f) >> 6 == 0 && (uStack_24 & 0xff) >> 7 == 0)))) goto LAB_0802efa2;
          pbVar8 = (byte *)(param_1 + 8);
          if ((uStack_24 & 0x20) == 0) {
            if ((uStack_24 & 0x10) == 0) {
              if ((uStack_24 & 0x40) == 0) {
                bVar13 = *pbVar8;
                if ((uStack_24 & 0x80) != 0) {
                  bVar13 = 0;
                }
              }
              else {
                bVar13 = 1;
              }
            }
            else {
              bVar13 = 3;
            }
          }
          else {
            bVar13 = 2;
          }
          if (bVar13 != *pbVar8) {
            *(undefined1 *)((int)param_1 + 0xb3) = 0;
            uVar10 = 0x2b;
            do {
              iVar9 = func_0x080d3914((int *)*param_1,uVar10,
                                      *(undefined4 *)(*(int *)*param_1 + 0x40));
              if (iVar9 != 0) {
                func_0x080d3910(iVar9,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x40));
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < 0x46);
          }
          if (*pbVar8 != bVar13) {
            func_08032198(param_1,bVar13);
          }
          bVar13 = *pbVar8;
          if (bVar13 == 1) {
            uVar10 = 0;
            uVar11 = 0xff;
          }
          else if (bVar13 < 2) {
            if (bVar13 == 0) {
              uVar10 = 0;
              uVar11 = 1;
            }
            else {
LAB_0802ef36:
              uVar10 = 0xff;
              uVar11 = 0;
            }
          }
          else {
            if ((bVar13 == 2) || (bVar13 != 3)) goto LAB_0802ef36;
            uVar10 = 1;
            uVar11 = 0;
          }
          if ((*(byte *)(param_1[0xd] + _DAT_0802ef6c) & 1) == 0) {
            if ((uStack_24 & 0x100) != 0) goto LAB_0802ef7e;
LAB_0802ef92:
            *pbVar5 = 1;
          }
          else {
            if ((uStack_24 & 0x100) != 0) goto LAB_0802ef92;
LAB_0802ef7e:
            *pbVar5 = 2;
            uVar10 = (uVar10 & 0x7f) << 1;
            uVar11 = (uVar11 & 0x7f) << 1;
          }
          param_1[6] = (int)(uVar10 << 0x18) >> 8;
          param_1[7] = (int)(uVar11 << 0x18) >> 8;
LAB_0802efa2:
          memcpy(abStack_34,_DAT_0802f038,3);
          if ((abStack_34[*pbVar5] != 0) && (abStack_34[*pbVar5] <= *(byte *)(param_1 + 0x31))) {
            *(byte *)(param_1 + 0x31) = 0;
            piVar15 = (int *)*param_1;
            iVar9 = *piVar15;
            func_0801FE94(auStack_30,param_1);
            cVar1 = func_0x080d3914(piVar15,auStack_30,*(undefined4 *)(iVar9 + 0x120));
            if (cVar1 == '\0') {
              piVar15 = (int *)func_0x080d3910((int *)*param_1,
                                               *(undefined4 *)(*(int *)*param_1 + 0x14c));
              puVar14 = (undefined4 *)piVar15[1];
              for (puVar12 = (undefined4 *)*piVar15; puVar12 != puVar14; puVar12 = puVar12 + 1) {
                cVar1 = func_0x08008cd0(*puVar12);
                if (cVar1 == '\0') {
                  uVar7 = *puVar12;
                  goto LAB_0802f0a8;
                }
              }
              uVar7 = puVar14[-1];
LAB_0802f0a8:
              func_08008B6C(uVar7,0xd0);
            }
            else {
              if (param_1[4] != 0) {
                func_0802B46C();
              }
              iVar9 = func_0800E324(param_1[0xd] + 0x10);
              if (iVar9 == 3) {
                piVar15 = (int *)func_0x080d3910((int *)*param_1,
                                                 *(undefined4 *)(*(int *)*param_1 + 0x14c));
                puVar14 = (undefined4 *)piVar15[1];
                for (puVar12 = (undefined4 *)*piVar15; puVar12 != puVar14; puVar12 = puVar12 + 1) {
                  cVar1 = func_0x08008cd0(*puVar12);
                  if (cVar1 == '\0') {
                    uVar7 = *puVar12;
                    goto LAB_0802f06e;
                  }
                }
                uVar7 = puVar14[-1];
LAB_0802f06e:
                func_08008B6C(uVar7,0xd1);
              }
              else {
                piVar15 = (int *)func_0x080d3910((int *)*param_1,
                                                 *(undefined4 *)(*(int *)*param_1 + 0x14c));
                puVar14 = (undefined4 *)piVar15[1];
                for (puVar12 = (undefined4 *)*piVar15; puVar12 != puVar14; puVar12 = puVar12 + 1) {
                  cVar1 = func_0x08008cd0(*puVar12);
                  if (cVar1 == '\0') {
                    uVar7 = *puVar12;
                    goto LAB_0802f02e;
                  }
                }
                uVar7 = puVar14[-1];
LAB_0802f02e:
                func_08008B6C(uVar7,0xd0);
              }
            }
          }
          if (*(short *)(param_1 + 9) != 0) {
            return in_lr;
          }
          if (*pbVar5 == 1) {
            func_0802AD80(param_1);
            return in_lr;
          }
          if (*pbVar5 != 2) {
            return in_lr;
          }
          func_0802AD80(param_1);
          func_0802AD80(param_1);
          return in_lr;
        }
      }
      else if (iVar3 != 0xf7) {
        if (0xf7 < iVar3) {
          iVar4 = 0x122;
          goto LAB_0802ecf2;
        }
        if (iVar3 == 0xd6) goto LAB_0802ed82;
        goto LAB_0802eda2;
      }
    }
  }
LAB_0802ed78:
  uVar2 = 0x38;
LAB_0802ed8a:
  *(undefined1 *)(param_1 + 0xf) = uVar2;
  *(undefined2 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0x1e;
  func_0x0800f390(param_1[0xe] + 0x54);
  return in_lr;
}

// =============================================================================
// Function: func_08031F30 @ 0x08031F30
// =============================================================================
undefined4 func_08031F30(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(*(int **)*param_1,*(undefined4 *)(**(int **)*param_1 + 0x68));
  func_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined1 *)((int)param_1 + 0xcb) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_08031F68 @ 0x08031F68
// =============================================================================
undefined4 func_08031F68(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(*(int **)*param_1,*(undefined4 *)(**(int **)*param_1 + 100));
  func_0805E850(param_1 + 0x2d,uVar1,param_2);
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined1 *)((int)param_1 + 0xcb) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_08031FA0 @ 0x08031FA0
// =============================================================================
undefined8 func_08031FA0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)((int)param_1 + 0xb2) - 0x2b < 0x1b) {
    uVar1 = func_0x080d3914((int *)*param_1,(uint)*(byte *)((int)param_1 + 0xb2),
                            *(undefined4 *)(*(int *)*param_1 + 0x40));
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08031FCC @ 0x08031FCC
// =============================================================================
undefined8 func_08031FCC(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(param_2 - 0x2bU < 0x1b));
}

// =============================================================================
// Function: func_08031FDC @ 0x08031FDC
// =============================================================================
undefined4 func_08031FDC(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_3 == 1) {
    iVar1 = *param_2;
    *param_2 = -param_2[1];
    param_2[1] = -iVar1;
  }
  else if (param_3 < 2) {
    if (param_3 == 0) {
      iVar1 = *param_2;
      *param_2 = param_2[1];
      param_2[1] = iVar1;
    }
  }
  else if (param_3 == 2) {
    *param_2 = -*param_2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803205C @ 0x0803205C
// =============================================================================
undefined8 func_0803205C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x3c) == '\a') || (*(char *)(param_1 + 0x3c) == '-')) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08032090 @ 0x08032090
// =============================================================================
undefined8 func_08032090(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int iStack_18;
  uint uStack_14;
  
  func_0x080d3918(&iStack_18,param_1,param_2,*(undefined4 *)(*param_1 + 0xc));
  iVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (iStack_18 != 0) {
    uVar1 = uStack_14 & 0xffff;
  }
  if (uVar1 != 0) {
    do {
      iVar3 = iVar3 + (uint)*(ushort *)(iStack_18 + 2);
      iStack_18 = iStack_18 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: Entity_UpdatePositions @ 0x080320DC
// =============================================================================
undefined8
Entity_UpdatePositions(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 param_5)

{
  undefined4 in_lr;
  
  func_0x0801fd78();
  *(undefined4 *)(param_1 + 0x14) = _DAT_08032118;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_3 + 6);
  *(undefined1 *)(param_1 + 0x21) = param_4;
  func_0x08032300(param_1 + 0x28);
  func_080321B0(param_1,param_5);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0803211C @ 0x0803211C
// =============================================================================
undefined4 func_0803211C(int param_1,ushort *param_2)

{
  undefined4 in_lr;
  
  func_0801FE78(param_1,*param_2 & 0x3ff,
                (int)(short)((ushort)((param_2[1] & _DAT_0803216c) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 1) >> 2)),
                (int)(short)((ushort)((param_2[2] & _DAT_0803216c) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 3) >> 2)));
  if (*(char *)(param_1 + 0x20) != (char)param_2[3]) {
    func_08032198(param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_08032170 @ 0x08032170
// =============================================================================
undefined8 func_08032170(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  func_0801FE94(auStack_14);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  memcpy(param_1,auStack_14,6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08032198 @ 0x08032198
// =============================================================================
undefined4 func_08032198(int param_1,byte param_2)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x20) = param_2;
  func_080321C8(param_1,(uint)*(ushort *)(param_1 + 0x22) + (uint)*(byte *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_080321B0 @ 0x080321B0
// =============================================================================
undefined4 func_080321B0(int param_1,undefined2 param_2)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x22) = param_2;
  func_080321C8(param_1,(uint)*(ushort *)(param_1 + 0x22) + (uint)*(byte *)(param_1 + 0x20));
  return in_lr;
}

// =============================================================================
// Function: func_080321C8 @ 0x080321C8
// =============================================================================
undefined4 func_080321C8(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    func_0805E860(iVar3 + 0x30);
    *(undefined1 *)(iVar3 + 0x44) = 1;
    *(undefined1 *)(iVar3 + 0x46) = 0;
    *(undefined1 *)(iVar3 + 0x47) = 1;
  }
  uVar2 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x68));
  uVar1 = func_08032090(uVar2,param_2);
  *(undefined2 *)(param_1 + 9) = uVar1;
  *(undefined2 *)((int)param_1 + 0x26) = uVar1;
  return in_lr;
}

// =============================================================================
// Function: func_08032208 @ 0x08032208
// =============================================================================
undefined4 func_08032208(undefined4 *param_1)

{
  undefined2 uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_lr;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  int iStack_24;
  
  if ((param_1[6] == 0) && (param_1[7] == 0)) {
    return in_lr;
  }
  piVar8 = (int *)*param_1;
  uVar1 = *(undefined2 *)(param_1 + 1);
  iVar7 = param_1[2];
  iVar6 = param_1[3];
  iVar5 = param_1[6] + iVar7;
  iVar9 = iVar6 + param_1[7];
  if (iVar5 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = func_0x080d3914(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x2c));
    iVar4 = iVar4 * 0x10000;
    if (iVar5 <= iVar4) goto LAB_08032252;
  }
  iVar5 = iVar4;
LAB_08032252:
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else {
    iVar4 = func_0x080d3914(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x30));
    if (iVar4 * 0x10000 < iVar9) {
      iVar9 = iVar4 * 0x10000;
    }
  }
  iStack_24 = (iVar5 >> 0x10) - (iVar7 >> 0x10);
  sVar2 = (short)((uint)iVar9 >> 0x10) - (short)((uint)iVar6 >> 0x10);
  func_0x080d3914(&uStack_3c,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_34 = uStack_3c;
  uStack_30 = uStack_38;
  func_0x080d3918(auStack_48,piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x34));
  cVar3 = func_080AC070(auStack_48,&uStack_34);
  if (cVar3 == '\0') {
    sStack_2c = (short)iStack_24 + (short)uStack_34;
    sStack_2a = uStack_34._2_2_ + sVar2;
    sStack_28 = (short)iStack_24 + (short)uStack_30;
    sStack_26 = uStack_30._2_2_ + sVar2;
    cVar3 = func_080AC070(auStack_48);
    if (cVar3 == '\x01') {
      return in_lr;
    }
  }
  param_1[2] = iVar5;
  param_1[3] = iVar9;
  return in_lr;
}

// =============================================================================
// Function: func_08032308 @ 0x08032308
// =============================================================================
undefined4 func_08032308(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 8) = (int)*(short *)(param_1 + 10) << 0x10;
  if ((param_3 == 0) || (param_2 == *(short *)(param_1 + 10))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    *(int *)(param_1 + 0x28) = param_3;
    *(short *)(param_1 + 0x2c) = (short)param_2;
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803233C @ 0x0803233C
// =============================================================================
undefined4 func_0803233C(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 0xe) << 0x10;
  if ((param_3 == 0) || (param_2 == *(short *)(param_1 + 0xe))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    *(int *)(param_1 + 0x28) = param_3;
    *(short *)(param_1 + 0x2c) = (short)param_2;
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08032370 @ 0x08032370
// =============================================================================
undefined8 func_08032370(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(int *)(param_1 + 0x28) == 0));
}

// =============================================================================
// Function: func_08032384 @ 0x08032384
// =============================================================================
undefined4 func_08032384(int param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    func_0805E860(iVar2 + 0x70);
    *(undefined1 *)(iVar2 + 0x84) = 1;
    *(undefined1 *)(iVar2 + 0x86) = 0;
    *(undefined1 *)(iVar2 + 0x87) = 1;
    bVar1 = 1;
    if (param_3 != '\0') {
      bVar1 = 2;
    }
    *(byte *)(iVar2 + 0x8a) = *(byte *)(iVar2 + 0x8a) & 0xfc | bVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080323C8 @ 0x080323C8
// =============================================================================
undefined4 func_080323C8(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x10) + 0x8a);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080323E0 @ 0x080323E0
// =============================================================================
undefined4 func_080323E0(int param_1,undefined1 param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x88) = param_2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080323F0 @ 0x080323F0
// =============================================================================
undefined4 func_080323F0(int param_1,char param_2)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x10) + 0x8a);
    *pbVar1 = *pbVar1 & 3 | param_2 << 2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803240C @ 0x0803240C
// =============================================================================
void func_0803240C(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -7;
  param_1[1] = sVar2 + -4;
  param_1[2] = sVar1 + 7;
  param_1[3] = sVar2 + 5;
  return;
}

// =============================================================================
// Function: func_0803242C @ 0x0803242C
// =============================================================================
undefined4 func_0803242C(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  bool bVar6;
  
  if (*(short *)(param_1 + 0x24) == 0) {
    sVar1 = *(short *)(param_1 + 0x26);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x24) + -1;
  }
  *(short *)(param_1 + 0x24) = sVar1;
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) goto LAB_080324a6;
  bVar6 = *(char *)(param_1 + 0x2e) != '\0';
  if (bVar6) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  iVar4 = iVar2 >> 0x10;
  iVar5 = (int)*(short *)(param_1 + 0x2c);
  if (iVar5 == iVar4) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    goto LAB_080324a6;
  }
  if (iVar5 - iVar4 < 1) {
    iVar3 = -iVar3;
  }
  iVar2 = iVar2 + iVar3;
  if (iVar2 >> 0x10 != iVar4) {
    iVar3 = iVar5 - (iVar2 >> 0x10);
    if (iVar5 - iVar4 < 1) {
      if (-1 < iVar3) goto LAB_08032496;
    }
    else if (iVar3 < 1) {
LAB_08032496:
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  if (bVar6) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  else {
    *(int *)(param_1 + 8) = iVar2;
  }
LAB_080324a6:
  func_0801FE60(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080324BC @ 0x080324BC
// =============================================================================
undefined8
func_080324BC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,char param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = _DAT_0803255c;
  uVar1 = func_0x080d3910((int *)*param_2,*(undefined4 *)(*(int *)*param_2 + 0x68));
  func_080A4A00(param_1 + 2,uVar1,
                (uint)*(ushort *)((int)param_2 + 0x22) + (uint)*(byte *)(param_2 + 8),*param_2,
                param_3,param_4,param_8);
  uVar1 = func_0x080d3910((int *)*param_2,*(undefined4 *)(*(int *)*param_2 + 0x6c));
  func_080A4A00(param_1 + 0x12,uVar1,0,*param_2,2,0xe,0);
  *(undefined1 *)(param_1 + 0x22) = param_5;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  *(char *)((int)param_1 + 0x8a) = param_6 << 2;
  *(undefined1 *)((int)param_1 + 0x8b) = param_7;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08032560 @ 0x08032560
// =============================================================================
undefined8
func_08032560(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             uint param_5,undefined1 param_6,char param_7,undefined1 param_8,undefined1 param_9)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = _DAT_08032608;
  uVar1 = func_0x080d3910((int *)*param_2,*(undefined4 *)(*(int *)*param_2 + 0x68));
  func_080A49A0(param_1 + 2,uVar1,
                (uint)*(ushort *)((int)param_2 + 0x22) + (uint)*(byte *)(param_2 + 8),*param_2,
                param_3,param_4,param_5,param_9);
  uVar1 = func_0x080d3910((int *)*param_2,*(undefined4 *)(*(int *)*param_2 + 0x6c));
  func_080A4A00(param_1 + 0x12,uVar1,0,*param_2,2,0xe,param_5 & 0xffffff00);
  *(undefined1 *)(param_1 + 0x22) = param_6;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  *(char *)((int)param_1 + 0x8a) = param_7 << 2;
  *(undefined1 *)((int)param_1 + 0x8b) = param_8;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0803260C @ 0x0803260C
// =============================================================================
void func_0803260C(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  pcVar5 = (char *)(param_1 + 0x47);
  if (*pcVar5 == '\0') {
    iVar4 = func_0805E8F0(param_1 + 0x30);
    if (-1 < iVar4 * 0x40000000) goto LAB_08032634;
    pcVar5 = (char *)(param_1 + 0x44);
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  *pcVar5 = cVar3;
LAB_08032634:
  pbVar6 = (byte *)(param_1 + 0x8a);
  bVar1 = *pbVar6;
  if ((bVar1 & 3) != 0) {
    bVar2 = false;
    if (*(char *)(param_1 + 0x87) == '\0') {
      iVar4 = func_0805E8F0(param_1 + 0x70);
      if (iVar4 * 0x40000000 < 0) {
        *(undefined1 *)(param_1 + 0x84) = 1;
      }
    }
    else {
      *(char *)(param_1 + 0x87) = '\0';
      iVar4 = 2;
    }
    if ((iVar4 * 0x20000000 < 0) && ((bVar1 & 3) != 2)) {
      bVar2 = true;
    }
    if (bVar2) {
      *pbVar6 = *pbVar6 & 0xfc;
    }
  }
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_08032900 @ 0x08032900
// =============================================================================
undefined8 func_08032900(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1 == 2) {
    if (((_DAT_08032924 < (uint)(param_2 + _DAT_08032920)) || (param_3 < 0xb0)) ||
       ((int)(_DAT_08032924 - 0x60) < param_3)) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08032934 @ 0x08032934
// =============================================================================
void func_08032934(int param_1,undefined4 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  Entity_UpdatePositions(param_1,param_2,param_3,2,*(undefined2 *)(param_3 + 8));
  *(undefined4 *)(param_1 + 0x14) = _DAT_08032958;
  *(int *)(param_1 + 0x30) = param_3;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_080329B4 @ 0x080329B4
// =============================================================================
void func_080329B4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_08032A00(uVar1,param_1);
  return;
}

// =============================================================================
// Function: func_080329DC @ 0x080329DC
// =============================================================================
void func_080329DC(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -7;
  param_1[1] = sVar2 + -10;
  param_1[2] = sVar1 + 7;
  param_1[3] = sVar2 + 4;
  return;
}

// =============================================================================
// Function: func_08032A00 @ 0x08032A00
// =============================================================================
void func_08032A00(int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_080324BC(param_1,param_2,6,0x20,1,0,0,0);
  *(undefined4 *)(param_1 + 4) = _DAT_08032a2c;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08032A30 @ 0x08032A30
// =============================================================================
undefined4 func_08032A30(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0x24) == 0) {
    sVar1 = *(short *)(param_1 + 0x26);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x24) + -1;
  }
  *(short *)(param_1 + 0x24) = sVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08032A58 @ 0x08032A58
// =============================================================================
void func_08032A58(int param_1)

{
  func_0805E894(param_1 + 0x30);
  return;
}

// =============================================================================
// Function: func_08032A64 @ 0x08032A64
// =============================================================================
undefined8 func_08032A64(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x3e) != 0) {
    uVar1 = (uint)(-(int)*(short *)(param_1 + 0x40) | (int)*(short *)(param_1 + 0x40)) >> 0x1f;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08032AB4 @ 0x08032AB4
// =============================================================================
undefined4 func_08032AB4(int param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  func_0805E860(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x87) = 1;
  bVar1 = 1;
  if (param_3 != '\0') {
    bVar1 = 2;
  }
  *(byte *)(param_1 + 0x8a) = *(byte *)(param_1 + 0x8a) & 0xfc | bVar1;
  return in_lr;
}

// =============================================================================
// Function: func_08032B04 @ 0x08032B04
// =============================================================================
undefined4 func_08032B04(int param_1)

{
  undefined4 in_lr;
  
  func_0805E860(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_08032B2C @ 0x08032B2C
// =============================================================================
undefined8 func_08032B2C(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(short *)(param_1 + 0x24) == 0));
}

// =============================================================================
// Function: func_08032B44 @ 0x08032B44
// =============================================================================
undefined4 func_08032B44(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0x22) != param_2) {
    func_080321B0(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08032B68 @ 0x08032B68
// =============================================================================
undefined4 func_08032B68(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x20) != param_2) {
    func_08032198(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08032BB4 @ 0x08032BB4
// =============================================================================
undefined8
func_08032BB4(uint *param_1,int param_2,int *param_3,uint param_4,int param_5,int param_6,
             byte *param_7)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_lr;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint *puStack_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  short *psStack_24;
  
  uStack_68 = uStack_68 & 0xfffffff0;
  uStack_34 = 0;
  puStack_40 = param_1;
  iStack_3c = param_2;
  uStack_38 = param_4;
  if (param_4 == 0x25) {
    param_2 = param_2 + _DAT_08032c30;
    iVar4 = func_0x0800ce6c(param_2);
    if (iVar4 != 0) {
      uVar10 = 0;
      uStack_30 = 0;
      uVar11 = func_0x0800ce9c(param_2);
      uVar6 = uStack_34;
      while (uVar6 < uVar11) {
        iVar4 = func_0800D1B4(param_2,uVar10);
        cVar2 = func_0800CED4(param_2,uVar10);
        if (cVar2 == '\0') {
          if (-1 < iVar4) {
            func_0x0800d0c0(&uStack_58,param_2,uVar10);
            uStack_54 = uStack_58;
            uVar1 = uStack_54;
            uStack_54._0_2_ = (short)uStack_58;
            uStack_54._2_2_ = (short)((uint)uStack_58 >> 0x10);
            uVar6 = ((short)uStack_54 - param_5) * ((short)uStack_54 - param_5) +
                    (uStack_54._2_2_ - param_6) * (uStack_54._2_2_ - param_6);
            uStack_54 = uVar1;
            if (((uStack_68 & 0xf) == 0) || (uVar6 < uStack_34)) {
              uVar8 = uStack_60 & 0xfffffff0;
              uStack_60._2_2_ = (undefined2)(uVar8 >> 0x10);
              uStack_60 = CONCAT22(uStack_60._2_2_,CONCAT11((char)uVar10,(char)uVar8)) | 5;
              cVar2 = func_0809E968(param_7,&uStack_60);
              if (cVar2 == '\0') {
                uStack_68 = uStack_60;
                uStack_64 = uStack_5c;
                uStack_34 = uVar6;
              }
            }
          }
        }
        else if (iVar4 < 0) {
          uStack_30 = uStack_30 + 1;
        }
        uVar10 = uVar10 + 1;
        uVar6 = uVar10;
      }
      uVar11 = 0;
      uVar10 = func_0800CE74(iStack_3c + _DAT_08032d30);
      uVar6 = 0;
      if (uVar10 != 0) {
        do {
          iVar4 = func_0800CF60(param_2,uVar6);
          if ((((iVar4 != 0) &&
               (iVar5 = func_0x080d3914(param_3,uVar6 + 0x36,*(undefined4 *)(*param_3 + 0x44)),
               iVar5 != 0)) && (*(short *)(iVar5 + 4) == 0x25)) &&
             ((cVar2 = func_0x0809b4fc(iVar4), cVar2 == '\0' &&
              (cVar2 = func_0x0809b8b0(iVar4), cVar2 == '\0')))) {
            uVar11 = uVar11 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar10);
      }
      if (uVar11 != 0) {
        uVar6 = 0;
        uVar8 = 0;
        uStack_2c = uVar10;
        if (uVar10 != 0) {
          do {
            cVar2 = func_0800CEA8(param_2,uVar8);
            if (cVar2 == '\0') {
              if (uVar8 < 0x10) {
                uVar6 = uVar6 | 1 << (uVar8 & 0x1f);
              }
            }
            else {
              uStack_30 = uStack_30 + 1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uStack_2c);
        }
        if (uStack_30 < uVar11) {
          uVar10 = 0;
          pbVar7 = param_7;
          do {
            if ((*pbVar7 & 0xf) == 4) {
              uStack_30 = uStack_30 + 1;
              if (pbVar7[1] < 0x10) {
                uVar6 = uVar6 & ~(1 << (pbVar7[1] & 0x1f));
              }
            }
            pbVar7 = pbVar7 + 8;
            uVar10 = uVar10 + 1;
          } while (uVar10 < 7);
          if ((uStack_30 < uVar11) && (uVar10 = 0, uStack_2c != 0)) {
            psStack_24 = (short *)&uStack_4c;
            do {
              uVar11 = 0;
              if (uVar10 < 0x10) {
                uVar11 = 1 << (uVar10 & 0x1f) & uVar6;
                uVar11 = (-uVar11 | uVar11) >> 0x1f;
              }
              if (uVar11 != 0) {
                func_0800D074(&uStack_50,param_2,uVar10);
                uStack_4c = uStack_50;
                uVar11 = (*psStack_24 - param_5) * (*psStack_24 - param_5) +
                         (psStack_24[1] - param_6) * (psStack_24[1] - param_6);
                if (((uStack_68 & 0xf) == 0) || (uVar11 < uStack_34)) {
                  uVar8 = uStack_60 & 0xfffffff0;
                  uStack_60._2_2_ = (undefined2)(uVar8 >> 0x10);
                  uStack_60 = CONCAT22(uStack_60._2_2_,CONCAT11((char)uVar10,(char)uVar8)) | 4;
                  uStack_68 = uStack_60;
                  uStack_64 = uStack_5c;
                  uStack_34 = uVar11;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uStack_2c);
          }
        }
      }
    }
  }
  if (uStack_38 == 0x11) {
    iVar5 = iStack_3c + 0x3fc;
    iVar4 = func_0x0800c568(iVar5);
    if (iVar4 != 0) {
      uVar10 = func_0800C570(iVar5);
      uVar11 = 0;
      uVar6 = 0;
      if (uVar10 != 0) {
        do {
          iVar4 = func_0800C5CC(iVar5,uVar6);
          if ((((iVar4 != 0) &&
               (iVar3 = func_0x080d3914(param_3,uVar6 + 0x2e,*(undefined4 *)(*param_3 + 0x44)),
               iVar3 != 0)) && (*(short *)(iVar3 + 4) == 0x11)) &&
             (cVar2 = func_0x0809b4fc(iVar4), cVar2 == '\0')) {
            uVar11 = uVar11 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar10);
      }
      if (uVar11 != 0) {
        uVar9 = 0;
        uVar6 = 0;
        uVar8 = 0;
        uStack_28 = uVar10;
        if (uVar10 != 0) {
          do {
            cVar2 = func_0800C598(iVar5,uVar8);
            if (cVar2 == '\0') {
              if (uVar8 < 8) {
                uVar6 = uVar6 | 1 << (uVar8 & 0x1f);
              }
            }
            else {
              uVar9 = uVar9 + 1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uStack_28);
        }
        if (uVar9 < uVar11) {
          uVar10 = 0;
          pbVar7 = param_7;
          do {
            if ((*pbVar7 & 0xf) == 3) {
              uVar9 = uVar9 + 1;
              if (pbVar7[1] < 8) {
                uVar6 = uVar6 & ~(1 << (pbVar7[1] & 0x1f));
              }
            }
            pbVar7 = pbVar7 + 8;
            uVar10 = uVar10 + 1;
          } while (uVar10 < 7);
          if ((uVar9 < uVar11) && (uVar10 = 0, uStack_28 != 0)) {
            psStack_24 = (short *)&uStack_44;
            do {
              uVar11 = 0;
              if (uVar10 < 8) {
                uVar11 = 1 << (uVar10 & 0x1f) & uVar6;
                uVar11 = (-uVar11 | uVar11) >> 0x1f;
              }
              if (uVar11 != 0) {
                func_0800C6F0(&uStack_48,iVar5,uVar10);
                uStack_44 = uStack_48;
                uVar11 = (*psStack_24 - param_5) * (*psStack_24 - param_5) +
                         (psStack_24[1] - param_6) * (psStack_24[1] - param_6);
                if (((uStack_68 & 0xf) == 0) || (uVar11 < uStack_34)) {
                  uVar8 = uStack_60 & 0xfffffff0;
                  uStack_60._2_2_ = (undefined2)(uVar8 >> 0x10);
                  uStack_60 = CONCAT22(uStack_60._2_2_,CONCAT11((char)uVar10,(char)uVar8)) | 3;
                  uStack_68 = uStack_60;
                  uStack_64 = uStack_5c;
                  uStack_34 = uVar11;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uStack_28);
          }
        }
      }
    }
  }
  uVar10 = 0x36;
  do {
    iVar4 = func_0x080d3914(param_3,uVar10,*(undefined4 *)(*param_3 + 0x44));
    if ((((iVar4 != 0) && (*(ushort *)(iVar4 + 4) == uStack_38)) &&
        ((cVar2 = func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x50)),
         cVar2 != '\0' ||
         ((cVar2 = func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x54)),
          cVar2 != '\0' ||
          (cVar2 = func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x58)),
          cVar2 != '\0')))))) &&
       ((iVar5 = *(short *)(iVar4 + 10) - param_5, iVar4 = *(short *)(iVar4 + 0xe) - param_6,
        uVar6 = iVar5 * iVar5 + iVar4 * iVar4, (uStack_68 & 0xf) == 0 || (uVar6 < uStack_34)))) {
      uVar11 = uStack_60 & 0xfffffff0;
      uStack_60._2_2_ = (undefined2)(uVar11 >> 0x10);
      uStack_60 = CONCAT22(uStack_60._2_2_,CONCAT11((char)uVar10 + -0x36,(char)uVar11)) | 6;
      cVar2 = func_0809E968(param_7,&uStack_60);
      if (cVar2 == '\0') {
        uStack_68 = uStack_60;
        uStack_64 = uStack_5c;
        uStack_34 = uVar6;
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x46);
  uVar10 = 0x2e;
  do {
    func_0x080d3914(param_3,uVar10,*(undefined4 *)(*param_3 + 0x44));
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x36);
  uVar10 = 0x4c;
  do {
    iVar4 = func_0x080d3914(param_3,uVar10,*(undefined4 *)(*param_3 + 0x44));
    if (((iVar4 != 0) && (*(ushort *)(iVar4 + 4) == uStack_38)) &&
       ((iVar5 = *(short *)(iVar4 + 10) - param_5, iVar4 = *(short *)(iVar4 + 0xe) - param_6,
        uVar6 = iVar5 * iVar5 + iVar4 * iVar4, (uStack_68 & 0xf) == 0 || (uVar6 < uStack_34)))) {
      uVar11 = uStack_60 & 0xfffffff0;
      uStack_60._2_2_ = (undefined2)(uVar11 >> 0x10);
      uStack_60 = CONCAT22(uStack_60._2_2_,CONCAT11((char)uVar10 + -0x4c,(char)uVar11)) | 8;
      cVar2 = func_0809E968(param_7,&uStack_60);
      if (cVar2 == '\0') {
        uStack_68 = uStack_60;
        uStack_64 = uStack_5c;
        uStack_34 = uVar6;
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x54);
  *puStack_40 = uStack_68;
  puStack_40[1] = uStack_64;
  return CONCAT44(in_lr,puStack_40);
}

// =============================================================================
// Function: func_080330F4 @ 0x080330F4
// =============================================================================
undefined8
func_080330F4(uint *param_1,int param_2,undefined4 param_3,ushort *param_4,int param_5,
             undefined4 param_6)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 in_lr;
  uint uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_70;
  undefined1 uStack_6c;
  undefined1 auStack_6b [3];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint *puStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  uint uStack_34;
  short *psStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  uStack_80 = uStack_80 & 0xfffffff0;
  iStack_44 = (int)(short)((ushort)((param_4[1] & _DAT_08033150) << 6) |
                          (ushort)(*(byte *)((int)param_4 + 1) >> 2));
  iVar5 = (int)(short)((ushort)((param_4[2] & _DAT_08033150) << 6) |
                      (ushort)(*(byte *)((int)param_4 + 3) >> 2));
  puStack_48 = param_1;
  if (param_5 == 1) {
    uStack_34 = 0;
    param_2 = _DAT_08033338 + param_2;
    uVar14 = 0;
    do {
      uVar13 = 0;
      uVar10 = uVar14 + 1;
      iVar12 = 0x118 - iStack_44;
      do {
        uVar9 = *(uint *)((uVar13 + uVar14 * 0x2b) * 4 + param_2);
        uVar11 = 0;
        if (((uVar9 & 3) == 1) && (((uVar9 & 0xfff) >> 8) - 1 < 4)) {
          uVar11 = -((uVar9 & 0xff) >> 2 ^ 0x14) >> 0x1f;
        }
        if ((uVar11 != 0) &&
           ((iVar8 = (uVar14 * 0x10 + 0xb8) - iVar5, uStack_24 = iVar12 * iVar12 + iVar8 * iVar8,
            (uStack_80 & 0xf) == 0 || (uStack_24 < uStack_34)))) {
          uVar9 = uStack_78 & 0xfffffff0;
          uStack_78._3_1_ = (undefined1)(uVar9 >> 0x18);
          uStack_78 = CONCAT13(uStack_78._3_1_,
                               CONCAT12((char)uVar14,CONCAT11((char)uVar13,(char)uVar9))) | 1;
          cVar3 = func_0809E968(param_6,&uStack_78);
          if (cVar3 == '\0') {
            uStack_80 = uStack_78;
            uStack_7c = uStack_74;
            uStack_34 = uStack_24;
          }
        }
        iVar12 = iVar12 + 0x10;
        uVar13 = uVar13 + 1;
      } while (uVar13 < 0x2b);
      uVar14 = uVar10;
    } while (uVar10 < 0x19);
    goto LAB_0803356a;
  }
  if (param_5 < 2) {
    if (param_5 == 0) {
      uStack_40 = 0;
      iStack_3c = param_2 + _DAT_080331f4;
      puStack_38 = &uStack_6c;
      uVar14 = 0;
      do {
        uVar10 = 0;
        iStack_28 = uVar14 << 1;
        uStack_2c = uVar14 + 1;
        iVar12 = 0x118 - iStack_44;
        do {
          iVar8 = (iStack_28 + 0x17) * 8 - iVar5;
          uVar13 = iVar12 * iVar12 + iVar8 * iVar8;
          if (((uStack_80 & 0xf) == 0) || (uVar13 < uStack_40)) {
            uVar9 = *(uint *)(iStack_3c + (uVar10 + uVar14 * 0x2b) * 4);
            if ((uVar9 & 0xfff) >> 8 == 5) {
              uStack_70 = uVar9;
              Field_HarvestCrop(&uStack_78,&uStack_70);
              cVar3 = func_0800F06C(&uStack_78);
              if (cVar3 != '\0') goto LAB_080331ee;
              iVar8 = func_0x0800f09c(&uStack_78);
              if (iVar8 == 0) {
                func_0800F0A4(&uStack_74,&uStack_78);
                func_0x0800e0fc(puStack_38,uStack_74 & 0xffffff);
                puVar7 = puStack_38;
              }
              else {
                if (iVar8 != 1) goto LAB_080331ee;
                uVar6 = func_0800F0E8(&uStack_78);
                func_0800E148(auStack_6b,uVar6);
                puVar7 = auStack_6b;
              }
              uVar9 = func_0800E198(puVar7);
              uVar9 = (-uVar9 | uVar9) >> 0x1f;
            }
            else {
LAB_080331ee:
              uVar9 = 0;
            }
            if (uVar9 != 0) {
              uVar9 = uStack_78 & 0xfffffff0;
              uStack_78._3_1_ = (undefined1)(uVar9 >> 0x18);
              uStack_78 = CONCAT13(uStack_78._3_1_,
                                   CONCAT12((char)uVar14,CONCAT11((char)uVar10,(char)uVar9))) | 2;
              cVar3 = func_0809E968(param_6,&uStack_78);
              if (cVar3 == '\0') {
                uStack_80 = uStack_78;
                uStack_7c = uStack_74;
                uStack_40 = uVar13;
              }
            }
          }
          iVar12 = iVar12 + 0x10;
          uVar10 = uVar10 + 1;
        } while (uVar10 < 0x2b);
        uVar14 = uStack_2c;
      } while (uStack_2c < 0x19);
    }
    goto LAB_0803356a;
  }
  if (param_5 != 2) goto LAB_0803356a;
  func_0x08009adc(&uStack_68);
  uStack_64 = uStack_68;
  func_0x08009ae8(&uStack_60);
  uStack_5c = uStack_60;
  func_0x0800ce58(&uStack_58);
  uStack_54 = uStack_58;
  psStack_30 = (short *)&uStack_54;
  func_0x0800c554(&uStack_50);
  uStack_4c = uStack_50;
  uVar4 = *param_4 & 0x3ff;
  if (uVar4 == 0x11) {
    func_08032BB4(&uStack_78,param_2,param_3,0x11,iStack_44,iVar5,param_6);
    uStack_80 = uStack_78;
    uStack_7c = uStack_74;
    if ((uStack_78 & 0xf) == 0) {
      func_08032BB4(&uStack_78,param_2,param_3,2,(int)(short)uStack_5c,(int)uStack_5c._2_2_,param_6)
      ;
      uStack_80 = uStack_78;
      uStack_7c = uStack_74;
      if ((uStack_78 & 0xf) == 0) {
        func_08032BB4(&uStack_78,param_2,param_3,0x25,(int)*psStack_30,(int)psStack_30[1],param_6);
        uStack_80 = uStack_78;
        uStack_7c = uStack_74;
      }
    }
    goto LAB_0803356a;
  }
  if (uVar4 < 0x12) {
    if (uVar4 != 2) goto LAB_0803356a;
    func_08032BB4(&uStack_78,param_2,param_3,2,iStack_44,iVar5,param_6);
    uStack_80 = uStack_78;
    uStack_7c = uStack_74;
    if ((uStack_78 & 0xf) != 0) goto LAB_0803356a;
    if ((uint)(((short)uStack_64 - iStack_44) * ((short)uStack_64 - iStack_44) +
              (uStack_64._2_2_ - iVar5) * (uStack_64._2_2_ - iVar5)) <=
        (uint)(((short)uStack_5c - iStack_44) * ((short)uStack_5c - iStack_44) +
              (uStack_5c._2_2_ - iVar5) * (uStack_5c._2_2_ - iVar5))) {
      uVar6 = 0x25;
      sVar1 = *psStack_30;
      sVar2 = psStack_30[1];
      goto LAB_080334ac;
    }
    func_08032BB4(&uStack_78,param_2,param_3,0x11,(int)(short)uStack_4c,(int)uStack_4c._2_2_,param_6
                 );
    uStack_80 = uStack_78;
    uStack_7c = uStack_74;
    if ((uStack_78 & 0xf) != 0) goto LAB_0803356a;
    sVar1 = *psStack_30;
    sVar2 = psStack_30[1];
    uVar6 = 0x25;
  }
  else {
    if (uVar4 != 0x25) goto LAB_0803356a;
    func_08032BB4(&uStack_78,param_2,param_3,0x25,iStack_44,iVar5,param_6);
    uStack_80 = uStack_78;
    uStack_7c = uStack_74;
    if ((uStack_78 & 0xf) != 0) goto LAB_0803356a;
    uVar6 = 2;
    sVar1 = (short)uStack_64;
    sVar2 = uStack_64._2_2_;
LAB_080334ac:
    func_08032BB4(&uStack_78,param_2,param_3,uVar6,(int)sVar1,(int)sVar2,param_6);
    uStack_80 = uStack_78;
    uStack_7c = uStack_74;
    if ((uStack_78 & 0xf) != 0) goto LAB_0803356a;
    uVar6 = 0x11;
    sVar1 = (short)uStack_4c;
    sVar2 = uStack_4c._2_2_;
  }
  func_08032BB4(&uStack_78,param_2,param_3,uVar6,(int)sVar1,(int)sVar2,param_6);
  uStack_80 = uStack_78;
  uStack_7c = uStack_74;
LAB_0803356a:
  *puStack_48 = uStack_80;
  puStack_48[1] = uStack_7c;
  return CONCAT44(in_lr,puStack_48);
}

// =============================================================================
// Function: func_08033584 @ 0x08033584
// =============================================================================
undefined8 func_08033584(byte *param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  uint3 uStack_1c;
  uint uStack_18;
  undefined1 uStack_14;
  undefined1 auStack_13 [3];
  
  if (8 < (*param_1 & 0xf)) goto case_08033648;
  switch(*(uint *)(PTR_case_080335A8_080335a4 + (*param_1 & 0xf) * 4) & 0xfffffffe) {
  case 0x80335a8:
    param_2 = param_2 + 0xcc;
  case 0x80335cc:
    uVar5 = *(uint *)(param_2 + _DAT_08033604 + ((uint)param_1[2] * 0x2b + (uint)param_1[1]) * 4);
    uVar2 = 0;
    if (((uVar5 & 3) == 1) && (((uVar5 & 0xfff) >> 8) - 1 < 4)) {
      uVar2 = -((uVar5 & 0xff) >> 2 ^ 0x14) >> 0x1f;
    }
    goto LAB_0803377a;
  case 0x8033608:
    uStack_18 = *(uint *)(param_2 + _DAT_0803364c + ((uint)param_1[2] * 0x2b + (uint)param_1[1]) * 4
                         );
    if ((uStack_18 & 0xfff) >> 8 == 5) {
      Field_HarvestCrop(auStack_20,&uStack_18);
      cVar1 = func_0800F06C(auStack_20);
      if (cVar1 == '\0') {
        iVar4 = func_0x0800f09c(auStack_20);
        if (iVar4 == 0) {
          func_0800F0A4(&uStack_1c,auStack_20);
          func_0x0800e0fc(&uStack_14,(uint)uStack_1c);
          uVar2 = func_0800E198(&uStack_14);
          uVar2 = (-uVar2 | uVar2) >> 0x1f;
          goto LAB_0803377a;
        }
        if (iVar4 == 1) {
          uVar3 = func_0800F0E8(auStack_20);
          func_0800E148(auStack_13,uVar3);
          uVar2 = func_0800E198(auStack_13);
          uVar2 = (-uVar2 | uVar2) >> 0x1f;
          goto LAB_0803377a;
        }
      }
    }
    break;
  case 0x80336a4:
    uVar2 = 0;
    iVar4 = func_0x0800c568(param_2 + 0x3fc);
    if (iVar4 == 0) goto LAB_0803377a;
    cVar1 = func_0800C598(param_2 + 0x3fc,param_1[1]);
    goto LAB_080336f8;
  case 0x80336c0:
    uVar2 = 0;
    param_2 = param_2 + _DAT_080336dc;
    iVar4 = func_0x0800ce6c(param_2);
    if (iVar4 == 0) goto LAB_0803377a;
    cVar1 = func_0800CEA8(param_2,param_1[1]);
    goto LAB_080336f8;
  case 0x80336e0:
    uVar2 = 0;
    param_2 = param_2 + _DAT_08033704;
    iVar4 = func_0x0800ce6c(param_2);
    if (iVar4 == 0) goto LAB_0803377a;
    cVar1 = func_0800CED4(param_2,param_1[1]);
LAB_080336f8:
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    goto LAB_0803377a;
  case 0x8033708:
    iVar4 = func_0x080d3914(param_3,param_1[1] + 0x36,*(undefined4 *)(*param_3 + 0x44));
    uVar2 = 0;
    if ((iVar4 != 0) &&
       (((cVar1 = func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x50)),
         cVar1 != '\0' ||
         (cVar1 = func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x54)),
         cVar1 != '\0')) ||
        (cVar1 = func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x58)),
        cVar1 != '\0')))) {
      uVar2 = 1;
    }
    goto LAB_0803377a;
  case 0x8033754:
    func_0x080d3914(param_3,param_1[1] + 0x2e,*(undefined4 *)(*param_3 + 0x44));
    break;
  case 0x8033764:
    uVar2 = func_0x080d3914(param_3,param_1[1] + 0x4c,*(undefined4 *)(*param_3 + 0x44));
    uVar2 = (-uVar2 | uVar2) >> 0x1f;
    goto LAB_0803377a;
  }
case_08033648:
  uVar2 = 0;
LAB_0803377a:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08033784 @ 0x08033784
// =============================================================================
undefined8 func_08033784(byte *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (8 < (*param_1 & 0xf)) goto case_080337F2;
  switch(*(uint *)(PTR_case_080337A4_080337a0 + (*param_1 & 0xf) * 4) & 0xfffffffe) {
  case 0x80337a4:
  case 0x80337c8:
    uVar1 = 2;
    goto LAB_080337fa;
  case 0x80337cc:
    uVar1 = 0x11;
    goto LAB_080337fa;
  case 0x80337d0:
    uVar1 = 0x25;
    goto LAB_080337fa;
  case 0x80337d4:
    iVar2 = param_1[1] + 0x36;
    break;
  case 0x80337da:
    iVar2 = param_1[1] + 0x2e;
    break;
  case 0x80337e0:
    iVar2 = param_1[1] + 0x4c;
    break;
  case 0x80337f2:
    goto case_080337F2;
  }
  iVar2 = func_0x080d3914(param_3,iVar2,*(undefined4 *)(*param_3 + 0x44));
  if (iVar2 == 0) {
case_080337F2:
    uVar1 = 0x234;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 4);
  }
LAB_080337fa:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08033800 @ 0x08033800
// =============================================================================
undefined8 func_08033800(undefined2 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0x080d3914(param_2,param_3,*(undefined4 *)(*param_2 + 0x44));
  if (iVar1 == 0) {
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined2 *)(iVar1 + 0xe);
    *param_1 = *(undefined2 *)(iVar1 + 10);
  }
  param_1[1] = uVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08033830 @ 0x08033830
// =============================================================================
undefined8 func_08033830(short *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (8 < (*param_2 & 0xf)) goto case_08033874;
  switch(*(uint *)(PTR_case_08033850_0803384c + (*param_2 & 0xf) * 4) & 0xfffffffe) {
  case 0x8033850:
  case 0x8033874:
case_08033874:
    *param_1 = 0;
    param_1[1] = 0;
    break;
  case 0x803387c:
    bVar1 = param_2[2];
    *param_1 = (ushort)param_2[1] * 0x10 + 0x118;
    param_1[1] = (ushort)bVar1 * 0x10 + 0xb8;
    break;
  case 0x8033892:
    func_0800C6F0(param_1,param_3 + 0x3fc,param_2[1]);
    break;
  case 0x80338a2:
    func_0800D074(param_1,param_3 + _DAT_080338b0,param_2[1]);
    break;
  case 0x80338b4:
    func_0x0800d0c0(param_1,param_3 + _DAT_080338c4,param_2[1]);
    break;
  case 0x80338c8:
    iVar2 = param_2[1] + 0x36;
    goto LAB_080338d2;
  case 0x80338ce:
    iVar2 = param_2[1] + 0x2e;
LAB_080338d2:
    func_08033800(param_1,param_4,iVar2);
    break;
  case 0x80338dc:
    func_08033800(param_1,param_4,param_2[1] + 0x4c);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080338F0 @ 0x080338F0
// =============================================================================
undefined8 func_080338F0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_080AB788(0x200);
  return CONCAT44(in_lr,(uint)(uVar1 < param_1 + 0x100U));
}

// =============================================================================
// Function: func_08033A80 @ 0x08033A80
// =============================================================================
undefined8 func_08033A80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = func_080005D4(0xd4);
  iVar2 = func_08034A14(uVar1,param_1);
  iVar3 = -1;
  if (*(char *)(param_1 + 0x40) == '\x02') {
    iVar3 = 8;
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\x03') {
      iVar3 = 5;
    }
    if (iVar3 < 0) goto LAB_08033ada;
  }
  func_0805E860(iVar2 + 0x70,iVar3);
  *(undefined1 *)(iVar2 + 0x84) = 1;
  *(undefined1 *)(iVar2 + 0x86) = 0;
  *(undefined1 *)(iVar2 + 0x87) = 1;
  *(byte *)(iVar2 + 0x8a) = *(byte *)(iVar2 + 0x8a) & 0xfc | 2;
LAB_08033ada:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_08033AE4 @ 0x08033AE4
// =============================================================================
undefined4 func_08033AE4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  func_0x08033b7c();
  return in_lr;
}

// =============================================================================
// Function: func_08033B10 @ 0x08033B10
// =============================================================================
undefined4 func_08033B10(int param_1)

{
  undefined4 in_lr;
  
  func_0801FE20();
  func_0x0809e3dc(*(undefined4 *)(param_1 + 0x34));
  return in_lr;
}

// =============================================================================
// Function: func_08033B24 @ 0x08033B24
// =============================================================================
void func_08033B24(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  byte abStack_20 [8];
  undefined1 auStack_18 [8];
  
  if ((*(byte *)(param_1[0xe] + (uint)*(byte *)(param_1 + 0xc) * 8) & 0xf) == 0) {
    uVar2 = *param_1;
    func_0801FE94(auStack_18,param_1);
    uVar1 = func_0x0809e65c(param_1[0xd]);
    func_080330F4(abStack_20,param_1[0xf],uVar2,auStack_18,uVar1,param_1[0xe]);
    bVar3 = (abStack_20[0] & 0xf) == 0;
  }
  else {
    bVar3 = false;
  }
  (*UNRECOVERED_JUMPTABLE)(bVar3);
  return;
}

// =============================================================================
// Function: func_08033B84 @ 0x08033B84
// =============================================================================
undefined4 func_08033B84(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    func_08034BFC();
  }
  return in_lr;
}

// =============================================================================
// Function: func_08033B94 @ 0x08033B94
// =============================================================================
undefined4 func_08033B94(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 in_lr;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [4];
  short sStack_80;
  short sStack_7e;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined1 auStack_3c [4];
  short *psStack_38;
  short *psStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar5 = param_1[0xd];
  piVar11 = (int *)*param_1;
  piVar7 = piVar11;
  if (5 < *(uint *)(iVar5 + 0x1c)) goto case_08033BD8;
  piVar7 = (int *)PTR_case_08033BC0_08033bbc;
  switch(*(uint *)(PTR_case_08033BC0_08033bbc + *(uint *)(iVar5 + 0x1c) * 4) & 0xfffffffe) {
  case 0x8033bc0:
    param_4 = 0;
  case 0x8033bd8:
case_08033BD8:
    if (((*(char *)(param_2 + 4) != '\0') &&
        (iVar6 = func_0x0809e65c(iVar5,piVar7,param_2,param_4), iVar6 != 3)) &&
       ((iVar6 = func_0x0809e664(iVar5), iVar6 != 0 &&
        ((piVar7 = (int *)func_0x080d3910(piVar11,*(undefined4 *)(*piVar11 + 0x144)),
         (*(byte *)((int)piVar7 + 10) & 0x1f) == 6 &&
         ((*(ushort *)((int)piVar7 + 10) & 0x7ff) >> 5 == *(byte *)(param_1 + 0xc) + 1)))))) {
      if (*piVar7 - 3U < 2) {
        func_0809E75C(iVar5);
      }
      else {
        func_0801FE78(param_1,2,0x168,0xfffffff8);
        func_0x0809e7d0(iVar5,auStack_84);
        func_08034180(param_1,1,0,0x8000);
      }
    }
    goto LAB_08034110;
  case 0x8033c64:
    if (*(short *)(param_1 + 1) != 2) {
      func_0801FE78(param_1,2,0x168,0xfffffff8);
      func_08034180(param_1,1,0,0x8000);
    }
    if (*(short *)((int)param_1 + 0xe) < 0x78) goto LAB_08034110;
    break;
  case 0x8033c94:
    psStack_38 = (short *)(iVar5 + 0x20);
    if (*(short *)(iVar5 + 0x20) == 0) {
      cVar3 = func_08034940(param_1);
      if ((cVar3 == '\0') &&
         (((*(char *)(iVar5 + 0x23) != '\0' &&
           (cVar3 = *(char *)(iVar5 + 0x23) + -1, *(char *)(iVar5 + 0x23) = cVar3, cVar3 != '\0'))
          || (cVar3 = func_08034260(param_1), cVar3 == '\0')))) {
        iVar5 = _DAT_08033d10;
        iVar6 = func_080AB82C(_DAT_08033d10,5);
        iVar5 = iVar6 * 4 + iVar5;
        *(char *)(psStack_38 + 1) = (char)iVar6;
        sVar4 = func_080AB788((uint)*(byte *)(iVar5 + 2) * 0x3c);
        *psStack_38 = (ushort)*(byte *)(iVar5 + 1) * 0x3c + sVar4;
        uVar2 = *(ushort *)(param_1 + 1);
        sStack_80 = 0;
        sStack_7e = 0;
        if (uVar2 == 0x11) {
          sStack_80 = func_080AB788(0x40);
          sStack_80 = sStack_80 + 0x90;
          sStack_7e = func_080AB788(0x30);
          sStack_7e = sStack_7e + 0x70;
        }
        else if (uVar2 < 0x12) {
          if (uVar2 == 2) {
            sStack_80 = func_080AB788(0x48);
            sStack_80 = sStack_80 + 0x80;
            sStack_7e = func_080AB788(0x48);
            sStack_7e = sStack_7e + 0x128;
          }
        }
        else if (uVar2 == 0x25) {
          sStack_80 = func_080AB788(0x68);
          sStack_80 = sStack_80 + 0x48;
          sStack_7e = func_080AB788(0x30);
          sStack_7e = sStack_7e + 0x60;
        }
        uVar1 = *(undefined1 *)(param_1 + 8);
        func_0x080d3918(&uStack_c4,piVar11,uVar2,*(undefined4 *)(*piVar11 + 0x34));
        func_0x080d3914(&uStack_7c,param_1,*(undefined4 *)(param_1[5] + 0xc));
        uStack_28 = uStack_7c;
        uStack_24 = uStack_78;
        uStack_b8 = 0x21;
        uStack_b4 = 0xffffffdf;
        uStack_b0 = 0xffffffdf;
        uStack_ac = 0x21;
        uStack_a4 = uStack_c4;
        uStack_a0 = uStack_c0;
        uStack_9c = uStack_bc;
        uStack_98 = uStack_7c;
        uStack_94 = uStack_78;
        uStack_90 = 0x20;
        uStack_8c = 0;
        uStack_88 = 0;
        uVar12 = func_080ABC40((int)*(short *)((int)param_1 + 10),
                               (int)*(short *)((int)param_1 + 0xe),(int)sStack_80,(int)sStack_7e,
                               &uStack_b8,uVar1);
        func_08034180(param_1,(char)psStack_38[1],uVar12,0x8000);
      }
    }
    else {
      *(short *)(iVar5 + 0x20) = *(short *)(iVar5 + 0x20) + -1;
    }
    goto LAB_08034110;
  case 0x8033dfc:
    psStack_34 = (short *)(iVar5 + 0x20);
    iVar6 = param_1[0xe] + (uint)*(byte *)(param_1 + 0xc) * 8;
    uVar10 = func_08033784(iVar6,param_1[0xf],piVar11);
    uVar13 = (uint)*(ushort *)(param_1 + 1);
    iStack_30 = (int)*(short *)((int)param_1 + 10);
    iStack_2c = (int)*(short *)((int)param_1 + 0xe);
    uStack_74 = CONCAT22(*(short *)((int)param_1 + 0xe),*(short *)((int)param_1 + 10));
    if (uVar10 == uVar13) {
      func_08033830(&uStack_70,iVar6,param_1[0xf],piVar11);
      uStack_74 = uStack_70;
    }
    else if (uVar13 == 0x11) {
      func_0x0800c554(&uStack_60);
      uStack_74 = uStack_60;
    }
    else if (uVar13 < 0x12) {
      if (uVar13 == 2) {
        if (uVar10 == 0x11) {
          func_0x08009ae8(&uStack_68);
          uStack_74 = uStack_68;
        }
        else {
          if (uVar10 != 0x25) goto LAB_08033e92;
          func_0x08009adc(&uStack_6c);
          uStack_74 = uStack_6c;
        }
      }
      else {
LAB_08033e92:
        uVar10 = 0x234;
      }
    }
    else {
      if (uVar13 != 0x25) goto LAB_08033e92;
      func_0x0800ce58(&uStack_64);
      uStack_74 = uStack_64;
    }
    if (uVar10 != 0x234) {
      iVar6 = (short)uStack_74 - iStack_30;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar6 < 8) {
        iVar6 = uStack_74._2_2_ - iStack_2c;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        if (iVar6 < 8) {
          cVar3 = func_08034940(param_1);
          if (cVar3 != '\0') goto LAB_08034110;
          if (uVar10 != uVar13) {
            uVar12 = 2;
            uStack_58 = 0;
            if (uVar13 == 0x11) {
              func_0x08009ae8(&uStack_48);
              uStack_58 = uStack_48;
            }
            else if (uVar13 < 0x12) {
              if (uVar13 == 2) {
                if (uVar10 == 0x11) {
                  uVar12 = 0x11;
                  func_0x0800c554(&uStack_50);
                  uStack_58 = uStack_50;
                }
                else if (uVar10 == 0x25) {
                  uVar12 = 0x25;
                  func_0x0800ce58(&uStack_54);
                  uStack_58 = uStack_54;
                }
              }
            }
            else if (uVar13 == 0x25) {
              func_0x08009adc(&uStack_4c);
              uStack_58 = uStack_4c;
            }
            func_0801FE78(param_1,uVar12,(int)(short)uStack_58,(int)uStack_58._2_2_);
            func_08034180(param_1,0,*(undefined1 *)(param_1 + 8),0);
            *psStack_34 = 0;
            goto LAB_08034110;
          }
          cVar3 = func_0803436C(param_1);
          if (cVar3 != '\0') {
            uStack_5c = uStack_5c & _DAT_08033f0c | 0x3c;
            func_0x0809e7f0(iVar5,&uStack_5c);
            uVar1 = *(undefined1 *)(param_1 + 8);
            uVar12 = 4;
            goto LAB_080340d2;
          }
          break;
        }
      }
    }
    if (*psStack_34 != 0) {
      *psStack_34 = *psStack_34 + -1;
      goto LAB_08034110;
    }
    cVar3 = func_08034940(param_1);
    if (cVar3 != '\0') goto LAB_08034110;
    cVar3 = func_08033584(param_1[0xe] + (uint)*(byte *)(param_1 + 0xc) * 8,param_1[0xf],piVar11);
    if (cVar3 != '\0') {
      uVar12 = func_0x0809e65c(iVar5);
      func_0809E66C(iVar5,uVar12);
      uVar12 = func_0x08033914();
      iVar6 = uStack_74._2_2_ - iStack_2c;
      iVar5 = (short)uStack_74 - iStack_30;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      uStack_40 = func_0x080d0ec8((iVar5 + iVar6) / 2 << 0x10,uVar12);
      uStack_44 = 0xb4;
      puVar8 = &uStack_44;
      if (uStack_40 < 0xb4) {
        puVar8 = &uStack_40;
      }
      sVar4 = func_080AB788(*puVar8);
      *psStack_34 = sVar4;
      uVar1 = *(undefined1 *)(param_1 + 8);
      func_080ABA3C(&uStack_c4);
      uVar9 = func_080ABC40(iStack_30,iStack_2c,(int)(short)uStack_74,(int)uStack_74._2_2_,
                            &uStack_c4,uVar1);
      func_08034180(param_1,1,uVar9,uVar12);
      goto LAB_08034110;
    }
    break;
  case 0x8034054:
    if (*(short *)(iVar5 + 0x20) != 0) {
      *(short *)(iVar5 + 0x20) = *(short *)(iVar5 + 0x20) + -1;
      goto LAB_08034110;
    }
    cVar3 = func_08034940(param_1);
    if (cVar3 != '\0') goto LAB_08034110;
    break;
  case 0x8034078:
    iVar6 = (int)*(short *)((int)param_1 + 10);
    if (iVar6 != 0x168) {
      if (_DAT_080340f4 < iVar6) {
        if ((int)param_1[6] < 0) goto LAB_08034110;
      }
      else if (0 < (int)param_1[6]) goto LAB_08034110;
      uVar12 = 2;
      if (iVar6 <= _DAT_080340f4) {
        uVar12 = 3;
      }
      func_08034180(param_1,1,uVar12,0x8000);
      goto LAB_08034110;
    }
    if (-1 < (int)param_1[7]) {
      func_08034180(param_1,1,1,0x8000);
      goto LAB_08034110;
    }
    if (-8 < *(short *)((int)param_1 + 0xe)) goto LAB_08034110;
    func_0809E75C(iVar5);
    func_0x0809e7c8(iVar5,auStack_3c);
    func_0809E804(&uStack_c4,*(undefined1 *)(param_1 + 0xc));
    func_0803211C(param_1,&uStack_c4);
    uVar1 = *(undefined1 *)(param_1 + 8);
    uVar12 = 0;
LAB_080340d2:
    func_08034180(param_1,uVar12,uVar1,0);
    goto LAB_08034110;
  }
  func_080342D8(param_1);
LAB_08034110:
  if (*(char *)((int)param_1 + 0x42) != '\0') {
    uVar10 = func_0x08034248(param_1,*(undefined1 *)(param_1 + 0x10));
    if (*(ushort *)((int)param_1 + 0x22) != uVar10) {
      func_080321B0(param_1);
    }
    *(char *)((int)param_1 + 0x42) = '\0';
  }
  if (param_1[7] != 0) {
    param_1[3] = param_1[3] + param_1[7];
  }
  if (param_1[6] != 0) {
    param_1[2] = param_1[2] + param_1[6];
  }
  if (*(short *)(param_1 + 9) == 0) {
    sVar4 = *(short *)((int)param_1 + 0x26);
  }
  else {
    sVar4 = *(short *)(param_1 + 9) + -1;
  }
  *(short *)(param_1 + 9) = sVar4;
  iVar5 = param_1[4];
  if (iVar5 != 0) {
    func_0x080d3910(iVar5,*(undefined4 *)(*(int *)(iVar5 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08034180 @ 0x08034180
// =============================================================================
undefined4 func_08034180(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x08034248();
  if (*(ushort *)(param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  if (*(byte *)(param_1 + 0x20) != param_3) {
    func_08032198(param_1,param_3);
  }
  *(undefined1 *)(param_1 + 0x42) = 0;
  if (param_2 == 1) {
    if (param_4 < 0) {
      param_4 = -param_4;
    }
    if (param_3 == 1) {
      *(int *)(param_1 + 0x1c) = -param_4;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else if ((int)param_3 < 2) {
      if (param_3 == 0) {
        *(int *)(param_1 + 0x1c) = param_4;
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      if (param_3 == 2) {
        *(int *)(param_1 + 0x18) = -param_4;
      }
      else {
        if (param_3 != 3) goto LAB_0803420a;
        *(int *)(param_1 + 0x18) = param_4;
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  else if ((int)param_2 < 2) {
    if (param_2 == 0) {
LAB_080341c8:
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  else if ((int)param_2 < 5) goto LAB_080341c8;
LAB_0803420a:
  if (param_2 != *(byte *)(param_1 + 0x40)) {
    iVar2 = -1;
    if (param_2 == 2) {
      iVar2 = 8;
    }
    else {
      if (param_2 == 3) {
        iVar2 = 5;
      }
      if (iVar2 < 0) {
        func_080323C8(param_1);
        goto LAB_0803423e;
      }
    }
    func_08032384(param_1,iVar2,1);
  }
LAB_0803423e:
  *(byte *)(param_1 + 0x40) = (byte)param_2;
  return in_lr;
}

// =============================================================================
// Function: func_08034260 @ 0x08034260
// =============================================================================
undefined8 func_08034260(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  byte abStack_28 [8];
  undefined1 auStack_20 [8];
  uint uStack_18;
  
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    uVar2 = *param_1;
    func_0801FE94(auStack_20,param_1);
    uVar1 = func_0x0809e65c(param_1[0xd]);
    func_080330F4(abStack_28,param_1[0xf],uVar2,auStack_20,uVar1,param_1[0xe]);
    if ((abStack_28[0] & 0xf) == 0) {
      *(char *)((int)param_1 + 0x41) = '\x01';
      uVar1 = 0;
    }
    else {
      func_0x0809e988(param_1[0xe],*(undefined1 *)(param_1 + 0xc),abStack_28);
      uStack_18 = uStack_18 & _DAT_080342d4;
      func_0x0809e7e4(param_1[0xd],&uStack_18);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080342D8 @ 0x080342D8
// =============================================================================
undefined4 func_080342D8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  uint uStack_10;
  
  func_0x0809e33c(*(undefined4 *)(param_1 + 0x34));
  cVar1 = func_080338F0();
  if ((cVar1 == '\0') || (cVar1 = func_08034260(param_1), cVar1 == '\0')) {
    uVar2 = func_080AB788(0xb4);
    uStack_10 = (uStack_10 & _DAT_08034360 | uVar2 & 0xffff) & _DAT_08034364;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = func_0x0809e65c(uVar5);
    iVar4 = func_0809E66C(uVar5,uVar3);
    uVar2 = func_080AB788(0x100 - iVar4);
    uStack_10 = uStack_10 & _DAT_08034368 | ((uVar2 >> 6) + 2) * 0x1000000;
    func_0x0809e7d8(*(undefined4 *)(param_1 + 0x34),&uStack_10);
    func_08034180(param_1,0,*(undefined1 *)(param_1 + 0x20),0);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803436C @ 0x0803436C
// =============================================================================
undefined8 func_0803436C(undefined4 *param_1)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  ushort uStack_40;
  undefined4 uStack_3c;
  ushort uStack_38;
  short sStack_34;
  short sStack_32;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 auStack_2b [3];
  undefined4 *puStack_28;
  int *piStack_24;
  
  piStack_24 = (int *)*param_1;
  puVar7 = (uint *)(param_1[0xe] + (uint)*(byte *)(param_1 + 0xc) * 8);
  uStack_4c = *puVar7;
  uStack_48 = puVar7[1];
  puStack_28 = param_1;
  func_0809E994(param_1[0xe],*(byte *)(param_1 + 0xc),&uStack_44);
  cVar3 = func_08033584(&uStack_4c,puStack_28[0xf],piStack_24);
  if (cVar3 == '\0') goto case_080348FA;
  iVar10 = puStack_28[4];
  if (iVar10 != 0) {
    func_08033830(&sStack_34,&uStack_4c,puStack_28[0xf],piStack_24);
    uVar4 = uStack_4c & 0xf;
    if (uVar4 == 4) {
      sVar2 = sStack_32 + 0x18;
      if ((uStack_4c._1_1_ & 7) < 4) {
        sVar2 = sStack_32 + -0x20;
      }
    }
    else {
      sVar2 = sStack_32;
      if (uVar4 < 5) {
        if (uVar4 == 3) {
          sVar2 = sStack_32 + -0x18;
        }
      }
      else if (uVar4 == 5) {
        sVar2 = sStack_32 + -0x28;
      }
    }
    sStack_32 = sVar2;
    func_08034BFC(iVar10,*(undefined1 *)(puStack_28 + 0xc),(int)sStack_34,(int)sStack_32);
  }
  switch(uStack_4c & 0xf) {
  case 1:
    uVar1 = *(ushort *)((int)puStack_28 + 10);
    uStack_44 = CONCAT22(uVar1 >> 6,CONCAT11((char)((uVar1 & 0x3f) << 2),2));
    uVar6 = uStack_44;
    uStack_44._3_1_ = (byte)(uVar1 >> 0xe);
    uStack_44 = CONCAT13(uStack_44._3_1_ | (byte)((*(ushort *)((int)puStack_28 + 0xe) & 0x3f) << 2),
                         (int3)uVar6);
    uStack_40 = uStack_40 & 0xfc00 | *(ushort *)((int)puStack_28 + 0xe) >> 6;
    func_0x080d3914(piStack_24,&uStack_44,*(undefined4 *)(*piStack_24 + 0xd8));
    iVar10 = 1;
    goto LAB_080348fe;
  case 2:
    func_0x0800efec();
    uVar1 = *(ushort *)((int)puStack_28 + 10);
    uStack_3c = CONCAT22(uVar1 >> 6,CONCAT11((char)((uVar1 & 0x3f) << 2),2));
    uVar6 = uStack_3c;
    uStack_3c._3_1_ = (byte)(uVar1 >> 0xe);
    uStack_3c = CONCAT13(uStack_3c._3_1_ | (byte)((*(ushort *)((int)puStack_28 + 0xe) & 0x3f) << 2),
                         (int3)uVar6);
    uStack_38 = uStack_38 & 0xfc00 | *(ushort *)((int)puStack_28 + 0xe) >> 6;
    func_0x080d3918(piStack_24,&uStack_3c,&uStack_44,*(undefined4 *)(*piStack_24 + 0xe0));
    cVar3 = func_0800F06C(&uStack_44);
    if (cVar3 == '\0') {
      iVar10 = func_0x0800f09c(&uStack_44);
      if (iVar10 == 0) {
        iVar10 = *piStack_24;
        func_0800F0A4(&uStack_3c,&uStack_44);
        func_0x0800e0fc(&uStack_30,uStack_3c & 0xffffff);
        func_0x080d3914(piStack_24,&uStack_30,*(undefined4 *)(iVar10 + 0x15c));
      }
      else {
        if (iVar10 != 1) break;
        iVar10 = *piStack_24;
        uVar6 = func_0800F0E8(&uStack_44);
        func_0800E148(&uStack_2f,uVar6);
        func_0x080d3914(piStack_24,&uStack_2f,*(undefined4 *)(iVar10 + 0x15c));
      }
      iVar10 = 0;
      goto LAB_080348fe;
    }
    break;
  case 3:
    func_0800C7D8(puStack_28[0xf] + 0x3fc,1);
    func_0800C814(puStack_28[0xf] + 0x3fc,uStack_4c._1_1_);
    uVar4 = uStack_4c >> 8 & 0xff;
    uVar6 = *(undefined4 *)(*piStack_24 + 0xa0);
    goto LAB_0803466e;
  case 4:
    func_0800D280(puStack_28[0xf] + 0x5dc,1);
    func_0800D2BC(puStack_28[0xf] + 0x5dc,uStack_4c._1_1_);
    uVar4 = uStack_4c >> 8 & 0xff;
    uVar6 = *(undefined4 *)(*piStack_24 + 0x9c);
    goto LAB_0803466e;
  case 5:
    func_0800D280(puStack_28[0xf] + 0x5dc,1);
    func_0800D334(puStack_28[0xf] + 0x5dc,uStack_4c._1_1_);
    uVar4 = (uStack_4c >> 8 & 0xff) + 0x10;
    uVar6 = *(undefined4 *)(*piStack_24 + 0x9c);
LAB_0803466e:
    func_0x080d3914(piStack_24,uVar4,uVar6);
    iVar10 = 2;
LAB_080348fe:
    memcpy(&uStack_44,_DAT_0803493c,3);
    if ((iVar10 != 3) && (uVar4 = func_080AB788(200), uVar4 < *(byte *)((int)&uStack_44 + iVar10)))
    {
      func_0809E69C(puStack_28[0xd],iVar10,1);
    }
    uVar6 = 1;
    goto LAB_0803492a;
  case 6:
    iVar10 = func_0x080d3914(piStack_24,uStack_4c._1_1_ + 0x36,*(undefined4 *)(*piStack_24 + 0x40));
    if (iVar10 != 0) {
      cVar3 = func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x50));
      if (cVar3 != '\0') {
        func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x70));
      }
      cVar3 = func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x54));
      if (cVar3 != '\0') {
        uVar6 = func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x74));
        uVar8 = 0x1c;
        switch(uVar6) {
        case 0:
          uVar8 = 0x1c;
          break;
        case 1:
          uVar8 = 0x1d;
          break;
        case 2:
          uVar8 = 0x1e;
          break;
        case 3:
          uVar8 = 0x1f;
          break;
        case 4:
          uVar8 = 0x20;
          break;
        case 5:
          uVar8 = 0x21;
        }
        iVar9 = *piStack_24;
        func_0x0800dca8(&uStack_44,uVar8);
        func_0x0800e0fc(&uStack_2e,uStack_44 & 0xffffff);
        func_0x080d3914(piStack_24,&uStack_2e,*(undefined4 *)(iVar9 + 0x15c));
      }
      cVar3 = func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x58));
      if (cVar3 != '\0') {
        uVar6 = func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x78));
        uVar8 = 5;
        switch(uVar6) {
        case 0:
          uVar8 = 5;
          break;
        case 1:
          uVar8 = 6;
          break;
        case 2:
          uVar8 = 7;
          break;
        case 3:
          uVar8 = 8;
          break;
        case 4:
          uVar8 = 9;
          break;
        case 5:
          uVar8 = 10;
        }
        iVar9 = *piStack_24;
        func_0x0800df50(&uStack_2c,uVar8);
        func_0800E148(&uStack_2d,uStack_2c);
        func_0x080d3914(piStack_24,&uStack_2d,*(undefined4 *)(iVar9 + 0x15c));
      }
      func_0x080d3914(iVar10,0x3c,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x88));
      iVar10 = 2;
      goto LAB_080348fe;
    }
    break;
  case 7:
    iVar10 = func_0x080d3914(piStack_24,uStack_4c._1_1_ + 0x2e,*(undefined4 *)(*piStack_24 + 0x40));
    if (iVar10 != 0) {
      cVar3 = func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x50));
      if (cVar3 != '\0') {
        func_0x080d3910(iVar10,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x70));
      }
      func_0x080d3914(iVar10,0x3c,*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x88));
      iVar10 = 2;
      goto LAB_080348fe;
    }
    break;
  case 8:
    uVar4 = (uint)uStack_4c._1_1_;
    iVar10 = func_0800C6A0(puStack_28[0xf] + 0x3fc);
    if (iVar10 != 0) {
      uVar5 = *(byte *)(iVar10 + 6) & 7;
      uVar6 = 0xf;
      if (uVar5 < 6) {
        switch((uint)(&case_08034868)[uVar5] & 0xfffffffe) {
        case 0x8034868:
        case 0x8034880:
          uVar6 = 0xf;
          break;
        case 0x8034884:
          uVar6 = 0x10;
          break;
        case 0x8034888:
          uVar6 = 0x11;
          break;
        case 0x803488c:
          uVar6 = 0x12;
          break;
        case 0x8034890:
          uVar6 = 0x13;
          break;
        case 0x8034894:
          uVar6 = 0x14;
        }
      }
      func_0x080d3914((int *)*puStack_28,uVar4 + 0x4c,*(undefined4 *)(*(int *)*puStack_28 + 0x3c));
      func_0800C9B8(puStack_28[0xf] + 0x3fc,uStack_4c._1_1_);
      iVar10 = *piStack_24;
      func_0x0800dca8(&uStack_44,uVar6);
      func_0x0800e0fc(auStack_2b,uStack_44 & 0xffffff);
      func_0x080d3914(piStack_24,auStack_2b,*(undefined4 *)(iVar10 + 0x15c));
      iVar10 = 2;
      goto LAB_080348fe;
    }
  }
case_080348FA:
  uVar6 = 0;
LAB_0803492a:
  return CONCAT44(in_lr,uVar6);
}

// =============================================================================
// Function: func_08034940 @ 0x08034940
// =============================================================================
undefined8 func_08034940(undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  undefined1 auStack_10 [4];
  
  iVar2 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
  uVar3 = *(ushort *)(iVar2 + 10) & 0x1f;
  if (5 < uVar3) {
    if ((uVar3 - 6) * 0x3c + ((*(ushort *)(iVar2 + 10) & 0x7ff) >> 5) <
        (uint)*(byte *)(param_1 + 0xc) + _DAT_080349a8) {
      uVar4 = 0;
      goto LAB_08034a0a;
    }
  }
  uVar1 = *(ushort *)(param_1 + 1);
  if (uVar1 == 0x11) {
    func_0x08009ae8(&sStack_14);
    func_0801FE78(param_1,2,(int)sStack_14,(int)sStack_12);
  }
  else if ((0x11 < uVar1) && (uVar1 == 0x25)) {
    func_0x08009adc(&sStack_18);
    func_0801FE78(param_1,2,(int)sStack_18,(int)sStack_16);
  }
  func_0809E994(param_1[0xe],*(undefined1 *)(param_1 + 0xc));
  func_0x0809e7fc(param_1[0xd],auStack_10);
  if (*(short *)((int)param_1 + 10) == 0x168) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
    if (*(short *)((int)param_1 + 10) <= _DAT_08034a04) {
      uVar4 = 3;
    }
  }
  func_08034180(param_1,1,uVar4,0x8000);
  uVar4 = 1;
LAB_08034a0a:
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_08034AA0 @ 0x08034AA0
// =============================================================================
undefined4 func_08034AA0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  func_0803260C();
  if (*(short *)(param_1 + 0xd0) == 0) {
    return in_lr;
  }
  pcVar3 = (char *)(param_1 + 0xcb);
  if (*pcVar3 == '\0') {
    iVar2 = func_0805E8F0(param_1 + 0xb4);
    if (-1 < iVar2 * 0x40000000) goto LAB_08034ad6;
    pcVar3 = (char *)(param_1 + 200);
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *pcVar3 = cVar1;
LAB_08034ad6:
  *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0xd0) + -1;
  return in_lr;
}

// =============================================================================
// Function: func_08034AE8 @ 0x08034AE8
// =============================================================================
undefined4 func_08034AE8(int param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  func_0x08032690();
  if (*(short *)(param_1 + 0xd0) != 0) {
    uStack_28 = *param_2;
    uStack_24 = param_2[2];
    sVar1 = *(short *)(param_1 + 0xcc);
    sVar2 = *(short *)(param_1 + 0xce);
    sVar3 = *(short *)(param_2 + 3);
    sVar4 = *(short *)((int)param_2 + 0xe);
    puVar6 = (undefined4 *)(param_1 + 0x8c);
    func_0x080d3918(auStack_48,*(int **)(param_1 + 0xb4),
                    *(undefined2 *)
                     (*(int *)(param_1 + 0xb8) + (uint)*(ushort *)(param_1 + 0xc0) * 4),
                    *(undefined4 *)(**(int **)(param_1 + 0xb4) + 0x10));
    if ((int)(-*(uint *)(param_1 + 0x94) | *(uint *)(param_1 + 0x94)) < 0) {
      iVar5 = func_0x080d391c(uStack_24,(int)sVar1 - (int)sVar3,(int)sVar2 - (int)sVar4,0x55,
                              0x8000 - sVar2,auStack_48,*puVar6,*(undefined2 *)(param_1 + 0x98),
                              param_1 + 0x9c);
    }
    else {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(char *)(param_1 + 200) != '\0')) {
      func_080A480C(puVar6,uStack_28,auStack_40);
      if (*(char *)(param_1 + 0xc9) == '\0') {
        if (*(char *)(param_1 + 0xca) == '\0') {
          func_080A4944(puVar6,auStack_38,1);
          *(char *)(param_1 + 0xca) = '\x01';
        }
      }
      else {
        func_080A4944(puVar6,auStack_38,1);
      }
      *(char *)(param_1 + 200) = '\0';
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08034BFC @ 0x08034BFC
// =============================================================================
undefined4 func_08034BFC(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  func_0805E860(param_1 + 0xb4,*(undefined2 *)(param_2 * 2 + _DAT_08034c3c));
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 1;
  *(undefined2 *)(param_1 + 0xcc) = param_3;
  *(undefined2 *)(param_1 + 0xce) = param_4;
  *(undefined2 *)(param_1 + 0xd0) = 0x3c;
  return in_lr;
}

// =============================================================================
// Function: func_08034C4C @ 0x08034C4C
// =============================================================================
undefined4 func_08034C4C(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  func_08033B84(param_1,*(undefined1 *)(param_1 + 0x30),param_2,param_3);
  return in_lr;
}

// =============================================================================
// Function: func_08034C64 @ 0x08034C64
// =============================================================================
undefined8 func_08034C64(undefined4 param_1,ushort *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  int iStack_14;
  
  puVar1 = _DAT_08034cdc;
  iVar2 = func_0x080d3910(param_1,*_DAT_08034cdc);
  puVar5 = *(ushort **)(iVar2 * 4 + puVar1[2]);
  if (puVar5 != (ushort *)0x0) {
    uVar3 = *param_2 & 0x1f;
    iVar2 = uVar3 - 6;
    if (iVar2 < 0) {
      iVar2 = uVar3 + 0x12;
    }
    iStack_14 = iVar2 * 0x3c + ((*param_2 & 0x7ff) >> 5);
    iVar4 = *(int *)(puVar5 + 2);
    iVar2 = func_080D7ECC(iVar4,iVar4 + (uint)*puVar5 * 8,&iStack_14,0,0);
    uVar3 = (iVar2 - iVar4 >> 3) - 1;
    if ((uVar3 < *puVar5) && (iVar2 = *(int *)(uVar3 * 8 + *(int *)(puVar5 + 2) + 4), iVar2 != 0)) {
      uVar3 = -(*(ushort *)(iVar2 + 10) & 0x3ff ^ 0x1d) >> 0x1f;
      goto LAB_08034ce2;
    }
  }
  uVar3 = 0;
LAB_08034ce2:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: Entity_ProcessCollisions @ 0x08034CEC
// =============================================================================
undefined8
Entity_ProcessCollisions(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
             uint param_6,undefined2 param_7,undefined2 param_8)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_1c [8];
  
  func_0809E32C(auStack_1c,param_3);
  uVar1 = param_6;
  if (*(ushort *)(param_3 + 0x12) != _DAT_08034d0c) {
    uVar1 = (uint)*(ushort *)(param_3 + 0x12);
  }
  Entity_UpdatePositions(param_1,param_2,auStack_1c,2,uVar1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08034d8c;
  *(int *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  *(undefined4 *)(param_1 + 0x38) = param_5;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_3 + 0xc) & 0x1f;
  *(char *)(param_1 + 0x3d) = (char)((*(ushort *)(param_3 + 0xc) & 0x3ff) >> 5);
  *(char *)(param_1 + 0x3e) = (char)((*(byte *)(param_3 + 0xd) & 0x7f) >> 2);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(short *)(param_1 + 0x40) = (short)((*(uint *)(param_3 + 0xc) & 0x1ffffff) >> 0xf);
  *(undefined2 *)(param_1 + 0x42) = param_8;
  *(undefined2 *)(param_1 + 0x44) = (undefined2)param_6;
  *(undefined2 *)(param_1 + 0x46) = param_7;
  if (*(ushort *)(*(int *)(param_1 + 0x30) + 0x12) == _DAT_08034d90) {
    func_08034F00(param_1,1);
  }
  else {
    *(undefined1 *)(param_1 + 6) = 1;
    if (*(short *)(param_1 + 0x22) != *(short *)(param_3 + 0x12)) {
      func_080321B0(param_1);
    }
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08034DB0 @ 0x08034DB0
// =============================================================================
undefined4 func_08034DB0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_08034ddc;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  func_08032170(auStack_18,param_1);
  func_0x0809e368(uVar2,auStack_18);
  if (*(char *)(param_1 + 6) == '\0') {
    *(short *)(*(int *)(param_1 + 0x30) + 0x12) = (short)_DAT_08034e78;
  }
  else {
    *(undefined2 *)(*(int *)(param_1 + 0x30) + 0x12) = *(undefined2 *)(param_1 + 0x22);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(byte *)(*(int *)(param_1 + 0x30) + 0xc) =
         *(byte *)(*(int *)(param_1 + 0x30) + 0xc) & 0xe0 | *(byte *)(param_1 + 0x3c) & 0x1f;
    *(ushort *)(*(int *)(param_1 + 0x30) + 0xc) =
         (ushort)_DAT_08034e7c & *(ushort *)(*(int *)(param_1 + 0x30) + 0xc) |
         (*(byte *)(param_1 + 0x3d) & 0x1f) << 5;
    *(byte *)(*(int *)(param_1 + 0x30) + 0xd) =
         *(byte *)(*(int *)(param_1 + 0x30) + 0xd) & 0x83 | (*(byte *)(param_1 + 0x3e) & 0x1f) << 2;
    *(uint *)(*(int *)(param_1 + 0x30) + 0xc) =
         *(uint *)(*(int *)(param_1 + 0x30) + 0xc) & _DAT_08034e84 |
         (*(ushort *)(param_1 + 0x40) & _DAT_08034e80) << 0xf;
  }
  *(undefined4 *)(param_1 + 0x14) = _DAT_08034e88;
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
// Function: func_08034E8C @ 0x08034E8C
// =============================================================================
undefined4 func_08034E8C(int param_1)

{
  undefined4 in_lr;
  
  func_0801FE20();
  func_0x0809e3dc(*(undefined4 *)(param_1 + 0x30));
  return in_lr;
}

// =============================================================================
// Function: func_08034EA0 @ 0x08034EA0
// =============================================================================
undefined4 func_08034EA0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x080d3914(param_1,1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c));
  return in_lr;
}

// =============================================================================
// Function: func_08034EB4 @ 0x08034EB4
// =============================================================================
undefined4 func_08034EB4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  func_08035380();
  if (*(short *)(param_1 + 0x24) == 0) {
    sVar1 = *(short *)(param_1 + 0x26);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x24) + -1;
  }
  *(short *)(param_1 + 0x24) = sVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08034EE0 @ 0x08034EE0
// =============================================================================
undefined8 func_08034EE0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x30) + 0x10);
  if (uVar1 == 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x42);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08034F00 @ 0x08034F00
// =============================================================================
undefined4 func_08034F00(undefined4 *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined4 in_lr;
  bool bVar16;
  undefined1 auStack_50 [8];
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  ushort *puStack_34;
  uint uStack_30;
  uint uStack_2c;
  byte *pbStack_28;
  byte *pbStack_24;
  
  if (param_2 < 1) {
    return in_lr;
  }
  pbVar3 = (byte *)(param_1 + 0xf);
  pbStack_24 = (byte *)((int)param_1 + 0x3d);
  iStack_40 = param_2;
  if ((undefined4 *)param_1[0xe] == (undefined4 *)0x0) {
LAB_08035312:
    if (1 < iStack_40) {
      func_0x0801ff38(param_1,0x234);
      uVar13 = param_1[0xc];
      func_08032170(auStack_50,param_1);
      func_0x0809e368(uVar13,auStack_50);
    }
    if (*(char *)(param_1 + 8) != '\0') {
      func_08032198(param_1,0);
    }
    param_1[6] = 0;
    param_1[7] = 0;
    if (*(short *)((int)param_1 + 0x22) != *(short *)(param_1 + 0x11)) {
      func_080321B0(param_1);
    }
    *pbVar3 = 0;
    *pbStack_24 = 0;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    return in_lr;
  }
  if (2 < param_2) {
    bVar1 = func_0x080d3910(param_1[0xd],*(undefined4 *)param_1[0xe]);
    *pbVar3 = bVar1;
  }
  puVar15 = *(ushort **)((uint)*pbVar3 * 4 + *(int *)(param_1[0xe] + 8));
  if (puVar15 == (ushort *)0x0) goto LAB_08035312;
  iVar4 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
  uVar5 = *(ushort *)(iVar4 + 10) & 0x1f;
  iVar9 = uVar5 - 6;
  if (iVar9 < 0) {
    iVar9 = uVar5 + 0x12;
  }
  uVar5 = iVar9 * 0x3c + ((*(ushort *)(iVar4 + 10) & 0x7ff) >> 5);
  if (2 < iStack_40) {
    iVar9 = *(int *)(puVar15 + 2);
    uStack_48 = uVar5;
    iVar4 = func_080D7ECC(iVar9,iVar9 + (uint)*puVar15 * 8,&uStack_48,0,0);
    *pbStack_24 = (char)(iVar4 - iVar9 >> 3) - 1;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
  }
  if ((uint)*puVar15 <= (uint)*pbStack_24) goto LAB_08035312;
  puVar15 = (ushort *)(*(int *)(puVar15 + 2) + (uint)*pbStack_24 * 8);
  puStack_3c = *(undefined4 **)(puVar15 + 2);
  if (puStack_3c == (undefined4 *)0x0) goto LAB_08035312;
  iStack_38 = 0;
  puVar11 = (ushort *)*puStack_3c;
  if ((puVar11 == (ushort *)0x0) || (*(ushort *)(puStack_3c + 1) == 0)) {
    if (1 < iStack_40) {
      func_0801FE78(param_1,*(ushort *)((int)puStack_3c + 10) & 0x3ff,
                    (int)*(short *)((int)puStack_3c + 6),(int)*(short *)(puStack_3c + 2));
    }
    if ((uint)*(byte *)(param_1 + 8) != (*(byte *)((int)puStack_3c + 0xb) & 0xf) >> 2) {
      func_08032198(param_1);
    }
    param_1[6] = 0;
    param_1[7] = 0;
    goto LAB_080352ca;
  }
  pbVar6 = (byte *)((int)param_1 + 0x3e);
  if ((uint)*(ushort *)(puStack_3c + 1) <= (uint)*pbVar6) goto LAB_08035312;
  iVar4 = (int)*(short *)((int)puStack_3c + 6);
  iVar9 = (int)*(short *)(puStack_3c + 2);
  uVar14 = (*(byte *)((int)puStack_3c + 0xb) & 0xf) >> 2;
  if ((int)((uint)*(byte *)((int)puStack_3c + 0xb) * 0x8000000) < 0) {
    puVar15 = puVar11 + (uint)*pbVar6 * 4;
    pbStack_28 = (byte *)(param_1 + 8);
    for (; puVar11 != puVar15; puVar11 = puVar11 + 4) {
      iVar10 = (int)(short)*puVar11;
      if ((int)((uint)(byte)puVar11[3] * 0x20000000) < 0) {
        if (iVar9 != iVar10) {
          iVar9 = iVar10;
        }
      }
      else if (iVar4 != iVar10) {
        iVar4 = iVar10;
      }
    }
    if (1 < iStack_40) {
      *(short *)(param_1 + 0x10) = 0;
    }
    bVar16 = (int)((uint)(byte)puVar15[3] * 0x20000000) < 0;
    iVar10 = iVar9;
    if (!bVar16) {
      iVar10 = iVar4;
    }
    iVar12 = (short)*puVar15 - iVar10;
    if ((*(short *)(param_1 + 0x10) == 0) && ((short)*puVar15 != iVar10)) {
      iVar10 = 0;
      if (*(char *)((int)param_1 + 0x3f) == '\0') {
        iVar10 = 0x8000;
      }
      if (puVar15[1] != 0) {
        iVar10 = (uint)puVar15[1] * iVar10;
      }
      if (bVar16) {
        if (-1 < iVar12) {
          param_1[7] = iVar10;
        }
        else {
          param_1[7] = -iVar10;
        }
        uVar14 = (uint)(-1 >= iVar12);
        param_1[6] = 0;
      }
      else {
        if (iVar12 < 0) {
          uVar14 = 2;
          param_1[6] = -iVar10;
        }
        else {
          uVar14 = 3;
          param_1[6] = iVar10;
        }
        param_1[7] = 0;
      }
      iStack_38 = 0;
      if (*(char *)((int)param_1 + 0x3f) == '\0') {
        iStack_38 = 1;
      }
    }
    else {
      if (bVar16) {
        iVar9 = (int)(short)*puVar15;
      }
      else {
        iVar4 = (int)(short)*puVar15;
      }
      param_1[6] = 0;
      param_1[7] = 0;
      uVar14 = (byte)puVar15[3] & 3;
    }
LAB_08035266:
    if (1 < iStack_40) {
      func_0801FE78(param_1,*(ushort *)((int)puStack_3c + 10) & 0x3ff,iVar4,iVar9);
    }
  }
  else {
    uVar7 = (uint)*puVar15;
    uStack_44 = 0;
    if (uVar7 <= uVar5) {
      uStack_44 = uVar5 - uVar7;
    }
    puStack_34 = puVar11;
    if (2 < iStack_40) {
      iVar10 = func_080DC96C(puVar11,puVar11 + (uint)*(ushort *)(puStack_3c + 1) * 4,&uStack_44,0,0)
      ;
      *pbVar6 = (byte)(iVar10 - (int)puVar11 >> 3);
      if (*(ushort *)(puStack_3c + 1) <= (ushort)*pbVar6) {
        *pbVar6 = (char)*(ushort *)(puStack_3c + 1) - 1;
      }
    }
    puVar11 = puStack_34 + (uint)*pbVar6 * 4;
    uStack_30 = 0;
    pbStack_28 = (byte *)(param_1 + 8);
    for (puVar15 = puStack_34; puVar15 != puVar11; puVar15 = puVar15 + 4) {
      uStack_30 = (uint)*puVar15;
      iVar10 = (int)(short)puVar15[1];
      if ((puVar15[2] & 1) == 0) {
        if ((iVar4 != iVar10) && (uVar14 = 3, bVar16 = iVar10 < iVar4, iVar4 = iVar10, bVar16)) {
          uVar14 = 2;
        }
      }
      else if (iVar9 != iVar10) {
        uVar14 = (uint)(iVar10 < iVar9);
        iVar9 = iVar10;
      }
    }
    bVar16 = (puVar11[2] & 1) == 0;
    iVar10 = iVar9;
    if (bVar16) {
      iVar10 = iVar4;
    }
    uStack_2c = (short)puVar11[1] - iVar10;
    if (uStack_2c == 0) {
      param_1[6] = 0;
      param_1[7] = 0;
    }
    else {
      if (*(char *)((int)param_1 + 0x3f) == '\0') {
        uVar13 = func_0x080d0ec8(uStack_2c * 0x10000,(*puVar11 - uStack_30) * 0x19);
      }
      else {
        uVar13 = 0;
      }
      if (bVar16) {
        uVar14 = 3;
        if ((int)uStack_2c < 0) {
          uVar14 = 2;
        }
        param_1[6] = uVar13;
        uVar13 = 0;
      }
      else {
        uVar14 = uStack_2c >> 0x1f;
        param_1[6] = 0;
      }
      param_1[7] = uVar13;
      iStack_38 = 0;
      if (*(char *)((int)param_1 + 0x3f) == '\0') {
        iStack_38 = 1;
      }
    }
    if (2 < iStack_40) {
      *(undefined2 *)(param_1 + 0x10) = 0;
      if (bVar16) {
        if (uStack_44 < *puVar11) {
          iVar4 = iVar4 + ((int)(param_1[6] * (uStack_44 - uStack_30) * 0x19) >> 0x10);
        }
        else {
          iVar4 = (int)(short)puVar11[1];
        }
      }
      else if (uStack_44 < *puVar11) {
        iVar9 = iVar9 + ((int)(param_1[7] * (uStack_44 - uStack_30) * 0x19) >> 0x10);
      }
      else {
        iVar9 = (int)(short)puVar11[1];
      }
      goto LAB_08035266;
    }
    if (1 < iStack_40) {
      *(short *)(param_1 + 0x10) = ((short)uStack_44 - (short)uStack_30) * 0x19;
      goto LAB_08035266;
    }
  }
  if (*pbStack_28 != uVar14) {
    func_08032198(param_1,uVar14);
  }
LAB_080352ca:
  if (1 < iStack_40) {
    uVar13 = param_1[0xc];
    func_08032170(auStack_50,param_1);
    func_0x0809e368(uVar13,auStack_50);
  }
  if ((iStack_38 == 0) ||
     (cVar2 = func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x28)), cVar2 != '\0')) {
    psVar8 = (short *)(param_1 + 0x11);
  }
  else {
    psVar8 = (short *)((int)param_1 + 0x46);
  }
  if (*(short *)((int)param_1 + 0x22) == *psVar8) {
    return in_lr;
  }
  func_080321B0(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08035380 @ 0x08035380
// =============================================================================
undefined4 func_08035380(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined4 in_lr;
  bool bVar13;
  bool bVar14;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  short sStack_ac;
  short sStack_aa;
  short sStack_a8;
  short sStack_a6;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  ushort *puStack_6c;
  int *piStack_68;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  short *psStack_48;
  int *piStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  ushort *puStack_24;
  
  piVar12 = &iStack_dc;
  piVar10 = (int *)*param_1;
  if (param_1[0xe] == 0) {
    return in_lr;
  }
  puStack_6c = *(ushort **)((uint)*(byte *)(param_1 + 0xf) * 4 + *(int *)(param_1[0xe] + 8));
  if (puStack_6c == (ushort *)0x0) {
    return in_lr;
  }
  pbStack_2c = (byte *)((int)param_1 + 0x3d);
  if ((uint)*puStack_6c <= (uint)*pbStack_2c) {
    return in_lr;
  }
  iVar11 = *(int *)(puStack_6c + 2) + (uint)*pbStack_2c * 8;
  piStack_68 = *(int **)(iVar11 + 4);
  if (piStack_68 == (int *)0x0) {
    return in_lr;
  }
  iVar5 = func_0x080d3910(piVar10,*(undefined4 *)(*piVar10 + 0x144));
  uVar6 = *(ushort *)(iVar5 + 10) & 0x1f;
  iVar8 = uVar6 - 6;
  if (iVar8 < 0) {
    iVar8 = uVar6 + 0x12;
  }
  uVar6 = iVar8 * 0x3c + ((*(ushort *)(iVar5 + 10) & 0x7ff) >> 5);
  iStack_64 = 0;
  iVar5 = *piStack_68;
  if ((iVar5 == 0) || (*(ushort *)(piStack_68 + 1) == 0)) {
    if (((ushort)(*pbStack_2c + 1) < *puStack_6c) && (*(ushort *)(iVar11 + 8) <= uVar6)) {
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      *pbStack_2c = *pbStack_2c + 1;
      iStack_64 = 2;
    }
  }
  else {
    pbStack_28 = (byte *)((int)param_1 + 0x3e);
    uVar9 = (uint)*pbStack_28;
    if (*(ushort *)(piStack_68 + 1) <= uVar9) {
      return in_lr;
    }
    if ((int)((uint)*(byte *)((int)piStack_68 + 0xb) * 0x8000000) < 0) {
      psStack_48 = (short *)(iVar5 + uVar9 * 8);
      bVar13 = (int)((uint)*(byte *)(psStack_48 + 3) * 0x20000000) < 0;
      bVar14 = false;
      if (((ushort)(*pbStack_2c + 1) < *puStack_6c) && (*(ushort *)(iVar11 + 8) <= uVar6)) {
        bVar14 = true;
      }
      if ((bVar14) &&
         (uVar2 = *(ushort *)(param_1 + 1),
         uVar6 = func_0x080d3910(piVar10,*(undefined4 *)(*piVar10 + 0x14)), uVar2 != uVar6)) {
        *pbStack_28 = 0;
LAB_080358ac:
        *pbStack_2c = *pbStack_2c + 1;
LAB_080358b4:
        iStack_64 = 2;
        goto LAB_080358ec;
      }
      puStack_24 = (ushort *)(param_1 + 0x10);
      uVar2 = *puStack_24;
      if (uVar2 == 0) {
        iStack_a4 = param_1[2];
        iStack_9c = param_1[3];
        iStack_a0 = param_1[6];
        iStack_98 = param_1[7];
        if (bVar13) {
          piStack_44 = &iStack_9c;
          piStack_40 = &iStack_98;
        }
        else {
          piStack_44 = &iStack_a4;
          piStack_40 = &iStack_a0;
        }
        iStack_3c = *piStack_44 >> 0x10;
        iStack_38 = *piStack_44 + *piStack_40;
        iStack_34 = iStack_38 >> 0x10;
        iVar11 = iStack_34 - iStack_3c;
        iStack_30 = 1;
        pcVar7 = (char *)((int)param_1 + 0x3f);
        if (*pcVar7 != '\0') {
          iStack_30 = 0;
          if (bVar14) {
            *pcVar7 = '\0';
          }
          else {
            *pcVar7 = *pcVar7 + -1;
          }
          if (*pcVar7 == '\0') {
            iStack_64 = 1;
          }
        }
        uVar3 = uStack_7c;
        uVar4 = uStack_78;
        if ((((!bVar14) && (iVar11 != 0)) &&
            (iVar5 = func_0x080d3914(piVar10,0,*(undefined4 *)(*piVar10 + 0x40)), uVar3 = uStack_7c,
            uVar4 = uStack_78, iVar5 != 0)) && (*(short *)(iVar5 + 4) == *(short *)(param_1 + 1))) {
          func_0x080d3914(&uStack_94,param_1,*(undefined4 *)(param_1[5] + 0xc));
          uStack_8c = uStack_94;
          uStack_88 = uStack_90;
          func_0x080d3914(&uStack_84,iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xc));
          uStack_7c = uStack_84;
          uVar3 = uStack_7c;
          uStack_78 = uStack_80;
          uVar4 = uStack_78;
          if (bVar13) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar11;
            iVar11 = 0;
          }
          uStack_78._0_2_ = (short)uStack_80;
          uStack_7c._0_2_ = (short)uStack_84;
          uStack_78._2_2_ = (short)((uint)uStack_80 >> 0x10);
          uStack_7c._2_2_ = (short)((uint)uStack_84 >> 0x10);
          if (-1 < ((int)(short)uStack_8c - (int)(short)uStack_78 &
                    (int)(short)uStack_7c - (int)(short)uStack_88 &
                    (int)uStack_8c._2_2_ - (int)uStack_78._2_2_ &
                   (int)uStack_7c._2_2_ - (int)uStack_88._2_2_)) {
            sStack_74 = (short)iVar5 + (short)uStack_8c;
            sStack_72 = (short)iVar11 + uStack_8c._2_2_;
            sStack_70 = (short)iVar5 + (short)uStack_88;
            sStack_6e = (short)iVar11 + uStack_88._2_2_;
            if (((int)sStack_74 - (int)(short)uStack_78 & (int)(short)uStack_7c - (int)sStack_70 &
                 (int)sStack_72 - (int)uStack_78._2_2_ & (int)uStack_7c._2_2_ - (int)sStack_6e) < 0)
            {
              iStack_30 = 0;
            }
          }
        }
        uStack_78 = uVar4;
        uStack_7c = uVar3;
        if (iStack_30 != 0) {
          iVar11 = (int)*psStack_48;
          if ((iStack_34 == iVar11) || ((iVar11 - iStack_3c ^ iVar11 - iStack_34) < 0)) {
            *piStack_44 = iVar11 << 0x10;
            *piStack_40 = 0;
            if ((bVar14) || (psStack_48[2] == 0)) {
              bVar1 = *pbStack_28;
              *pbStack_28 = bVar1 + 1;
              if ((ushort)(byte)(bVar1 + 1) < *(ushort *)(piStack_68 + 1)) {
                iStack_64 = 1;
              }
              else {
                *pbStack_28 = 0;
                if (bVar14) {
                  *pbStack_2c = *pbStack_2c + 1;
                }
                iStack_64 = 2;
              }
            }
            else {
              *puStack_24 = 1;
              iStack_64 = 1;
            }
          }
          else {
            *piStack_44 = iStack_38;
          }
          param_1[2] = iStack_a4;
          param_1[3] = iStack_9c;
          param_1[6] = iStack_a0;
          param_1[7] = iStack_98;
        }
      }
      else if ((bVar14) || (*puStack_24 = uVar2 + 1, (ushort)psStack_48[2] < (ushort)(uVar2 + 1))) {
        *puStack_24 = 0;
        bVar1 = *pbStack_28;
        *pbStack_28 = bVar1 + 1;
        if ((ushort)(byte)(bVar1 + 1) < *(ushort *)(piStack_68 + 1)) {
          iStack_64 = 1;
          goto LAB_080358ec;
        }
        *pbStack_28 = 0;
        if (bVar14) goto LAB_080358ac;
        goto LAB_080358b4;
      }
    }
    else {
      iStack_60 = iVar5 + uVar9 * 8;
      bVar14 = (*(byte *)(iStack_60 + 4) & 1) != 0;
      iStack_dc = param_1[2];
      iStack_d4 = param_1[3];
      iStack_d8 = param_1[6];
      iStack_d0 = param_1[7];
      if (bVar14) {
        piVar12 = &iStack_d4;
        piStack_5c = &iStack_d0;
      }
      else {
        piStack_5c = &iStack_d8;
      }
      iStack_58 = *piVar12 >> 0x10;
      iStack_54 = *piVar12 + *piStack_5c;
      iStack_50 = iStack_54 >> 0x10;
      iVar11 = iStack_50 - iStack_58;
      puStack_24 = (ushort *)(param_1 + 0x10);
      bVar13 = (int)(uint)*puStack_24 < _DAT_080354ac;
      iStack_4c = 1;
      pcVar7 = (char *)((int)param_1 + 0x3f);
      if (*pcVar7 != '\0') {
        iStack_4c = 0;
        if (bVar13) {
          *pcVar7 = *pcVar7 + -1;
        }
        else {
          *pcVar7 = '\0';
        }
        if (*pcVar7 == '\0') {
          iStack_64 = 1;
        }
      }
      uVar3 = uStack_b4;
      uVar4 = uStack_b0;
      if ((((bVar13) && (iVar11 != 0)) &&
          (iVar5 = func_0x080d3914(piVar10,0,*(undefined4 *)(*piVar10 + 0x40)), uVar3 = uStack_b4,
          uVar4 = uStack_b0, iVar5 != 0)) && (*(short *)(iVar5 + 4) == *(short *)(param_1 + 1))) {
        func_0x080d3914(&uStack_cc,param_1,*(undefined4 *)(param_1[5] + 0xc));
        uStack_c4 = uStack_cc;
        uStack_c0 = uStack_c8;
        func_0x080d3914(&uStack_bc,iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xc));
        uStack_b4 = uStack_bc;
        uVar3 = uStack_b4;
        uStack_b0 = uStack_b8;
        uVar4 = uStack_b0;
        if (bVar14) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar11;
          iVar11 = 0;
        }
        uStack_b0._0_2_ = (short)uStack_b8;
        uStack_b4._0_2_ = (short)uStack_bc;
        uStack_b0._2_2_ = (short)((uint)uStack_b8 >> 0x10);
        uStack_b4._2_2_ = (short)((uint)uStack_bc >> 0x10);
        if (-1 < ((int)(short)uStack_c4 - (int)(short)uStack_b0 &
                  (int)(short)uStack_b4 - (int)(short)uStack_c0 &
                  (int)uStack_c4._2_2_ - (int)uStack_b0._2_2_ &
                 (int)uStack_b4._2_2_ - (int)uStack_c0._2_2_)) {
          sStack_ac = (short)iVar5 + (short)uStack_c4;
          sStack_aa = (short)iVar11 + uStack_c4._2_2_;
          sStack_a8 = (short)iVar5 + (short)uStack_c0;
          sStack_a6 = (short)iVar11 + uStack_c0._2_2_;
          if (((int)sStack_ac - (int)(short)uStack_b0 & (int)(short)uStack_b4 - (int)sStack_a8 &
               (int)sStack_aa - (int)uStack_b0._2_2_ & (int)uStack_b4._2_2_ - (int)sStack_a6) < 0) {
            iStack_4c = 0;
          }
        }
      }
      uStack_b0 = uVar4;
      uStack_b4 = uVar3;
      if (iStack_4c == 0) {
        *puStack_24 = *puStack_24 + 1;
      }
      else {
        iVar11 = (int)*(short *)(iStack_60 + 2);
        if ((iStack_58 == iVar11) || (iStack_50 == iVar11)) {
LAB_080355d0:
          *piVar12 = iVar11 << 0x10;
          *piStack_5c = 0;
          bVar1 = *pbStack_28;
          *pbStack_28 = bVar1 + 1;
          if ((ushort)(byte)(bVar1 + 1) < *(ushort *)(piStack_68 + 1)) {
            iStack_64 = 1;
          }
          else {
            if (*puStack_6c <= (ushort)(*pbStack_2c + 1)) {
              return in_lr;
            }
            *pbStack_28 = 0;
            *pbStack_2c = *pbStack_2c + 1;
            iStack_64 = 2;
          }
        }
        else {
          if (iVar11 < iStack_50) {
            if (iStack_58 <= iVar11) goto LAB_080355d0;
          }
          else if (iStack_58 > iVar11) goto LAB_080355d0;
          *piVar12 = iStack_54;
        }
        param_1[2] = iStack_dc;
        param_1[3] = iStack_d4;
        param_1[6] = iStack_d8;
        param_1[7] = iStack_d0;
      }
    }
  }
  if (iStack_64 < 1) {
    return in_lr;
  }
LAB_080358ec:
  func_0x080d3914(param_1,iStack_64,*(undefined4 *)(param_1[5] + 0x3c));
  return in_lr;
}

// =============================================================================
// Function: func_08035908 @ 0x08035908
// =============================================================================
undefined4 func_08035908(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (param_2 != uVar2) {
    *(ushort *)(param_1 + 0x44) = (ushort)param_2;
    cVar1 = func_0x080d3910(param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x28));
    if (((cVar1 == '\0') && (*(ushort *)(param_1 + 0x22) == uVar2)) &&
       (*(ushort *)(param_1 + 0x22) != param_2)) {
      func_080321B0(param_1,param_2);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08035940 @ 0x08035940
// =============================================================================
undefined4 func_08035940(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x46);
  if (param_2 != uVar2) {
    *(ushort *)(param_1 + 0x46) = (ushort)param_2;
    cVar1 = func_0x080d3910(param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x28));
    if (((cVar1 == '\0') && (*(ushort *)(param_1 + 0x22) == uVar2)) &&
       (*(ushort *)(param_1 + 0x22) != param_2)) {
      func_080321B0(param_1,param_2);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08035978 @ 0x08035978
// =============================================================================
undefined8 func_08035978(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  cVar1 = func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x28));
  if (((cVar1 == '\0') && (param_1[0xe] != 0)) &&
     (puVar7 = *(ushort **)((uint)*(byte *)(param_1 + 0xf) * 4 + *(int *)(param_1[0xe] + 8)),
     puVar7 != (ushort *)0x0)) {
    uVar3 = (uint)*(byte *)((int)param_1 + 0x3d);
    if (uVar3 < *puVar7) {
      iVar8 = *(int *)(puVar7 + 2) + uVar3 * 8;
      piVar6 = *(int **)(iVar8 + 4);
      if (piVar6 != (int *)0x0) {
        iVar2 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
        uVar3 = *(ushort *)(iVar2 + 10) & 0x1f;
        iVar4 = uVar3 - 6;
        if (iVar4 < 0) {
          iVar4 = uVar3 + 0x12;
        }
        if ((*piVar6 == 0) || (*(ushort *)(piVar6 + 1) == 0)) {
LAB_08035a20:
          uVar5 = 0;
          if ((*puVar7 <= (ushort)(*(byte *)((int)param_1 + 0x3d) + 1)) ||
             (iVar4 * 0x3c + ((*(ushort *)(iVar2 + 10) & 0x7ff) >> 5) < (uint)*(ushort *)(iVar8 + 8)
             )) goto LAB_08035a3c;
        }
        else {
          if (*(ushort *)(piVar6 + 1) <= (ushort)*(byte *)((int)param_1 + 0x3e)) goto LAB_08035a3a;
          if ((int)((uint)*(byte *)((int)piVar6 + 0xb) * 0x8000000) < 0) goto LAB_08035a20;
          uVar5 = 0;
          if ((int)(uint)*(ushort *)(param_1 + 0x10) < _DAT_08035a1c) goto LAB_08035a3c;
        }
        uVar5 = 1;
        goto LAB_08035a3c;
      }
    }
  }
LAB_08035a3a:
  uVar5 = 0;
LAB_08035a3c:
  return CONCAT44(in_lr,uVar5);
}

// =============================================================================
// Function: func_08035A48 @ 0x08035A48
// =============================================================================
undefined4 func_08035A48(int param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 4) == (*param_2 & 0x3ff)) {
    iVar2 = (int)(short)((ushort)((param_2[1] & _DAT_08035adc) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 1) >> 2)) - (int)*(short *)(param_1 + 10);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x98) {
      iVar2 = (int)(short)((ushort)((param_2[2] & _DAT_08035adc) << 6) |
                          (ushort)(*(byte *)((int)param_2 + 3) >> 2)) -
              (int)*(short *)(param_1 + 0xe);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (((iVar2 < 0x70) && (cVar1 = func_08035978(param_1), cVar1 == '\0')) &&
         (cVar1 = func_0x080d3910(param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x28)),
         cVar1 == '\0')) {
        func_08032384(param_1,2,0);
        *(undefined1 *)(param_1 + 0x3f) = 0x78;
        func_0x080d3914(param_1,1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c));
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08035AE0 @ 0x08035AE0
// =============================================================================
undefined8 func_08035AE0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((*(short *)(param_1 + 4) == 0x1d) && (*(short *)(param_1 + 0xe) < 0x38)) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08035AFC @ 0x08035AFC
// =============================================================================
undefined8 func_08035AFC(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035b34;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035B38 @ 0x08035B38
// =============================================================================
void func_08035B38(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08035B64 @ 0x08035B64
// =============================================================================
undefined8 func_08035B64(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035b98;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035B9C @ 0x08035B9C
// =============================================================================
void func_08035B9C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08035BC8 @ 0x08035BC8
// =============================================================================
undefined8 func_08035BC8(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035c00;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035C04 @ 0x08035C04
// =============================================================================
undefined4 func_08035C04(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = _DAT_08035c4c;
  uVar1 = _DAT_08035c48;
  iVar5 = param_1[0xd];
  iVar6 = iVar5 + _DAT_08035c50;
  iVar3 = func_080A0490(iVar6);
  uVar7 = uVar1;
  if ((((iVar3 == 3) && (*(short *)(param_1 + 1) == 0x1d)) &&
      (cVar2 = func_08035AE0(param_1), uVar7 = _DAT_08035c58, cVar2 == '\0')) &&
     ((((*(byte *)(iVar5 + _DAT_08035c54) & 0x7f) >> 5 != 1 &&
       (iVar3 = func_080A0384(iVar6), uVar7 = uVar1, iVar3 != 0)) &&
      (uVar4 = func_0x0809ead8(), uVar4 < 0x3c)))) {
    iVar3 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
    cVar2 = func_08034C64(iVar5,iVar3 + 10);
    if (cVar2 != '\0') {
      uVar7 = _DAT_08035cb0;
      uVar8 = _DAT_08035cb4;
    }
  }
  func_08035908(param_1,uVar7);
  func_08035940(param_1,uVar8);
  return in_lr;
}

// =============================================================================
// Function: func_08035CB8 @ 0x08035CB8
// =============================================================================
undefined4 func_08035CB8(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_08035C04(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08035CD4 @ 0x08035CD4
// =============================================================================
void func_08035CD4(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_08035C04();
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08035D04 @ 0x08035D04
// =============================================================================
undefined8 func_08035D04(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035d3c;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035D40 @ 0x08035D40
// =============================================================================
void func_08035D40(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,3,0,0);
  return;
}

// =============================================================================
// Function: func_08035D70 @ 0x08035D70
// =============================================================================
undefined8 func_08035D70(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035da8;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035DAC @ 0x08035DAC
// =============================================================================
void func_08035DAC(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,1,0,0);
  return;
}

// =============================================================================
// Function: func_08035DD8 @ 0x08035DD8
// =============================================================================
undefined8 func_08035DD8(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035e10;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035E14 @ 0x08035E14
// =============================================================================
void func_08035E14(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08035E40 @ 0x08035E40
// =============================================================================
undefined8 func_08035E40(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035e78;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035E7C @ 0x08035E7C
// =============================================================================
void func_08035E7C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: func_08035EE4 @ 0x08035EE4
// =============================================================================
void func_08035EE4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08035F10 @ 0x08035F10
// =============================================================================
undefined8 func_08035F10(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035f44;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035F48 @ 0x08035F48
// =============================================================================
void func_08035F48(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08035F74 @ 0x08035F74
// =============================================================================
undefined8 func_08035F74(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08035fac;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08035FB0 @ 0x08035FB0
// =============================================================================
void func_08035FB0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: func_08035FE0 @ 0x08035FE0
// =============================================================================
undefined8 func_08035FE0(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036018;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0803601C @ 0x0803601C
// =============================================================================
void func_0803601C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036048 @ 0x08036048
// =============================================================================
undefined8 func_08036048(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036080;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036084 @ 0x08036084
// =============================================================================
undefined4 func_08036084(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = _DAT_080360cc;
  uVar1 = _DAT_080360c8;
  iVar5 = param_1[0xd];
  iVar6 = iVar5 + _DAT_080360d0;
  iVar3 = func_080A0490(iVar6);
  uVar7 = uVar1;
  if ((((iVar3 == 0xc) && (*(short *)(param_1 + 1) == 0x1d)) &&
      (cVar2 = func_08035AE0(param_1), uVar7 = _DAT_080360d8, cVar2 == '\0')) &&
     ((((*(byte *)(iVar5 + _DAT_080360d4) & 0x7f) >> 5 != 1 &&
       (iVar3 = func_080A0384(iVar6), uVar7 = uVar1, iVar3 != 0)) &&
      (uVar4 = func_0x0809ead8(), uVar4 < 0x3c)))) {
    iVar3 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
    cVar2 = func_08034C64(iVar5,iVar3 + 10);
    if (cVar2 != '\0') {
      uVar7 = _DAT_08036130;
      uVar8 = _DAT_08036134;
    }
  }
  func_08035908(param_1,uVar7);
  func_08035940(param_1,uVar8);
  return in_lr;
}

// =============================================================================
// Function: func_08036138 @ 0x08036138
// =============================================================================
undefined4 func_08036138(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_08036084(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08036154 @ 0x08036154
// =============================================================================
void func_08036154(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_08036084();
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036184 @ 0x08036184
// =============================================================================
undefined8 func_08036184(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_080361bc;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080361C0 @ 0x080361C0
// =============================================================================
void func_080361C0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_080361EC @ 0x080361EC
// =============================================================================
undefined8 func_080361EC(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036224;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036228 @ 0x08036228
// =============================================================================
void func_08036228(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: func_08036258 @ 0x08036258
// =============================================================================
undefined8 func_08036258(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_0803628c;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036290 @ 0x08036290
// =============================================================================
void func_08036290(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: func_080362C0 @ 0x080362C0
// =============================================================================
undefined8 func_080362C0(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_080362f8;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080362FC @ 0x080362FC
// =============================================================================
void func_080362FC(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,1,0,0);
  return;
}

// =============================================================================
// Function: func_08036328 @ 0x08036328
// =============================================================================
undefined8 func_08036328(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036360;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036364 @ 0x08036364
// =============================================================================
void func_08036364(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036390 @ 0x08036390
// =============================================================================
undefined8 func_08036390(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_080363c8;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080363CC @ 0x080363CC
// =============================================================================
void func_080363CC(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_080363F8 @ 0x080363F8
// =============================================================================
undefined8 func_080363F8(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_0803642c;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036430 @ 0x08036430
// =============================================================================
undefined4 func_08036430(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = _DAT_08036478;
  uVar1 = _DAT_08036474;
  iVar5 = param_1[0xd];
  iVar6 = iVar5 + _DAT_0803647c;
  iVar3 = func_080A0490(iVar6);
  uVar7 = uVar1;
  if ((((iVar3 == 0x13) && (*(short *)(param_1 + 1) == 0x1d)) &&
      (cVar2 = func_08035AE0(param_1), uVar7 = _DAT_08036484, cVar2 == '\0')) &&
     ((((*(byte *)(iVar5 + _DAT_08036480) & 0x1f) >> 3 != 1 &&
       (iVar3 = func_080A0384(iVar6), uVar7 = uVar1, iVar3 != 0)) &&
      (uVar4 = func_0x0809ead8(), uVar4 < 0x3c)))) {
    iVar3 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
    cVar2 = func_08034C64(iVar5,iVar3 + 10);
    if (cVar2 != '\0') {
      uVar7 = _DAT_080364dc;
      uVar8 = _DAT_080364e0;
    }
  }
  func_08035908(param_1,uVar7);
  func_08035940(param_1,uVar8);
  return in_lr;
}

// =============================================================================
// Function: func_080364E4 @ 0x080364E4
// =============================================================================
undefined4 func_080364E4(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_08036430(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08036500 @ 0x08036500
// =============================================================================
void func_08036500(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_08036430();
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036564 @ 0x08036564
// =============================================================================
void func_08036564(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036590 @ 0x08036590
// =============================================================================
undefined8 func_08036590(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_080365c8;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080365CC @ 0x080365CC
// =============================================================================
undefined4 func_080365CC(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = _DAT_08036614;
  uVar1 = _DAT_08036610;
  iVar5 = param_1[0xd];
  iVar6 = iVar5 + _DAT_08036618;
  iVar3 = func_080A0490(iVar6);
  uVar7 = uVar1;
  if ((((iVar3 == 0x15) && (*(short *)(param_1 + 1) == 0x1d)) &&
      (cVar2 = func_08035AE0(param_1), uVar7 = _DAT_08036620, cVar2 == '\0')) &&
     ((((*(byte *)(iVar5 + _DAT_0803661c) & 7) >> 1 != 1 &&
       (iVar3 = func_080A0384(iVar6), uVar7 = uVar1, iVar3 != 0)) &&
      (uVar4 = func_0x0809ead8(), uVar4 < 0x3c)))) {
    iVar3 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
    cVar2 = func_08034C64(iVar5,iVar3 + 10);
    if (cVar2 != '\0') {
      uVar7 = _DAT_08036678;
      uVar8 = _DAT_0803667c;
    }
  }
  func_08035908(param_1,uVar7);
  func_08035940(param_1,uVar8);
  return in_lr;
}

// =============================================================================
// Function: func_08036680 @ 0x08036680
// =============================================================================
undefined4 func_08036680(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_080365CC(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803669C @ 0x0803669C
// =============================================================================
void func_0803669C(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_080365CC();
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_080366CC @ 0x080366CC
// =============================================================================
undefined8 func_080366CC(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036700;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036704 @ 0x08036704
// =============================================================================
void func_08036704(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036730 @ 0x08036730
// =============================================================================
undefined8 func_08036730(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036764;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036768 @ 0x08036768
// =============================================================================
undefined4 func_08036768(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  uVar2 = 2;
  iVar1 = _DAT_080367a0;
  if ((*(byte *)(*(int *)(param_1 + 0x34) + _DAT_080367a4) & 3) == 1) {
    iVar1 = _DAT_080367a0 + 0x18;
    uVar2 = 1;
  }
  func_08035908(param_1,iVar1);
  func_08035940(param_1,_DAT_080367a8);
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  return in_lr;
}

// =============================================================================
// Function: func_080367AC @ 0x080367AC
// =============================================================================
undefined4 func_080367AC(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_08036768(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080367C8 @ 0x080367C8
// =============================================================================
void func_080367C8(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_08036768();
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_080367F8 @ 0x080367F8
// =============================================================================
undefined8 func_080367F8(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036830;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036834 @ 0x08036834
// =============================================================================
void func_08036834(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036860 @ 0x08036860
// =============================================================================
void func_08036860(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036894;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08036898 @ 0x08036898
// =============================================================================
void func_08036898(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_080368C4 @ 0x080368C4
// =============================================================================
undefined8 func_080368C4(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_080368fc;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036900 @ 0x08036900
// =============================================================================
undefined4 func_08036900(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = _DAT_08036954;
  uVar1 = _DAT_08036950;
  iVar5 = param_1[0xd];
  iVar6 = iVar5 + _DAT_08036958;
  iVar3 = func_080A0490(iVar6);
  uVar7 = uVar1;
  if ((((iVar3 == 0x19) && (*(short *)(param_1 + 1) == 0x1d)) &&
      (cVar2 = func_08035AE0(param_1), uVar7 = _DAT_08036964, cVar2 == '\0')) &&
     ((((byte)((*(byte *)(iVar5 + _DAT_08036960) & 1) << 1 | *(byte *)(iVar5 + _DAT_0803695c) >> 7)
        != 1 && (iVar3 = func_080A0384(iVar6), uVar7 = uVar1, iVar3 != 0)) &&
      (uVar4 = func_0x0809ead8(), uVar4 < 0x3c)))) {
    iVar3 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
    cVar2 = func_08034C64(iVar5,iVar3 + 10);
    if (cVar2 != '\0') {
      uVar7 = _DAT_080369bc;
      uVar8 = _DAT_080369c0;
    }
  }
  func_08035908(param_1,uVar7);
  func_08035940(param_1,uVar8);
  return in_lr;
}

// =============================================================================
// Function: func_080369C4 @ 0x080369C4
// =============================================================================
undefined4 func_080369C4(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_08036900(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080369E0 @ 0x080369E0
// =============================================================================
void func_080369E0(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_08036900();
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036A10 @ 0x08036A10
// =============================================================================
undefined8 func_08036A10(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036a48;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036A4C @ 0x08036A4C
// =============================================================================
void func_08036A4C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036A78 @ 0x08036A78
// =============================================================================
undefined8 func_08036A78(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036ab0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036AB4 @ 0x08036AB4
// =============================================================================
undefined4 func_08036AB4(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar1 != 0x11) {
    uVar2 = _DAT_08036ad0;
    uVar3 = _DAT_08036ad4;
    if (uVar1 < 0x12) {
      if (uVar1 != 7) goto LAB_08036ae4;
    }
    else if ((uVar1 != 0x1d) && (uVar1 != 0x25)) goto LAB_08036ae4;
  }
  uVar2 = _DAT_08036af8;
  uVar3 = _DAT_08036afc;
LAB_08036ae4:
  func_08035908(param_1,uVar2);
  func_08035940(param_1,uVar3);
  return in_lr;
}

// =============================================================================
// Function: func_08036B00 @ 0x08036B00
// =============================================================================
undefined4 func_08036B00(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_08036AB4(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08036B1C @ 0x08036B1C
// =============================================================================
void func_08036B1C(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_08036AB4();
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036B80 @ 0x08036B80
// =============================================================================
void func_08036B80(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: func_08036BB0 @ 0x08036BB0
// =============================================================================
undefined4 func_08036BB0(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 in_lr;
  
  sVar1 = *(short *)((int)param_1 + 10);
  sVar2 = *(short *)((int)param_1 + 0xe);
  func_08034EB4(param_1);
  if (((*(short *)(param_1 + 1) == 2) &&
      (((sVar1 != 0xf4 || (sVar2 != 0xab)) && (*(short *)((int)param_1 + 10) == 0xf4)))) &&
     (*(short *)((int)param_1 + 0xe) == 0xab)) {
    func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x114));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08036BF8 @ 0x08036BF8
// =============================================================================
undefined4 func_08036BF8(undefined4 *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined4 in_lr;
  
  sVar1 = *(short *)((int)param_1 + 10);
  sVar2 = *(short *)((int)param_1 + 0xe);
  func_08034F00(param_1,param_2);
  if ((((1 < param_2) && (*(short *)(param_1 + 1) == 2)) && ((sVar1 != 0xf4 || (sVar2 != 0xab)))) &&
     ((*(short *)((int)param_1 + 10) == 0xf4 && (*(short *)((int)param_1 + 0xe) == 0xab)))) {
    func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x114));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08036C48 @ 0x08036C48
// =============================================================================
void func_08036C48(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036c7c;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08036C80 @ 0x08036C80
// =============================================================================
void func_08036C80(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036CAC @ 0x08036CAC
// =============================================================================
void func_08036CAC(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036cd8;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08036CDC @ 0x08036CDC
// =============================================================================
void func_08036CDC(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,2,0,0);
  return;
}

// =============================================================================
// Function: func_08036D0C @ 0x08036D0C
// =============================================================================
void func_08036D0C(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036d38;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08036D3C @ 0x08036D3C
// =============================================================================
void func_08036D3C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036D68 @ 0x08036D68
// =============================================================================
undefined8 func_08036D68(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036d94;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036D98 @ 0x08036D98
// =============================================================================
void func_08036D98(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036DC4 @ 0x08036DC4
// =============================================================================
undefined8 func_08036DC4(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036dfc;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036E00 @ 0x08036E00
// =============================================================================
void func_08036E00(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_08036E2C @ 0x08036E2C
// =============================================================================
undefined8 func_08036E2C(int param_1)

{
  undefined4 in_lr;
  
  Entity_ProcessCollisions(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08036e6c;
  *(undefined2 *)(param_1 + 0x48) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08036E70 @ 0x08036E70
// =============================================================================
undefined4 func_08036E70(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  iVar3 = func_080A0384(*(int *)(param_1 + 0x34) + _DAT_08036ea0);
  uVar6 = _DAT_08036ea8;
  uVar1 = _DAT_08036ea4;
  if (iVar3 != 0) {
    uVar4 = func_0x0809ead8();
    if (uVar4 < 0x3c) {
      cVar2 = func_08035AE0(param_1);
      uVar5 = uVar1;
      if (cVar2 != '\0') {
        uVar5 = 0xc;
      }
    }
    else {
      cVar2 = func_08035AE0(param_1);
      uVar5 = _DAT_08036ebc;
      if ((cVar2 == '\0') && (cVar2 = func_0x0809eae0(iVar3), uVar5 = uVar1, cVar2 == '\0')) {
        uVar5 = _DAT_08036ee8;
        uVar6 = _DAT_08036eec;
      }
    }
    func_08035908(param_1,uVar5);
    func_08035940(param_1,uVar6);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08036EF0 @ 0x08036EF0
// =============================================================================
undefined4 func_08036EF0(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_08034F00();
  if (1 < param_2) {
    func_08036E70(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08036F0C @ 0x08036F0C
// =============================================================================
undefined8 func_08036F0C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = func_080A0384(*(int *)(param_1 + 0x34) + _DAT_08036f58);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    func_08036E70(param_1);
    cVar1 = func_0x0809eae0(iVar2);
    uVar4 = 1;
    if (cVar1 != '\0') {
      uVar4 = 4;
    }
    uVar3 = func_080005D4(0x8c);
    uVar4 = func_080324BC(uVar3,param_1,4,0x1b,0,uVar4,0,0);
  }
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_08036F68 @ 0x08036F68
// =============================================================================
undefined4 func_08036F68(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pbVar6 = (byte *)&uStack_24;
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar3 = func_080A0384(*(int *)(param_1 + 0x34) + _DAT_08036fa8), iVar3 != 0)) &&
      (uVar4 = func_0x0809ead8(), uVar4 < 0x3c)) && (cVar1 = func_08035AE0(param_1), cVar1 != '\0'))
  {
    sVar2 = *(short *)(param_1 + 0x48);
    if (sVar2 == 0) {
      uStack_24 = *_DAT_08036fc8;
      uStack_20 = _DAT_08036fc8[1];
      uStack_1c = _DAT_08036fc8[2];
      uStack_18 = _DAT_08036fc8[3];
      uVar5 = func_0x080d11e4();
      uVar4 = func_0x080d0ed0(uVar5,100);
      for (uVar7 = 0; uVar7 < 4; uVar7 = uVar7 + 1) {
        if (uVar4 < *pbVar6) {
          func_08035908(param_1,*(undefined2 *)(pbVar6 + 2));
          break;
        }
        uVar4 = uVar4 - *pbVar6;
        pbVar6 = pbVar6 + 4;
      }
      uVar5 = func_0x080d11e4();
      sVar2 = func_0x080d0ed0(uVar5,0x78);
      sVar2 = sVar2 + 0x78;
    }
    else {
      sVar2 = sVar2 + -1;
    }
    *(short *)(param_1 + 0x48) = sVar2;
  }
  func_08034EB4(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08037098 @ 0x08037098
// =============================================================================
undefined4 func_08037098(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = 0;
  iVar4 = 0;
  bVar1 = *(byte *)(param_1 + 0x20);
  iVar3 = iVar2;
  if (bVar1 == 1) {
    param_2 = -param_2;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_2 = iVar4;
    }
  }
  else if (bVar1 == 2) {
    iVar3 = -param_2;
    param_2 = iVar4;
  }
  else {
    iVar3 = param_2;
    param_2 = iVar4;
    if (bVar1 != 3) {
      iVar3 = iVar2;
    }
  }
  *(int *)(param_1 + 0x18) = iVar3;
  *(int *)(param_1 + 0x1c) = param_2;
  return in_lr;
}

// =============================================================================
// Function: func_080370D8 @ 0x080370D8
// =============================================================================
undefined8 func_080370D8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    if (*(short *)(iVar2 + 0x3e) != 0) {
      uVar3 = (uint)(-(int)*(short *)(iVar2 + 0x40) | (int)*(short *)(iVar2 + 0x40)) >> 0x1f;
    }
    if ((uVar3 == 0) || (cVar1 = func_0805E894(iVar2 + 0x30), cVar1 != '\0')) {
      uVar4 = 1;
    }
  }
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_08037118 @ 0x08037118
// =============================================================================
undefined4 func_08037118(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 8) >> 0x10;
  iVar7 = *(int *)(param_1 + 0xc) >> 0x10;
  iVar6 = (iVar2 >> 0x10) - iVar7;
  iVar4 = (iVar1 >> 0x10) - iVar3;
  if (0 < iVar6) {
    iVar5 = *param_2;
    if (param_2[10] < iVar5) {
      func_080AB85C(param_2);
      iVar5 = *param_2;
    }
    if (iVar5 < iVar6) {
      iVar2 = *param_2;
      if (param_2[10] < iVar2) {
        func_080AB85C(param_2);
        iVar2 = *param_2;
      }
      iVar2 = (iVar7 + iVar2) * 0x10000;
    }
  }
  if (iVar6 < 0) {
    iVar5 = param_2[1];
    if (iVar5 + param_2[10] < 0 != SCARRY4(iVar5,param_2[10])) {
      func_080AB8D0(param_2);
      iVar5 = param_2[1];
    }
    if (iVar6 < iVar5) {
      iVar2 = param_2[1];
      if (iVar2 + param_2[10] < 0 != SCARRY4(iVar2,param_2[10])) {
        func_080AB8D0(param_2);
        iVar2 = param_2[1];
      }
      iVar2 = (iVar7 + iVar2) * 0x10000;
    }
  }
  if (iVar4 < 0) {
    iVar6 = param_2[2];
    if (iVar6 + param_2[10] < 0 != SCARRY4(iVar6,param_2[10])) {
      func_080AB948(param_2);
      iVar6 = param_2[2];
    }
    if (iVar4 < iVar6) {
      iVar1 = param_2[2];
      if (iVar1 + param_2[10] < 0 != SCARRY4(iVar1,param_2[10])) {
        func_080AB948(param_2);
        iVar1 = param_2[2];
      }
      iVar1 = (iVar3 + iVar1) * 0x10000;
    }
  }
  if (0 < iVar4) {
    iVar6 = param_2[3];
    if (param_2[10] < iVar6) {
      func_080AB9C4(param_2);
      iVar6 = param_2[3];
    }
    if (iVar6 < iVar4) {
      iVar1 = param_2[3];
      if (param_2[10] < iVar1) {
        func_080AB9C4(param_2);
        iVar1 = param_2[3];
      }
      iVar1 = (iVar3 + iVar1) * 0x10000;
    }
  }
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = iVar2;
  return in_lr;
}

// =============================================================================
// Function: func_0803726C @ 0x0803726C
// =============================================================================
undefined4 func_0803726C(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  piVar5 = (int *)*param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 1);
  uVar3 = func_0x080d3910(piVar5,*(undefined4 *)(*piVar5 + 0x14));
  if (uVar3 != uVar2) goto LAB_08037402;
  func_0x080d3918(&uStack_7c,piVar5,uVar2,*(undefined4 *)(*piVar5 + 0x34));
  func_0x080d3914(&uStack_3c,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  iStack_70 = 0x21;
  iStack_6c = -0x21;
  iStack_68 = -0x21;
  iStack_64 = 0x21;
  uStack_5c = uStack_7c;
  uStack_58 = uStack_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_3c;
  uStack_4c = uStack_38;
  iStack_48 = 0x20;
  uStack_44 = 0;
  uStack_40 = 0;
  iVar4 = func_0x080d3914((int *)*param_1,0,*(undefined4 *)(*(int *)*param_1 + 0x40));
  if ((iVar4 != 0) && (*(ushort *)(iVar4 + 4) == uVar2)) {
    func_0x080d3914(auStack_34,iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0xc));
    func_080ABA90(&iStack_70,auStack_34,0);
  }
  iVar4 = func_0x080d3914((int *)*param_1,0x4a,*(undefined4 *)(*(int *)*param_1 + 0x40));
  if ((iVar4 != 0) && (*(ushort *)(iVar4 + 4) == uVar2)) {
    func_0x080d3914(auStack_2c,iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0xc));
    func_080ABA90(&iStack_70,auStack_2c,0);
  }
  if ((0 < (int)*(short *)(param_1 + 0xe) - (int)*(short *)(param_1 + 0xd)) &&
     (0 < (int)*(short *)((int)param_1 + 0x3a) - (int)*(short *)((int)param_1 + 0x36))) {
    func_080ABA90(&iStack_70,param_1 + 0xd,0);
  }
  sVar1 = *(short *)((int)param_1 + 0x3e);
  if (sVar1 == 0) {
    sVar1 = func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x40));
  }
  else {
    iVar4 = param_1[6];
    iVar6 = param_1[7];
    if (iVar4 < 0) {
      if (iStack_68 + iStack_48 < 0 != SCARRY4(iStack_68,iStack_48)) {
        func_080AB948(&iStack_70);
      }
      if (iStack_68 < 0) goto LAB_08037390;
LAB_080373e4:
      sVar1 = 0;
    }
    else {
LAB_08037390:
      if (0 < iVar4) {
        if (iStack_48 < iStack_64) {
          func_080AB9C4(&iStack_70);
        }
        if (iStack_64 < 1) goto LAB_080373e4;
      }
      if (iVar6 < 0) {
        if (iStack_6c + iStack_48 < 0 != SCARRY4(iStack_6c,iStack_48)) {
          func_080AB8D0(&iStack_70);
        }
        if (-1 < iStack_6c) goto LAB_080373e4;
      }
      if (0 < iVar6) {
        if (iStack_48 < iStack_70) {
          func_080AB85C(&iStack_70);
        }
        if (iStack_70 < 1) goto LAB_080373e4;
      }
      sVar1 = sVar1 + -1;
    }
  }
  *(short *)((int)param_1 + 0x3e) = sVar1;
  func_08037118(param_1,&iStack_70);
LAB_08037402:
  if (*(short *)(param_1 + 9) == 0) {
    sVar1 = *(short *)((int)param_1 + 0x26);
  }
  else {
    sVar1 = *(short *)(param_1 + 9) + -1;
  }
  *(short *)(param_1 + 9) = sVar1;
  iVar4 = param_1[4];
  if (iVar4 != 0) {
    func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08037434 @ 0x08037434
// =============================================================================
undefined4 func_08037434(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    func_0x080d3910(param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c));
  }
  *(undefined2 *)(param_1 + 0x3e) = 0;
  func_0801FDC0(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_0803745C @ 0x0803745C
// =============================================================================
undefined4 func_0803745C(int param_1)

{
  undefined4 in_lr;
  
  func_0801FE20();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_08037470 @ 0x08037470
// =============================================================================
void func_08037470(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -7;
  param_1[1] = sVar2 + -9;
  param_1[2] = sVar1 + 7;
  param_1[3] = sVar2 + 5;
  return;
}

// =============================================================================
// Function: func_08037494 @ 0x08037494
// =============================================================================
undefined8 func_08037494(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
  iVar6 = (uint)(0xe < (*(byte *)(iVar2 + 10) & 0x1f) - 6) * 0x14 + _DAT_08037538;
  iVar2 = func_080AB82C(iVar6,5);
  iVar6 = iVar6 + iVar2 * 4;
  iVar3 = func_080AB788((uint)*(byte *)(iVar6 + 2) * 0x3c);
  bVar1 = *(byte *)(iVar6 + 1);
  iVar6 = func_080AB788(4);
  if (((iVar6 != 0) && (iVar6 != 3)) &&
     (uVar4 = func_080AB7A4(*(byte *)(param_1 + 8)), *(byte *)(param_1 + 8) != uVar4)) {
    func_08032198(param_1);
  }
  uVar5 = func_08037628(param_1,iVar2);
  func_08037098(param_1,uVar5);
  uVar4 = func_0x08037618(param_1,iVar2);
  if (*(ushort *)((int)param_1 + 0x22) != uVar4) {
    func_080321B0(param_1);
  }
  return CONCAT44(in_lr,(uint)bVar1 * 0x3c + iVar3);
}

// =============================================================================
// Function: func_0803753C @ 0x0803753C
// =============================================================================
void func_0803753C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,2,9,0,7,0,0);
  return;
}

// =============================================================================
// Function: func_08037568 @ 0x08037568
// =============================================================================
undefined4 func_08037568(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  piVar1 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
  if ((*(byte *)((int)piVar1 + 10) & 0x1f) - 6 < 10) {
    uVar2 = ((*(byte *)((int)piVar1 + 9) & 0x7f) >> 2) +
            (*(byte *)((int)piVar1 + 9) & 3) * 0x1e + ((*(byte *)(piVar1 + 2) & 7) + 6) * 0x78;
    if (6 < uVar2) {
      uVar2 = func_0x080d0f4e(uVar2,7);
    }
    if (((uVar2 & 7) != 0) && (*piVar1 == 0)) {
      func_080A17A0(auStack_18,*(byte *)(param_1 + 0x11) & 3);
      func_0803211C(param_1,auStack_18);
      uVar2 = func_0x08037618(param_1,0);
      if (*(ushort *)((int)param_1 + 0x22) == uVar2) {
        return in_lr;
      }
      func_080321B0(param_1);
      return in_lr;
    }
  }
  func_0x0801ff38(param_1,0x234);
  return in_lr;
}

// =============================================================================
// Function: func_08037628 @ 0x08037628
// =============================================================================
undefined8 func_08037628(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0803763C @ 0x0803763C
// =============================================================================
undefined8 func_0803763C(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
  iVar6 = (uint)(0xe < (*(byte *)(iVar2 + 10) & 0x1f) - 6) * 0x1c + _DAT_080376e0;
  iVar2 = func_080AB82C(iVar6,7);
  iVar6 = iVar6 + iVar2 * 4;
  iVar3 = func_080AB788((uint)*(byte *)(iVar6 + 2) * 0x3c);
  bVar1 = *(byte *)(iVar6 + 1);
  iVar6 = func_080AB788(4);
  if (((iVar6 != 0) && (iVar6 != 3)) &&
     (uVar4 = func_080AB7A4(*(byte *)(param_1 + 8)), *(byte *)(param_1 + 8) != uVar4)) {
    func_08032198(param_1);
  }
  uVar5 = func_080377D4(param_1,iVar2);
  func_08037098(param_1,uVar5);
  uVar4 = func_0x080377c4(param_1,iVar2);
  if (*(ushort *)((int)param_1 + 0x22) != uVar4) {
    func_080321B0(param_1);
  }
  return CONCAT44(in_lr,(uint)bVar1 * 0x3c + iVar3);
}

// =============================================================================
// Function: func_080376E4 @ 0x080376E4
// =============================================================================
void func_080376E4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,4,0xc,2,0xc,0,0);
  return;
}

// =============================================================================
// Function: func_08037714 @ 0x08037714
// =============================================================================
undefined4 func_08037714(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  piVar1 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
  if ((*(byte *)((int)piVar1 + 10) & 0x1f) - 6 < 10) {
    uVar2 = ((*(byte *)((int)piVar1 + 9) & 0x7f) >> 2) +
            (*(byte *)((int)piVar1 + 9) & 3) * 0x1e + ((*(byte *)(piVar1 + 2) & 7) + 6) * 0x78;
    if (6 < uVar2) {
      uVar2 = func_0x080d0f4e(uVar2,7);
    }
    if (((uVar2 & 7) != 1) && (*piVar1 == 0)) {
      func_080A1890(auStack_18,*(byte *)(param_1 + 0x11) & 3);
      func_0803211C(param_1,auStack_18);
      uVar2 = func_0x080377c4(param_1,0);
      if (*(ushort *)((int)param_1 + 0x22) == uVar2) {
        return in_lr;
      }
      func_080321B0(param_1);
      return in_lr;
    }
  }
  func_0x0801ff38(param_1,0x234);
  return in_lr;
}

// =============================================================================
// Function: func_080377D4 @ 0x080377D4
// =============================================================================
undefined8 func_080377D4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080377E8 @ 0x080377E8
// =============================================================================
undefined8 func_080377E8(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x144));
  iVar6 = (uint)(0xe < (*(byte *)(iVar2 + 10) & 0x1f) - 6) * 0x34 + _DAT_08037888;
  iVar2 = func_080AB82C(iVar6,0xd);
  iVar6 = iVar6 + iVar2 * 4;
  iVar3 = func_080AB788((uint)*(byte *)(iVar6 + 2) * 0x3c);
  bVar1 = *(byte *)(iVar6 + 1);
  iVar6 = func_080AB788(4);
  if (((iVar6 != 0) && (iVar6 != 3)) &&
     (uVar4 = func_080AB7A4(*(byte *)(param_1 + 8)), *(byte *)(param_1 + 8) != uVar4)) {
    func_08032198(param_1);
  }
  uVar5 = func_080378FC(param_1,iVar2);
  func_08037098(param_1,uVar5);
  uVar4 = func_0x080378ec(param_1,iVar2);
  if (*(ushort *)((int)param_1 + 0x22) != uVar4) {
    func_080321B0(param_1);
  }
  return CONCAT44(in_lr,(uint)bVar1 * 0x3c + iVar3);
}

// =============================================================================
// Function: func_0803788C @ 0x0803788C
// =============================================================================
void func_0803788C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,2,0x1b,0,8,0,0);
  return;
}

// =============================================================================
// Function: func_080378B8 @ 0x080378B8
// =============================================================================
undefined4 func_080378B8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_10 [8];
  
  func_080A198C(auStack_10);
  func_0803211C(param_1,auStack_10);
  uVar1 = func_0x080378ec(param_1,0);
  if (*(ushort *)(param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080378FC @ 0x080378FC
// =============================================================================
undefined8 func_080378FC(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0xc < param_2) goto case_08037944;
  switch(*(uint *)(PTR_case_08037910_0803790c + param_2 * 4) & 0xfffffffe) {
  case 0x8037910:
  case 0x8037944:
case_08037944:
    uVar1 = 0;
    break;
  case 0x8037948:
    uVar1 = 0x8000;
    break;
  case 0x803794e:
    uVar1 = 0x10000;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08037958 @ 0x08037958
// =============================================================================
undefined8 func_08037958(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = _DAT_080379d4;
  iVar2 = func_080AB82C(_DAT_080379d4,3);
  iVar6 = iVar2 * 4 + iVar6;
  iVar3 = func_080AB788((uint)*(byte *)(iVar6 + 2) * 0x3c);
  bVar1 = *(byte *)(iVar6 + 1);
  iVar6 = func_080AB788(4);
  if (((iVar6 != 0) && (iVar6 != 3)) &&
     (uVar4 = func_080AB7A4(*(byte *)(param_1 + 0x20)), *(byte *)(param_1 + 0x20) != uVar4)) {
    func_08032198(param_1);
  }
  uVar5 = func_08037A48(param_1,iVar2);
  func_08037098(param_1,uVar5);
  uVar4 = func_0x08037a38(param_1,iVar2);
  if (*(ushort *)(param_1 + 0x22) != uVar4) {
    func_080321B0(param_1);
  }
  return CONCAT44(in_lr,(uint)bVar1 * 0x3c + iVar3);
}

// =============================================================================
// Function: func_080379D8 @ 0x080379D8
// =============================================================================
void func_080379D8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,2,0x1b,0,8,0,0);
  return;
}

// =============================================================================
// Function: func_08037A04 @ 0x08037A04
// =============================================================================
undefined4 func_08037A04(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_10 [8];
  
  func_080A19EC(auStack_10);
  func_0803211C(param_1,auStack_10);
  uVar1 = func_0x08037a38(param_1,0);
  if (*(ushort *)(param_1 + 0x22) != uVar1) {
    func_080321B0(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08037A48 @ 0x08037A48
// =============================================================================
undefined8 func_08037A48(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08037A5C @ 0x08037A5C
// =============================================================================
undefined8 func_08037A5C(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  undefined4 in_lr;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  iVar1 = func_080005D4(0x48);
  func_0x08037008(iVar1,param_1,param_2,_DAT_08037ac8,0);
  *(undefined4 *)(iVar1 + 0x14) = _DAT_08037acc;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfc | param_3 & 3;
  uStack_1c = 0x160;
  uStack_1a = 0xd8;
  uStack_18 = 0x198;
  uStack_16 = 0xe8;
  func_0x08037244(iVar1,&uStack_1c);
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_08037AD0 @ 0x08037AD0
// =============================================================================
undefined8 func_08037AD0(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  undefined4 in_lr;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  iVar1 = func_080005D4(0x48);
  func_0x08037008(iVar1,param_1,param_2,0x2ac,0xb);
  *(undefined4 *)(iVar1 + 0x14) = _DAT_08037b44;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfc | param_3 & 3;
  uStack_1c = 0x398;
  uStack_1a = 0x120;
  uStack_18 = 0x4e0;
  uStack_16 = 0x128;
  func_0x08037244(iVar1,&uStack_1c);
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_08037B48 @ 0x08037B48
// =============================================================================
undefined8 func_08037B48(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = func_080005D4(0x44);
  func_0x08037008(iVar1,param_1,param_2,_DAT_08037b78,0xc);
  *(undefined4 *)(iVar1 + 0x14) = _DAT_08037b7c;
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_08037B80 @ 0x08037B80
// =============================================================================
undefined8 func_08037B80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = func_080005D4(0x44);
  func_0x08037008(iVar1,param_1,param_2,_DAT_08037bb0,10);
  *(undefined4 *)(iVar1 + 0x14) = _DAT_08037bb4;
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_08037BB8 @ 0x08037BB8
// =============================================================================
undefined8 func_08037BB8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  func_0x08037008(param_1,param_2,param_3,_DAT_08037bd8,10);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08037bdc;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08037BE0 @ 0x08037BE0
// =============================================================================
void func_08037BE0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x08037008(param_1,param_2,param_3,_DAT_08037c00,0xc);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08037c04;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08037C08 @ 0x08037C08
// =============================================================================
undefined8 func_08037C08(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 in_lr;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  func_0x08037008(param_1,param_2,param_3,0x2ac,0xb);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08037c64;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc | param_4 & 3;
  uStack_14 = 0x398;
  uStack_12 = 0x120;
  uStack_10 = 0x4e0;
  uStack_e = 0x128;
  func_0x08037244(param_1,&uStack_14);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08037C68 @ 0x08037C68
// =============================================================================
undefined8 func_08037C68(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 in_lr;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  func_0x08037008(param_1,param_2,param_3,_DAT_08037cbc,0);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08037cc0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc | param_4 & 3;
  uStack_14 = 0x160;
  uStack_12 = 0xd8;
  uStack_10 = 0x198;
  uStack_e = 0xe8;
  func_0x08037244(param_1,&uStack_14);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08037CC4 @ 0x08037CC4
// =============================================================================
void func_08037CC4(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x0801fd78();
  *(undefined4 *)(param_1 + 0x14) = _DAT_08037cd8;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08037CF0 @ 0x08037CF0
// =============================================================================
void func_08037CF0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x54);
  func_08037D08(uVar1,param_1);
  return;
}

// =============================================================================
// Function: func_08037D74 @ 0x08037D74
// =============================================================================
undefined4 func_08037D74(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (int)*(short *)(*param_1 + 0xe);
  uVar1 = *param_2;
  if ((-param_1[4] | param_1[4]) < 0) {
    iVar2 = func_0x080d391c(param_2[2],(int)*(short *)(*param_1 + 10) - (int)*(short *)(param_2 + 3)
                            ,iVar2 - *(short *)((int)param_2 + 0xe),0xaa,0x8000 - iVar2,
                            param_1 + 0xc,param_1[2],(short)param_1[5],param_1 + 6,uVar1,param_2[2])
    ;
  }
  else {
    iVar2 = 0;
  }
  if ((iVar2 != 0) && ((char)param_1[0x14] != '\0')) {
    func_080A480C(param_1 + 2,uVar1,param_1 + 0xe);
    func_080A4944(param_1 + 2,param_1 + 0x10,1);
    *(char *)(param_1 + 0x14) = '\0';
  }
  return in_lr;
}

// =============================================================================
// Function: func_08037E18 @ 0x08037E18
// =============================================================================
undefined8 func_08037E18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  func_0800FFE0(auStack_18,param_3);
  func_0x0801fd78(param_1,param_2,auStack_18);
  *(undefined4 *)(param_1 + 0x14) = _DAT_08037e44;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08037E9C @ 0x08037E9C
// =============================================================================
void func_08037E9C(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x58);
  func_08037EF0(uVar1,param_1);
  return;
}

// =============================================================================
// Function: func_08037EB4 @ 0x08037EB4
// =============================================================================
undefined4 func_08037EB4(int param_1,undefined1 *param_2)

{
  undefined4 in_lr;
  
  func_0800FFF4(*(undefined4 *)(param_1 + 0x18),*param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x08037f74();
  }
  return in_lr;
}

// =============================================================================
// Function: func_08037ED0 @ 0x08037ED0
// =============================================================================
void func_08037ED0(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -7;
  param_1[1] = sVar2 + -4;
  param_1[2] = sVar1 + 7;
  param_1[3] = sVar2 + 5;
  return;
}

// =============================================================================
// Function: func_08037F60 @ 0x08037F60
// =============================================================================
undefined4 func_08037F60(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x54);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x54) = cVar1 + -1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08037F7C @ 0x08037F7C
// =============================================================================
undefined4 func_08037F7C(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)*(short *)(*param_1 + 0xe);
  iVar2 = iVar3 - *(short *)((int)param_2 + 0xe);
  uVar1 = *param_2;
  if ((char)param_1[0x15] != '\0') {
    iVar2 = iVar2 + -2;
  }
  if ((-param_1[4] | param_1[4]) < 0) {
    iVar2 = func_0x080d391c(param_2[2],(int)*(short *)(*param_1 + 10) - (int)*(short *)(param_2 + 3)
                            ,iVar2,0xaa,0x8000 - iVar3,param_1 + 0xc,param_1[2],(short)param_1[5],
                            param_1 + 6,uVar1,param_2[2]);
  }
  else {
    iVar2 = 0;
  }
  if ((iVar2 != 0) && ((char)param_1[0x14] != '\0')) {
    func_080A480C(param_1 + 2,uVar1,param_1 + 0xe);
    func_080A4944(param_1 + 2,param_1 + 0x10,1);
    *(char *)(param_1 + 0x14) = '\0';
  }
  return in_lr;
}

// =============================================================================
// Function: func_08038028 @ 0x08038028
// =============================================================================
undefined8 func_08038028(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  func_0x0801fd78();
  *(undefined4 *)(param_1 + 0x14) = _DAT_08038094;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0x31;
  iVar2 = func_0x080d3914(param_2,0x2b,*(undefined4 *)(*param_2 + 0x40));
  if (((iVar2 != 0) && (*(short *)(iVar2 + 4) == *(short *)(param_1 + 4))) &&
     (cVar1 = func_08020460(iVar2), cVar1 != '\0')) {
    func_08038374(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                  *(undefined2 *)(iVar2 + 0x22),*(undefined1 *)(iVar2 + 0x20));
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08038110 @ 0x08038110
// =============================================================================
undefined4 func_08038110(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    return in_lr;
  }
  piVar5 = (int *)*param_1;
  func_0x080d3918(&iStack_5c,piVar5,*(undefined2 *)(param_1 + 1),*(undefined4 *)(*piVar5 + 0x34));
  iVar4 = param_1[8] + _DAT_080381a0;
  param_1[8] = iVar4;
  iVar4 = param_1[7] + iVar4;
  param_1[7] = iVar4;
  if (iVar4 < 1) {
    param_1[7] = 0;
    *(char *)((int)param_1 + 0x25) = '\0';
    func_0801FE94(&iStack_50,param_1);
    memcpy(param_1[6],&iStack_50,6);
    if (((iStack_5c == 0) || ((uStack_54 & 0xffff) < (uint)((int)param_1[2] >> 0x13))) ||
       (uStack_54 >> 0x10 < (uint)((int)param_1[3] >> 0x13))) {
      piVar3 = (int *)0x0;
    }
    else {
      uVar2 = ((int)param_1[3] >> 0x13) * (uStack_54 & 0xffff) + ((int)param_1[2] >> 0x13);
      if (iStack_58 != 0) {
        uVar2 = (uint)*(byte *)(iStack_58 + uVar2);
      }
      piVar3 = (int *)(iStack_5c + uVar2 * 4);
    }
    if (piVar3 == (int *)0x0) {
      func_0x080d3914(piVar5,1,*(undefined4 *)(*piVar5 + 0x13c));
      return in_lr;
    }
    if (*piVar3 * 0x40000000 < 0) {
      func_0x080d3914(piVar5,0,*(undefined4 *)(*piVar5 + 0x13c));
      return in_lr;
    }
    iVar4 = func_0x080d3914((int *)*param_1,0x2b,*(undefined4 *)(*(int *)*param_1 + 0x40));
    if (iVar4 == 0) {
      return in_lr;
    }
    func_0802151C(iVar4,&iStack_50);
    return in_lr;
  }
  func_0x080d3914(&uStack_28,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_20 = uStack_28;
  uStack_1c = uStack_24;
  iStack_50 = 0x21;
  iStack_4c = -0x21;
  iStack_48 = -0x21;
  iStack_44 = 0x21;
  iStack_40 = iStack_5c;
  iStack_3c = iStack_58;
  uStack_38 = uStack_54;
  uStack_34 = uStack_28;
  uStack_30 = uStack_24;
  uStack_2c = 0x20;
  iVar4 = param_1[2];
  iVar6 = param_1[3];
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 == 1) {
    func_080ABBC4(&iStack_50);
    iStack_50 = iStack_4c * 0x10000;
    if (iStack_50 - _DAT_080381d0 == 0 || iStack_50 < _DAT_080381d0) {
      iVar6 = iVar6 + _DAT_080381d0;
      goto LAB_08038250;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_080ABBEC(&iStack_50);
        iStack_44 = iStack_48 * 0x10000;
        if (iStack_44 - _DAT_08038258 == 0 || iStack_44 < _DAT_08038258) {
          iVar4 = iVar4 + _DAT_08038258;
          goto LAB_08038250;
        }
      }
      else {
        if (bVar1 != 3) goto LAB_08038250;
        func_080ABC14(&iStack_50);
        iStack_44 = iStack_44 * 0x10000;
        if (iStack_44 - _DAT_08038228 != 0 && _DAT_08038228 <= iStack_44) {
          iStack_44 = _DAT_0803822c;
        }
      }
      iVar4 = iVar4 + iStack_44;
      goto LAB_08038250;
    }
    if (bVar1 != 0) goto LAB_08038250;
    func_080ABBA0(&iStack_50);
    iStack_50 = iStack_50 * 0x10000;
    if (iStack_50 - _DAT_080381f4 != 0 && _DAT_080381f4 <= iStack_50) {
      iVar6 = iVar6 + _DAT_08038200;
      goto LAB_08038250;
    }
  }
  iVar6 = iVar6 + iStack_50;
LAB_08038250:
  param_1[2] = iVar4;
  param_1[3] = iVar6;
  return in_lr;
}

// =============================================================================
// Function: func_08038300 @ 0x08038300
// =============================================================================
undefined4 func_08038300(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3910(iVar1,*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
  }
  func_08038110(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08038320 @ 0x08038320
// =============================================================================
undefined4 func_08038320(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_0801FE60();
  func_08038110(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_08038334 @ 0x08038334
// =============================================================================
void func_08038334(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x48);
  func_0803853C(uVar1,param_1);
  return;
}

// =============================================================================
// Function: func_0803834C @ 0x0803834C
// =============================================================================
void func_0803834C(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xe);
  *param_1 = sVar1 + -4;
  param_1[1] = sVar2 + -4;
  param_1[2] = sVar1 + 4;
  param_1[3] = sVar2 + 4;
  return;
}

// =============================================================================
// Function: func_08038374 @ 0x08038374
// =============================================================================
undefined4
func_08038374(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  func_08038398(param_1,param_4,param_5);
  return in_lr;
}

// =============================================================================
// Function: func_08038398 @ 0x08038398
// =============================================================================
undefined4 func_08038398(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = 0x15;
  if ((uint)(param_2 + _DAT_080383b4) < 0x3e) {
    switch(*(uint *)((param_2 + _DAT_080383b4) * 4 + _DAT_080383b8) & 0xfffffffe) {
    case 0x80384b4:
      iVar1 = 0x19;
      break;
    case 0x80384b8:
      iVar1 = 0x1d;
      break;
    case 0x80384bc:
      iVar1 = 0x21;
      break;
    case 0x80384c0:
      iVar1 = 0x25;
      break;
    case 0x80384c4:
      iVar1 = 0x29;
      break;
    case 0x80384c8:
      iVar1 = 0x2d;
    }
  }
  if (iVar1 + param_3 != (uint)*(ushort *)(param_1 + 0x28)) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      func_0805E860(iVar2 + 0x30);
      *(undefined1 *)(iVar2 + 0x44) = 1;
      *(undefined1 *)(iVar2 + 0x46) = 0;
      *(undefined1 *)(iVar2 + 0x47) = 1;
    }
    *(short *)(param_1 + 0x28) = (short)(iVar1 + param_3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080384FC @ 0x080384FC
// =============================================================================
undefined4 func_080384FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0x28) != 0x31) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      func_0805E860(iVar1 + 0x30,0x31);
      *(undefined1 *)(iVar1 + 0x44) = 1;
      *(undefined1 *)(iVar1 + 0x46) = 0;
      *(undefined1 *)(iVar1 + 0x47) = 1;
    }
    *(undefined2 *)(param_1 + 0x28) = 0x31;
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_0803853C @ 0x0803853C
// =============================================================================
undefined8 func_0803853C(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = _DAT_0803857c;
  uVar1 = func_0x080d3910((int *)*param_2,*(undefined4 *)(*(int *)*param_2 + 100));
  func_080A4A00(param_1 + 2,uVar1,*(undefined2 *)(param_2 + 10),*param_2,2,7,0);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08038580 @ 0x08038580
// =============================================================================
undefined4 func_08038580(int param_1)

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
// Function: func_080385B0 @ 0x080385B0
// =============================================================================
undefined4 func_080385B0(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [16];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  
  puVar2 = (undefined4 *)*param_1;
  sVar1 = *(short *)((int)puVar2 + 10);
  iStack_34 = (int)sVar1 - (int)*(short *)(param_2 + 3);
  iVar6 = (int)*(short *)((int)puVar2 + 0xe);
  iStack_30 = iVar6 - *(short *)((int)param_2 + 0xe);
  uStack_2c = (uint)*(byte *)((int)puVar2 + 0x26);
  iVar3 = -iVar6 + 0x8000;
  if (uStack_2c != 0) {
    iVar3 = -iVar6 + 0x7fff;
  }
  uStack_3c = *param_2;
  uStack_38 = param_2[2];
  uVar8 = 2;
  iStack_28 = iStack_30;
  if (uStack_2c == 0) {
    iVar4 = func_0x0803836c(puVar2);
    iStack_28 = iStack_30 - iVar4;
    if ((0xf < iVar4) &&
       ((8 < *(ushort *)(puVar2 + 1) ||
        ((((*(ushort *)(puVar2 + 1) == 2 && ((uint)(sVar1 + _DAT_080386ac) <= _DAT_080386b0)) &&
          (0xaf < iVar6)) && (iVar6 <= (int)(_DAT_080386b0 - 0x60))))))) {
      uVar8 = 1;
    }
  }
  piVar7 = param_1 + 2;
  puStack_24 = &uStack_3c;
  func_0x080d3918(auStack_5c,(int *)param_1[0xc],
                  *(undefined2 *)(param_1[0xd] + (uint)*(ushort *)(param_1 + 0xf) * 4),
                  *(undefined4 *)(*(int *)param_1[0xc] + 0x10));
  if ((-param_1[4] | param_1[4]) < 0) {
    iVar3 = func_0x080d391c(puStack_24[1],iStack_34,iStack_28,
                            uVar8 << 2 | uVar8 | uVar8 << 4 | uVar8 << 6,iVar3,auStack_5c,param_1[2]
                            ,(short)param_1[5],param_1 + 6);
  }
  else {
    iVar3 = 0;
  }
  if ((iVar3 != 0) && ((char)param_1[0x11] != '\0')) {
    func_080A480C(piVar7,*puStack_24,auStack_54);
    if (*(char *)((int)param_1 + 0x45) == '\0') {
      if (*(char *)((int)param_1 + 0x46) == '\0') {
        func_080A4944(piVar7,auStack_4c,1);
        *(char *)((int)param_1 + 0x46) = '\x01';
      }
    }
    else {
      func_080A4944(piVar7,auStack_4c,1);
    }
    *(char *)(param_1 + 0x11) = '\0';
  }
  if (uStack_2c == 0) {
    uVar5 = func_0x080d3910((int *)*puVar2,*(undefined4 *)(*(int *)*puVar2 + 0x58));
    ScriptEngine_SetVariable(uVar5,param_2[2],iStack_34,iStack_30,uStack_2c);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08038740 @ 0x08038740
// =============================================================================
undefined8 func_08038740(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  func_0x0801fd78(param_1);
  *(undefined4 *)(param_1 + 0x14) = _DAT_0803879c;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080387A0 @ 0x080387A0
// =============================================================================
void func_080387A0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x18);
  func_08038820(uVar1,param_1);
  return;
}

// =============================================================================
// Function: func_080387B8 @ 0x080387B8
// =============================================================================
undefined4 func_080387B8(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    func_08038DF0();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080387C8 @ 0x080387C8
// =============================================================================
undefined4 func_080387C8(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x08038e90();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080387D8 @ 0x080387D8
// =============================================================================
undefined8 func_080387D8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = func_08038EA0();
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080387EC @ 0x080387EC
// =============================================================================
undefined4 func_080387EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    func_08038EB8();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080387FC @ 0x080387FC
// =============================================================================
undefined4 func_080387FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    func_08038EE0();
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803880C @ 0x0803880C
// =============================================================================
undefined8 func_0803880C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x080390d0();
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08038820 @ 0x08038820
// =============================================================================
undefined8 func_08038820(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  undefined2 *apuStack_28 [2];
  
  *param_1 = param_2;
  param_1[1] = _DAT_0803889c;
  if ((*(byte *)(param_2[6] + 0x54) & 0x7f) >> 5 == 1) {
    iVar1 = func_080005D4(0x4c);
    piVar4 = (int *)*param_2;
    piVar2 = (int *)func_0x080d3910(piVar4,*(undefined4 *)(*piVar4 + 0x74));
    func_080A4740(iVar1,piVar4,6,0x1b);
    *(undefined4 *)(iVar1 + 0x24) = _DAT_080388a0;
    iVar5 = *piVar2;
    func_0x080d3918(apuStack_28,piVar2,0,*(undefined4 *)(iVar5 + 0xc));
    func_0x080d3918(iVar1 + 0x28,piVar2,*apuStack_28[0],*(undefined4 *)(iVar5 + 0x10));
    *(undefined1 *)(iVar1 + 0x48) = 1;
  }
  else {
    iVar1 = 0;
  }
  param_1[2] = iVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = func_080005D4(0x194);
  piVar2 = (int *)func_080DCB7C(uVar3,*(undefined4 *)*param_1,
                                (*(byte *)(param_2[6] + 0x5d) & 0xf) >> 2 == 1);
  piVar4 = (int *)param_1[5];
  if ((piVar2 != piVar4) && (piVar4 != (int *)0x0)) {
    iVar1 = *piVar4;
    for (piVar6 = piVar4 + 1; piVar6 != piVar4 + iVar1 * 0x14 + 1; piVar6 = piVar6 + 0x14) {
      func_080A47B4(piVar6,2);
    }
    func_08000608(piVar4);
  }
  param_1[5] = piVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08038928 @ 0x08038928
// =============================================================================
undefined4 func_08038928(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 in_lr;
  
  puVar1 = *(uint **)(param_1 + 0x14);
  if ((puVar1 != (uint *)0x0) && (uVar12 = 0, *puVar1 != 0)) {
    puVar5 = puVar1 + 0x10;
    puVar8 = puVar1 + 0xb;
    do {
      if (*(char *)((int)puVar5 + 3) == '\0') {
        iVar2 = func_0805E8F0(puVar8);
        if (iVar2 * 0x40000000 < 0) {
          *(undefined1 *)puVar5 = 1;
        }
      }
      else {
        *(undefined1 *)((int)puVar5 + 3) = 0;
      }
      uVar4 = puVar5[1] - puVar5[3];
      puVar5[1] = uVar4;
      iVar2 = (uint)(byte)puVar5[4] * 0x10000;
      if ((int)(uVar4 + iVar2) < 0 != SCARRY4(uVar4,iVar2)) {
        puVar5[1] = 0x1e00000;
      }
      puVar5 = puVar5 + 0x14;
      puVar8 = puVar8 + 0x14;
      uVar12 = uVar12 + 1;
    } while (uVar12 < *puVar1);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0x50) != '\0')) &&
     (iVar3 = *(int *)(iVar2 + 0x4c) + _DAT_080389f4, *(int *)(iVar2 + 0x4c) = iVar3,
     iVar3 < 0xa80001)) {
    *(undefined4 *)(iVar2 + 0x4c) = 0xa80000;
    *(char *)(iVar2 + 0x50) = '\0';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar3 = 0;
    uVar12 = 0;
    pcVar9 = (char *)(iVar2 + 0x144);
    iVar6 = iVar2 + 0x2c;
    puVar10 = (undefined1 *)(iVar2 + 0x43);
    do {
      if (*pcVar9 == '\0') {
        if (*(char *)(iVar6 + 0x17) == '\0') {
          iVar2 = func_0805E8F0(iVar6);
          if (iVar2 * 0x40000000 < 0) {
            *(undefined1 *)(iVar6 + 0x14) = 1;
          }
        }
        else {
          *puVar10 = 0;
          iVar2 = 2;
        }
        if (iVar2 * 0x20000000 < 0) {
          *pcVar9 = '\x01';
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      pcVar9 = pcVar9 + 1;
      iVar6 = iVar6 + 0x40;
      puVar10 = puVar10 + 0x40;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 5);
    if (iVar3 == 5) {
      piVar11 = *(int **)(param_1 + 0x10);
      if ((piVar11 != (int *)0x0) && (piVar11 != (int *)0x0)) {
        iVar2 = *piVar11;
        for (piVar7 = piVar11 + 1; piVar7 != piVar11 + iVar2 * 0x10 + 1; piVar7 = piVar7 + 0x10) {
          func_0x080d3914(piVar7,2,*(undefined4 *)(piVar7[9] + 8));
        }
        func_08000608(piVar11);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08038A70 @ 0x08038A70
// =============================================================================
undefined4 func_08038A70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 in_lr;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  uint *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  ushort *puStack_28;
  uint *puStack_24;
  
  iStack_4c = (int)*(short *)(param_2 + 3);
  iStack_48 = (int)*(short *)((int)param_2 + 0xe);
  uStack_78 = *param_2;
  uStack_74 = param_2[2];
  puVar3 = *(uint **)(param_1 + 0x14);
  iStack_50 = param_1;
  if ((puVar3 != (uint *)0x0) &&
     (uStack_38 = 0, puStack_44 = puVar3, uStack_40 = uStack_78, uStack_3c = uStack_74, *puVar3 != 0
     )) {
    puVar7 = puVar3 + 0x10;
    puStack_24 = puVar3 + 5;
    puVar3 = puVar3 + 1;
    do {
      uVar1 = _DAT_08038b30;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      if (*(char *)((int)puVar7 + 0x11) == '\0') {
        cVar2 = '\x01';
      }
      else {
        iVar5 = *(short *)((int)puVar7 + 6) - iStack_4c;
        iVar6 = (short)puVar7[2] - iStack_48;
        func_0x080d3918(auStack_98,(int *)puVar3[10],
                        *(undefined2 *)(puVar3[0xb] + (uint)(ushort)puVar3[0xd] * 4),
                        *(undefined4 *)(*(int *)puVar3[10] + 0x10));
        if ((int)(-puVar3[2] | puVar3[2]) < 0) {
          iVar5 = func_0x080d391c(uStack_6c,iVar5,iVar6,0xff,uVar1,auStack_98,*puVar3,
                                  (short)puVar3[3],puStack_24);
        }
        else {
          iVar5 = 0;
        }
        if ((iVar5 != 0) && ((char)*puVar7 != '\0')) {
          func_080A480C(puVar3,uStack_70,auStack_90);
          if (*(char *)((int)puVar7 + 1) == '\0') {
            if (*(char *)((int)puVar7 + 2) == '\0') {
              func_080A4944(puVar3,auStack_88,1);
              *(char *)((int)puVar7 + 2) = '\x01';
            }
          }
          else {
            func_080A4944(puVar3,auStack_88,1);
          }
          *(char *)puVar7 = '\0';
        }
        cVar2 = '\0';
      }
      *(char *)((int)puVar7 + 0x11) = cVar2;
      puVar7 = puVar7 + 0x14;
      puStack_24 = puStack_24 + 0x14;
      puVar3 = puVar3 + 0x14;
      uStack_38 = uStack_38 + 1;
    } while (uStack_38 < *puStack_44);
  }
  puVar4 = *(undefined4 **)(iStack_50 + 8);
  if (puVar4 != (undefined4 *)0x0) {
    uStack_68 = uStack_78;
    uStack_64 = uStack_74;
    if ((int)(-puVar4[2] | puVar4[2]) < 0) {
      iVar5 = func_0x080d391c(uStack_74,300 - iStack_4c,100 - iStack_48,0xff,0x8000,puVar4 + 10,
                              *puVar4,*(undefined2 *)(puVar4 + 3),puVar4 + 4);
    }
    else {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(char *)(puVar4 + 0x12) != '\0')) {
      func_080A480C(puVar4,uStack_68,puVar4 + 0xc);
      func_080A4944(puVar4,puVar4 + 0xe,1);
      *(char *)(puVar4 + 0x12) = '\0';
    }
  }
  puVar4 = *(undefined4 **)(iStack_50 + 0xc);
  if (puVar4 != (undefined4 *)0x0) {
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    if ((int)(-puVar4[2] | puVar4[2]) < 0) {
      iVar5 = func_0x080d391c(uStack_74,
                              (uint)*(byte *)((int)puVar4 + 0x51) * 8 - (iStack_4c + -0xf0),
                              ((int)puVar4[0x13] >> 0x10) - iStack_48,0xff,0x8000,puVar4 + 10,
                              *puVar4,*(undefined2 *)(puVar4 + 3),puVar4 + 4);
    }
    else {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(char *)(puVar4 + 0x12) != '\0')) {
      func_080A480C(puVar4,uStack_60,puVar4 + 0xc);
      func_080A4944(puVar4,puVar4 + 0xe,0);
      *(char *)(puVar4 + 0x12) = '\0';
    }
  }
  iStack_34 = *(int *)(iStack_50 + 0x10);
  if (iStack_34 != 0) {
    uStack_58 = uStack_78;
    uStack_54 = uStack_74;
    uStack_30 = 0;
    iStack_2c = iStack_34 + 0x14;
    puStack_28 = _DAT_08038d68;
    puVar4 = (undefined4 *)(iStack_34 + 4);
    do {
      if (*(char *)(iStack_34 + 0x144 + uStack_30) == '\0') {
        iVar5 = (uint)*puStack_28 - iStack_4c;
        iVar6 = (uint)puStack_28[1] - iStack_48;
        func_0x080d3918(auStack_98,(int *)puVar4[10],
                        *(undefined2 *)(puVar4[0xb] + (uint)*(ushort *)(puVar4 + 0xd) * 4),
                        *(undefined4 *)(*(int *)puVar4[10] + 0x10));
        if ((int)(-puVar4[2] | puVar4[2]) < 0) {
          iVar5 = func_0x080d391c(uStack_54,iVar5,iVar6,0xff,0x8000,auStack_98,*puVar4,
                                  *(undefined2 *)(puVar4 + 3),iStack_2c);
        }
        else {
          iVar5 = 0;
        }
        if ((iVar5 != 0) && (*(char *)(puVar4 + 0xf) != '\0')) {
          func_080A480C(puVar4,uStack_58,auStack_90);
          if (*(char *)((int)puVar4 + 0x3d) == '\0') {
            if (*(char *)((int)puVar4 + 0x3e) == '\0') {
              func_080A4944(puVar4,auStack_88,1);
              *(char *)((int)puVar4 + 0x3e) = '\x01';
            }
          }
          else {
            func_080A4944(puVar4,auStack_88,1);
          }
          *(char *)(puVar4 + 0xf) = '\0';
        }
      }
      iStack_2c = iStack_2c + 0x40;
      puStack_28 = puStack_28 + 2;
      puVar4 = puVar4 + 0x10;
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < 5);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08038DF0 @ 0x08038DF0
// =============================================================================
undefined4 func_08038DF0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined2 *apuStack_20 [2];
  
  iVar1 = func_080005D4(0x54);
  piVar3 = *(int **)*param_1;
  piVar2 = (int *)func_0x080d3910(piVar3,*(undefined4 *)(*piVar3 + 0x70));
  func_080A4740(iVar1,piVar3,6,0x1b);
  *(undefined4 *)(iVar1 + 0x24) = _DAT_08038e8c;
  iVar4 = *piVar2;
  func_0x080d3918(apuStack_20,piVar2,0,*(undefined4 *)(iVar4 + 0xc));
  func_0x080d3918(iVar1 + 0x28,piVar2,*apuStack_20[0],*(undefined4 *)(iVar4 + 0x10));
  *(undefined1 *)(iVar1 + 0x48) = 1;
  *(undefined4 *)(iVar1 + 0x4c) = 0x1200000;
  *(undefined1 *)(iVar1 + 0x50) = 0;
  *(undefined1 *)(iVar1 + 0x51) = 0;
  iVar4 = param_1[3];
  if ((iVar1 != iVar4) && (iVar4 != 0)) {
    func_080A47B4(iVar4,2);
    func_08000608(iVar4);
  }
  param_1[3] = iVar1;
  return in_lr;
}

// =============================================================================
// Function: func_08038EA0 @ 0x08038EA0
// =============================================================================
undefined8 func_08038EA0(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(char *)(*(int *)(param_1 + 0xc) + 0x50) == '\0'));
}

// =============================================================================
// Function: func_08038EB8 @ 0x08038EB8
// =============================================================================
undefined4 func_08038EB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_080A47B4(iVar1,2);
    func_08000608(iVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_08038EE0 @ 0x08038EE0
// =============================================================================
undefined4 func_08038EE0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 in_lr;
  undefined auStack_64 [4];
  undefined1 auStack_60 [40];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puVar1 = (uint *)func_080005D4(0x14c);
  piVar7 = *(int **)*param_1;
  *puVar1 = 0;
  puVar10 = auStack_64;
  puVar5 = param_1;
  puVar9 = (undefined *)0x0;
  do {
    switch(*(uint *)(PTR_case_08038F18_08038f14 + (int)puVar9 * 4) & 0xfffffffe) {
    case 0x8038f18:
      puVar10 = (undefined *)0x0;
    case 0x8038f2c:
      uVar2 = func_0x080d3910(piVar7,*(undefined4 *)(*piVar7 + 0x78),puVar5,puVar10);
      uVar4 = 2;
      break;
    case 0x8038f4c:
      uVar2 = func_0x080d3910(piVar7,*(undefined4 *)(*piVar7 + 0x78));
      uVar4 = 1;
      break;
    case 0x8038fdc:
      uVar2 = func_0x080d3910(piVar7,*(undefined4 *)(*piVar7 + 0x78));
      auStack_64[0] = 0;
      func_080A4A00(auStack_60,uVar2,0,piVar7,4,0x1c);
      if (*puVar1 < 5) {
        puVar8 = puVar1 + *puVar1 * 0x10 + 1;
        if (puVar8 != (uint *)0x0) {
          func_080DC840(puVar8,auStack_60);
          puVar8[9] = _DAT_080390cc;
          puVar8[10] = uStack_38;
          puVar8[0xb] = uStack_34;
          puVar8[0xc] = uStack_30;
          puVar8[0xd] = uStack_2c;
          puVar8[0xe] = uStack_28;
          *(undefined1 *)(puVar8 + 0xf) = uStack_24;
          *(undefined1 *)((int)puVar8 + 0x3d) = uStack_23;
          *(undefined1 *)((int)puVar8 + 0x3e) = uStack_22;
          *(undefined1 *)((int)puVar8 + 0x3f) = uStack_21;
        }
        *puVar1 = *puVar1 + 1;
      }
      func_080A47B4(auStack_60,2);
      goto LAB_08039064;
    }
    auStack_64[0] = 0;
    func_080A4A00(auStack_60,uVar2,uVar4,piVar7,4,0x1c);
    if (*puVar1 < 5) {
      puVar8 = puVar1 + *puVar1 * 0x10 + 1;
      if (puVar8 != (uint *)0x0) {
        func_080DC840(puVar8,auStack_60);
        puVar8[9] = _DAT_08038fd8;
        puVar8[10] = uStack_38;
        puVar8[0xb] = uStack_34;
        puVar8[0xc] = uStack_30;
        puVar8[0xd] = uStack_2c;
        puVar8[0xe] = uStack_28;
        *(undefined1 *)(puVar8 + 0xf) = uStack_24;
        *(undefined1 *)((int)puVar8 + 0x3d) = uStack_23;
        *(undefined1 *)((int)puVar8 + 0x3e) = uStack_22;
        *(undefined1 *)((int)puVar8 + 0x3f) = uStack_21;
      }
      *puVar1 = *puVar1 + 1;
    }
    func_080A47B4(auStack_60,2);
LAB_08039064:
    *(undefined1 *)((int)(puVar1 + 0x51) + (int)puVar9) = 0;
    puVar5 = (undefined4 *)&UNK_00000001;
    puVar10 = puVar9 + 1;
    puVar9 = puVar10;
    if (&UndefinedInstruction < puVar10) {
      puVar8 = (uint *)param_1[4];
      if ((puVar1 != puVar8) && (puVar8 != (uint *)0x0)) {
        uVar3 = *puVar8;
        for (puVar6 = puVar8 + 1; puVar6 != puVar8 + uVar3 * 0x10 + 1; puVar6 = puVar6 + 0x10) {
          func_0x080d3914(puVar6,2,*(undefined4 *)(puVar6[9] + 8));
        }
        func_08000608(puVar8);
      }
      param_1[4] = puVar1;
      return in_lr;
    }
  } while( true );
}

// =============================================================================
// Function: func_080390DC @ 0x080390DC
// =============================================================================
undefined4 func_080390DC(int param_1)

{
  undefined4 in_lr;
  
  func_0805E860(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  return in_lr;
}

// =============================================================================
// Function: func_0803911C @ 0x0803911C
// =============================================================================
undefined8 func_0803911C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = func_0x0800ffd0(*(undefined4 *)(param_1 + 0x18));
  return CONCAT44(in_lr,(uint)(iVar1 == 0x1e));
}

// =============================================================================
// Function: func_08039134 @ 0x08039134
// =============================================================================
undefined8 func_08039134(int *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = 100;
  iVar6 = 0;
  iVar4 = 0x2e;
  do {
    iVar2 = func_0x080d3914(param_1,iVar4,*(undefined4 *)(*param_1 + 0x40));
    if ((((iVar2 != 0) && (*(ushort *)(iVar2 + 4) == param_2)) &&
        (cVar1 = func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x60)),
        cVar1 != '\0')) &&
       ((iVar3 = *(short *)(iVar2 + 10) - param_3, iVar2 = *(short *)(iVar2 + 0xe) - param_4,
        iVar2 = iVar3 * iVar3 + iVar2 * iVar2, iVar5 == 100 || (iVar2 < iVar6)))) {
      iVar5 = iVar4;
      iVar6 = iVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x46);
  return CONCAT44(in_lr,iVar5);
}

// =============================================================================
// Function: func_080391C0 @ 0x080391C0
// =============================================================================
undefined8 func_080391C0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((((param_2 < 0x39) && (_DAT_080391ec < param_1)) && (param_1 <= _DAT_080391ec + 0x21)) ||
     (((_DAT_080391f0 < param_2 && (0xf7 < param_1)) && (param_1 < 0x119)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08039204 @ 0x08039204
// =============================================================================
undefined4 func_08039204(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined2 *puStack_24;
  
  iVar2 = *(int *)(param_2 + 0x34);
  puStack_24 = (undefined2 *)(iVar2 + 0x10);
  uVar7 = (uint)*(ushort *)(iVar2 + 0x10);
  if (uVar7 != 0) {
    uVar7 = uVar7 - 1;
  }
  iVar3 = (int)*(short *)(param_2 + 10);
  iVar9 = (int)*(short *)(param_2 + 0xe);
  if (iVar9 < 0x161) {
    sVar5 = 0x154;
    sVar6 = -0x10;
  }
  else {
    sVar5 = 0x108;
    sVar6 = 0x2d0;
  }
  iVar8 = (int)sVar6;
  uStack_28 = param_3;
  if (*(short *)(param_2 + 4) == 2) {
    iVar4 = sVar5 - iVar3;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x10) {
      iVar4 = iVar8 - iVar9;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 0x10) goto LAB_080392ea;
    }
    if (uVar7 == 0) {
      cVar1 = func_080391C0(iVar3,iVar9);
      if (cVar1 == '\0') {
        uVar7 = func_080ABC40(iVar3,iVar9,(int)sVar5,iVar8,uStack_28,*(byte *)(param_2 + 0x20));
        if (*(byte *)(param_2 + 0x20) != uVar7) {
          func_08032198(param_2);
        }
      }
      else if ((bool)*(char *)(param_2 + 0x20) != iVar8 <= iVar9) {
        func_08032198(param_2);
      }
      iVar2 = func_080AB788(0x1e);
      uVar7 = iVar2 + 1;
    }
    *puStack_24 = (short)uVar7;
  }
  else {
LAB_080392ea:
    func_0x0801ff38(param_2,0x234);
    func_0x0809c098(iVar2,auStack_2c);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803955C @ 0x0803955C
// =============================================================================
undefined4 func_0803955C(undefined4 param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar5 = param_2[0xd];
  if ((*(ushort *)(iVar5 + 0x10) == 0) || (iVar8 = *(ushort *)(iVar5 + 0x10) - 1, iVar8 == 0)) {
    if (*(char *)(iVar5 + 0x12) != '\0') {
      piVar9 = (int *)*param_2;
      sVar1 = *(short *)(param_2 + 1);
      sVar2 = *(short *)((int)param_2 + 10);
      sVar3 = *(short *)((int)param_2 + 0xe);
      uVar6 = func_08039134(piVar9,sVar1,(int)sVar2,(int)sVar3);
      if (uVar6 == 100) {
        uVar6 = (uint)*(byte *)(iVar5 + 0x13);
      }
      iVar8 = func_0x080d3914(piVar9,uVar6,*(undefined4 *)(*piVar9 + 0x40));
      if (((iVar8 != 0) && (*(short *)(iVar8 + 4) == sVar1)) &&
         (cVar4 = func_0x080d3910(iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x60)),
         cVar4 != '\0')) {
        iVar7 = (int)*(short *)(iVar8 + 10) - (int)sVar2;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (iVar7 < 0x10) {
          iVar7 = (int)*(short *)(iVar8 + 0xe) - (int)sVar3;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if (iVar7 < 0x10) {
            func_0x080d3910(iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x80));
          }
        }
      }
      func_0809C068(iVar5,4);
      uVar10 = param_2[0xd];
      iVar8 = 100;
      iVar5 = func_0x0809c060(uVar10);
      if (iVar5 == 0) {
        func_080200C4(param_2,0xaa);
      }
      else {
        iVar8 = func_08039134(*param_2,*(undefined2 *)(param_2 + 1),
                              (int)*(short *)((int)param_2 + 10),(int)*(short *)((int)param_2 + 0xe)
                             );
      }
      if (iVar8 != 100) {
        uVar6 = func_080AB788(100);
        if (uVar6 < 0x46) {
          uStack_30 = uStack_30 & _DAT_08039674;
          iVar5 = func_080AB788(8);
          uStack_2c = (uStack_2c & _DAT_08039678 | (iVar5 + 3U & 0xff) << 0x10) & _DAT_0803967c |
                      iVar8 << 0x18;
          func_0x0809c0ac(uVar10,&uStack_30);
          return in_lr;
        }
        iVar5 = func_080AB788(0x3c);
        uStack_28 = (uStack_28 & _DAT_080396ac | iVar5 + 0x78U & 0xffff) & _DAT_080396b0 &
                    _DAT_080396b4 | iVar8 << 0x18;
        func_0x0809c0bc(uVar10,&uStack_28);
        return in_lr;
      }
      uStack_24 = uStack_24 & _DAT_080396d0 | 0xb4;
      func_0x0809c0a0(uVar10,&uStack_24);
      return in_lr;
    }
    iVar8 = 0x24;
    *(undefined1 *)(iVar5 + 0x12) = 1;
    func_080200C4(param_2,0xab);
  }
  *(short *)(iVar5 + 0x10) = (short)iVar8;
  return in_lr;
}

// =============================================================================
// Function: func_080396F4 @ 0x080396F4
// =============================================================================
undefined8 func_080396F4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (*(char *)(*(int *)(param_2 + 0x34) + 0x12) != '\0') {
    uVar1 = 3;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08039708 @ 0x08039708
// =============================================================================
undefined4 func_08039708(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 in_lr;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar1 = param_2[0xd];
  uVar4 = (uint)*(ushort *)(iVar1 + 0x10);
  if (uVar4 != 0) {
    uVar4 = uVar4 - 1;
  }
  uVar5 = *(uint *)(iVar1 + 0x10) & 0x7fffff;
  bVar6 = (byte)(uVar5 >> 0x10);
  if (uVar5 >> 0x10 != 0) {
    bVar6 = bVar6 - 1;
  }
  uVar5 = (uint)*(byte *)(iVar1 + 0x13);
  if (uVar5 != 0) {
    uVar5 = uVar5 - 1;
  }
  if (uVar4 != 0) {
    uVar3 = 0;
    if ((int)(*(uint *)(iVar1 + 0x10) * 0x100) < 0) {
      uVar3 = 0x2b;
    }
    iVar2 = func_0x080d3914((int *)*param_2,uVar3,*(undefined4 *)(*(int *)*param_2 + 0x40));
    if ((iVar2 != 0) && (*(short *)(iVar2 + 4) == *(short *)(param_2 + 1))) {
      if (uVar5 == 0) {
        uVar5 = func_080ABE58((int)*(short *)((int)param_2 + 10),(int)*(short *)((int)param_2 + 0xe)
                              ,(int)*(short *)(iVar2 + 10),(int)*(short *)(iVar2 + 0xe),param_3,
                              *(byte *)(param_2 + 8));
        if (*(byte *)(param_2 + 8) != uVar5) {
          func_08032198(param_2);
        }
        iVar2 = func_080AB788(0x1e);
        uVar5 = iVar2 + 1;
      }
      *(short *)(iVar1 + 0x10) = (short)uVar4;
      *(byte *)(iVar1 + 0x12) = *(byte *)(iVar1 + 0x12) & 0x80 | bVar6 & 0x7f;
      *(char *)(iVar1 + 0x13) = (char)uVar5;
      return in_lr;
    }
  }
  func_080323C8(param_2);
  uVar3 = param_2[0xd];
  iVar2 = 100;
  iVar1 = func_0x0809c060(uVar3);
  if (iVar1 == 0) {
    func_080200C4(param_2,0xaa);
  }
  else {
    iVar2 = func_08039134(*param_2,*(undefined2 *)(param_2 + 1),(int)*(short *)((int)param_2 + 10),
                          (int)*(short *)((int)param_2 + 0xe));
  }
  if (iVar2 == 100) {
    uStack_24 = uStack_24 & _DAT_0803989c | 0xb4;
    func_0x0809c0a0(uVar3,&uStack_24);
  }
  else {
    uVar4 = func_080AB788(100);
    if (uVar4 < 0x46) {
      uStack_30 = uStack_30 & _DAT_08039834;
      iVar1 = func_080AB788(8);
      uStack_2c = (uStack_2c & _DAT_08039838 | (iVar1 + 3U & 0xff) << 0x10) & _DAT_0803983c |
                  iVar2 << 0x18;
      func_0x0809c0ac(uVar3,&uStack_30);
    }
    else {
      iVar1 = func_080AB788(0x3c);
      uStack_28 = (uStack_28 & _DAT_0803986c | iVar1 + 0x78U & 0xffff) & _DAT_08039870 &
                  _DAT_08039874 | iVar2 << 0x18;
      func_0x0809c0bc(uVar3,&uStack_28);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08039A30 @ 0x08039A30
// =============================================================================
void func_08039A30(undefined4 param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,2,0x1b,0,8,0,0);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_08039D5C @ 0x08039D5C
// =============================================================================
undefined8 func_08039D5C(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 < 5) {
    switch(*(uint *)(PTR_case_08039D70_08039d6c + param_2 * 4) & 0xfffffffe) {
    case 0x8039d70:
    case 0x8039d84:
      uVar1 = 0x8000;
      break;
    case 0x8039d8a:
      uVar1 = 0x10000;
      break;
    case 0x8039d90:
      goto case_08039D90;
    }
  }
  else {
case_08039D90:
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08039DA8 @ 0x08039DA8
// =============================================================================
undefined4 func_08039DA8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) != 1) {
    iVar1 = func_080AB788(0x78);
    uStack_c = ((uStack_c & _DAT_08039e08 | iVar1 + 0xf0U & 0xffff) & _DAT_08039e0c | 0x3c0000) &
               _DAT_08039e10 & _DAT_08039e14;
    func_0x0809c0c8(*(undefined4 *)(param_1 + 0x34),&uStack_c);
    func_0809C068(*(undefined4 *)(param_1 + 0x34),0xf);
    func_08032384(param_1,2,0);
    func_080200C4(param_1,0xaa);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08039E18 @ 0x08039E18
// =============================================================================
undefined4 func_08039E18(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  uint uStack_c;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) != 1) {
    iVar1 = func_080AB788(0x78);
    uStack_c = ((uStack_c & _DAT_08039e7c | iVar1 + 0xf0U & 0xffff) & _DAT_08039e80 | 0xbc0000) &
               _DAT_08039e84;
    func_0x0809c0c8(*(undefined4 *)(param_1 + 0x34),&uStack_c);
    func_0809C068(*(undefined4 *)(param_1 + 0x34),4);
    func_08032384(param_1,2,0);
    func_080200C4(param_1,0xaa);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08039E98 @ 0x08039E98
// =============================================================================
undefined8 func_08039E98(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined2 *apuStack_24 [2];
  
  param_1[0x13] = _DAT_08039f30;
  *param_1 = param_2;
  *(short *)(param_1 + 1) = (short)param_3;
  uVar1 = func_0x080d3910(param_2,*(undefined4 *)(*param_2 + 0x68));
  func_080A4A00(param_1 + 2,uVar1,param_3,param_2,3,0x1b,0);
  if (param_4 == 1) {
    iVar2 = func_080005D4(0x4c);
    piVar3 = (int *)func_0x080d3910(param_2,*(undefined4 *)(*param_2 + 0x68));
    func_080A4740(iVar2,param_2,2,0xf);
    *(undefined4 *)(iVar2 + 0x24) = _DAT_08039f34;
    iVar4 = *piVar3;
    func_0x080d3918(apuStack_24,piVar3,_DAT_08039f38,*(undefined4 *)(iVar4 + 0xc));
    func_0x080d3918(iVar2 + 0x28,piVar3,*apuStack_24[0],*(undefined4 *)(iVar4 + 0x10));
    *(undefined1 *)(iVar2 + 0x48) = 1;
  }
  else {
    iVar2 = 0;
  }
  param_1[0x12] = iVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08039F50 @ 0x08039F50
// =============================================================================
undefined4 func_08039F50(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x4c) = _DAT_08039f8c;
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x24) + 8));
  }
  func_080A47B4(param_1 + 8,2);
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08039F90 @ 0x08039F90
// =============================================================================
undefined4
func_08039F90(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6
             ,int param_7,uint param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_2c = func_0x080d3910(param_2,*(undefined4 *)(*param_2 + 0x18));
  iStack_2c = param_5 - iStack_2c;
  iStack_28 = func_0x080d3910(param_2,*(undefined4 *)(*param_2 + 0x1c));
  iStack_28 = param_6 - iStack_28;
  iStack_24 = 0x8000 - param_6;
  iVar3 = param_7;
  if (param_7 < 0) {
    iVar3 = -param_7;
  }
  iVar3 = iStack_28 - iVar3;
  iVar4 = param_1 + 8;
  uVar1 = param_8 & 3;
  uStack_34 = param_4;
  uStack_30 = param_3;
  func_0x080d3918(auStack_54,*(int **)(param_1 + 0x30),
                  *(undefined2 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x3c) * 4),
                  *(undefined4 *)(**(int **)(param_1 + 0x30) + 0x10));
  if ((int)(-*(uint *)(param_1 + 0x10) | *(uint *)(param_1 + 0x10)) < 0) {
    iVar3 = func_0x080d391c(uStack_30,iStack_2c,iVar3,uVar1 << 2 | uVar1 | uVar1 << 4 | uVar1 << 6,
                            iStack_24,auStack_54,*(undefined4 *)(param_1 + 8),
                            *(undefined2 *)(param_1 + 0x14),param_1 + 0x18);
  }
  else {
    iVar3 = 0;
  }
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x44) != '\0')) {
    func_080A480C(iVar4,uStack_34,auStack_4c);
    if (*(char *)(param_1 + 0x45) == '\0') {
      if (*(char *)(param_1 + 0x46) == '\0') {
        func_080A4944(iVar4,auStack_44,1);
        *(char *)(param_1 + 0x46) = '\x01';
      }
    }
    else {
      func_080A4944(iVar4,auStack_44,1);
    }
    *(char *)(param_1 + 0x44) = '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  if ((puVar2 != (undefined4 *)0x0) && (-1 < param_7)) {
    param_8 = param_8 & 3;
    if ((int)(-puVar2[2] | puVar2[2]) < 0) {
      iVar3 = func_0x080d391c(uStack_30,iStack_2c,iStack_28,
                              param_8 << 2 | param_8 | param_8 << 4 | param_8 << 6,iStack_24,
                              puVar2 + 10,*puVar2,*(undefined2 *)(puVar2 + 3),puVar2 + 4);
    }
    else {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (*(char *)(puVar2 + 0x12) != '\0')) {
      func_080A480C(puVar2,uStack_34,puVar2 + 0xc);
      func_080A4944(puVar2,puVar2 + 0xe,1);
      *(char *)(puVar2 + 0x12) = '\0';
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0803A144 @ 0x0803A144
// =============================================================================
void func_0803A144(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)param_3;
  if (param_3 * 0x1000000 < 0) {
    cVar2 = func_080AB788(3);
  }
  iVar1 = _DAT_0803a17c;
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(cVar2 * 4 + _DAT_0803a17c);
  *(undefined2 *)(param_2 + 6) = *(undefined2 *)((cVar2 * 2 + 1) * 2 + iVar1);
  return;
}

// =============================================================================
// Function: func_0803A180 @ 0x0803A180
// =============================================================================
void func_0803A180(undefined4 *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar6 = 0;
  func_0x080d3918(&uStack_64,(int *)*param_1,0,*(undefined4 *)(*(int *)*param_1 + 0x34));
  uStack_24 = CONCAT22(*(short *)((int)param_2 + 6) + -8,(short)param_2[1] + -8);
  uStack_20 = CONCAT22(*(short *)((int)param_2 + 6) + 8,(short)param_2[1] + 8);
  iStack_58 = 0x21;
  iStack_54 = -0x21;
  iStack_50 = -0x21;
  iStack_4c = 0x21;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_24;
  uStack_34 = uStack_20;
  uStack_30 = 0x20;
  uStack_2c = 0;
  uStack_28 = 0;
  if ((*(char *)((int)param_2 + 0x12) != '\0') && (*(char *)((int)param_2 + 0x12) == '\x01')) {
    iVar4 = *param_2;
    if (iVar4 == 1) {
      func_080AB8D0(&iStack_58);
      if (iStack_54 < -1) {
        param_2[3] = param_2[3] - param_3;
        goto LAB_0803a2a6;
      }
    }
    else if (iVar4 < 2) {
      if ((iVar4 == 0) && (func_080AB85C(&iStack_58), 1 < iStack_58)) {
        param_2[3] = param_2[3] + param_3;
        goto LAB_0803a2a6;
      }
    }
    else if (iVar4 == 2) {
      func_080AB948(&iStack_58);
      if (iStack_50 < -1) {
        param_2[2] = param_2[2] - param_3;
        goto LAB_0803a2a6;
      }
    }
    else if ((iVar4 == 3) && (func_080AB9C4(&iStack_58), 1 < iStack_4c)) {
      iVar4 = param_2[2];
      param_2[2] = iVar4 + param_3;
      if (iVar4 + param_3 >> 0x10 < 0x245) goto LAB_0803a2a6;
      param_2[2] = 0x2440000;
    }
    *(undefined2 *)(param_2 + 4) = 0;
  }
LAB_0803a2a6:
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)((int)param_2 + 10);
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)((int)param_2 + 0xe);
  pcVar5 = (char *)((int)param_1 + 0x47);
  if (*pcVar5 == '\0') {
    iVar4 = func_0805E8F0(param_1 + 0xc);
    if (-1 < iVar4 * 0x40000000) goto LAB_0803a2d6;
    pcVar5 = (char *)(param_1 + 0x11);
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *pcVar5 = cVar2;
LAB_0803a2d6:
  uVar1 = *(ushort *)(param_2 + 4);
  *(short *)(param_2 + 4) = (short)(uVar1 - 1);
  if ((int)((uVar1 - 1) * 0x10000) < 0) {
    sVar3 = func_080AB788(3);
    if (sVar3 == 3) {
      *(undefined1 *)((int)param_2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x12) = 1;
      iVar4 = func_080AB7A4(*param_2);
      *param_2 = iVar4;
    }
    sVar3 = func_080AB788(0x1f);
    *(short *)(param_2 + 4) = sVar3 + 0x10;
    uVar6 = 1;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar6);
  return;
}

// =============================================================================
// Function: func_0803A350 @ 0x0803A350
// =============================================================================
undefined4 func_0803A350(undefined4 *param_1,undefined2 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  piVar2 = (int *)func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14c));
  puVar4 = (undefined4 *)*piVar2;
  puVar5 = (undefined4 *)piVar2[1];
  do {
    if (puVar4 == puVar5) {
      uVar3 = puVar5[-1];
LAB_0803a386:
      func_08008B6C(uVar3,param_2);
      return in_lr;
    }
    cVar1 = func_0x08008cd0(*puVar4);
    if (cVar1 == '\0') {
      uVar3 = *puVar4;
      goto LAB_0803a386;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

// =============================================================================
// Function: func_0803A394 @ 0x0803A394
// =============================================================================
undefined4 func_0803A394(int param_1,undefined4 param_2,int param_3,char param_4)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  int iStack_28;
  uint uStack_24;
  
  iVar3 = _DAT_0803a3e4;
  if (param_4 == '\0') {
    iVar3 = _DAT_0803a3e8;
  }
  iVar8 = 4;
  if (param_4 == '\0') {
    iVar8 = 10;
  }
  sVar2 = func_080AB788(99);
  iStack_28 = 0;
  uStack_24 = 0;
  iVar9 = 0;
  if (param_3 == 1) {
    iVar9 = 1;
  }
  else if (param_3 < 2) {
    if (param_3 == 0) {
      iVar9 = 0;
    }
  }
  else if (param_3 == 2) {
    iVar9 = 2;
  }
  else if (param_3 == 3) {
    iVar9 = 3;
  }
  iVar7 = 0;
  if (iVar8 != 0) {
    if (sVar2 < (short)(ushort)*(byte *)(iVar3 + iVar9)) {
      iStack_28 = 0;
      uStack_24 = (uint)*(byte *)(iVar3 + 4);
    }
    else {
      do {
        sVar2 = sVar2 - (ushort)*(byte *)(iVar7 * 5 + iVar3 + iVar9);
        iVar7 = iVar7 + 1;
        if (iVar8 <= iVar7) goto LAB_0803a458;
        iVar6 = iVar7 * 5 + iVar3;
      } while ((short)(ushort)*(byte *)(iVar6 + iVar9) <= sVar2);
      uStack_24 = (uint)*(byte *)(iVar6 + 4);
      iStack_28 = iVar7;
    }
  }
LAB_0803a458:
  if ((iStack_28 != 0) && (param_4 != '\0')) {
    iStack_28 = iStack_28 + 9;
  }
  if (1 < uStack_24) {
    iVar3 = func_080AB788(uStack_24 - 1);
    uStack_24 = iVar3 + 1;
  }
  do {
    if ((int)uStack_24 < 1) {
      return in_lr;
    }
    iVar3 = func_080AB788(0x188);
    iVar3 = iVar3 + 0xb8;
    if (iVar3 < 0xf0) {
      sVar2 = func_080AB788(0x38);
      sVar2 = sVar2 + 0x1f0;
    }
    else {
      sVar2 = func_080AB788(0x30);
      sVar2 = sVar2 + 0x228;
    }
    if (0xb < iStack_28 - 1U) goto LAB_0803a776;
    switch(*(uint *)(PTR_case_0803A4C4_0803a4c0 + (iStack_28 - 1U) * 4) & 0xfffffffe) {
    case 0x803a4c4:
      iVar3 = 0x803a7b8;
      param_1 = 0x803a8b0;
      sVar2 = -0x5acc;
    case 0x803a4f4:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a554,1);
      uVar4 = _DAT_0803a558;
      break;
    case 0x803a55c:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,0x10,1);
      uVar4 = _DAT_0803a574;
      break;
    case 0x803a578:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a590,1);
      uVar4 = _DAT_0803a594;
      break;
    case 0x803a598:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a5b0,1);
      uVar4 = _DAT_0803a5b4;
      break;
    case 0x803a5b8:
      iVar8 = func_080005D4(0x6c);
      func_08039E98(iVar8,param_2,_DAT_0803a600,1);
      *(undefined4 *)(iVar8 + 0x4c) = _DAT_0803a604;
      *(undefined4 *)(iVar8 + 0x50) = 0;
      *(short *)(iVar8 + 0x54) = (short)iVar3;
      *(short *)(iVar8 + 0x56) = sVar2;
      *(undefined2 *)(iVar8 + 0x60) = 0;
      *(undefined1 *)(iVar8 + 0x62) = 0;
      *(int *)(iVar8 + 0x58) = (int)*(short *)(iVar8 + 0x54) << 0x10;
      *(int *)(iVar8 + 0x5c) = (int)*(short *)(iVar8 + 0x56) << 0x10;
      *(undefined4 *)(iVar8 + 0x68) = 0;
      goto LAB_0803a536;
    case 0x803a608:
      iVar3 = func_080005D4(0x88);
      func_08039E98(iVar3,param_2,0x2a4,1);
      *(undefined4 *)(iVar3 + 0x4c) = _DAT_0803a66c;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      uVar1 = func_0803A144(iVar3,iVar3 + 0x50,0xffffffff);
      *(undefined1 *)(iVar3 + 0x78) = uVar1;
      *(undefined1 *)(iVar3 + 0x79) = 0xff;
      *(undefined2 *)(iVar3 + 0x60) = 0;
      *(undefined1 *)(iVar3 + 0x62) = 0;
      *(int *)(iVar3 + 0x58) = (int)*(short *)(iVar3 + 0x54) << 0x10;
      *(int *)(iVar3 + 0x5c) = (int)*(short *)(iVar3 + 0x56) << 0x10;
      *(undefined1 *)(iVar3 + 0x84) = 0xf8;
      goto LAB_0803a75a;
    case 0x803a670:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a688,1);
      uVar4 = _DAT_0803a68c;
      break;
    case 0x803a690:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a6a8,1);
      uVar4 = _DAT_0803a6ac;
      break;
    case 0x803a6b0:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a6c8,1);
      uVar4 = _DAT_0803a6cc;
      break;
    case 0x803a6d0:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a6e8,1);
      uVar4 = _DAT_0803a6ec;
      break;
    case 0x803a6f0:
      iVar8 = func_080005D4(100);
      func_08039E98(iVar8,param_2,_DAT_0803a708,1);
      uVar4 = _DAT_0803a70c;
      break;
    case 0x803a710:
      iVar3 = func_080005D4(100);
      func_08039E98(iVar3,param_2,0x15,0);
      *(undefined4 *)(iVar3 + 0x4c) = _DAT_0803a794;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      func_0803A144(iVar3,iVar3 + 0x50,0xffffffff);
      *(undefined2 *)(iVar3 + 0x60) = 0;
      *(undefined1 *)(iVar3 + 0x62) = 0;
      *(int *)(iVar3 + 0x58) = (int)*(short *)(iVar3 + 0x54) << 0x10;
      *(int *)(iVar3 + 0x5c) = (int)*(short *)(iVar3 + 0x56) << 0x10;
LAB_0803a75a:
      if (*(uint *)(param_1 + 8) < 3) {
        piVar5 = (int *)(param_1 + *(uint *)(param_1 + 8) * 4 + 0xc);
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar3;
        }
        goto LAB_0803a770;
      }
      goto LAB_0803a776;
    }
    *(undefined4 *)(iVar8 + 0x4c) = uVar4;
    *(undefined4 *)(iVar8 + 0x50) = 0;
    *(short *)(iVar8 + 0x54) = (short)iVar3;
    *(short *)(iVar8 + 0x56) = sVar2;
    *(undefined2 *)(iVar8 + 0x60) = 0;
    *(undefined1 *)(iVar8 + 0x62) = 0;
    *(int *)(iVar8 + 0x58) = (int)*(short *)(iVar8 + 0x54) << 0x10;
    *(int *)(iVar8 + 0x5c) = (int)*(short *)(iVar8 + 0x56) << 0x10;
LAB_0803a536:
    if (*(uint *)(param_1 + 8) < 3) {
      piVar5 = (int *)(param_1 + *(uint *)(param_1 + 8) * 4 + 0xc);
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar8;
      }
LAB_0803a770:
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
LAB_0803a776:
    uStack_24 = uStack_24 - 1;
  } while( true );
}

// =============================================================================
// Function: func_0803A798 @ 0x0803A798
// =============================================================================
undefined8 func_0803A798(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  
  iVar2 = func_080005D4(0x20);
  uVar1 = (ushort)_DAT_0803a7fc;
  uStack_1c = uVar1 & uStack_1c & 0x3ff;
  uStack_1a = uVar1 & uStack_1a & 0x3ff;
  uStack_18 = uVar1 & uStack_18;
  func_0x0801fd78(iVar2,param_1,&uStack_1c);
  *(undefined4 *)(iVar2 + 0x14) = _DAT_0803a800;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0803A840 @ 0x0803A840
// =============================================================================
undefined4 func_0803A840(int param_1)

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

