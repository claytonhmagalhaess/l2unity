// SparkHtml__BotaoDeLista__1807353d0 @ 0x1807353d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml__BotaoDeLista__1807353d0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  ushort uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (cRam00000001834b4254 == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass23_0._BotaoDeLista_b__0);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass23_0._BotaoDeLista_b__1);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass23_0._BotaoDeLista_b__2);
    FUN_180315380(TI_SparkHtml.<>c__DisplayClass23_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'icon'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/BTN_Icon_'");
    FUN_180315380(LIT_"'!'");
    FUN_180315380(LIT_"'Normal'");
    FUN_180315380(LIT_"'RETURN'");
    FUN_180315380(LIT_"'Return'");
    FUN_180315380(LIT_"'Teleport'");
    FUN_180315380(LIT_"'NORMAL'");
    FUN_180315380(LIT_"'TELEPORT'");
    FUN_180315380(LIT_"'Quest'");
    FUN_180315380(LIT_"'◀'");
    FUN_180315380(LIT_"'QUEST'");
    FUN_180315380(LIT_"'◆'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'▶'");
    FUN_180315380(LIT_"'msg'");
    FUN_180315380(LIT_"'action'");
    cRam00000001834b4254 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass23_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x20) = param_1;
    func_0x000180314690(lVar6 + 0x20,param_1);
    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar7,0);
    *(undefined8 *)(lVar6 + 0x10) = uVar7;
    func_0x000180314690(lVar6 + 0x10,uVar7);
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x10),0);
      uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar8 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x10),0);
          uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar8 != 0) {
            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
            if (*(longlong *)(lVar6 + 0x10) != 0) {
              plVar9 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar6 + 0x10),0);
              puVar10 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41c00000,0);
              if (plVar9 != (longlong *)0x0) {
                lVar8 = *plVar9;
                uVar7 = *puVar10;
                uVar18 = *(undefined4 *)(puVar10 + 1);
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar14 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                          (ulonglong)uVar14 * 0x10) + 0x57) * 0x10 + 0x138 + lVar8);
                      goto code_r0x000180735789;
                    }
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180735789:
                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                uStack_b8 = uVar7;
                (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                if (*(longlong *)(lVar6 + 0x10) != 0) {
                  plVar9 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar6 + 0x10),0);
                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                    plVar11 = (longlong *)
                              UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(lVar6 + 0x10),0);
                    puVar10 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit
                                        (&uStack_b8,0x3f800000,0);
                    if (plVar11 != (longlong *)0x0) {
                      lVar8 = *plVar11;
                      uVar7 = *puVar10;
                      uVar18 = *(undefined4 *)(puVar10 + 1);
                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                        uVar14 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar14 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar10 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                (ulonglong)uVar14 * 0x10) + 0x4b) * 0x10 + 0x138 +
                                      lVar8);
                            goto code_r0x000180735847;
                          }
                          uVar14 = uVar14 + 1;
                        } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                      }
                      puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180735847:
                      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                      uStack_b8 = uVar7;
                      (*(code *)*puVar10)(plVar11,&uStack_b8,puVar10[1]);
                      if (plVar9 != (longlong *)0x0) {
                        lVar8 = *plVar9;
                        if (*(ushort *)(lVar8 + 0x12e) != 0) {
                          uVar14 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar10 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                  (ulonglong)uVar14 * 0x10) + 0x51) * 0x10 + 0x138 +
                                        lVar8);
                              goto code_r0x0001807358b9;
                            }
                            uVar14 = uVar14 + 1;
                          } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                        }
                        puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001807358b9:
                        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                        uStack_b8 = uVar7;
                        (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                        if (*(longlong *)(lVar6 + 0x10) != 0) {
                          plVar9 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(lVar6 + 0x10),0);
                          puVar10 = (undefined8 *)
                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                              (&uStack_b8,0x40c00000,0);
                          if (plVar9 != (longlong *)0x0) {
                            lVar8 = *plVar9;
                            uVar7 = *puVar10;
                            uVar18 = *(undefined4 *)(puVar10 + 1);
                            if (*(ushort *)(lVar8 + 0x12e) != 0) {
                              uVar14 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar10 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                      (ulonglong)uVar14 * 0x10) + 0x61) * 0x10 +
                                             0x138 + lVar8);
                                  goto code_r0x000180735959;
                                }
                                uVar14 = uVar14 + 1;
                              } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                            }
                            puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180735959:
                            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                            uStack_b8 = uVar7;
                            (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                            if (*(longlong *)(lVar6 + 0x10) != 0) {
                              plVar9 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style
                                                 (*(longlong *)(lVar6 + 0x10),0);
                              puVar10 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit
                                                  (&uStack_b8,0x40c00000,0);
                              if (plVar9 != (longlong *)0x0) {
                                lVar8 = *plVar9;
                                uVar7 = *puVar10;
                                uVar18 = *(undefined4 *)(puVar10 + 1);
                                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                  uVar14 = 0;
                                  do {
                                    if (*(longlong *)
                                         (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                        TI_UnityEngine.UIElements.IStyle) {
                                      puVar10 = (undefined8 *)
                                                ((longlong)
                                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                          (ulonglong)uVar14 * 0x10) + 99) * 0x10 +
                                                 0x138 + lVar8);
                                      goto code_r0x0001807359f9;
                                    }
                                    uVar14 = uVar14 + 1;
                                  } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                }
                                puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,99);
