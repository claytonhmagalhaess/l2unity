// SparkHtml__Estilo__18073a000 @ 0x18073a000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__Estilo__18073a000(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ushort uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b425b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Font>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"'Data/UI/Assets/Font/tahoma'");
    cRam00000001834b425b = '\x01';
  }
  if (param_1 != 0) {
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = FUN_180a90ae0(LIT_"'Data/UI/Assets/Font/tahoma'",MR_SparkArte.Load<UnityEngine.Font>);
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    UnityEngine_UIElements_StyleFontDefinition___ctor(&uStack_58,uVar7,0);
    uVar5 = uStack_48;
    uVar4 = uStack_50;
    uVar7 = uStack_58;
    if (plVar6 != (longlong *)0x0) {
      lVar2 = *plVar6;
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar8 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x87)
                      * 0x10 + 0x138 + lVar2);
            goto code_r0x00018073a149;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x87);
code_r0x00018073a149:
      uStack_78 = uVar7;
      uStack_70 = uVar4;
      uStack_68 = uVar5;
      (*(code *)*puVar8)(plVar6,&uStack_78,puVar8[1]);
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      puVar8 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,0x41400000,0);
      if (plVar6 != (longlong *)0x0) {
        lVar2 = *plVar6;
        uVar7 = *puVar8;
        uVar1 = *(undefined4 *)(puVar8 + 1);
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x41
                        ) * 0x10 + 0x138 + lVar2);
              goto code_r0x00018073a1e9;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x00018073a1e9:
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
        uStack_98 = uVar7;
        (*(code *)*puVar8)(plVar6,&uStack_98,puVar8[1]);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
        if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
          func_0x000180315660(TI_SparkHtml);
        }
        uStack_98 = *(undefined8 *)(*(longlong *)(TI_SparkHtml + 0xb8) + 8);
        uStack_90 = *(undefined8 *)(*(longlong *)(TI_SparkHtml + 0xb8) + 0x10);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_78,&uStack_98,0);
        if (plVar6 != (longlong *)0x0) {
          lVar2 = *plVar6;
          uVar7 = *puVar8;
          uVar4 = puVar8[1];
          uVar1 = *(undefined4 *)(puVar8 + 2);
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                          0x2f) * 0x10 + 0x138 + lVar2);
                goto code_r0x00018073a2a9;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018073a2a9:
          uStack_98 = uVar7;
          uStack_90 = uVar4;
          uStack_88 = uVar1;
          (*(code *)*puVar8)(plVar6,&uStack_98,puVar8[1]);
          plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
          puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,0,0);
          if (plVar9 != (longlong *)0x0) {
            lVar2 = *plVar9;
            uVar7 = *puVar8;
            uVar1 = *(undefined4 *)(puVar8 + 1);
            if (*(ushort *)(lVar2 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar8 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0x4f) * 0x10 + 0x138 + lVar2);
                  goto code_r0x00018073a347;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018073a347:
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
            uStack_98 = uVar7;
            (*(code *)*puVar8)(plVar9,&uStack_98,puVar8[1]);
            if (plVar6 != (longlong *)0x0) {
              lVar2 = *plVar6;
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar10 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10)
                              + 0x4d) * 0x10 + 0x138 + lVar2);
                    goto code_r0x00018073a3b9;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018073a3b9:
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
              uStack_98 = uVar7;
              (*(code *)*puVar8)(plVar6,&uStack_98,puVar8[1]);
              plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
              puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,0,0)
              ;
              if (plVar9 != (longlong *)0x0) {
                lVar2 = *plVar9;
                uVar7 = *puVar8;
                uVar1 = *(undefined4 *)(puVar8 + 1);
                if (*(ushort *)(lVar2 + 0x12e) != 0) {
                  uVar10 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar8 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10
                                         ) + 0x4b) * 0x10 + 0x138 + lVar2);
                      goto code_r0x00018073a457;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                }
                puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018073a457:
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                uStack_98 = uVar7;
                (*(code *)*puVar8)(plVar9,&uStack_98,puVar8[1]);
                if (plVar6 != (longlong *)0x0) {
                  lVar2 = *plVar6;
                  if (*(ushort *)(lVar2 + 0x12e) != 0) {
                    uVar10 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar8 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                           (ulonglong)uVar10 * 0x10) + 0x51) * 0x10 + 0x138 + lVar2)
                        ;
                        goto code_r0x00018073a4c9;
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                  }
                  puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018073a4c9:
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                  uStack_98 = uVar7;
                  (*(code *)*puVar8)(plVar6,&uStack_98,puVar8[1]);
                  plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
                  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
                  puVar8 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,0x3f800000,0);
                  if (plVar9 != (longlong *)0x0) {
                    lVar2 = *plVar9;
                    uVar7 = *puVar8;
                    uVar1 = *(undefined4 *)(puVar8 + 1);
                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                      uVar10 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar8 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                             (ulonglong)uVar10 * 0x10) + 99) * 0x10 + 0x138 + lVar2)
                          ;
                          goto code_r0x00018073a577;
                        }
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                    }
                    puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,99);
code_r0x00018073a577:
                    uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                    uStack_98 = uVar7;
                    (*(code *)*puVar8)(plVar9,&uStack_98,puVar8[1]);
                    if (plVar6 != (longlong *)0x0) {
                      lVar2 = *plVar6;
                      if (*(ushort *)(lVar2 + 0x12e) != 0) {
                        uVar10 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar8 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                               (ulonglong)uVar10 * 0x10) + 0x61) * 0x10 + 0x138 +
                                     lVar2);
                            goto code_r0x00018073a5e9;
                          }
                          uVar10 = uVar10 + 1;
                        } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                      }
                      puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x00018073a5e9:
                      uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                      uStack_98 = uVar7;
                      (*(code *)*puVar8)(plVar6,&uStack_98,puVar8[1]);
                      plVar6 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style(param_1,0);
                      plVar9 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style(param_1,0);
                      puVar8 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_98,0x3f800000,0);
                      if (plVar9 != (longlong *)0x0) {
                        lVar2 = *plVar9;
                        uVar7 = *puVar8;
                        uVar1 = *(undefined4 *)(puVar8 + 1);
                        if (*(ushort *)(lVar2 + 0x12e) != 0) {
                          uVar10 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar8 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                                 (ulonglong)uVar10 * 0x10) + 0x5f) * 0x10 + 0x138 +
                                       lVar2);
                              goto code_r0x00018073a697;
                            }
                            uVar10 = uVar10 + 1;
                          } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                        }
                        puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x00018073a697:
                        uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                        uStack_98 = uVar7;
                        (*(code *)*puVar8)(plVar9,&uStack_98,puVar8[1]);
                        if (plVar6 != (longlong *)0x0) {
                          lVar2 = *plVar6;
                          if (*(ushort *)(lVar2 + 0x12e) != 0) {
                            uVar10 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar8 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                                   (ulonglong)uVar10 * 0x10) + 0x65) * 0x10 + 0x138
                                         + lVar2);
                                goto code_r0x00018073a709;
                              }
                              uVar10 = uVar10 + 1;
                            } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                          }
                          puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x00018073a709:
                          uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                          uStack_98 = uVar7;
                          (*(code *)*puVar8)(plVar6,&uStack_98,puVar8[1]);
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
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

