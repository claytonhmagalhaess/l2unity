// SparkEstilo__Texto__180722af0 @ 0x180722af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Texto__180722af0
                   (longlong param_1,undefined8 param_2,char *param_3,char param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  ushort uVar16;
  undefined4 uVar17;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (DAT_1834b41f3 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.GetValueOrDefault);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.get_HasValue);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.TextOverflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
    FUN_180315380(LIT_"''");
    DAT_1834b41f3 = '\x01';
  }
  lVar14 = LIT_"''";
  if (param_1 != 0) {
    lVar14 = param_1;
  }
  lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
  UnityEngine_UIElements_Label___ctor(lVar8,lVar14,0);
  if (lVar8 != 0) {
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b41e9 == '\0') {
      FUN_180315380(TI_UnityEngine.Object);
      FUN_180315380(MR_SparkArte.Load<UnityEngine.Font>);
      FUN_180315380(TI_SparkArte);
      FUN_180315380(TI_SparkEstilo);
      FUN_180315380(LIT_"'Data/UI/Assets/Font/tahoma'");
      DAT_1834b41e9 = '\x01';
    }
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar15 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xd0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = UnityEngine_Object__op_Inequality(uVar15,0,0);
    if (cVar7 == '\0') {
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar15 = FUN_180a90ae0(LIT_"'Data/UI/Assets/Font/tahoma'",MR_SparkArte.Load<UnityEngine.Font>);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xd0) = uVar15;
      func_0x000180314690(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xd0,uVar15);
    }
    else {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uVar15 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xd0);
    }
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    UnityEngine_UIElements_StyleFontDefinition___ctor(&uStack_68,uVar15,0);
    uVar3 = uStack_58;
    uVar2 = uStack_60;
    uVar15 = uStack_68;
    if (plVar9 != (longlong *)0x0) {
      lVar14 = *plVar9;
      if (*(ushort *)(lVar14 + 0x12e) != 0) {
        uVar16 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) + 0x87
                       ) * 0x10 + 0x138 + lVar14);
            goto LAB_180722dc9;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x87);
LAB_180722dc9:
      uStack_88 = (undefined4)uVar15;
      uStack_84 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uStack_80 = (undefined4)uVar2;
      uStack_7c = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_78 = (undefined4)uVar3;
      uStack_74 = (undefined4)((ulonglong)uVar3 >> 0x20);
      (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar9 != (longlong *)0x0) {
        lVar14 = *plVar9;
        uVar15 = *puVar10;
        uVar17 = *(undefined4 *)(puVar10 + 1);
        if (*(ushort *)(lVar14 + 0x12e) != 0) {
          uVar16 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) +
                         0x41) * 0x10 + 0x138 + lVar14);
              goto LAB_180722e57;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x41);
LAB_180722e57:
        uStack_a8 = (undefined4)uVar15;
        uStack_a4 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uStack_a0 = uVar17;
        (*(code *)*puVar10)(plVar9,&uStack_a8,puVar10[1]);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
        uVar17 = *(undefined4 *)(param_3 + 0x10);
        uStack_a8._1_3_ = (undefined3)*(undefined4 *)(param_3 + 1);
        uStack_a4._1_3_ = (undefined3)*(undefined4 *)(param_3 + 5);
        uStack_a4 = CONCAT31(uStack_a4._1_3_,(char)((uint)*(undefined4 *)(param_3 + 1) >> 0x18));
        uStack_a0._1_3_ = (undefined3)*(undefined4 *)(param_3 + 9);
        uStack_a0 = CONCAT31(uStack_a0._1_3_,(char)((uint)*(undefined4 *)(param_3 + 5) >> 0x18));
        uStack_9c._1_3_ = (undefined3)*(undefined4 *)(param_3 + 0xd);
        uStack_9c = CONCAT31(uStack_9c._1_3_,(char)((uint)*(undefined4 *)(param_3 + 9) >> 0x18));
        uStack_98 = uVar17;
        if (*param_3 == '\0') {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar14 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_a4 = *(undefined4 *)(lVar14 + 0x40);
          uStack_a0 = *(undefined4 *)(lVar14 + 0x44);
          uStack_9c = *(undefined4 *)(lVar14 + 0x48);
          uVar17 = *(undefined4 *)(lVar14 + 0x4c);
        }
        uStack_a8 = uStack_a4;
        uStack_a4 = uStack_a0;
        uStack_a0 = uStack_9c;
        uStack_9c = uVar17;
        puVar10 = (undefined8 *)
                  UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_88,&uStack_a8,0);
        if (plVar9 != (longlong *)0x0) {
          lVar14 = *plVar9;
          uVar15 = *puVar10;
          uVar2 = puVar10[1];
          uVar17 = *(undefined4 *)(puVar10 + 2);
          if (*(ushort *)(lVar14 + 0x12e) != 0) {
            uVar16 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) +
                           0x2f) * 0x10 + 0x138 + lVar14);
                goto LAB_180722f89;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x2f);