code_r0x0001807359f9:
                                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                uStack_b8 = uVar7;
                                (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                                if (*(longlong *)(lVar6 + 0x10) != 0) {
                                  plVar9 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(lVar6 + 0x10),0);
                                  uVar7 = func_0x0001825fc350();
                                  puVar10 = (undefined8 *)
                                            UnityEngine_UIElements_StyleLength__op_Implicit
                                                      (&uStack_b8,uVar7,0);
                                  if (plVar9 != (longlong *)0x0) {
                                    lVar8 = *plVar9;
                                    uVar7 = *puVar10;
                                    uVar18 = *(undefined4 *)(puVar10 + 1);
                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                      uVar14 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar14 * 0x10
                                             ) == TI_UnityEngine.UIElements.IStyle) {
                                          puVar10 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                              (ulonglong)uVar14 * 0x10) + 0xad) *
                                                     0x10 + 0x138 + lVar8);
                                          goto code_r0x000180735aa9;
                                        }
                                        uVar14 = uVar14 + 1;
                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                    }
                                    puVar10 = (undefined8 *)
                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180735aa9:
                                    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                    uStack_b8 = uVar7;
                                    (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                                    if (*(longlong *)(lVar6 + 0x10) != 0) {
                                      plVar9 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (*(longlong *)(lVar6 + 0x10),0);
                                      uStack_b8 = 0x3db851ec3dcccccd;
                                      uStack_b0 = 0x3f59999a3d99999a;
                                      puVar10 = (undefined8 *)
                                                UnityEngine_UIElements_StyleColor__op_Implicit
                                                          (&uStack_98,&uStack_b8,0);
                                      if (plVar9 != (longlong *)0x0) {
                                        lVar8 = *plVar9;
                                        uVar7 = *puVar10;
                                        uVar13 = puVar10[1];
                                        uVar18 = *(undefined4 *)(puVar10 + 2);
                                        if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                          uVar14 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar8 + 0xb0) +
                                                 (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar10 = (undefined8 *)
                                                        ((longlong)
                                                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                                  (ulonglong)uVar14 * 0x10) + 9) *
                                                         0x10 + 0x138 + lVar8);
                                              goto code_r0x000180735b59;
                                            }
                                            uVar14 = uVar14 + 1;
                                          } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                        }
                                        puVar10 = (undefined8 *)
                                                  FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180735b59:
                                        uStack_b8 = uVar7;
                                        uStack_b0 = uVar13;
                                        uStack_a8 = uVar18;
                                        (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                                        if (*(longlong *)(lVar6 + 0x10) != 0) {
                                          lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                          if (*(longlong *)(lVar6 + 0x10) != 0) {
                                            lVar12 = UnityEngine_UIElements_VisualElement__get_style
                                                               (*(longlong *)(lVar6 + 0x10),0);
                                            uVar7 = func_0x000182601c10();
                                            if ((lVar12 != 0) &&
                                               (FUN_180005060(0x1b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar7),
                                               lVar8 != 0)) {
                                              FUN_180005060(0x2b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                                              if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                  lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  uVar7 = func_0x000182601c10();
                                                  if ((lVar12 != 0) &&
                                                     (FUN_180005060(0x23,TI_UnityEngine.UIElements.IStyle,lVar12,uVar7
                                                                   ), lVar8 != 0)) {
                                                    FUN_180005060(0x1f,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                                                    if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  uStack_b8 = 0x3ea3d70a3eb851ec;
                                                  uStack_b0 = 0x3f6666663e800000;
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_98,&uStack_b8,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar8 = *plVar11;
                                                    uVar7 = *puVar10;
                                                    uVar13 = puVar10[1];
                                                    uVar18 = *(undefined4 *)(puVar10 + 2);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar14 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             (ulonglong)uVar14 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar8 + 0xb0) + 8 +
                                                                              (ulonglong)uVar14 *
                                                                              0x10) + 0x15) * 0x10 +
                                                                     0x138 + lVar8);
                                                          goto code_r0x000180735d17;
                                                        }
                                                        uVar14 = uVar14 + 1;
                                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x15);
code_r0x000180735d17:
                                                    uStack_b8 = uVar7;
                                                    uStack_b0 = uVar13;
                                                    uStack_a8 = uVar18;
                                                    (*(code *)*puVar10)(plVar11,&uStack_b8,
                                                                        puVar10[1]);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      lVar8 = *plVar9;
                                                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                        uVar14 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar8 + 0xb0) +
                                                               (ulonglong)uVar14 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar10 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar8 + 0xb0) + 8
                                                                                + (ulonglong)uVar14
                                                                                  * 0x10) + 0x25) *
                                                                       0x10 + 0x138 + lVar8);
                                                            goto code_r0x000180735d89;
                                                          }
                                                          uVar14 = uVar14 + 1;
                                                        } while (uVar14 < *(ushort *)(lVar8 + 0x12e)
                                                                );
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                              0x25);
code_r0x000180735d89:
                                                      uStack_b8 = uVar7;
                                                      uStack_b0 = uVar13;
                                                      uStack_a8 = uVar18;
                                                      (*(code *)*puVar10)(plVar9,&uStack_b8,
                                                                          puVar10[1]);
                                                      if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                        plVar9 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  uStack_b8 = 0x3ea3d70a3eb851ec;
                                                  uStack_b0 = 0x3f6666663e800000;
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_98,&uStack_b8,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar8 = *plVar11;
                                                    uVar7 = *puVar10;
                                                    uVar13 = puVar10[1];
                                                    uVar18 = *(undefined4 *)(puVar10 + 2);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar14 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             (ulonglong)uVar14 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar8 + 0xb0) + 8 +
                                                                              (ulonglong)uVar14 *
                                                                              0x10) + 0x21) * 0x10 +
                                                                     0x138 + lVar8);
                                                          goto code_r0x000180735e47;
                                                        }
                                                        uVar14 = uVar14 + 1;
                                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x21);
