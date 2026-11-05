// SparkLootingRights___c__DisplayClass9_0___Arrasta_b__0__180751e80 @ 0x180751e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLootingRights___c__DisplayClass9_0___Arrasta_b__0__180751e80
               (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b4284 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_position);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(TI_SparkLootingRights);
    cRam00000001834b4284 = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar2 = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
      puVar4 = (undefined4 *)
               UnityEngine_UIElements_VisualElement__get_layout
                         (&uStack_28,**(longlong **)(TI_SparkLootingRights + 0xb8),0);
      uVar2 = *puVar4;
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_layout
                          (&uStack_28,**(longlong **)(TI_SparkLootingRights + 0xb8),0);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar5 + 4);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
        if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style
                             (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,1,0);
          if (plVar6 != (longlong *)0x0) {
            lVar5 = *plVar6;
            uVar1 = *puVar7;
            uVar2 = *(undefined4 *)(puVar7 + 1);
            if (*(ushort *)(lVar5 + 0x12e) != 0) {
              uVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                            0x69) * 0x10 + 0x138 + lVar5);
                  goto code_r0x000180752039;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x000180752039:
            uStack_28 = uVar1;
            uStack_20 = uVar2;
            (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
            if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
              plVar6 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
              puVar7 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit
                                 (&uStack_28,*(undefined4 *)(param_1 + 0x1c),0);
              if (plVar6 != (longlong *)0x0) {
                lVar5 = *plVar6;
                uVar1 = *puVar7;
                uVar2 = *(undefined4 *)(puVar7 + 1);
                if (*(ushort *)(lVar5 + 0x12e) != 0) {
                  uVar8 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar7 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10)
                                + 0x47) * 0x10 + 0x138 + lVar5);
                      goto code_r0x0001807520e9;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001807520e9:
                uStack_28 = uVar1;
                uStack_20 = uVar2;
                (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
                if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
                  plVar6 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
                  puVar7 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit
                                     (&uStack_28,*(undefined4 *)(param_1 + 0x20),0);
                  if (plVar6 != (longlong *)0x0) {
                    lVar5 = *plVar6;
                    uVar1 = *puVar7;
                    uVar2 = *(undefined4 *)(puVar7 + 1);
                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                      uVar8 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar7 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                             (ulonglong)uVar8 * 0x10) + 0x73) * 0x10 + 0x138 + lVar5
                                   );
                          goto code_r0x000180752199;
                        }
                        uVar8 = uVar8 + 1;
                      } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
                    }
                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180752199:
                    uStack_28 = uVar1;
                    uStack_20 = uVar2;
                    (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
                    UnityEngine_UIElements_PointerCaptureHelper__CapturePointer
                              (*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x80),0);
                    func_0x00018274f9b0(param_2,0);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

