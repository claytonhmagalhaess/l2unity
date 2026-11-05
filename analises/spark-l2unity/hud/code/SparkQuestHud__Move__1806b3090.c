// SparkQuestHud__Move__1806b3090 @ 0x1806b3090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__Move__1806b3090(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_64;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (cRam00000001834b3fdd == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3fdd = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar6 = func_0x0001825d76d0(*(longlong *)(param_1 + 0x20),0);
    if (lVar6 == 0) {
      return;
    }
    lVar7 = UnityEngine_UIElements_VisualElement__get_layout(&uStack_58,lVar6,0);
    fVar11 = *(float *)(lVar7 + 8);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar6 = UnityEngine_UIElements_VisualElement__get_layout(&uStack_58,lVar6,0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      fVar1 = *(float *)(lVar6 + 0xc);
      lVar6 = UnityEngine_UIElements_VisualElement__get_layout
                        (&uStack_58,*(longlong *)(param_1 + 0x20),0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        fVar2 = *(float *)(lVar6 + 8);
        UnityEngine_UIElements_VisualElement__get_layout(&uStack_58,*(longlong *)(param_1 + 0x20),0)
        ;
        fStack_64 = (float)((ulonglong)param_2 >> 0x20);
        fVar12 = (float)param_2;
        fVar13 = fStack_64;
        if ((0.0 < fVar11) && (0.0 < fVar1)) {
          fVar11 = fVar11 - fVar2;
          if (fVar11 < 0.0) {
            fVar11 = 0.0;
          }
          if (fVar12 < 0.0) {
            fVar11 = 0.0;
          }
          else if (fVar12 <= fVar11) {
            fVar11 = fVar12;
          }
          fVar13 = fVar1 - 30.0;
          if (fVar13 < 0.0) {
            fVar13 = 0.0;
          }
          fVar12 = fVar11;
          if (fStack_64 < 0.0) {
            fVar13 = 0.0;
          }
          else if (fStack_64 <= fVar13) {
            fVar13 = fStack_64;
          }
        }
        if (*(longlong *)(param_1 + 0x20) != 0) {
          plVar8 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
          puVar9 = (undefined8 *)
                   UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_58,2,0);
          if (plVar8 != (longlong *)0x0) {
            lVar6 = *plVar8;
            uVar3 = *puVar9;
            uVar4 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0x69) * 0x10 + 0x138 + lVar6);
                  goto code_r0x0001806b3289;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001806b3289:
            uStack_58 = uVar3;
            uStack_50 = uVar4;
            (*(code *)*puVar9)(plVar8,&uStack_58,puVar9[1]);
            if (*(longlong *)(param_1 + 0x20) != 0) {
              plVar8 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0x20),0);
              puVar9 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,fVar12,0);
              if (plVar8 != (longlong *)0x0) {
                lVar6 = *plVar8;
                uVar3 = *puVar9;
                uVar4 = *(undefined4 *)(puVar9 + 1);
                if (*(ushort *)(lVar6 + 0x12e) != 0) {
                  uVar10 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar9 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10
                                         ) + 0x47) * 0x10 + 0x138 + lVar6);
                      goto code_r0x0001806b3329;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
                }
                puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806b3329:
                uStack_58 = uVar3;
                uStack_50 = uVar4;
                (*(code *)*puVar9)(plVar8,&uStack_58,puVar9[1]);
                if (*(longlong *)(param_1 + 0x20) != 0) {
                  plVar8 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x20),0);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,fVar13,0);
                  if (plVar8 != (longlong *)0x0) {
                    lVar6 = *plVar8;
                    uVar3 = *puVar9;
                    uVar4 = *(undefined4 *)(puVar9 + 1);
                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                      uVar10 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar9 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                             (ulonglong)uVar10 * 0x10) + 0x73) * 0x10 + 0x138 +
                                   lVar6);
                          goto code_r0x0001806b33c7;
                        }
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
                    }
                    puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806b33c7:
                    uStack_58 = uVar3;
                    uStack_50 = uVar4;
                    (*(code *)*puVar9)(plVar8,&uStack_58,puVar9[1]);
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
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

