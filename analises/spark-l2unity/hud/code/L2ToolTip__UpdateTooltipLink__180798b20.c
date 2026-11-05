// L2ToolTip__UpdateTooltipLink__180798b20 @ 0x180798b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ToolTip__UpdateTooltipLink__180798b20
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5,longlong param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_30;
  
  if (cRam00000001834b446b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_L2ToolTip.UpdateTooltip<string>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"''");
    cRam00000001834b446b = '\x01';
  }
  uStack_30 = (undefined1 *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  L2ToolTip__MontaLink__180796990(param_1,0);
  lVar9 = LIT_"''";
  if (param_2 != 0) {
    lVar9 = param_2;
  }
  plVar11 = *(longlong **)(param_1 + 0xe8);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0xe48))(plVar11,lVar9,*(undefined8 *)(*plVar11 + 0xe50));
    lVar9 = LIT_"''";
    if (param_6 != 0) {
      lVar9 = param_6;
    }
    plVar11 = *(longlong **)(param_1 + 0xf0);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0xe48))(plVar11,lVar9,*(undefined8 *)(*plVar11 + 0xe50));
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf0),0);
        uVar6 = func_0x000181707e50(param_6,0);
        uVar10 = FUN_180eb5810(uVar6,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar9 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
          if (*(longlong *)(param_1 + 0xe0) != 0) {
            plVar11 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xe0),0);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar7 = UnityEngine_Object__op_Inequality(param_7,0,0);
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            if (cVar7 == '\0') {
              uStack_58 = 0;
              func_0x000182600050(&uStack_78,3,0);
            }
            else {
              uStack_58 = 0;
              UnityEngine_UIElements_StyleBackground___ctor(&uStack_78,param_7);
            }
            uVar5 = uStack_58;
            uVar4 = uStack_60;
            uVar3 = uStack_68;
            uVar2 = uStack_70;
            uVar10 = uStack_78;
            if (plVar11 != (longlong *)0x0) {
              lVar9 = *plVar11;
              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10)
                               + 0xb) * 0x10 + 0x138 + lVar9);
                    goto code_r0x000180798d49;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180798d49:
              uStack_78 = uVar10;
              uStack_70 = uVar2;
              uStack_68 = uVar3;
              uStack_60 = uVar4;
              uStack_58 = uVar5;
              (*(code *)*puVar12)(plVar11,&uStack_78,puVar12[1]);
              if (*(longlong *)(param_1 + 0xe0) != 0) {
                lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(param_1 + 0xe0),0);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                bVar8 = UnityEngine_Object__op_Inequality(param_7,0,0);
                uVar10 = FUN_180eb5810(bVar8 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar9 != 0) {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
                  lVar9 = LIT_"''";
                  if (param_3 != 0) {
                    lVar9 = param_3;
                  }
                  plVar11 = *(longlong **)(param_1 + 0xf8);
                  if (plVar11 != (longlong *)0x0) {
                    (**(code **)(*plVar11 + 0xe48))(plVar11,lVar9,*(undefined8 *)(*plVar11 + 0xe50))
                    ;
                    if (*(longlong *)(param_1 + 0xf8) != 0) {
                      lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0xf8),0);
                      uVar6 = func_0x000181707e50(param_3,0);
                      uVar10 = FUN_180eb5810(uVar6,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                      if (lVar9 != 0) {
                        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
                        if (*(longlong *)(param_1 + 0xd8) != 0) {
                          plVar11 = (longlong *)
                                    UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 0xd8),0);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar7 = UnityEngine_Object__op_Inequality(param_4,0,0);
                          uStack_78 = 0;
                          uStack_70 = 0;
                          uStack_68 = 0;
                          uStack_60 = 0;
                          if (cVar7 == '\0') {
                            uStack_58 = 0;
                            func_0x000182600050(&uStack_78,3,0);
                          }
                          else {
                            uStack_58 = 0;
                            UnityEngine_UIElements_StyleBackground___ctor(&uStack_78,param_4);
                          }
                          uVar5 = uStack_58;
                          uVar4 = uStack_60;
                          uVar3 = uStack_68;
                          uVar2 = uStack_70;
                          uVar10 = uStack_78;
                          if (plVar11 != (longlong *)0x0) {
                            lVar9 = *plVar11;
                            if (*(ushort *)(lVar9 + 0x12e) != 0) {
                              uVar13 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                      (ulonglong)uVar13 * 0x10) + 0xb) * 0x10 +
                                             0x138 + lVar9);
                                  goto code_r0x000180798f49;
                                }
                                uVar13 = uVar13 + 1;
                              } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180798f49:
                            uStack_78 = uVar10;
                            uStack_70 = uVar2;
                            uStack_68 = uVar3;
                            uStack_60 = uVar4;
                            uStack_58 = uVar5;
                            (*(code *)*puVar12)(plVar11,&uStack_78,puVar12[1]);
                            FUN_180a19bf0(param_1,0,**(undefined8 **)(_DAT_1834c62b0 + 0xb8),param_5
                                          ,MR_L2ToolTip.UpdateTooltip<string>);
                            if (*(longlong *)(param_1 + 0xd0) != 0) {
                              plVar11 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(param_1 + 0xd0),0);
                              uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                              if (plVar11 != (longlong *)0x0) {
                                uVar13 = 0;
                                lVar9 = *plVar11;
                                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                  do {
                                    if (*(longlong *)
                                         (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                                        TI_UnityEngine.UIElements.IStyle) {
                                      puVar12 = (undefined8 *)
                                                ((longlong)
                                                 (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                          (ulonglong)uVar13 * 0x10) + 0x33) * 0x10 +
                                                 0x138 + lVar9);
                                      goto LAB_1800050ad;
                                    }
                                    uVar13 = uVar13 + 1;
                                  } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
                                }
                                uStack_30 = &LAB_1800050ad;
                                puVar12 = (undefined8 *)FUN_180312860(plVar11);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*(code *)*puVar12)(plVar11,uVar10,puVar12[1]);
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
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