code_r0x000180735e47:
                                                    uStack_b8 = uVar7;
                                                    uStack_b0 = uVar13;
                                                    uStack_a8 = uVar18;
                                                    (*(code *)*puVar10)(plVar11,&uStack_b8,
                                                                        puVar10[1]);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      lVar8 = *plVar9;
                                                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                        uVar14 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar8 + 0xb0) +
                                                               (ulonglong)uVar14 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar10 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar8 + 0xb0) + 8
                                                                                + (ulonglong)uVar14
                                                                                  * 0x10) + 0x1d) *
                                                                       0x10 + 0x138 + lVar8);
                                                            goto code_r0x000180735eb9;
                                                          }
                                                          uVar14 = uVar14 + 1;
                                                        } while (uVar14 < *(ushort *)(lVar8 + 0x12e)
                                                                );
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                              0x1d);
code_r0x000180735eb9:
                                                      uStack_b8 = uVar7;
                                                      uStack_b0 = uVar13;
                                                      uStack_a8 = uVar18;
                                                      (*(code *)*puVar10)(plVar9,&uStack_b8,
                                                                          puVar10[1]);
                                                      if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                        plVar9 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40000000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar8 = *plVar11;
                                                    uVar7 = *puVar10;
                                                    uVar18 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar14 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             (ulonglong)uVar14 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar8 + 0xb0) + 8 +
                                                                              (ulonglong)uVar14 *
                                                                              0x10) + 0x29) * 0x10 +
                                                                     0x138 + lVar8);
                                                          goto code_r0x000180735f77;
                                                        }
                                                        uVar14 = uVar14 + 1;
                                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x29);