LAB_180722f89:
          uStack_a8 = (undefined4)uVar15;
          uStack_a4 = (undefined4)((ulonglong)uVar15 >> 0x20);
          uStack_a0 = (undefined4)uVar2;
          uStack_9c = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_98 = uVar17;
          (*(code *)*puVar10)(plVar9,&uStack_a8,puVar10[1]);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar13 != (longlong *)0x0) {
            lVar14 = *plVar13;
            uVar15 = *puVar10;
            uVar17 = *(undefined4 *)(puVar10 + 1);
            if (*(ushort *)(lVar14 + 0x12e) != 0) {
              uVar16 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10)
                             + 0x4b) * 0x10 + 0x138 + lVar14);
                  goto LAB_180723047;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x4b);
LAB_180723047:
            uStack_a8 = (undefined4)uVar15;
            uVar5 = uStack_a8;
            uStack_a4 = (undefined4)((ulonglong)uVar15 >> 0x20);
            uVar6 = uStack_a4;
            uStack_a0 = uVar17;
            (*(code *)*puVar10)(plVar13,&uStack_a8,puVar10[1]);
            if (plVar12 != (longlong *)0x0) {
              lVar14 = *plVar12;
              if (*(ushort *)(lVar14 + 0x12e) != 0) {
                uVar16 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar10 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10
                                        ) + 0x51) * 0x10 + 0x138 + lVar14);
                    goto LAB_1807230b9;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
              }
              puVar10 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x51);
LAB_1807230b9:
              uStack_a8 = uVar5;
              uStack_a4 = uVar6;
              uStack_a0 = uVar17;
              (*(code *)*puVar10)(plVar12,&uStack_a8,puVar10[1]);
              if (plVar11 != (longlong *)0x0) {
                lVar14 = *plVar11;
                if (*(ushort *)(lVar14 + 0x12e) != 0) {
                  uVar16 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                          (ulonglong)uVar16 * 0x10) + 0x4f) * 0x10 + 0x138 + lVar14)
                      ;
                      goto LAB_180723129;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4f);
LAB_180723129:
                uStack_a8 = uVar5;
                uStack_a4 = uVar6;
                uStack_a0 = uVar17;
                (*(code *)*puVar10)(plVar11,&uStack_a8,puVar10[1]);
                if (plVar9 != (longlong *)0x0) {
                  lVar14 = *plVar9;
                  if (*(ushort *)(lVar14 + 0x12e) != 0) {
                    uVar16 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar10 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                            (ulonglong)uVar16 * 0x10) + 0x4d) * 0x10 + 0x138 +
                                  lVar14);
                        goto LAB_180723199;
                      }
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                  }
                  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
LAB_180723199:
                  uStack_a8 = uVar5;
                  uStack_a4 = uVar6;
                  uStack_a0 = uVar17;
                  (*(code *)*puVar10)(plVar9,&uStack_a8,puVar10[1]);
                  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                  if (plVar13 != (longlong *)0x0) {
                    lVar14 = *plVar13;
                    uVar15 = *puVar10;
                    uVar17 = *(undefined4 *)(puVar10 + 1);
                    if (*(ushort *)(lVar14 + 0x12e) != 0) {
                      uVar16 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10)
                            == TI_UnityEngine.UIElements.IStyle) {
                          puVar10 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                              (ulonglong)uVar16 * 0x10) + 0x5f) * 0x10 + 0x138 +
                                    lVar14);
                          goto LAB_180723257;
                        }
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                    }
                    puVar10 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x5f);
LAB_180723257:
                    uStack_a8 = (undefined4)uVar15;
                    uVar5 = uStack_a8;
                    uStack_a4 = (undefined4)((ulonglong)uVar15 >> 0x20);
                    uVar6 = uStack_a4;
                    uStack_a0 = uVar17;
                    (*(code *)*puVar10)(plVar13,&uStack_a8,puVar10[1]);
                    if (plVar12 != (longlong *)0x0) {
                      lVar14 = *plVar12;
                      if (*(ushort *)(lVar14 + 0x12e) != 0) {
                        uVar16 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar10 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                (ulonglong)uVar16 * 0x10) + 0x65) * 0x10 + 0x138 +
                                      lVar14);
                            goto LAB_1807232c9;
                          }
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                      }
                      puVar10 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x65);
