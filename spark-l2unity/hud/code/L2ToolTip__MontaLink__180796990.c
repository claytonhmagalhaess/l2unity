// L2ToolTip__MontaLink__180796990 @ 0x180796990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ToolTip__MontaLink__180796990(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ushort uVar18;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (cRam00000001834b446c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'tooltip-background'");
    FUN_180315380(LIT_"'Data/UI/Assets/Inventory/ItemWindow_DF_SlotBox_Default'");
    FUN_180315380(LIT_"'Content'");
    cRam00000001834b446c = '\x01';
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    return;
  }
  uVar8 = L2Window__GetLabelById__1807998f0(param_1,LIT_"'Content'",0);
  lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
  if (lVar9 != 0) {
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar9,1,0);
    *(longlong *)(param_1 + 0xd0) = lVar9;
    func_0x000180314690(param_1 + 0xd0,lVar9);
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      UnityEngine_UIElements_VisualElement__AddToClassList
                (*(longlong *)(param_1 + 0xd0),LIT_"'tooltip-background'",0);
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
        uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
        if (lVar9 != 0) {
          FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            plVar11 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xd0),0);
            puVar12 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,0x43a00000,0);
            if (plVar11 != (longlong *)0x0) {
              lVar9 = *plVar11;
              uVar10 = *puVar12;
              uVar1 = *(undefined4 *)(puVar12 + 1);
              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                uVar18 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10)
                               + 0x55) * 0x10 + 0x138 + lVar9);
                    goto code_r0x000180796be9;
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar18 < *(ushort *)(lVar9 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x55);
code_r0x000180796be9:
              uStack_a8 = uVar10;
              uStack_a0 = uVar1;
              (*(code *)*puVar12)(plVar11,&uStack_a8,puVar12[1]);
              if (*(longlong *)(param_1 + 0xd0) != 0) {
                plVar11 = (longlong *)
                          UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0xd0),0);
                if (*(longlong *)(param_1 + 0xd0) != 0) {
                  plVar13 = (longlong *)
                            UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0xd0),0);
                  puVar12 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,0x40c00000,0)
                  ;
                  if (plVar13 != (longlong *)0x0) {
                    lVar9 = *plVar13;
                    uVar10 = *puVar12;
                    uVar1 = *(undefined4 *)(puVar12 + 1);
                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                      uVar18 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                              (ulonglong)uVar18 * 0x10) + 99) * 0x10 + 0x138 + lVar9
                                    );
                          goto code_r0x000180796ca7;
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < *(ushort *)(lVar9 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,99);
code_r0x000180796ca7:
                    uStack_a8 = uVar10;
                    uStack_a0 = uVar1;
                    (*(code *)*puVar12)(plVar13,&uStack_a8,puVar12[1]);
                    if (plVar11 != (longlong *)0x0) {
                      lVar9 = *plVar11;
                      if (*(ushort *)(lVar9 + 0x12e) != 0) {
                        uVar18 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar18 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar12 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                (ulonglong)uVar18 * 0x10) + 0x61) * 0x10 + 0x138 +
                                      lVar9);
                            goto code_r0x000180796d19;
                          }
                          uVar18 = uVar18 + 1;
                        } while (uVar18 < *(ushort *)(lVar9 + 0x12e));
                      }
                      puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180796d19:
                      uStack_a8 = uVar10;
                      uStack_a0 = uVar1;
                      (*(code *)*puVar12)(plVar11,&uStack_a8,puVar12[1]);
                      if (*(longlong *)(param_1 + 0xd0) != 0) {
                        plVar11 = (longlong *)
                                  UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0xd0),0);
                        if (*(longlong *)(param_1 + 0xd0) != 0) {
                          plVar13 = (longlong *)
                                    UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 0xd0),0);
                          puVar12 = (undefined8 *)
                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                              (&uStack_a8,0x40a00000,0);
                          if (plVar13 != (longlong *)0x0) {
                            lVar9 = *plVar13;
                            uVar10 = *puVar12;
                            uVar1 = *(undefined4 *)(puVar12 + 1);
                            if (*(ushort *)(lVar9 + 0x12e) != 0) {
                              uVar18 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                      (ulonglong)uVar18 * 0x10) + 0x5f) * 0x10 +
                                             0x138 + lVar9);
                                  goto code_r0x000180796dd7;
                                }
                                uVar18 = uVar18 + 1;
                              } while (uVar18 < *(ushort *)(lVar9 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x000180796dd7:
                            uStack_a8 = uVar10;
                            uStack_a0 = uVar1;
                            (*(code *)*puVar12)(plVar13,&uStack_a8,puVar12[1]);
                            if (plVar11 != (longlong *)0x0) {
                              lVar9 = *plVar11;
                              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                uVar18 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar12 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                        (ulonglong)uVar18 * 0x10) + 0x65) * 0x10 +
                                               0x138 + lVar9);
                                    goto code_r0x000180796e49;
                                  }
                                  uVar18 = uVar18 + 1;
                                } while (uVar18 < *(ushort *)(lVar9 + 0x12e));
                              }
                              puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x000180796e49:
                              uStack_a8 = uVar10;
                              uStack_a0 = uVar1;
                              (*(code *)*puVar12)(plVar11,&uStack_a8,puVar12[1]);
                              if (*(longlong *)(param_1 + 0xd0) != 0) {
                                lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(param_1 + 0xd0),0);
                                uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                if (lVar9 != 0) {
                                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
                                  lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                  UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
                                  if (lVar9 != 0) {
                                    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar9,1,0)
                                    ;
                                    lVar14 = UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar9,0);
                                    uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                    if (lVar14 != 0) {
                                      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar14,uVar10);
                                      lVar14 = UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar9,0);
                                      uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                      if (lVar14 != 0) {
                                        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar14,uVar10);
                                        plVar11 = (longlong *)
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                        puVar12 = (undefined8 *)
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40400000,0);
                                        if (plVar11 != (longlong *)0x0) {
                                          lVar14 = *plVar11;
                                          uVar10 = *puVar12;
                                          uVar1 = *(undefined4 *)(puVar12 + 1);
                                          if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                            uVar18 = 0;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar14 + 0xb0) +
                                                   (ulonglong)uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                puVar12 = (undefined8 *)
                                                          ((longlong)
                                                           (*(int *)(*(longlong *)(lVar14 + 0xb0) +
                                                                     8 + (ulonglong)uVar18 * 0x10) +
                                                           0x4b) * 0x10 + 0x138 + lVar14);
                                                goto code_r0x000180796fd9;
                                              }
                                              uVar18 = uVar18 + 1;
                                            } while (uVar18 < *(ushort *)(lVar14 + 0x12e));
                                          }
                                          puVar12 = (undefined8 *)
                                                    FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180796fd9:
                                          uStack_a8 = uVar10;
                                          uStack_a0 = uVar1;
                                          (*(code *)*puVar12)(plVar11,&uStack_a8,puVar12[1]);
                                          lVar14 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                          UnityEngine_UIElements_VisualElement___ctor(lVar14,0);
                                          if (lVar14 != 0) {
                                            UnityEngine_UIElements_VisualElement__set_pickingMode
                                                      (lVar14,1,0);
                                            plVar11 = (longlong *)
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar14,0);
                                            plVar13 = (longlong *)
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar14,0);
                                            puVar12 = (undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x42100000,0);
                                            if (plVar13 != (longlong *)0x0) {
                                              lVar15 = *plVar13;
                                              uVar10 = *puVar12;
                                              uVar1 = *(undefined4 *)(puVar12 + 1);
                                              if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                uVar18 = 0;
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar15 + 0xb0) +
                                                       (ulonglong)uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                                                  {
                                                    puVar12 = (undefined8 *)
                                                              ((longlong)
                                                               (*(int *)(*(longlong *)
                                                                          (lVar15 + 0xb0) + 8 +
                                                                        (ulonglong)uVar18 * 0x10) +
                                                               0x43) * 0x10 + 0x138 + lVar15);
                                                    goto code_r0x0001807970b7;
                                                  }
                                                  uVar18 = uVar18 + 1;
                                                } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
                                              }
                                              puVar12 = (undefined8 *)
                                                        FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001807970b7:
                                              uStack_a8 = uVar10;
                                              uStack_a0 = uVar1;
                                              (*(code *)*puVar12)(plVar13,&uStack_a8,puVar12[1]);
                                              if (plVar11 != (longlong *)0x0) {
                                                lVar15 = *plVar11;
                                                if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                  uVar18 = 0;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar15 + 0xb0) +
                                                         (ulonglong)uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle
                                                       ) {
                                                      puVar12 = (undefined8 *)
                                                                ((longlong)
                                                                 (*(int *)(*(longlong *)
                                                                            (lVar15 + 0xb0) + 8 +
                                                                          (ulonglong)uVar18 * 0x10)
                                                                 + 0xad) * 0x10 + 0x138 + lVar15);
                                                      goto code_r0x000180797129;
                                                    }
                                                    uVar18 = uVar18 + 1;
                                                  } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
                                                }
                                                puVar12 = (undefined8 *)
                                                          FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad)
                                                ;