code_r0x000180735f77:
                                                    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                    uStack_b8 = uVar7;
                                                    (*(code *)*puVar10)(plVar11,&uStack_b8,
                                                                        puVar10[1]);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      lVar8 = *plVar9;
                                                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                        uVar14 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar8 + 0xb0) +
                                                               (ulonglong)uVar14 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar10 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar8 + 0xb0) + 8
                                                                                + (ulonglong)uVar14
                                                                                  * 0x10) + 0x27) *
                                                                       0x10 + 0x138 + lVar8);
                                                            goto code_r0x000180735fe9;
                                                          }
                                                          uVar14 = uVar14 + 1;
                                                        } while (uVar14 < *(ushort *)(lVar8 + 0x12e)
                                                                );
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                              0x27);
code_r0x000180735fe9:
                                                      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                      uStack_b8 = uVar7;
                                                      (*(code *)*puVar10)(plVar9,&uStack_b8,
                                                                          puVar10[1]);
                                                      if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                        plVar9 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40000000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar8 = *plVar11;
                                                    uVar7 = *puVar10;
                                                    uVar18 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar14 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             (ulonglong)uVar14 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar8 + 0xb0) + 8 +
                                                                              (ulonglong)uVar14 *
                                                                              0x10) + 0x19) * 0x10 +
                                                                     0x138 + lVar8);
                                                          goto code_r0x0001807360a7;
                                                        }
                                                        uVar14 = uVar14 + 1;
                                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x19);
code_r0x0001807360a7:
                                                    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                    uStack_b8 = uVar7;
                                                    (*(code *)*puVar10)(plVar11,&uStack_b8,
                                                                        puVar10[1]);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      lVar8 = *plVar9;
                                                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                        uVar14 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar8 + 0xb0) +
                                                               (ulonglong)uVar14 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar10 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar8 + 0xb0) + 8
                                                                                + (ulonglong)uVar14
                                                                                  * 0x10) + 0x17) *
                                                                       0x10 + 0x138 + lVar8);
                                                            goto code_r0x000180736119;
                                                          }
                                                          uVar14 = uVar14 + 1;
                                                        } while (uVar14 < *(ushort *)(lVar8 + 0x12e)
                                                                );
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                              0x17);
code_r0x000180736119:
                                                      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                      uStack_b8 = uVar7;
                                                      (*(code *)*puVar10)(plVar9,&uStack_b8,
                                                                          puVar10[1]);
                                                      if ((param_2 != 0) &&
                                                         ((lVar8 = SparkHtml_No__Attr__180735120
                                                                             (param_2,
                                                  LIT_"'icon'",0), lVar8 != 0 ||
                                                  (lVar8 = LIT_"'NORMAL'",
                                                  LIT_"'NORMAL'" != 0)))) {
                                                    uVar13 = System_String__ToUpperInvariant
                                                                       (lVar8,0);
                                                    cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'QUEST'",0);
                                                  uVar7 = LIT_"'Quest'";
                                                  if ((cVar5 == '\0') &&
                                                     ((cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'TELEPORT'",0),
                                                  uVar7 = LIT_"'Teleport'", cVar5 == '\0' &&
                                                  (cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'RETURN'",0),
                                                  uVar7 = LIT_"'Normal'", cVar5 != '\0')))) {
                                                    uVar7 = LIT_"'Return'";
                                                  }
                                                  uVar7 = System_String__Concat
                                                                    (LIT_"'Data/UI/Assets/html/BTN_Icon_'",uVar7,0);
                                                  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar7 = FUN_180a90ae0(uVar7,MR_SparkArte.Load<UnityEngine.Texture2D>);
                                                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  cVar5 = UnityEngine_Object__op_Inequality
                                                                    (uVar7,0,0);
                                                  if (cVar5 == '\0') {
                                                    cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'QUEST'",0);
                                                  uVar7 = LIT_"'!'";
                                                  if (((cVar5 == '\0') &&
                                                      (cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'TELEPORT'",0),
                                                  uVar7 = LIT_"'◆'", cVar5 == '\0')) &&
                                                  (cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'RETURN'",0),
                                                  uVar7 = LIT_"'▶'", cVar5 != '\0')) {
                                                    uVar7 = LIT_"'◀'";
                                                  }
                                                  lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
                                                  UnityEngine_UIElements_Label___ctor(lVar8,uVar7,0)
                                                  ;
                                                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  SparkHtml__Estilo__18073a000(lVar8,0);
                                                  if (lVar8 == 0) goto code_r0x000180736e77;
                                                  plVar9 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x41600000,0);
                                                  if (plVar9 == (longlong *)0x0)
                                                  goto code_r0x000180736e77;
                                                  lVar12 = *plVar9;
                                                  uVar7 = *puVar10;
                                                  uVar18 = *(undefined4 *)(puVar10 + 1);
                                                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                                    uVar14 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar12 + 0xb0) +
                                                           (ulonglong)uVar14 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar10 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar12 + 0xb0) + 8 +
                                                                            (ulonglong)uVar14 * 0x10
                                                                            ) + 0xad) * 0x10 + 0x138
                                                                  + lVar12);
                                                        goto code_r0x000180736569;
                                                      }
                                                      uVar14 = uVar14 + 1;
                                                    } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad
                                                                         );