LAB_1807232c9:
                      uStack_a8 = uVar5;
                      uStack_a4 = uVar6;
                      uStack_a0 = uVar17;
                      (*(code *)*puVar10)(plVar12,&uStack_a8,puVar10[1]);
                      if (plVar11 != (longlong *)0x0) {
                        lVar14 = *plVar11;
                        if (*(ushort *)(lVar14 + 0x12e) != 0) {
                          uVar16 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar10 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                  (ulonglong)uVar16 * 0x10) + 99) * 0x10 + 0x138 +
                                        lVar14);
                              goto LAB_180723339;
                            }
                            uVar16 = uVar16 + 1;
                          } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                        }
                        puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,99);
LAB_180723339:
                        uStack_a8 = uVar5;
                        uStack_a4 = uVar6;
                        uStack_a0 = uVar17;
                        (*(code *)*puVar10)(plVar11,&uStack_a8,puVar10[1]);
                        if (plVar9 != (longlong *)0x0) {
                          lVar14 = *plVar9;
                          if (*(ushort *)(lVar14 + 0x12e) != 0) {
                            uVar16 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar10 = (undefined8 *)
                                          ((longlong)
                                           (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                    (ulonglong)uVar16 * 0x10) + 0x61) * 0x10 + 0x138
                                          + lVar14);
                                goto LAB_1807233a9;
                              }
                              uVar16 = uVar16 + 1;
                            } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                          }
                          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x61);
LAB_1807233a9:
                          uStack_a8 = uVar5;
                          uStack_a4 = uVar6;
                          uStack_a0 = uVar17;
                          (*(code *)*puVar10)(plVar9,&uStack_a8,puVar10[1]);
                          if (param_4 != '\0') {
                            lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                            uVar15 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
                            if (lVar14 == 0) goto LAB_180723784;
                            FUN_180005060(0x89,TI_UnityEngine.UIElements.IStyle,lVar14,uVar15);
                          }
                          lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                          uVar15 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                          if (lVar14 != 0) {
                            FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar14,uVar15);
                            plVar9 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                            uVar15 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.TextOverflow>.op_Implicit);
                            if (plVar9 != (longlong *)0x0) {
                              lVar14 = *plVar9;
                              if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                uVar16 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar10 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                        (ulonglong)uVar16 * 0x10) + 0x6f) * 0x10 +
                                               0x138 + lVar14);
                                    goto LAB_1807234b9;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                              }
                              puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x6f);
LAB_1807234b9:
                              (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
                              lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                              uVar15 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                              if (lVar14 != 0) {
                                FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar14,uVar15);
                                plVar9 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                                uStack_84 = 0x3f800000;
                                uStack_80 = 0;
                                uStack_88 = 0x3f800000;
                                uStack_7c = 0;
                                uStack_78 = 0;
                                uStack_74 = 0;
                                uStack_70 = 0x3f4ccccd;
                                puVar10 = (undefined8 *)
                                          UnityEngine_UIElements_StyleTextShadow__op_Implicit
                                                    (&uStack_a8,&uStack_88,0);
                                if (plVar9 != (longlong *)0x0) {
                                  lVar14 = *plVar9;
                                  uVar15 = *puVar10;
                                  uVar2 = puVar10[1];
                                  uVar3 = puVar10[2];
                                  uVar4 = puVar10[3];
                                  if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                    uVar16 = 0;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar10 = (undefined8 *)
                                                  ((longlong)
                                                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                            (ulonglong)uVar16 * 0x10) + 0x71) * 0x10
                                                   + 0x138 + lVar14);
                                        goto LAB_1807235a9;
                                      }
                                      uVar16 = uVar16 + 1;
                                    } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                                  }
                                  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x71);
LAB_1807235a9:
                                  uStack_88 = (undefined4)uVar15;
                                  uStack_84 = (undefined4)((ulonglong)uVar15 >> 0x20);
                                  uStack_80 = (undefined4)uVar2;
                                  uStack_7c = (undefined4)((ulonglong)uVar2 >> 0x20);
                                  uStack_78 = (undefined4)uVar3;
                                  uStack_74 = (undefined4)((ulonglong)uVar3 >> 0x20);
                                  uStack_70 = (undefined4)uVar4;
                                  uStack_6c = (undefined4)((ulonglong)uVar4 >> 0x20);
                                  (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                                  UnityEngine_UIElements_VisualElement__set_pickingMode(lVar8,1,0);
                                  return lVar8;
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
LAB_180723784:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        lVar14 = (*pcVar1)();
        return lVar14;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar14 = (*pcVar1)();
  return lVar14;
}

