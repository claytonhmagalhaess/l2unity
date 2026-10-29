// SparkRadarWindow_Pontos__Poe__1806d9bb0 @ 0x1806d9bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow_Pontos__Poe__1806d9bb0
               (longlong param_1,int param_2,undefined8 param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  ushort uVar20;
  float fStackX_c;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (cRam00000001834b40ab == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Texture2D>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Texture2D>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Texture2D>.set_Item);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b40ab = '\x01';
  }
  lVar13 = *(longlong *)(param_1 + 0x20);
  while (lVar13 != 0) {
    if (param_2 < *(int *)(lVar13 + 0x18)) {
      if (*(longlong *)(param_1 + 0x20) == 0) break;
      lVar13 = FUN_180bbafe0(*(longlong *)(param_1 + 0x20),param_2,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
      if (*(int *)(param_1 + 0x38) <= param_2) {
        if (lVar13 == 0) break;
        lVar18 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
        uVar15 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar18 == 0) break;
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar18,uVar15);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        uVar15 = FUN_180bbafe0(*(longlong *)(param_1 + 0x28),param_2,MR_System.Collections.Generic.List<UnityEngine.Texture2D>.get_Item);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar12 = UnityEngine_Object__op_Inequality(uVar15,param_3,0);
        if (cVar12 == '\0') goto code_r0x0001806da2d4;
        if ((*(longlong *)(param_1 + 0x28) != 0) &&
           (FUN_181657340(*(longlong *)(param_1 + 0x28),param_2,param_3,MR_System.Collections.Generic.List<UnityEngine.Texture2D>.set_Item),
           lVar13 != 0)) {
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          puVar16 = (undefined8 *)
                    UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_a8,param_3,0);
          if (plVar14 != (longlong *)0x0) {
            lVar18 = *plVar14;
            uVar19 = *puVar16;
            uVar6 = puVar16[1];
            uVar7 = puVar16[2];
            uVar8 = puVar16[3];
            uVar15 = puVar16[4];
            if (*(ushort *)(lVar18 + 0x12e) == 0) goto code_r0x0001806da2a8;
            uVar20 = 0;
            goto code_r0x0001806da290;
          }
        }
      }
      break;
    }
    lVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar13,0);
    if (lVar13 == 0) break;
    plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
    uVar15 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (plVar14 == (longlong *)0x0) break;
    lVar18 = *plVar14;
    if (*(ushort *)(lVar18 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar16 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x67)
                     * 0x10 + 0x138 + lVar18);
          goto code_r0x0001806d9d89;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)(lVar18 + 0x12e));
    }
    puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x67);
code_r0x0001806d9d89:
    (*(code *)*puVar16)(plVar14,uVar15,puVar16[1]);
    plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
    plVar17 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
    puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar17 == (longlong *)0x0) break;
    lVar18 = *plVar17;
    uVar15 = *puVar16;
    uVar1 = *(undefined4 *)(puVar16 + 1);
    if (*(ushort *)(lVar18 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar16 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x43)
                     * 0x10 + 0x138 + lVar18);
          goto code_r0x0001806d9e29;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)(lVar18 + 0x12e));
    }
    puVar16 = (undefined8 *)FUN_180312860(plVar17,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806d9e29:
    uStack_d8 = uVar15;
    uStack_d0 = uVar1;
    (*(code *)*puVar16)(plVar17,&uStack_d8,puVar16[1]);
    if (plVar14 == (longlong *)0x0) break;
    lVar18 = *plVar14;
    if (*(ushort *)(lVar18 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar16 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0xad)
                     * 0x10 + 0x138 + lVar18);
          goto code_r0x0001806d9e99;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)(lVar18 + 0x12e));
    }
    puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806d9e99:
    uStack_f8 = uVar15;
    uStack_f0 = uVar1;
    (*(code *)*puVar16)(plVar14,&uStack_f8,puVar16[1]);
    plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
    uVar15 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (plVar14 == (longlong *)0x0) break;
    lVar18 = *plVar14;
    if (*(ushort *)(lVar18 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar16 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x33)
                     * 0x10 + 0x138 + lVar18);
          goto code_r0x0001806d9f29;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)(lVar18 + 0x12e));
    }
    puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x33);
