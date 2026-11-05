// AutoPotionWindow__MontaLista__1805ab240 @ 0x1805ab240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutoPotionWindow__MontaLista__1805ab240(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_48;
  undefined1 auStack_38 [8];
  undefined1 *puStack_30;
  
  if (cRam00000001834b3a46 == '\0') {
    FUN_180315380(MD_AutoPotionWindow._MontaLista_b__42_0);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3a46 = '\x01';
  }
  uVar2 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar2,0);
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  func_0x000180314690(param_1 + 0xe0,uVar2);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
    uVar2 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar3 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar3,uVar2);
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        plVar4 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
        puVar5 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0x43660000,0);
        if (plVar4 != (longlong *)0x0) {
          lVar3 = *plVar4;
          uVar2 = *puVar5;
          uVar10 = *(undefined4 *)(puVar5 + 1);
          if (*(ushort *)(lVar3 + 0x12e) != 0) {
            uVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar5 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                          0xad) * 0x10 + 0x138 + lVar3);
                goto code_r0x0001805ab3e9;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(ushort *)(lVar3 + 0x12e));
          }
          puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805ab3e9:
          puStack_50 = (undefined1 *)CONCAT44(puStack_50._4_4_,uVar10);
          uStack_58 = uVar2;
          (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
          if (*(longlong *)(param_1 + 0xe0) != 0) {
            plVar4 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0xe0),0);
            uStack_58 = 0x3d3851ec3d4ccccd;
            puStack_50 = (undefined1 *)0x3f7333333d23d70a;
            puVar5 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0);
            if (plVar4 != (longlong *)0x0) {
              lVar3 = *plVar4;
              uVar2 = *puVar5;
              uVar6 = puVar5[1];
              uVar10 = *(undefined4 *)(puVar5 + 2);
              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                uVar9 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar5 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                              9) * 0x10 + 0x138 + lVar3);
                    goto code_r0x0001805ab499;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar3 + 0x12e));
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001805ab499:
              uStack_58 = uVar2;
              puStack_50 = (undefined1 *)uVar6;
              uStack_48 = uVar10;
              (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
              uVar2 = *(undefined8 *)(param_1 + 0xe0);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660(TI_SparkEstilo);
              }
              uVar10 = 0;
              uStack_58 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x20);
              puStack_50 = *(undefined1 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x28);
              SparkEstilo__Borda__18071da60(uVar2,&uStack_58,0x3f800000,0,0);
              SparkEstilo__Espaco__18071fb80
                        (*(undefined8 *)(param_1 + 0xe0),0x40800000,0x40800000,0x40800000,
                         CONCAT44(uVar10,0x40800000),0);
              if (*(longlong *)(param_1 + 0xe0) != 0) {
                UnityEngine_UIElements_VisualElement__set_pickingMode
                          (*(longlong *)(param_1 + 0xe0),0,0);
                uVar2 = *(undefined8 *)(param_1 + 0xe0);
                uVar6 = func_0x000180315580(TI_MouseOverDetectionManipulator);
                MouseOverDetectionManipulator___ctor__1807b03c0(uVar6,uVar2,0);
                *(undefined8 *)(param_1 + 0xe8) = uVar6;
                func_0x000180314690(param_1 + 0xe8,uVar6);
                UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                          (*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),0);
                if (*(longlong *)(param_1 + 0xe0) != 0) {
                  lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0xe0),0);
                  uVar2 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                  if (lVar3 != 0) {
                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar2);
                    if (*(longlong *)(param_1 + 0xe8) != 0) {
                      MouseOverDetectionManipulator__Disable__1807afdf0
                                (*(longlong *)(param_1 + 0xe8),0);
                      if (param_2 != (longlong *)0x0) {
                        UnityEngine_UIElements_VisualElement__Add
                                  (param_2,*(undefined8 *)(param_1 + 0xe0),0);
                        lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                        FUN_18055b980(lVar7,param_1,MD_AutoPotionWindow._MontaLista_b__42_0,0);
                        lVar3 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>;
                        if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> + 0x38) == 0) {
                          puStack_50 = (undefined1 *)0x180990d79;
                          FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
                          if (*(longlong *)(lVar3 + 0x38) == 0) {
                            puStack_50 = &LAB_180990d88;
                            FUN_180312fc0(lVar3);
                          }
                        }
                        if (lVar7 != 0) {
                          lVar8 = param_2[3];
                          if (lVar8 == 0) {
                            puStack_50 = (undefined1 *)0x180990db0;
                            lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
                            puStack_50 = (undefined1 *)0x180990dbd;
                            UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar8,0);
                            param_2[3] = lVar8;
                            puStack_50 = (undefined1 *)0x180990dcd;
                            func_0x000180314690(param_2 + 3,lVar8);
                            if (lVar8 == 0) {
                              puStack_50 = (undefined1 *)0x180990e4a;
                              FUN_1803155d0();
                              pcVar1 = (code *)swi(3);
                              (*pcVar1)();
                              return;
                            }
                          }
                          puStack_50 = (undefined1 *)0x180990de8;
                          FUN_1809c9fd0(lVar8,lVar7,1,
                                        *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8));
                          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x10);
                          if (*(longlong *)(lVar3 + 0x38) == 0) {
                            puStack_30 = (undefined1 *)0x1800331ba;
                            FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
                            if (*(longlong *)(lVar3 + 0x38) == 0) {
                              puStack_30 = &LAB_1800331c9;
                              FUN_180312fc0(lVar3);
                            }
                          }
                          if (param_2 != (longlong *)0x0) {
                            if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*param_2 + 0x130))
                               && (*(longlong *)
                                    (*(longlong *)(*param_2 + 200) + -8 +
                                    (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) ==
                                   TI_UnityEngine.UIElements.VisualElement)) {
                              lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
                              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                                puStack_30 = &LAB_180033216;
                                lVar7 = FUN_180312f40(lVar7);
                              }
                              if (*(int *)(lVar7 + 0xe4) == 0) {
                                puStack_30 = &LAB_180033227;
                                func_0x000180315660(lVar7);
                              }
                              lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
                              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                                puStack_30 = &LAB_180033240;
                                lVar3 = FUN_180312f40(lVar3);
                              }
                              puStack_30 = &LAB_18003325f;
                              func_0x0001825c3d40(param_2,1 << ((byte)*(undefined4 *)
                                                                       (*(longlong *)(lVar3 + 0xb8)
                                                                       + 0x10) & 0x1f),1,0);
                            }
                          }
                          return;
                        }
                        puStack_50 = (undefined1 *)0x180990e14;
                        uVar2 = func_0x0001803153a0(TI_System.ArgumentException);
                        puStack_50 = (undefined1 *)0x180990e1c;
                        uVar2 = func_0x000180315580(uVar2);
                        puStack_50 = (undefined1 *)0x180990e2b;
                        uVar6 = func_0x0001803153a0(LIT_"'callback parameter is null'");
                        puStack_50 = (undefined1 *)0x180990e39;
                        System_ArgumentException___ctor(uVar2,uVar6,0);
                        puStack_50 = (undefined1 *)0x180990e44;
                        FUN_180315590(uVar2,lVar3);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
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
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

