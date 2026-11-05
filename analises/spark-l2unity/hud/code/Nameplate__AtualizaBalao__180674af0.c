// Nameplate__AtualizaBalao__180674af0 @ 0x180674af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__AtualizaBalao__180674af0(longlong param_1)

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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_68 [80];
  
  if (cRam00000001834b3e06 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_Nameplate);
    FUN_180315380(TI_SparkBalao);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"''");
    cRam00000001834b3e06 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x50) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar5 == 0))
  goto code_r0x0001806751b3;
  uVar1 = *(undefined4 *)(lVar5 + 0x14);
  if (*(int *)(TI_SparkBalao + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = SparkBalao__De__1805d24a0(uVar1,0);
  cVar4 = func_0x0001817058a0(lVar5,*(undefined8 *)(param_1 + 0xd8),0);
  if (cVar4 != '\0') {
    return;
  }
  *(longlong *)(param_1 + 0xd8) = lVar5;
  func_0x000180314690(param_1 + 0xd8,lVar5);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    if (*(int *)(TI_Nameplate + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = Nameplate__Placa__180677750();
    *(undefined8 *)(param_1 + 0xd0) = uVar6;
    func_0x000180314690(param_1 + 0xd0,uVar6);
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
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
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
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
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar9 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
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
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x0001806751b3;
    plVar9 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
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
    lVar10 = Nameplate__Acima__180674540(param_1,0);
    if (lVar10 == 0) goto code_r0x0001806751b3;
    UnityEngine_UIElements_VisualElement__Insert(lVar10,0,*(undefined8 *)(param_1 + 0xd0),0);
  }
  lVar10 = LIT_"''";
  if (lVar5 != 0) {
    lVar10 = lVar5;
  }
  plVar7 = *(longlong **)(param_1 + 0xd0);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0xe48))(plVar7,lVar10,*(undefined8 *)(*plVar7 + 0xe50));
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar10 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
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

