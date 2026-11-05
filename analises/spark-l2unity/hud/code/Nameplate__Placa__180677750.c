// Nameplate__Placa__180677750 @ 0x180677750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong Nameplate__Placa__180677750(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ushort uVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [64];
  
  if (cRam00000001834b3e03 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3e03 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
  func_0x00018270a450(lVar4,0);
  if (lVar4 != 0) {
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar4,1,0);
    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar5 != (longlong *)0x0) {
      lVar7 = *plVar5;
      uVar8 = *puVar6;
      uVar1 = *(undefined4 *)(puVar6 + 1);
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x55)
                      * 0x10 + 0x138 + lVar7);
            goto code_r0x000180677889;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x55);
code_r0x000180677889:
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
      uStack_78 = uVar8;
      (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      uVar8 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
      if (lVar7 != 0) {
        FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
        plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x41400000,0);
        if (plVar5 != (longlong *)0x0) {
          lVar7 = *plVar5;
          uVar8 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                          0x41) * 0x10 + 0x138 + lVar7);
                goto code_r0x000180677959;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x000180677959:
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
          uStack_78 = uVar8;
          (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
          if (lVar7 != 0) {
            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
            plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            uStack_78 = 0;
            uStack_70 = 0x3f0ccccd00000000;
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
            if (plVar5 != (longlong *)0x0) {
              lVar7 = *plVar5;
              uVar8 = *puVar6;
              uVar3 = puVar6[1];
              uVar1 = *(undefined4 *)(puVar6 + 2);
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                uVar10 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar6 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10)
                              + 9) * 0x10 + 0x138 + lVar7);
                    goto code_r0x000180677a39;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180677a39:
              uStack_78 = uVar8;
              uStack_70 = uVar3;
              uStack_68 = uVar1;
              (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
              plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
              puVar6 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x40800000,0);
              if (plVar9 != (longlong *)0x0) {
                lVar7 = *plVar9;
                uVar8 = *puVar6;
                uVar1 = *(undefined4 *)(puVar6 + 1);
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar10 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar6 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10
                                         ) + 99) * 0x10 + 0x138 + lVar7);
                      goto code_r0x000180677ad7;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,99);
code_r0x000180677ad7:
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                uStack_78 = uVar8;
                (*(code *)*puVar6)(plVar9,&uStack_78,puVar6[1]);
                if (plVar5 != (longlong *)0x0) {
                  lVar7 = *plVar5;
                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                    uVar10 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar6 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                           (ulonglong)uVar10 * 0x10) + 0x61) * 0x10 + 0x138 + lVar7)
                        ;
                        goto code_r0x000180677b49;
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                  }
                  puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180677b49:
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                  uStack_78 = uVar8;
                  (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
                  plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                  puVar6 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x3f800000,0);
                  if (plVar9 != (longlong *)0x0) {
                    lVar7 = *plVar9;
                    uVar8 = *puVar6;
                    uVar1 = *(undefined4 *)(puVar6 + 1);
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      uVar10 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar6 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                             (ulonglong)uVar10 * 0x10) + 0x5f) * 0x10 + 0x138 +
                                   lVar7);
                          goto code_r0x000180677bf7;
                        }
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar6 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x000180677bf7:
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                    uStack_78 = uVar8;
                    (*(code *)*puVar6)(plVar9,&uStack_78,puVar6[1]);
                    if (plVar5 != (longlong *)0x0) {
                      lVar7 = *plVar5;
                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                        uVar10 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar6 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                               (ulonglong)uVar10 * 0x10) + 0x65) * 0x10 + 0x138 +
                                     lVar7);
                            goto code_r0x000180677c69;
                          }
                          uVar10 = uVar10 + 1;
                        } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                      }
                      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x000180677c69:
                      uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                      uStack_78 = uVar8;
                      (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
                      plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                      puVar6 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_78,0x40000000,0);
                      if (plVar5 != (longlong *)0x0) {
                        lVar7 = *plVar5;
                        uVar8 = *puVar6;
                        uVar1 = *(undefined4 *)(puVar6 + 1);
                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                          uVar10 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar6 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                 (ulonglong)uVar10 * 0x10) + 0x4b) * 0x10 + 0x138 +
                                       lVar7);
                              goto code_r0x000180677d09;
                            }
                            uVar10 = uVar10 + 1;
                          } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                        }
                        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180677d09:
                        uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                        uStack_78 = uVar8;
                        (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
                        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                        uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                        if (lVar7 != 0) {
                          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
                          return lVar4;
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
  lVar4 = (*pcVar2)();
  return lVar4;
}