code_r0x000180797129:
                                                uStack_a8 = uVar10;
                                                uStack_a0 = uVar1;
                                                (*(code *)*puVar12)(plVar11,&uStack_a8,puVar12[1]);
                                                lVar15 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar14,0);
                                                uVar10 = func_0x000182601c10(0,0);
                                                if (lVar15 != 0) {
                                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar10);
                                                  plVar11 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar14,0);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40c00000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar15 = *plVar11;
                                                    uVar10 = *puVar12;
                                                    uVar1 = *(undefined4 *)(puVar12 + 1);
                                                    if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                      uVar18 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar15 + 0xb0) +
                                                             (ulonglong)uVar18 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar15 + 0xb0) + 8
                                                                              + (ulonglong)uVar18 *
                                                                                0x10) + 0x4f) * 0x10
                                                                     + 0x138 + lVar15);
                                                          goto code_r0x0001807971f9;
                                                        }
                                                        uVar18 = uVar18 + 1;
                                                      } while (uVar18 < *(ushort *)(lVar15 + 0x12e))
                                                      ;
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x4f);
code_r0x0001807971f9:
                                                    uStack_a8 = uVar10;
                                                    uStack_a0 = uVar1;
                                                    (*(code *)*puVar12)(plVar11,&uStack_a8,
                                                                        puVar12[1]);
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar14,0);
                                                  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar10 = FUN_180a90ae0(LIT_"'Data/UI/Assets/Inventory/ItemWindow_DF_SlotBox_Default'",
                                                                         MR_SparkArte.Load<UnityEngine.Texture2D>);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_98,uVar10,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar15 = *plVar11;
                                                    uVar3 = *puVar12;
                                                    uVar4 = puVar12[1];
                                                    uVar5 = puVar12[2];
                                                    uVar6 = puVar12[3];
                                                    uVar10 = puVar12[4];
                                                    if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                      uVar18 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar15 + 0xb0) +
                                                             (ulonglong)uVar18 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar15 + 0xb0) + 8
                                                                              + (ulonglong)uVar18 *
                                                                                0x10) + 0xb) * 0x10
                                                                     + 0x138 + lVar15);
                                                          goto code_r0x0001807972b9;
                                                        }
                                                        uVar18 = uVar18 + 1;
                                                      } while (uVar18 < *(ushort *)(lVar15 + 0x12e))
                                                      ;
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0xb);
code_r0x0001807972b9:
                                                    uStack_98 = uVar3;
                                                    uStack_90 = uVar4;
                                                    uStack_88 = uVar5;
                                                    uStack_80 = uVar6;
                                                    uStack_78 = uVar10;
                                                    (*(code *)*puVar12)(plVar11,&uStack_98,
                                                                        puVar12[1]);
                                                    lVar15 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar15,0);
                                                    if (lVar15 != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar15,1,0);
                                                  *(longlong *)(param_1 + 0xd8) = lVar15;
                                                  func_0x000180314690(param_1 + 0xd8,lVar15);
                                                  if (*(longlong *)(param_1 + 0xd8) != 0) {
                                                    lVar15 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd8),0);
                                                  uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                                                  if (lVar15 != 0) {
                                                    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar15,uVar10)
                                                    ;
                                                    if (*(longlong *)(param_1 + 0xd8) != 0) {
                                                      plVar11 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd8),0);
                                                  if (*(longlong *)(param_1 + 0xd8) != 0) {
                                                    plVar13 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd8),0);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40000000,0);
                                                  if (plVar13 != (longlong *)0x0) {
                                                    lVar15 = *plVar13;
                                                    uVar10 = *puVar12;
                                                    uVar1 = *(undefined4 *)(puVar12 + 1);
                                                    if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                      uVar18 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar15 + 0xb0) +
                                                             (ulonglong)uVar18 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar15 + 0xb0) + 8
                                                                              + (ulonglong)uVar18 *
                                                                                0x10) + 0x73) * 0x10
                                                                     + 0x138 + lVar15);
                                                          goto code_r0x00018079741a;
                                                        }
                                                        uVar18 = uVar18 + 1;
                                                      } while (uVar18 < *(ushort *)(lVar15 + 0x12e))
                                                      ;
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,
                                                                            0x73);
