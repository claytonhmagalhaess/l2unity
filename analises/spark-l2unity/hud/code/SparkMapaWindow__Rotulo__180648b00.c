// SparkMapaWindow__Rotulo__180648b00 @ 0x180648b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMapaWindow__Rotulo__180648b00
                   (undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  ushort uVar17;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  if (cRam00000001834b3d18 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3d18 = '\x01';
  }
  lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
  if (lVar9 != 0) {
    lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
    uVar11 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar10 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
      puVar13 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x43340000,0);
      if (plVar12 != (longlong *)0x0) {
        lVar10 = *plVar12;
        uVar11 = *puVar13;
        uVar1 = *(undefined4 *)(puVar13 + 1);
        if (*(ushort *)(lVar10 + 0x12e) != 0) {
          uVar17 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar13 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10) +
                         0xad) * 0x10 + 0x138 + lVar10);
              goto code_r0x000180648c89;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(ushort *)(lVar10 + 0x12e));
        }
        puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180648c89:
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
        uStack_c8 = uVar11;
        (*(code *)*puVar13)(plVar12,&uStack_c8,puVar13[1]);
        lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
        uVar11 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
        if (lVar10 != 0) {
          FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
          UnityEngine_UIElements_VisualElement__set_pickingMode(lVar9,1,0);
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          uStack_c8 = 0;
          uStack_c0 = 0x3f66666600000000;
          lVar10 = SparkMapaWindow__Letra__18063bad0(param_1,param_2,&uStack_c8,0);
          if (lVar10 != 0) {
            lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            uVar11 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
            if (lVar14 != 0) {
              FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar14,uVar11);
              plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
              plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
              plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
              puVar13 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0,0);
              if (plVar16 != (longlong *)0x0) {
                lVar14 = *plVar16;
                uVar11 = *puVar13;
                uVar1 = *(undefined4 *)(puVar13 + 1);
                if (*(ushort *)(lVar14 + 0x12e) != 0) {
                  uVar17 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar13 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                          (ulonglong)uVar17 * 0x10) + 0x73) * 0x10 + 0x138 + lVar14)
                      ;
                      goto code_r0x000180648e07;
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                }
                puVar13 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180648e07:
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                uStack_c8 = uVar11;
                (*(code *)*puVar13)(plVar16,&uStack_c8,puVar13[1]);
                if (plVar15 != (longlong *)0x0) {
                  lVar14 = *plVar15;
                  if (*(ushort *)(lVar14 + 0x12e) != 0) {
                    uVar17 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar13 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                            (ulonglong)uVar17 * 0x10) + 0x69) * 0x10 + 0x138 +
                                  lVar14);
                        goto code_r0x000180648e79;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                  }
                  puVar13 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x000180648e79:
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                  uStack_c8 = uVar11;
                  (*(code *)*puVar13)(plVar15,&uStack_c8,puVar13[1]);
                  if (plVar12 != (longlong *)0x0) {
                    lVar14 = *plVar12;
                    if (*(ushort *)(lVar14 + 0x12e) != 0) {
                      uVar17 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10)
                            == TI_UnityEngine.UIElements.IStyle) {
                          puVar13 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                              (ulonglong)uVar17 * 0x10) + 0x47) * 0x10 + 0x138 +
                                    lVar14);
                          goto code_r0x000180648ee9;
                        }
                        uVar17 = uVar17 + 1;
                      } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                    }
                    puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180648ee9:
                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                    uStack_c8 = uVar11;
                    (*(code *)*puVar13)(plVar12,&uStack_c8,puVar13[1]);
                    plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                    uStack_c8 = 0;
                    uStack_c0 = 0x3f80000000000000;
                    puVar13 = (undefined8 *)
                              UnityEngine_UIElements_StyleColor__op_Implicit
                                        (&uStack_88,&uStack_c8,0);
                    if (plVar12 != (longlong *)0x0) {
                      lVar14 = *plVar12;
                      uVar11 = *puVar13;
                      uVar4 = puVar13[1];
                      uVar1 = *(undefined4 *)(puVar13 + 2);
                      if (*(ushort *)(lVar14 + 0x12e) != 0) {
                        uVar17 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar13 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                (ulonglong)uVar17 * 0x10) + 0xa3) * 0x10 + 0x138 +
                                      lVar14);
                            goto code_r0x000180648f89;
                          }
                          uVar17 = uVar17 + 1;
                        } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                      }
                      puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0xa3);