code_r0x000180736569:
                                                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                  uStack_b8 = uVar7;
                                                  (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                                                  lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  uVar7 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar12 == 0) goto code_r0x000180736e77;
                                                  FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar7);
                                                  plVar9 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'QUEST'",0);
                                                  if (cVar5 == '\0') {
                                                    cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'TELEPORT'",0);
                                                  if (cVar5 == '\0') {
                                                    cVar5 = func_0x0001817058a0(uVar13,
                                                  LIT_"'RETURN'",0);
                                                  if (cVar5 == '\0') {
                                                    uVar16 = 0x3f59999a;
                                                    uVar17 = 0x3f3851ec;
                                                    uVar18 = 0x3ee66666;
                                                  }
                                                  else {
                                                    uVar16 = 0x3f333333;
                                                    uVar17 = 0x3f333333;
                                                    uVar18 = uVar17;
                                                  }
                                                  }
                                                  else {
                                                    uVar16 = 0x3ee66666;
                                                    uVar17 = 0x3f400000;
                                                    uVar18 = 0x3f800000;
                                                  }
                                                  }
                                                  else {
                                                    uVar17 = 0x3f4ccccd;
                                                    uVar16 = 0x3f800000;
                                                    uVar18 = 0x3e4ccccd;
                                                  }
                                                  uStack_b8 = CONCAT44(uVar17,uVar16);
                                                  uStack_b0 = CONCAT44(0x3f800000,uVar18);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_98,&uStack_b8,0);
                                                  if (plVar9 == (longlong *)0x0)
                                                  goto code_r0x000180736e77;
                                                  lVar12 = *plVar9;
                                                  uVar7 = *puVar10;
                                                  uVar13 = puVar10[1];
                                                  uVar18 = *(undefined4 *)(puVar10 + 2);
                                                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                                    uVar14 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar12 + 0xb0) +
                                                           (ulonglong)uVar14 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar15 = &uStack_b8;
                                                        puVar10 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar12 + 0xb0) + 8 +
                                                                            (ulonglong)uVar14 * 0x10
                                                                            ) + 0x2f) * 0x10 + 0x138
                                                                  + lVar12);
                                                        uStack_b8 = uVar7;
                                                        uStack_b0 = uVar13;
                                                        uStack_a8 = uVar18;
                                                        goto code_r0x00018073695e;
                                                      }
                                                      uVar14 = uVar14 + 1;
                                                    } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x2f
                                                                         );
                                                  puVar15 = &uStack_b8;
                                                  uStack_b8 = uVar7;
                                                  uStack_b0 = uVar13;
                                                  uStack_a8 = uVar18;
                                                  }
                                                  else {
                                                    lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar8,0);
                                                    if (lVar8 == 0) goto code_r0x000180736e77;
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x41800000,0);
                                                  if (plVar9 == (longlong *)0x0)
                                                  goto code_r0x000180736e77;
                                                  lVar12 = *plVar9;
                                                  uVar13 = *puVar10;
                                                  uVar18 = *(undefined4 *)(puVar10 + 1);
                                                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                                    uVar14 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar12 + 0xb0) +
                                                           (ulonglong)uVar14 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar10 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar12 + 0xb0) + 8 +
                                                                            (ulonglong)uVar14 * 0x10
                                                                            ) + 0xad) * 0x10 + 0x138
                                                                  + lVar12);
                                                        goto code_r0x0001807367e9;
                                                      }
                                                      uVar14 = uVar14 + 1;
                                                    } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad
                                                                         );