code_r0x00018079741a:
                                                    uStack_a8 = uVar10;
                                                    uStack_a0 = uVar1;
                                                    (*(code *)*puVar12)(plVar13,&uStack_a8,
                                                                        puVar12[1]);
                                                    if (plVar11 != (longlong *)0x0) {
                                                      lVar15 = *plVar11;
                                                      if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                        uVar18 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar15 + 0xb0) +
                                                               (ulonglong)uVar18 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar12 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar15 + 0xb0) +
                                                                                 8 + (ulonglong)
                                                                                     uVar18 * 0x10)
                                                                       + 0x47) * 0x10 + 0x138 +
                                                                      lVar15);
                                                            goto code_r0x000180797489;
                                                          }
                                                          uVar18 = uVar18 + 1;
                                                        } while (uVar18 < *(ushort *)
                                                                           (lVar15 + 0x12e));
                                                      }
                                                      puVar12 = (undefined8 *)
                                                                FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle
                                                                              ,0x47);
code_r0x000180797489:
                                                      uStack_a8 = uVar10;
                                                      uStack_a0 = uVar1;
                                                      (*(code *)*puVar12)(plVar11,&uStack_a8,
                                                                          puVar12[1]);
                                                      if (*(longlong *)(param_1 + 0xd8) != 0) {
                                                        plVar11 = (longlong *)
                                                                                                                                    
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd8),0);
                                                  if (*(longlong *)(param_1 + 0xd8) != 0) {
                                                    plVar13 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd8),0);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x42000000,0);
                                                  if (plVar13 != (longlong *)0x0) {
                                                    lVar15 = *plVar13;
                                                    uVar10 = *puVar12;
                                                    uVar1 = *(undefined4 *)(puVar12 + 1);
                                                    if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                      uVar18 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar15 + 0xb0) +
                                                             (ulonglong)uVar18 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar15 + 0xb0) + 8
                                                                              + (ulonglong)uVar18 *
                                                                                0x10) + 0x43) * 0x10
                                                                     + 0x138 + lVar15);
                                                          goto code_r0x00018079754a;
                                                        }
                                                        uVar18 = uVar18 + 1;
                                                      } while (uVar18 < *(ushort *)(lVar15 + 0x12e))
                                                      ;
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,
                                                                            0x43);