code_r0x000180648f89:
                      uStack_c8 = uVar11;
                      uStack_c0 = uVar4;
                      uStack_b8 = uVar1;
                      (*(code *)*puVar13)(plVar12,&uStack_c8,puVar13[1]);
                      lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                      uVar11 = func_0x000182601c10();
                      if (lVar14 != 0) {
                        FUN_180005060(0xa5,TI_UnityEngine.UIElements.IStyle,lVar14,uVar11);
                        plVar12 = (longlong *)
                                  UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                        if (DAT_1834b2f44 == '\0') {
                          FUN_180315380(TI_UnityEngine.Vector2);
                          DAT_1834b2f44 = '\x01';
                        }
                        uStack_a0 = 0x41200000;
                        uStack_9c = 0;
                        uVar1 = uStack_9c;
                        uStack_98 = 0;
                        uVar7 = uStack_98;
                        uStack_94 = 0;
                        uVar8 = uStack_94;
                        uStack_90 = 0x3f800000;
                        uStack_88 = **(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8);
                        uStack_a8 = **(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8);
                        uStack_80 = 0x41200000;
                        uStack_7c = 0;
                        uStack_78 = 0;
                        uStack_74 = 0;
                        uStack_70 = 0x3f800000;
                        puVar13 = (undefined8 *)
                                  UnityEngine_UIElements_StyleTextShadow__op_Implicit
                                            (&uStack_c8,&uStack_88,0);
                        if (plVar12 != (longlong *)0x0) {
                          lVar14 = *plVar12;
                          uVar11 = *puVar13;
                          uVar4 = puVar13[1];
                          uVar5 = puVar13[2];
                          uVar6 = puVar13[3];
                          if (*(ushort *)(lVar14 + 0x12e) != 0) {
                            uVar17 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar13 = (undefined8 *)
                                          ((longlong)
                                           (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                    (ulonglong)uVar17 * 0x10) + 0x71) * 0x10 + 0x138
                                          + lVar14);
                                goto code_r0x0001806490c9;
                              }
                              uVar17 = uVar17 + 1;
                            } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                          }
                          puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x71);
code_r0x0001806490c9:
                          uStack_80 = (undefined4)uVar4;
                          uStack_7c = (undefined4)((ulonglong)uVar4 >> 0x20);
                          uStack_78 = (undefined4)uVar5;
                          uStack_74 = (undefined4)((ulonglong)uVar5 >> 0x20);
                          uStack_70 = (undefined4)uVar6;
                          uStack_6c = (undefined4)((ulonglong)uVar6 >> 0x20);
                          uStack_88 = uVar11;
                          (*(code *)*puVar13)(plVar12,&uStack_88,puVar13[1]);
                          UnityEngine_UIElements_VisualElement__Add(lVar9,lVar10,0);
                          uStack_c8 = *param_3;
                          uStack_c0 = param_3[1];
                          lVar10 = SparkMapaWindow__Letra__18063bad0(param_1,param_2,&uStack_c8,0);
                          if (lVar10 != 0) {
                            plVar12 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                            uStack_c8 = 0;
                            uStack_c0 = 0x3f80000000000000;
                            puVar13 = (undefined8 *)
                                      UnityEngine_UIElements_StyleColor__op_Implicit
                                                (&uStack_88,&uStack_c8,0);
                            if (plVar12 != (longlong *)0x0) {
                              lVar14 = *plVar12;
                              uVar11 = *puVar13;
                              uVar4 = puVar13[1];
                              uVar2 = *(undefined4 *)(puVar13 + 2);
                              if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                uVar17 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar13 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                        (ulonglong)uVar17 * 0x10) + 0xa3) * 0x10 +
                                               0x138 + lVar14);
                                    goto code_r0x000180649199;
                                  }
                                  uVar17 = uVar17 + 1;
                                } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                              }
                              puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0xa3);
code_r0x000180649199:
                              uStack_c8 = uVar11;
                              uStack_c0 = uVar4;
                              uStack_b8 = uVar2;
                              (*(code *)*puVar13)(plVar12,&uStack_c8,puVar13[1]);
                              lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                              uVar11 = func_0x000182601c10();
                              if (lVar14 != 0) {
                                FUN_180005060(0xa5,TI_UnityEngine.UIElements.IStyle,lVar14,uVar11);
                                plVar12 = (longlong *)
                                          UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                                if (DAT_1834b2f44 == '\0') {
                                  FUN_180315380(TI_UnityEngine.Vector2);
                                  DAT_1834b2f44 = '\x01';
                                }
                                uStack_a8 = **(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8);
                                uStack_a0 = 0x40800000;
                                uStack_90 = 0x3f800000;
                                uStack_9c = uVar1;
                                uStack_98 = uVar7;
                                uStack_94 = uVar8;
                                puVar13 = (undefined8 *)
                                          UnityEngine_UIElements_StyleTextShadow__op_Implicit
                                                    (&uStack_88,&uStack_a8,0);
                                if (plVar12 != (longlong *)0x0) {
                                  lVar14 = *plVar12;
                                  uVar11 = *puVar13;
                                  uVar4 = puVar13[1];
                                  uVar5 = puVar13[2];
                                  uVar6 = puVar13[3];
                                  if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                    uVar17 = 0;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar17 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar13 = (undefined8 *)
                                                  ((longlong)
                                                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                            (ulonglong)uVar17 * 0x10) + 0x71) * 0x10
                                                   + 0x138 + lVar14);
                                        goto code_r0x0001806492c9;
                                      }
                                      uVar17 = uVar17 + 1;
                                    } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                                  }
                                  puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x71)
                                  ;
code_r0x0001806492c9:
                                  uStack_a0 = (undefined4)uVar4;
                                  uStack_9c = (undefined4)((ulonglong)uVar4 >> 0x20);
                                  uStack_98 = (undefined4)uVar5;
                                  uStack_94 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                  uStack_90 = (undefined4)uVar6;
                                  uStack_8c = (undefined4)((ulonglong)uVar6 >> 0x20);
                                  uStack_a8 = uVar11;
                                  (*(code *)*puVar13)(plVar12,&uStack_a8,puVar13[1]);
                                  UnityEngine_UIElements_VisualElement__Add(lVar9,lVar10,0);
                                  return lVar9;
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
  pcVar3 = (code *)swi(3);
  lVar9 = (*pcVar3)();
  return lVar9;
}

