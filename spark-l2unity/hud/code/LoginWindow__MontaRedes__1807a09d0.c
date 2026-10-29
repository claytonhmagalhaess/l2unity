// LoginWindow__MontaRedes__1807a09d0 @ 0x1807a09d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__MontaRedes__1807a09d0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b44cc == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'https://discord.gg/v7xnsd9dXW'");
    FUN_180315380(LIT_"'https://www.facebook.com/l2jspark/'");
    FUN_180315380(LIT_"'rede_instagram'");
    FUN_180315380(LIT_"'rede_discord'");
    FUN_180315380(LIT_"'rede_youtube'");
    FUN_180315380(LIT_"'SparkRedes'");
    FUN_180315380(LIT_"'rede_facebook'");
    FUN_180315380(LIT_"'https://www.youtube.com/@projectsparkl2'");
    cRam00000001834b44cc = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    UnityEngine_UIElements_VisualElement__set_name(lVar3,LIT_"'SparkRedes'",0);
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar3,1,0);
    *(longlong *)(param_1 + 0xb8) = lVar3;
    func_0x000180314690(param_1 + 0xb8,lVar3);
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          plVar5 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
          puVar6 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x41e00000,0);
          if (plVar5 != (longlong *)0x0) {
            lVar3 = *plVar5;
            uVar4 = *puVar6;
            uVar1 = *(undefined4 *)(puVar6 + 1);
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                            0x69) * 0x10 + 0x138 + lVar3);
                  goto code_r0x0001807a0bd9;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001807a0bd9:
            uStack_28 = uVar4;
            uStack_20 = uVar1;
            (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
            if (*(longlong *)(param_1 + 0xb8) != 0) {
              plVar5 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0xb8),0);
              puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0,0)
              ;
              if (plVar5 != (longlong *)0x0) {
                lVar3 = *plVar5;
                uVar4 = *puVar6;
                uVar1 = *(undefined4 *)(puVar6 + 1);
                if (*(ushort *)(lVar3 + 0x12e) != 0) {
                  uVar8 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar6 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10)
                                + 0x73) * 0x10 + 0x138 + lVar3);
                      goto code_r0x0001807a0c79;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001807a0c79:
                uStack_28 = uVar4;
                uStack_20 = uVar1;
                (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
                if (*(longlong *)(param_1 + 0xb8) != 0) {
                  plVar5 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0xb8),0);
                  puVar6 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0,0);
                  if (plVar5 != (longlong *)0x0) {
                    lVar3 = *plVar5;
                    uVar4 = *puVar6;
                    uVar1 = *(undefined4 *)(puVar6 + 1);
                    if (*(ushort *)(lVar3 + 0x12e) != 0) {
                      uVar8 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar6 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                             (ulonglong)uVar8 * 0x10) + 0x2d) * 0x10 + 0x138 + lVar3
                                   );
                          goto code_r0x0001807a0d19;
                        }
                        uVar8 = uVar8 + 1;
                      } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
                    }
                    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001807a0d19:
                    uStack_28 = uVar4;
                    uStack_20 = uVar1;
                    (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                      lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0xb8),0);
                      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                      if (lVar3 != 0) {
                        FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
                        if (*(longlong *)(param_1 + 0xb8) != 0) {
                          lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0xb8),0);
                          uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                          if (lVar3 != 0) {
                            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
                            LoginWindow__AdicionaRede
                                      (param_1,LIT_"'rede_youtube'",LIT_"'https://www.youtube.com/@projectsparkl2'",0);
                            LoginWindow__AdicionaRede
                                      (param_1,LIT_"'rede_discord'",LIT_"'https://discord.gg/v7xnsd9dXW'",0);
                            LoginWindow__AdicionaRede
                                      (param_1,LIT_"'rede_facebook'",LIT_"'https://www.facebook.com/l2jspark/'",0);
                            LoginWindow__AdicionaRede(param_1,LIT_"'rede_instagram'",0,0);
                            if (param_2 != (longlong *)0x0) {
                              lVar3 = *(longlong *)(param_1 + 0xb8);
                              if (lVar3 != 0) {
                                plVar5 = (longlong *)
                                         (**(code **)(*param_2 + 0x9d8))
                                                   (param_2,*(undefined8 *)(*param_2 + 0x9e0),0);
                                if (plVar5 == (longlong *)0x0) {
                                  uVar4 = func_0x0001803153a0(TI_System.InvalidOperationException);
                                  uVar4 = func_0x000180315580(uVar4);
                                  uVar7 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
                                  System_InvalidOperationException___ctor(uVar4,uVar7,0);
                                  uVar7 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
                                  FUN_180315590(uVar4,uVar7);
                                  pcVar2 = (code *)swi(3);
                                  (*pcVar2)();
                                  return;
                                }
                                if (plVar5 == param_2) {
                                  UnityEngine_UIElements_VisualElement_Hierarchy__Add
                                            (&stack0x00000010,lVar3,0);
                                }
                                else {
                                  UnityEngine_UIElements_VisualElement__Add(plVar5);
                                }
                                *(longlong **)(lVar3 + 0x288) = param_2;
                                func_0x000180314690(lVar3 + 0x288,param_2);
                              }
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
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