code_r0x0001806d9f29:
    (*(code *)*puVar16)(plVar14,uVar15,puVar16[1]);
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar13,1,0);
    if (*(longlong *)(param_1 + 0x10) == 0) break;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x10),lVar13,0);
    lVar4 = MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add;
    lVar18 = *(longlong *)(param_1 + 0x20);
    if (lVar18 == 0) break;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    lVar3 = *(longlong *)(lVar18 + 0x10);
    if (lVar3 == 0) break;
    uVar2 = *(uint *)(lVar18 + 0x18);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar18 + 0x18) = uVar2 + 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar2) goto code_r0x0001806da508;
      *(longlong *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8) = lVar13;
      func_0x000180314690(lVar3 + 0x20 + (longlong)(int)uVar2 * 8,lVar13);
    }
    else {
      FUN_181645af0(lVar18,lVar13,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    lVar18 = MR_System.Collections.Generic.List<UnityEngine.Texture2D>.Add;
    lVar13 = *(longlong *)(param_1 + 0x28);
    if (lVar13 == 0) break;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar13 + 0x10);
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) goto code_r0x0001806da508;
      *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar2 * 8) = 0;
      func_0x000180314690(lVar4 + 0x20 + (longlong)(int)uVar2 * 8,0);
    }
    else {
      FUN_181645af0(lVar13,0,*(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
    lVar18 = MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add;
    lVar13 = *(longlong *)(param_1 + 0x30);
    if (lVar13 == 0) break;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar13 + 0x10);
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
code_r0x0001806da508:
        FUN_1803155c0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar2 * 8) = 0x7fc00000;
      *(undefined4 *)(lVar4 + 0x24 + (longlong)(int)uVar2 * 8) = 0x7fc00000;
    }
    else {
      FUN_18168bfc0(lVar13,0x7fc000007fc00000,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(longlong *)(param_1 + 0x20);
  }
  goto code_r0x0001806da50e;
  while (uVar20 = uVar20 + 1, uVar20 < *(ushort *)(lVar18 + 0x12e)) {
code_r0x0001806da290:
    if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
      puVar16 = (undefined8 *)
                ((longlong)
                 (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0xb) *
                 0x10 + 0x138 + lVar18);
      goto code_r0x0001806da2b9;
    }
  }
code_r0x0001806da2a8:
  puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806da2b9:
  uStack_a8 = uVar19;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  uStack_90 = uVar8;
  uStack_88 = uVar15;
  (*(code *)*puVar16)(plVar14,&uStack_a8,puVar16[1]);
code_r0x0001806da2d4:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar15 = FUN_180bbafe0(*(longlong *)(param_1 + 0x30),param_2,MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item);
    if ((ABS((float)uVar15 - param_4) < 0.2) &&
       (fStackX_c = (float)((ulonglong)uVar15 >> 0x20), ABS(fStackX_c - param_5) < 0.2)) {
      return;
    }
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (FUN_181696c60(*(longlong *)(param_1 + 0x30),param_2,CONCAT44(param_5,param_4),
                      MR_System.Collections.Generic.List<UnityEngine.Vector2>.set_Item), lVar13 != 0)) {
      plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
      uVar15 = func_0x0001825fc560();
      uVar19 = func_0x0001825fc560();
      uStack_b8 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      func_0x000182607f40(&uStack_c8,uVar15,uVar19,0);
      uStack_f8 = uStack_c8;
      uStack_f0 = (undefined4)uStack_c0;
      uStack_ec = (undefined4)((ulonglong)uStack_c0 >> 0x20);
      uStack_e8 = (undefined4)uStack_b8;
      uStack_e4 = (undefined4)((ulonglong)uStack_b8 >> 0x20);
      puVar16 = (undefined8 *)
                UnityEngine_UIElements_StyleRotate__op_Implicit(&uStack_a8,&uStack_f8,0);
      if (plVar14 != (longlong *)0x0) {
        uStack_f8 = *puVar16;
        lVar13 = *plVar14;
        uStack_f0 = (undefined4)puVar16[1];
        uStack_ec = (undefined4)*(undefined8 *)((longlong)puVar16 + 0xc);
        uVar1 = uStack_ec;
        uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar16 + 0xc) >> 0x20);
        uVar9 = uStack_e8;
        uStack_e4 = (undefined4)*(undefined8 *)((longlong)puVar16 + 0x14);
        uVar10 = uStack_e4;
        uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar16 + 0x14) >> 0x20);
        uVar11 = uStack_e0;
        if (*(ushort *)(lVar13 + 0x12e) != 0) {
          uVar20 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar16 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) +
                         0x7f) * 0x10 + 0x138 + lVar13);
              goto code_r0x0001806da457;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(ushort *)(lVar13 + 0x12e));
        }
        puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x0001806da457:
        uStack_ec = uVar1;
        uStack_e8 = uVar9;
        uStack_e4 = uVar10;
        uStack_e0 = uVar11;
        (*(code *)*puVar16)(plVar14,&uStack_f8,puVar16[1]);
        return;
      }
    }
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_r0x0001806da50e:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