code_r0x00018079754a:
                                                    uStack_a8 = uVar10;
                                                    uStack_a0 = uVar1;
                                                    (*(code *)*puVar12)(plVar13,&uStack_a8,
                                                                        puVar12[1]);
                                                    if (plVar11 != (longlong *)0x0) {
                                                      lVar15 = *plVar11;
                                                      if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                                        uVar18 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar15 + 0xb0) +
                                                               (ulonglong)uVar18 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar12 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar15 + 0xb0) +
                                                                                 8 + (ulonglong)
                                                                                     uVar18 * 0x10)
                                                                       + 0xad) * 0x10 + 0x138 +
                                                                      lVar15);
                                                            goto code_r0x0001807975b9;
                                                          }
                                                          uVar18 = uVar18 + 1;
                                                        } while (uVar18 < *(ushort *)
                                                                           (lVar15 + 0x12e));
                                                      }
                                                      puVar12 = (undefined8 *)
                                                                FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle
                                                                              ,0xad);
code_r0x0001807975b9:
                                                      uStack_a8 = uVar10;
                                                      uStack_a0 = uVar1;
                                                      (*(code *)*puVar12)(plVar11,&uStack_a8,
                                                                          puVar12[1]);
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar14,*(undefined8 *)
                                                                         (param_1 + 0xd8),0);
                                                      uVar10 = L2ToolTip__NovoTexto__180797e90
                                                                         (uVar8,0);
                                                      *(undefined8 *)(param_1 + 0xe8) = uVar10;
                                                      func_0x000180314690(param_1 + 0xe8,uVar10);
                                                      if (*(longlong *)(param_1 + 0xe8) != 0) {
                                                        lVar15 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe8),0);
                                                  uVar10 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar15 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar10)
                                                    ;
                                                    lVar15 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar15,0);
                                                    if (lVar15 != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar15,1,0);
                                                  lVar16 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar15,0);
                                                  uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar16 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar16,uVar10)
                                                    ;
                                                    lVar16 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar15,0);
                                                  uVar10 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar16 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar16,uVar10)
                                                    ;
                                                    lVar16 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar16,0);
                                                    if (lVar16 != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar16,1,0);
                                                  lVar17 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar16,0);
                                                  uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar17 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar17,uVar10)
                                                    ;
                                                    lVar17 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar16,0);
                                                  uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar17 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar17,uVar10);
                                                    lVar17 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar17,0);
                                                    if (lVar17 != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar17,1,0);
                                                  *(longlong *)(param_1 + 0xe0) = lVar17;
                                                  func_0x000180314690(param_1 + 0xe0,lVar17);
                                                  if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                    plVar13 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x41800000,0);
                                                  if (plVar13 != (longlong *)0x0) {
                                                    lVar17 = *plVar13;
                                                    uVar10 = *puVar12;
                                                    uVar1 = *(undefined4 *)(puVar12 + 1);
                                                    if (*(ushort *)(lVar17 + 0x12e) != 0) {
                                                      uVar18 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar17 + 0xb0) +
                                                             (ulonglong)uVar18 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar17 + 0xb0) + 8
                                                                              + (ulonglong)uVar18 *
                                                                                0x10) + 0x43) * 0x10
                                                                     + 0x138 + lVar17);
                                                          goto code_r0x00018079789a;
                                                        }
                                                        uVar18 = uVar18 + 1;
                                                      } while (uVar18 < *(ushort *)(lVar17 + 0x12e))
                                                      ;
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,
                                                                            0x43);
