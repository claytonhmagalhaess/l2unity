// ClanWindow__MostraAlianca__1805e4590 @ 0x1805e4590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraAlianca__1805e4590(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ushort uVar15;
  longlong *plVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_30;
  
  if (cRam00000001834b3b78 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Your clan is not in an alliance.'");
    FUN_180315380(LIT_"'Your clan leads this alliance.'");
    FUN_180315380(LIT_"'No alliance'");
    FUN_180315380(LIT_"'Member of this alliance.'");
    cRam00000001834b3b78 = '\x01';
  }
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3bc0 == '\0') {
    FUN_180315380(TI_SparkClan);
    cRam00000001834b3bc0 = '\x01';
  }
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar2 = *(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x30);
  bVar9 = SparkClan__get_SouLider(0);
  bVar10 = 0;
  if (iVar2 != 0) {
    bVar10 = bVar9;
  }
  if (bVar10 == 0) {
    bVar17 = false;
  }
  else {
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3bc0 == '\0') {
      FUN_180315380(TI_SparkClan);
      cRam00000001834b3bc0 = '\x01';
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar3 = *(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x30);
    if (cRam00000001834b3bbd == '\0') {
      FUN_180315380(TI_SparkClan);
      cRam00000001834b3bbd = '\x01';
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    bVar17 = iVar3 == **(int **)(TI_SparkClan + 0xb8);
  }
  plVar11 = *(longlong **)(param_1 + 0x270);
  uVar12 = LIT_"'No alliance'";
  if (iVar2 != 0) {
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3bc1 == '\0') {
      FUN_180315380(TI_SparkClan);
      cRam00000001834b3bc1 = '\x01';
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar12 = *(undefined8 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x38);
  }
  if (plVar11 == (longlong *)0x0) {
DAT_1805e49eb:
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(*plVar11 + 0xe48))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0xe50));
  uVar12 = LIT_"'Your clan is not in an alliance.'";
  if ((iVar2 != 0) && (uVar12 = LIT_"'Member of this alliance.'", bVar17 != false)) {
    uVar12 = LIT_"'Your clan leads this alliance.'";
  }
  plVar11 = *(longlong **)(param_1 + 0x278);
  if (plVar11 == (longlong *)0x0) goto DAT_1805e49eb;
  (**(code **)(*plVar11 + 0xe48))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0xe50));
  if (*(longlong *)(param_1 + 0x280) == 0) goto DAT_1805e49eb;
  plVar11 = (longlong *)
            UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x280),0);
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3bc2 == '\0') {
    FUN_180315380(TI_SparkClan);
    cRam00000001834b3bc2 = '\x01';
  }
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar12 = SparkClan__AllyCrest
                     (*(undefined4 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x40),0);
  puVar13 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,uVar12,0);
  if (plVar11 == (longlong *)0x0) goto DAT_1805e49eb;
  lVar14 = *plVar11;
  uVar5 = *puVar13;
  uVar6 = puVar13[1];
  uVar7 = puVar13[2];
  uVar8 = puVar13[3];
  uVar12 = puVar13[4];
  if (*(ushort *)(lVar14 + 0x12e) != 0) {
    uVar15 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle)
      {
        puVar13 = (undefined8 *)
                  ((longlong)
                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 0xb) *
                   0x10 + 0x138 + lVar14);
        goto code_r0x0001805e48e7;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
  }
  puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805e48e7:
  uStack_88 = uVar5;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar8;
  uStack_68 = uVar12;
  (*(code *)*puVar13)(plVar11,&uStack_88,puVar13[1]);
  uVar12 = *(undefined8 *)(param_1 + 0x298);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkEstilo__Liga__180720c80(uVar12,bVar17,0);
  uVar12 = *(undefined8 *)(param_1 + 0x2a0);
  bVar10 = 0;
  if (iVar2 != 0) {
    bVar10 = bVar9;
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkEstilo__Liga__180720c80(uVar12,bVar10 & (bVar17 ^ 1U),0);
  SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x2b0),bVar17,0);
  SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x2a8),bVar17,0);
  lVar14 = *(longlong *)(param_1 + 0x290);
  if (lVar14 == 0) goto DAT_1805e49eb;
  *(bool *)(lVar14 + 0x40) = bVar17;
  if (cRam00000001834b3b90 == '\0') {
    puStack_30 = &UNK_1805ec297;
    FUN_180315380(TI_SparkEstilo,0);
    cRam00000001834b3b90 = '\x01';
  }
  uVar12 = *(undefined8 *)(lVar14 + 0x20);
  uVar1 = *(undefined1 *)(lVar14 + 0x40);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    puStack_30 = &UNK_1805ec2bb;
    func_0x000180315660();
  }
  puStack_30 = &UNK_1805ec2ca;
  SparkEstilo__Liga__180720c80(uVar12,uVar1,0);
  bVar17 = false;
  if (*(char *)(lVar14 + 0x40) != '\0') {
    bVar17 = *(longlong *)(lVar14 + 0x38) != 0;
  }
  lVar14 = *(longlong *)(lVar14 + 0x28);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    puStack_30 = &UNK_1805ec2f1;
    func_0x000180315660();
  }
  if (cRam00000001834b41f5 == '\0') {
    puStack_30 = &UNK_180720ca5;
    FUN_180315380(TI_System.Action);
    puStack_30 = &UNK_180720cb1;
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b41f5 = '\x01';
  }
  if (lVar14 == 0) {
    return;
  }
  puStack_30 = &UNK_180720cd5;
  func_0x0001825cbbd0(lVar14,bVar17,0);
  puStack_30 = &UNK_180720cdf;
  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar14,0);
  if (plVar11 != (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
    if (*plVar11 == TI_System.Action) {
      plVar16 = plVar11;
    }
    if (plVar16 != (longlong *)0x0) {
      puStack_30 = &UNK_180720d03;
      lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar14,0);
      puStack_30 = &UNK_180720d15;
      uVar12 = func_0x000182601c10(0x3f800000,0);
      if (lVar14 != 0) {
        puStack_30 = &UNK_180720d35;
        FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar14,uVar12);
        puStack_30 = &UNK_180720d40;
        (*(code *)plVar16[3])(plVar16[8],plVar16[5]);
        return;
      }
      goto DAT_180720da6;
    }
  }
  puStack_30 = &UNK_180720d5a;
  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar14,0);
  if (bVar17 == false) {
    uVar18 = 0x3ecccccd;
  }
  else {
    uVar18 = 0x3f800000;
  }
  puStack_30 = &UNK_180720d7b;
  uVar12 = func_0x000182601c10(uVar18,0);
  if (plVar11 != (longlong *)0x0) {
    uVar15 = 0;
    lVar14 = *plVar11;
    if (*(ushort *)(lVar14 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar13 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 0x5b)
                     * 0x10 + 0x138 + lVar14);
          goto LAB_1800050ad;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
    }
    puStack_30 = &LAB_1800050ad;
    puVar13 = (undefined8 *)FUN_180312860(plVar11);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar13)(plVar11,uVar12,puVar13[1]);
    return;
  }
DAT_180720da6:
  puStack_30 = &UNK_180720dab;
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