code_r0x0001807367e9:
                                                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                  uStack_b8 = uVar13;
                                                  (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                                                  plVar9 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x41800000,0);
                                                  if (plVar9 == (longlong *)0x0)
                                                  goto code_r0x000180736e77;
                                                  lVar12 = *plVar9;
                                                  uVar13 = *puVar10;
                                                  uVar18 = *(undefined4 *)(puVar10 + 1);
                                                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                                    uVar14 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar12 + 0xb0) +
                                                           (ulonglong)uVar14 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar10 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar12 + 0xb0) + 8 +
                                                                            (ulonglong)uVar14 * 0x10
                                                                            ) + 0x43) * 0x10 + 0x138
                                                                  + lVar12);
                                                        goto code_r0x000180736879;
                                                      }
                                                      uVar14 = uVar14 + 1;
                                                    } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43
                                                                         );
code_r0x000180736879:
                                                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                  uStack_b8 = uVar13;
                                                  (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                                                  lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  uVar13 = func_0x000182601c10();
                                                  if (lVar12 == 0) goto code_r0x000180736e77;
                                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar13);
                                                  plVar9 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_98,uVar7,0);
                                                  if (plVar9 == (longlong *)0x0)
                                                  goto code_r0x000180736e77;
                                                  lVar12 = *plVar9;
                                                  uVar13 = *puVar10;
                                                  uVar2 = puVar10[1];
                                                  uVar3 = puVar10[2];
                                                  uVar4 = puVar10[3];
                                                  uVar7 = puVar10[4];
                                                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                                    uVar14 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar12 + 0xb0) +
                                                           (ulonglong)uVar14 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar10 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar12 + 0xb0) + 8 +
                                                                            (ulonglong)uVar14 * 0x10
                                                                            ) + 0xb) * 0x10 + 0x138
                                                                  + lVar12);
                                                        goto code_r0x000180736949;
                                                      }
                                                      uVar14 = uVar14 + 1;
                                                    } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb)
                                                  ;
code_r0x000180736949:
                                                  puVar15 = &uStack_98;
                                                  uStack_98 = uVar13;
                                                  uStack_90 = uVar2;
                                                  uStack_88 = uVar3;
                                                  uStack_80 = uVar4;
                                                  uStack_78 = uVar7;
                                                  }
