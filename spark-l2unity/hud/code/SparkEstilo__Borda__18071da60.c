// SparkEstilo__Borda__18071da60 @ 0x18071da60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEstilo__Borda__18071da60
               (longlong param_1,undefined8 *param_2,undefined4 param_3,float param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ushort uVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_78 [80];
  
  if (DAT_1834b41ec == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    DAT_1834b41ec = '\x01';
  }
  if (param_1 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    uVar8 = func_0x000182601c10(param_3,0);
    if ((((lVar7 != 0) && (FUN_180005060(0x23,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8), lVar6 != 0)) &&
        (FUN_180005060(0x1f,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8), lVar5 != 0)) &&
       (FUN_180005060(0x1b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar8), lVar4 != 0)) {
      FUN_180005060(0x2b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar8);
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      uStack_98 = *param_2;
      uStack_90 = param_2[1];
      puVar13 = (undefined8 *)
                UnityEngine_UIElements_StyleColor__op_Implicit(auStack_78,&uStack_98,0);
      if (plVar12 != (longlong *)0x0) {
        lVar4 = *plVar12;
        uVar8 = *puVar13;
        uVar3 = puVar13[1];
        uVar1 = *(undefined4 *)(puVar13 + 2);
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          uVar14 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar13 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                         0x21) * 0x10 + 0x138 + lVar4);
              goto LAB_18071dc47;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x21);
LAB_18071dc47:
        uStack_98 = uVar8;
        uStack_90 = uVar3;
        uStack_88 = uVar1;
        (*(code *)*puVar13)(plVar12,&uStack_98,puVar13[1]);
        if (plVar11 != (longlong *)0x0) {
          lVar4 = *plVar11;
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar13 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                           0x1d) * 0x10 + 0x138 + lVar4);
                goto LAB_18071dcb9;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x1d);
LAB_18071dcb9:
          uStack_98 = uVar8;
          uStack_90 = uVar3;
          uStack_88 = uVar1;
          (*(code *)*puVar13)(plVar11,&uStack_98,puVar13[1]);
          if (plVar10 != (longlong *)0x0) {
            lVar4 = *plVar10;
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar13 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                             0x15) * 0x10 + 0x138 + lVar4);
                  goto LAB_18071dd29;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar13 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x15);
LAB_18071dd29:
            uStack_98 = uVar8;
            uStack_90 = uVar3;
            uStack_88 = uVar1;
            (*(code *)*puVar13)(plVar10,&uStack_98,puVar13[1]);
            if (plVar9 != (longlong *)0x0) {
              lVar4 = *plVar9;
              if (*(ushort *)(lVar4 + 0x12e) != 0) {
                uVar14 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar13 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10)
                               + 0x25) * 0x10 + 0x138 + lVar4);
                    goto LAB_18071dd99;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
              }
              puVar13 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x25);
LAB_18071dd99:
              uStack_98 = uVar8;
              uStack_90 = uVar3;
              uStack_88 = uVar1;
              (*(code *)*puVar13)(plVar9,&uStack_98,puVar13[1]);
              if (param_4 <= 0.0) {
                return;
              }
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
              plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
              plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
              plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
              puVar13 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,param_4,0);
              if (plVar12 != (longlong *)0x0) {
                lVar4 = *plVar12;
                uVar8 = *puVar13;
                uVar1 = *(undefined4 *)(puVar13 + 1);
                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                  uVar14 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar13 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                          (ulonglong)uVar14 * 0x10) + 0x19) * 0x10 + 0x138 + lVar4);
                      goto LAB_18071de67;
                    }
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
                }
                puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x19);
LAB_18071de67:
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                uStack_98 = uVar8;
                (*(code *)*puVar13)(plVar12,&uStack_98,puVar13[1]);
                if (plVar11 != (longlong *)0x0) {
                  lVar4 = *plVar11;
                  if (*(ushort *)(lVar4 + 0x12e) != 0) {
                    uVar14 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar13 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                            (ulonglong)uVar14 * 0x10) + 0x17) * 0x10 + 0x138 + lVar4
                                  );
                        goto LAB_18071ded9;
                      }
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
                  }
                  puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x17);
LAB_18071ded9:
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                  uStack_98 = uVar8;
                  (*(code *)*puVar13)(plVar11,&uStack_98,puVar13[1]);
                  if (plVar10 != (longlong *)0x0) {
                    lVar4 = *plVar10;
                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                      uVar14 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar13 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                              (ulonglong)uVar14 * 0x10) + 0x29) * 0x10 + 0x138 +
                                    lVar4);
                          goto LAB_18071df49;
                        }
                        uVar14 = uVar14 + 1;
                      } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
                    }
                    puVar13 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x29);
LAB_18071df49:
                    uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                    uStack_98 = uVar8;
                    (*(code *)*puVar13)(plVar10,&uStack_98,puVar13[1]);
                    if (plVar9 != (longlong *)0x0) {
                      lVar4 = *plVar9;
                      if (*(ushort *)(lVar4 + 0x12e) != 0) {
                        uVar14 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar13 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                (ulonglong)uVar14 * 0x10) + 0x27) * 0x10 + 0x138 +
                                      lVar4);
                            goto LAB_18071dfb9;
                          }
                          uVar14 = uVar14 + 1;
                        } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
                      }
                      puVar13 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x27);
LAB_18071dfb9:
                      uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                      uStack_98 = uVar8;
                      (*(code *)*puVar13)(plVar9,&uStack_98,puVar13[1]);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