code_r0x00018079789a:
                                                    uStack_a8 = uVar10;
                                                    uStack_a0 = uVar1;
                                                    (*(code *)*puVar12)(plVar13,&uStack_a8,
                                                                        puVar12[1]);
                                                    if (plVar11 != (longlong *)0x0) {
                                                      lVar17 = *plVar11;
                                                      if (*(ushort *)(lVar17 + 0x12e) != 0) {
                                                        uVar18 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar17 + 0xb0) +
                                                               (ulonglong)uVar18 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar12 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar17 + 0xb0) +
                                                                                 8 + (ulonglong)
                                                                                     uVar18 * 0x10)
                                                                       + 0xad) * 0x10 + 0x138 +
                                                                      lVar17);
                                                            goto code_r0x000180797909;
                                                          }
                                                          uVar18 = uVar18 + 1;
                                                        } while (uVar18 < *(ushort *)
                                                                           (lVar17 + 0x12e));
                                                      }
                                                      puVar12 = (undefined8 *)
                                                                FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle
                                                                              ,0xad);
code_r0x000180797909:
                                                      uStack_a8 = uVar10;
                                                      uStack_a0 = uVar1;
                                                      (*(code *)*puVar12)(plVar11,&uStack_a8,
                                                                          puVar12[1]);
                                                      if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                        lVar17 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  uVar10 = func_0x000182601c10(0,0);
                                                  if (lVar17 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar17,uVar10)
                                                    ;
                                                    if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                      plVar11 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40800000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar17 = *plVar11;
                                                    uVar10 = *puVar12;
                                                    uVar1 = *(undefined4 *)(puVar12 + 1);
                                                    if (*(ushort *)(lVar17 + 0x12e) != 0) {
                                                      uVar18 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar17 + 0xb0) +
                                                             (ulonglong)uVar18 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar17 + 0xb0) + 8
                                                                              + (ulonglong)uVar18 *
                                                                                0x10) + 0x4d) * 0x10
                                                                     + 0x138 + lVar17);
                                                          goto code_r0x0001807979f9;
                                                        }
                                                        uVar18 = uVar18 + 1;
                                                      } while (uVar18 < *(ushort *)(lVar17 + 0x12e))
                                                      ;
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x4d);
code_r0x0001807979f9:
                                                    uStack_a8 = uVar10;
                                                    uStack_a0 = uVar1;
                                                    (*(code *)*puVar12)(plVar11,&uStack_a8,
                                                                        puVar12[1]);
                                                    if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                      lVar17 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar17 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar17,uVar10)
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar16,*(undefined8 *)
                                                                       (param_1 + 0xe8),0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar16,*(undefined8 *)
                                                                       (param_1 + 0xe0),0);
                                                    uVar10 = L2ToolTip__NovoTexto__180797e90
                                                                       (uVar8,0);
                                                    *(undefined8 *)(param_1 + 0xf0) = uVar10;
                                                    func_0x000180314690(param_1 + 0xf0,uVar10);
                                                    if (*(longlong *)(param_1 + 0xf0) != 0) {
                                                      lVar17 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xf0),0);
                                                  uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar17 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar17,uVar10)
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar15,lVar16,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar15,*(undefined8 *)
                                                                       (param_1 + 0xf0),0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,lVar14,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,lVar15,0);
                                                    uVar8 = L2ToolTip__NovoTexto__180797e90(uVar8,0)
                                                    ;
                                                    *(undefined8 *)(param_1 + 0xf8) = uVar8;
                                                    func_0x000180314690(param_1 + 0xf8,uVar8);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xd0),lVar9
                                                                 ,0);
                                                      if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0xd0),
                                                                   *(undefined8 *)(param_1 + 0xf8),0
                                                                  );
                                                        if (*(longlong *)(param_1 + 0x90) != 0) {
                                                          lVar9 = func_0x0001825d76d0(*(longlong *)
                                                                                       (param_1 +
                                                                                       0x90),0);
                                                          if (((*(longlong *)(param_1 + 0x90) != 0)
                                                              && (lVar14 = func_0x0001825d76d0(*(
                                                  longlong *)(param_1 + 0x90),0), lVar14 != 0)) &&
                                                  (iVar7 = 
                                                  UnityEngine_UIElements_VisualElement__IndexOf
                                                            (lVar14,*(undefined8 *)(param_1 + 0x90),
                                                             0), lVar9 != 0)) {
                                                    UnityEngine_UIElements_VisualElement__Insert
                                                              (lVar9,iVar7 + 1,
                                                               *(undefined8 *)(param_1 + 0xd0),0);
                                                    return;
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
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

