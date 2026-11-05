// SparkMapaWindow__Letra__18063bad0 @ 0x18063bad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMapaWindow__Letra__18063bad0
                   (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ushort uVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (cRam00000001834b3d19 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
    cRam00000001834b3d19 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
  UnityEngine_UIElements_Label___ctor(lVar7,param_1,0);
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar8 = SparkMapaWindow__get_FonteMapa(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if (cVar6 == '\0') {
    if (lVar7 == 0) goto code_r0x00018063c4ee;
  }
  else {
    if (lVar7 == 0) {
code_r0x00018063c4f4:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      lVar7 = (*pcVar3)();
      return lVar7;
    }
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = SparkMapaWindow__get_FonteMapa();
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    UnityEngine_UIElements_StyleFontDefinition___ctor(&uStack_68,uVar8,0);
    uVar5 = uStack_58;
    uVar4 = uStack_60;
    uVar8 = uStack_68;
    if (plVar9 == (longlong *)0x0) goto code_r0x00018063c4f4;
    lVar2 = *plVar9;
    if (*(ushort *)(lVar2 + 0x12e) != 0) {
      uVar14 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x87) *
                     0x10 + 0x138 + lVar2);
          goto code_r0x00018063bc75;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x87);
code_r0x00018063bc75:
    uStack_88 = uVar8;
    uStack_80 = uVar4;
    uStack_78 = uVar5;
    (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
  }
  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
  if (plVar9 != (longlong *)0x0) {
    lVar2 = *plVar9;
    uVar8 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar2 + 0x12e) != 0) {
      uVar14 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x41) *
                     0x10 + 0x138 + lVar2);
          goto code_r0x00018063bd39;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x00018063bd39:
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    uStack_88 = uVar8;
    (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
    uStack_88 = *param_3;
    uStack_80 = param_3[1];
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_68,&uStack_88,0);
    if (plVar9 != (longlong *)0x0) {
      lVar2 = *plVar9;
      uVar8 = *puVar10;
      uVar4 = puVar10[1];
      uVar1 = *(undefined4 *)(puVar10 + 2);
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x2f)
                       * 0x10 + 0x138 + lVar2);
            goto code_r0x00018063bdd9;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018063bdd9:
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
      uStack_88 = uVar8;
      uStack_80 = uVar4;
      (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
      if (plVar9 != (longlong *)0x0) {
        lVar2 = *plVar9;
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar14 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                         0x89) * 0x10 + 0x138 + lVar2);
              goto code_r0x00018063be69;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x89);
code_r0x00018063be69:
        (*(code *)*puVar10)(plVar9,uVar8,puVar10[1]);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
        if (plVar9 != (longlong *)0x0) {
          lVar2 = *plVar9;
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            uVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                           0xab) * 0x10 + 0x138 + lVar2);
                goto code_r0x00018063bee9;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xab);
code_r0x00018063bee9:
          (*(code *)*puVar10)(plVar9,uVar8,puVar10[1]);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar13 != (longlong *)0x0) {
            lVar2 = *plVar13;
            uVar8 = *puVar10;
            uVar1 = *(undefined4 *)(puVar10 + 1);
            if (*(ushort *)(lVar2 + 0x12e) != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                             0x4b) * 0x10 + 0x138 + lVar2);
                  goto code_r0x00018063bf97;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018063bf97:
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
            uStack_88 = uVar8;
            (*(code *)*puVar10)(plVar13,&uStack_88,puVar10[1]);
            if (plVar12 != (longlong *)0x0) {
              lVar2 = *plVar12;
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar14 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar10 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10)
                               + 0x51) * 0x10 + 0x138 + lVar2);
                    goto code_r0x00018063c009;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar10 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018063c009:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
              uStack_88 = uVar8;
              (*(code *)*puVar10)(plVar12,&uStack_88,puVar10[1]);
              if (plVar11 != (longlong *)0x0) {
                lVar2 = *plVar11;
                if (*(ushort *)(lVar2 + 0x12e) != 0) {
                  uVar14 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                          (ulonglong)uVar14 * 0x10) + 0x4f) * 0x10 + 0x138 + lVar2);
                      goto code_r0x00018063c079;
                    }
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018063c079:
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                uStack_88 = uVar8;
                (*(code *)*puVar10)(plVar11,&uStack_88,puVar10[1]);
                if (plVar9 != (longlong *)0x0) {
                  lVar2 = *plVar9;
                  if (*(ushort *)(lVar2 + 0x12e) != 0) {
                    uVar14 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar10 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                            (ulonglong)uVar14 * 0x10) + 0x4d) * 0x10 + 0x138 + lVar2
                                  );
                        goto code_r0x00018063c0e9;
                      }
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                  }
                  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018063c0e9:
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                  uStack_88 = uVar8;
                  (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                  if (plVar13 != (longlong *)0x0) {
                    lVar2 = *plVar13;
                    uVar8 = *puVar10;
                    uVar1 = *(undefined4 *)(puVar10 + 1);
                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                      uVar14 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar10 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                              (ulonglong)uVar14 * 0x10) + 0x5f) * 0x10 + 0x138 +
                                    lVar2);
                          goto code_r0x00018063c1a7;
                        }
                        uVar14 = uVar14 + 1;
                      } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                    }
                    puVar10 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x00018063c1a7:
                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                    uStack_88 = uVar8;
                    (*(code *)*puVar10)(plVar13,&uStack_88,puVar10[1]);
                    if (plVar12 != (longlong *)0x0) {
                      lVar2 = *plVar12;
                      if (*(ushort *)(lVar2 + 0x12e) != 0) {
                        uVar14 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar10 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                                (ulonglong)uVar14 * 0x10) + 0x65) * 0x10 + 0x138 +
                                      lVar2);
                            goto code_r0x00018063c219;
                          }
                          uVar14 = uVar14 + 1;
                        } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                      }
                      puVar10 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x00018063c219:
                      uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                      uStack_88 = uVar8;
                      (*(code *)*puVar10)(plVar12,&uStack_88,puVar10[1]);
                      if (plVar11 != (longlong *)0x0) {
                        lVar2 = *plVar11;
                        if (*(ushort *)(lVar2 + 0x12e) != 0) {
                          uVar14 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar10 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                                  (ulonglong)uVar14 * 0x10) + 99) * 0x10 + 0x138 +
                                        lVar2);
                              goto code_r0x00018063c289;
                            }
                            uVar14 = uVar14 + 1;
                          } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                        }
                        puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,99);
code_r0x00018063c289:
                        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                        uStack_88 = uVar8;
                        (*(code *)*puVar10)(plVar11,&uStack_88,puVar10[1]);
                        if (plVar9 != (longlong *)0x0) {
                          lVar2 = *plVar9;
                          if (*(ushort *)(lVar2 + 0x12e) != 0) {
                            uVar14 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar10 = (undefined8 *)
                                          ((longlong)
                                           (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                                    (ulonglong)uVar14 * 0x10) + 0x61) * 0x10 + 0x138
                                          + lVar2);
                                goto code_r0x00018063c2f9;
                              }
                              uVar14 = uVar14 + 1;
                            } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                          }
                          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x00018063c2f9:
                          uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                          uStack_88 = uVar8;
                          (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                          UnityEngine_UIElements_VisualElement__set_pickingMode(lVar7,1,0);
                          return lVar7;
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
code_r0x00018063c4ee:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  lVar7 = (*pcVar3)();
  return lVar7;
}