code_r0x00018073695e:
                                                  (*(code *)*puVar10)(plVar9,puVar15,puVar10[1]);
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar8,1,0);
                                                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(lVar6 + 0x10),lVar8,0);
                                                    uVar7 = SparkHtml__RichInterno__18073dbf0
                                                                      (param_1,param_2,
                                                                       LIT_"''",0);
                                                    uVar13 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
                                                    UnityEngine_UIElements_Label___ctor
                                                              (uVar13,uVar7,0);
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar13;
                                                    func_0x000180314690(lVar6 + 0x18,uVar13);
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_TextElement__set_enableRichText
                                                            (*(longlong *)(lVar6 + 0x18),1,0);
                                                  uVar7 = *(undefined8 *)(lVar6 + 0x18);
                                                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  SparkHtml__Estilo__18073a000(uVar7,0);
                                                  if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  uStack_b8 = *(undefined8 *)
                                                               (*(longlong *)
                                                                 (TI_SparkHtml + 0xb8) +
                                                               0x18);
                                                  uStack_b0 = *(undefined8 *)
                                                               (*(longlong *)
                                                                 (TI_SparkHtml + 0xb8) +
                                                               0x20);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_98,&uStack_b8,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar8 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar13 = puVar10[1];
                                                    uVar18 = *(undefined4 *)(puVar10 + 2);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar14 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             (ulonglong)uVar14 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar8 + 0xb0) + 8 +
                                                                              (ulonglong)uVar14 *
                                                                              0x10) + 0x2f) * 0x10 +
                                                                     0x138 + lVar8);
                                                          goto code_r0x000180736aa9;
                                                        }
                                                        uVar14 = uVar14 + 1;
                                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x2f);
code_r0x000180736aa9:
                                                    uStack_b8 = uVar7;
                                                    uStack_b0 = uVar13;
                                                    uStack_a8 = uVar18;
                                                    (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                      lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                      lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  uVar7 = func_0x000182601c10();
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40800000,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar8 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar18 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar14 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             (ulonglong)uVar14 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar8 + 0xb0) + 8 +
                                                                              (ulonglong)uVar14 *
                                                                              0x10) + 0x4d) * 0x10 +
                                                                     0x138 + lVar8);
                                                          goto code_r0x000180736bd9;
                                                        }
                                                        uVar14 = uVar14 + 1;
                                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x4d);
code_r0x000180736bd9:
                                                    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
                                                    uStack_b8 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (*(longlong *)(lVar6 + 0x18),1,0);
                                                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(lVar6 + 0x10),
                                                               *(undefined8 *)(lVar6 + 0x18),0);
                                                    uVar7 = SparkHtml_No__Attr__180735120
                                                                      (param_2,LIT_"'action'",
                                                                       0);
                                                    *(undefined8 *)(lVar6 + 0x28) = uVar7;
                                                    func_0x000180314690(lVar6 + 0x28,uVar7);
                                                    uVar7 = SparkHtml_No__Attr__180735120
                                                                      (param_2,LIT_"'msg'",
                                                                       0);
                                                    *(undefined8 *)(lVar6 + 0x30) = uVar7;
                                                    func_0x000180314690(lVar6 + 0x30,uVar7);
                                                    cVar5 = func_0x000181707e50(*(undefined8 *)
                                                                                 (lVar6 + 0x28),0);
                                                    if (cVar5 != '\0') {
code_r0x000180736d79:
                                                      return *(undefined8 *)(lVar6 + 0x10);
                                                    }
                                                    lVar8 = *(longlong *)(lVar6 + 0x10);
                                                    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                    FUN_18055b980(uVar7,lVar6,MD_SparkHtml.__c__DisplayClass23_0._BotaoDeLista_b__0,0
                                                                 );
                                                    if (lVar8 != 0) {
                                                      FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                      lVar8 = *(longlong *)(lVar6 + 0x10);
                                                      uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                      FUN_18055b980(uVar7,lVar6,MD_SparkHtml.__c__DisplayClass23_0._BotaoDeLista_b__1
                                                                    ,0);
                                                      if (lVar8 != 0) {
                                                        FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                        lVar8 = *(longlong *)(lVar6 + 0x10);
                                                        uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
                                                        FUN_18055b980(uVar7,lVar6,
                                                                      MD_SparkHtml.__c__DisplayClass23_0._BotaoDeLista_b__2,0);
                                                        if (lVar8 != 0) {
                                                          FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>
                                                                       );
                                                          uVar7 = *(undefined8 *)(lVar6 + 0x10);
                                                          uVar13 = func_0x000180315580(
                                                  TI_ButtonClickSoundManipulator);
                                                  BlinkingCursorManipulator___ctor__1807aa3c0
                                                            (uVar13,uVar7,0);
                                                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                            (uVar7,uVar13,0);
                                                  goto code_r0x000180736d79;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000180736e77:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar7 = (*pcVar1)();
  return uVar7;
}

