// L2ToolTip__NovoTexto__180797e90 @ 0x180797e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong L2ToolTip__NovoTexto__180797e90(void)

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
  longlong *plVar10;
  longlong *plVar11;
  ushort uVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if (cRam00000001834b446d == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    cRam00000001834b446d = '\x01';
  }
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
  func_0x00018270a450(lVar4,0);
  if (lVar4 != 0) {
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar4,1,0);
    UnityEngine_UIElements_TextElement__set_enableRichText(lVar4,1,0);
    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar5 != (longlong *)0x0) {
      lVar7 = *plVar5;
      uVar8 = *puVar6;
      uVar1 = *(undefined4 *)(puVar6 + 1);
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x41)
                      * 0x10 + 0x138 + lVar7);
            goto code_r0x000180797fc9;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x000180797fc9:
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
      uStack_88 = uVar8;
      (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
      plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      uStack_88 = 0x3f77f7f83f78f8f9;
      uStack_80 = 0x3f8000003f77f7f8;
      uStack_58 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      func_0x000181806950(&uStack_68,&uStack_88,0);
      uVar1 = uStack_58;
      uVar3 = uStack_60;
      uVar8 = uStack_68;
      if (plVar5 != (longlong *)0x0) {
        lVar7 = *plVar5;
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar12 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x2f
                        ) * 0x10 + 0x138 + lVar7);
              goto code_r0x000180798079;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180798079:
        uStack_88 = uVar8;
        uStack_80 = uVar3;
        uStack_78 = uVar1;
        (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar8 = func_0x000182601c10(0x3dcccccd,0);
        if (lVar7 != 0) {
          FUN_180005060(0xa5,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
          if (lVar7 != 0) {
            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
            plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar11 != (longlong *)0x0) {
              lVar7 = *plVar11;
              uVar8 = *puVar6;
              uVar1 = *(undefined4 *)(puVar6 + 1);
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                uVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar6 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10)
                              + 0x4b) * 0x10 + 0x138 + lVar7);
                    goto code_r0x0001807981a7;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar6 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001807981a7:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
              uStack_88 = uVar8;
              (*(code *)*puVar6)(plVar11,&uStack_88,puVar6[1]);
              if (plVar10 != (longlong *)0x0) {
                lVar7 = *plVar10;
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar6 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10
                                         ) + 0x51) * 0x10 + 0x138 + lVar7);
                      goto code_r0x000180798219;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180798219:
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                uStack_88 = uVar8;
                (*(code *)*puVar6)(plVar10,&uStack_88,puVar6[1]);
                if (plVar9 != (longlong *)0x0) {
                  lVar7 = *plVar9;
                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar6 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                           (ulonglong)uVar12 * 0x10) + 0x4f) * 0x10 + 0x138 + lVar7)
                        ;
                        goto code_r0x000180798289;
                      }
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                  }
                  puVar6 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x000180798289:
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                  uStack_88 = uVar8;
                  (*(code *)*puVar6)(plVar9,&uStack_88,puVar6[1]);
                  if (plVar5 != (longlong *)0x0) {
                    lVar7 = *plVar5;
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      uVar12 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar6 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                             (ulonglong)uVar12 * 0x10) + 0x4d) * 0x10 + 0x138 +
                                   lVar7);
                          goto code_r0x0001807982f9;
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001807982f9:
                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                    uStack_88 = uVar8;
                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                    if (plVar11 != (longlong *)0x0) {
                      lVar7 = *plVar11;
                      uVar8 = *puVar6;
                      uVar1 = *(undefined4 *)(puVar6 + 1);
                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                        uVar12 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar6 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                               (ulonglong)uVar12 * 0x10) + 0x5f) * 0x10 + 0x138 +
                                     lVar7);
                            goto code_r0x0001807983b7;
                          }
                          uVar12 = uVar12 + 1;
                        } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                      }
                      puVar6 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x0001807983b7:
                      uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                      uStack_88 = uVar8;
                      (*(code *)*puVar6)(plVar11,&uStack_88,puVar6[1]);
                      if (plVar10 != (longlong *)0x0) {
                        lVar7 = *plVar10;
                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                          uVar12 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar6 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                 (ulonglong)uVar12 * 0x10) + 0x65) * 0x10 + 0x138 +
                                       lVar7);
                              goto code_r0x000180798429;
                            }
                            uVar12 = uVar12 + 1;
                          } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                        }
                        puVar6 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x000180798429:
                        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                        uStack_88 = uVar8;
                        (*(code *)*puVar6)(plVar10,&uStack_88,puVar6[1]);
                        if (plVar9 != (longlong *)0x0) {
                          lVar7 = *plVar9;
                          if (*(ushort *)(lVar7 + 0x12e) != 0) {
                            uVar12 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar6 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                   (ulonglong)uVar12 * 0x10) + 99) * 0x10 + 0x138 +
                                         lVar7);
                                goto code_r0x000180798499;
                              }
                              uVar12 = uVar12 + 1;
                            } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                          }
                          puVar6 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,99);
code_r0x000180798499:
                          uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                          uStack_88 = uVar8;
                          (*(code *)*puVar6)(plVar9,&uStack_88,puVar6[1]);
                          if (plVar5 != (longlong *)0x0) {
                            lVar7 = *plVar5;
                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                              uVar12 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar6 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                     (ulonglong)uVar12 * 0x10) + 0x61) * 0x10 +
                                            0x138 + lVar7);
                                  goto code_r0x000180798509;
                                }
                                uVar12 = uVar12 + 1;
                              } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                            }
                            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180798509:
                            uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                            uStack_88 = uVar8;
                            (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
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
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar4 = (*pcVar2)();
  return lVar4;
}

