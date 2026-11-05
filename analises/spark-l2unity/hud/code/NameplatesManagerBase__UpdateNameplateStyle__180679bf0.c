// NameplatesManagerBase__UpdateNameplateStyle__180679bf0 @ 0x180679bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerBase__UpdateNameplateStyle__180679bf0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ushort uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (cRam00000001834b3e1d == '\0') {
    puStack_70 = &UNK_180679c15;
    FUN_180315380(TI_NpcSpawner);
    cRam00000001834b3e1d = '\x01';
  }
  uStack_28 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  uStack_20 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  if (param_2 == 0) {
DAT_180679d4f:
    puStack_70 = &UNK_180679d54;
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  if (*(int *)(TI_NpcSpawner + 0xe4) == 0) {
    puStack_70 = &UNK_180679c4e;
    func_0x000180315660();
  }
  puStack_70 = &UNK_180679c58;
  fVar12 = (float)NpcSpawner__MeiaAlturaDoCorpo(uVar6,0);
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (0.0 < fVar12) {
    if (lVar5 == 0) goto DAT_180679d4f;
  }
  else {
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x48) == 0)) goto DAT_180679d4f;
    fVar12 = *(float *)(*(longlong *)(lVar5 + 0x48) + 0x10);
  }
  uStack_38 = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  uStack_30 = CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  if (*(char *)(lVar5 + 0x53) == '\0') {
    fVar14 = 1.0;
  }
  else {
    fVar14 = 0.7;
  }
  fVar14 = fVar12 * *(float *)(param_1 + 0x28) * fVar14;
  puStack_70 = &UNK_180679cd3;
  fVar13 = (float)Entity__get_FatorEmPe(*(undefined8 *)(param_2 + 0x50),0);
  if (fVar13 < 1.0) {
    if (fVar13 < 0.0) {
      fVar13 = 0.0;
    }
    else if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
    fVar14 = (fVar14 - fVar12 * 0.85) * fVar13 + fVar12 * 0.85;
  }
  *(float *)(param_2 + 0x38) = fVar14;
  puStack_70 = &UNK_180679d11;
  Nameplate__ManageColors__180676df0(param_2,0);
  puStack_70 = &UNK_180679d1b;
  Nameplate__AtualizaToken__1806764a0(param_2,0);
  puStack_70 = &UNK_180679d25;
  Nameplate__AtualizaLoja__180675a80(param_2,0);
  uStack_40 = uStack_30;
  uStack_48 = uStack_38;
  if (cRam00000001834b3e06 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_Nameplate);
    FUN_180315380(TI_SparkBalao);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"''");
    cRam00000001834b3e06 = '\x01';
  }
  uStack_38 = uStack_28;
  uStack_30 = uStack_20;
  if ((*(longlong *)(param_2 + 0x50) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x30), lVar5 == 0))
  goto code_r0x0001806751b3;
  uVar1 = *(undefined4 *)(lVar5 + 0x14);
  if (*(int *)(TI_SparkBalao + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = SparkBalao__De__1805d24a0(uVar1,0);
  cVar4 = func_0x0001817058a0(lVar5,*(undefined8 *)(param_2 + 0xd8),0);
  if (cVar4 != '\0') {
    return;
  }
  *(longlong *)(param_2 + 0xd8) = lVar5;
  func_0x000180314690(param_2 + 0xd8,lVar5);
  if (*(longlong *)(param_2 + 0xd0) == 0) {
    if (*(int *)(TI_Nameplate + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = Nameplate__Placa__180677750();
    *(undefined8 *)(param_2 + 0xd0) = uVar6;
    func_0x000180314690(param_2 + 0xd0,uVar6);
    if (*(longlong *)(param_2 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0xd0),0);
    uStack_88 = 0x3f6b851f3f6b851f;
    uStack_80 = 0x3f8000003f6b851f;
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_68,&uStack_88,0);
    if (plVar7 == (longlong *)0x0) goto code_r0x0001806751b3;
    lVar10 = *plVar7;
    uVar6 = *puVar8;
    uVar3 = puVar8[1];
    uVar1 = *(undefined4 *)(puVar8 + 2);
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x2f) *
                    0x10 + 0x138 + lVar10);
          goto code_r0x000180674cd9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180674cd9:
    uStack_88 = uVar6;
    uStack_80 = uVar3;
    uStack_78 = uVar1;
    (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
    if (*(longlong *)(param_2 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0xd0),0);
    uStack_88 = 0;
    uStack_80 = 0x3f66666600000000;
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_68,&uStack_88,0);
    if (plVar7 == (longlong *)0x0) goto code_r0x0001806751b3;
    lVar10 = *plVar7;
    uVar6 = *puVar8;
    uVar3 = puVar8[1];
    uVar1 = *(undefined4 *)(puVar8 + 2);
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 9) *
                    0x10 + 0x138 + lVar10);
          goto code_r0x000180674d89;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180674d89:
    uStack_88 = uVar6;
    uStack_80 = uVar3;
    uStack_78 = uVar1;
    (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
    if (*(longlong *)(param_2 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0xd0),0);
    if (*(longlong *)(param_2 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar9 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0xd0),0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40400000,0);
    if (plVar9 == (longlong *)0x0) goto code_r0x0001806751b3;
    lVar10 = *plVar9;
    uVar6 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x29) *
                    0x10 + 0x138 + lVar10);
          goto code_r0x000180674e47;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x29);
code_r0x000180674e47:
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    uStack_88 = uVar6;
    (*(code *)*puVar8)(plVar9,&uStack_88,puVar8[1]);
    if (plVar7 == (longlong *)0x0) goto code_r0x0001806751b3;
    lVar10 = *plVar7;
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x27) *
                    0x10 + 0x138 + lVar10);
          goto code_r0x000180674eb9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x27);
code_r0x000180674eb9:
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    uStack_88 = uVar6;
    (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
    if (*(longlong *)(param_2 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0xd0),0);
    if (*(longlong *)(param_2 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar9 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0xd0),0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40400000,0);
    if (plVar9 == (longlong *)0x0) goto code_r0x0001806751b3;
    lVar10 = *plVar9;
    uVar6 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x19) *
                    0x10 + 0x138 + lVar10);
          goto code_r0x000180674f77;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x19);
code_r0x000180674f77:
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    uStack_88 = uVar6;
    (*(code *)*puVar8)(plVar9,&uStack_88,puVar8[1]);
    if (plVar7 == (longlong *)0x0) goto code_r0x0001806751b3;
    lVar10 = *plVar7;
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x17) *
                    0x10 + 0x138 + lVar10);
          goto code_r0x000180674fe9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x17);
code_r0x000180674fe9:
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    uStack_88 = uVar6;
    (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
    lVar10 = Nameplate__Acima__180674540(param_2,0);
    if (lVar10 == 0) goto code_r0x0001806751b3;
    UnityEngine_UIElements_VisualElement__Insert(lVar10,0,*(undefined8 *)(param_2 + 0xd0),0);
  }
  lVar10 = LIT_"''";
  if (lVar5 != 0) {
    lVar10 = lVar5;
  }
  plVar7 = *(longlong **)(param_2 + 0xd0);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0xe48))(plVar7,lVar10,*(undefined8 *)(*plVar7 + 0xe50));
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      lVar10 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0xd0),0);
      uVar6 = FUN_180eb5810(lVar5 == 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar10 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
        return;
      }
    }
  }
code_r0x0001806751b3:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

