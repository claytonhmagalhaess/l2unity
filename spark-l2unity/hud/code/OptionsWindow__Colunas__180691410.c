// OptionsWindow__Colunas__180691410 @ 0x180691410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__Colunas__180691410(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [64];
  
  if (cRam00000001834b3e95 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e95 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
  if (lVar4 != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar5 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
      *param_2 = lVar5;
      func_0x000180314690(param_2,lVar5);
      if (*param_2 != 0) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*param_2,0);
        uVar6 = func_0x000182601c10();
        if (lVar5 != 0) {
          FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
          if (*param_2 != 0) {
            plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(*param_2,0);
            puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0,0);
            if (plVar7 != (longlong *)0x0) {
              lVar5 = *plVar7;
              uVar6 = *puVar8;
              uVar1 = *(undefined4 *)(puVar8 + 1);
              if (*(ushort *)(lVar5 + 0x12e) != 0) {
                uVar9 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                              0x37) * 0x10 + 0x138 + lVar5);
                    goto code_r0x0001806915c9;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x0001806915c9:
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
              uStack_78 = uVar6;
              (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
              lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
              UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
              *param_3 = lVar5;
              func_0x000180314690(param_3,lVar5);
              if (*param_3 != 0) {
                lVar5 = UnityEngine_UIElements_VisualElement__get_style(*param_3,0);
                uVar6 = func_0x000182601c10();
                if (lVar5 != 0) {
                  FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                  if (*param_3 != 0) {
                    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(*param_3,0)
                    ;
                    puVar8 = (undefined8 *)
                             UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0,0);
                    if (plVar7 != (longlong *)0x0) {
                      lVar5 = *plVar7;
                      uVar6 = *puVar8;
                      uVar1 = *(undefined4 *)(puVar8 + 1);
                      if (*(ushort *)(lVar5 + 0x12e) != 0) {
                        uVar9 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar8 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                               (ulonglong)uVar9 * 0x10) + 0x37) * 0x10 + 0x138 +
                                     lVar5);
                            goto code_r0x0001806916d9;
                          }
                          uVar9 = uVar9 + 1;
                        } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                      }
                      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x0001806916d9:
                      uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                      uStack_78 = uVar6;
                      (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
                      if (*param_3 != 0) {
                        plVar7 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style(*param_3,0);
                        puVar8 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                           (&uStack_78,0x41200000,0);
                        if (plVar7 != (longlong *)0x0) {
                          lVar5 = *plVar7;
                          uVar1 = *(undefined4 *)(puVar8 + 1);
                          uVar6 = *puVar8;
                          if (*(ushort *)(lVar5 + 0x12e) != 0) {
                            uVar9 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar8 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                   (ulonglong)uVar9 * 0x10) + 0x4d) * 0x10 + 0x138 +
                                         lVar5);
                                goto code_r0x000180691789;
                              }
                              uVar9 = uVar9 + 1;
                            } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                          }
                          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180691789:
                          uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                          uStack_78 = uVar6;
                          (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
                          if (*param_3 != 0) {
                            plVar7 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(*param_3,0);
                            puVar8 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_78,0x41200000,0);
                            if (plVar7 != (longlong *)0x0) {
                              lVar5 = *plVar7;
                              uVar6 = *puVar8;
                              uVar1 = *(undefined4 *)(puVar8 + 1);
                              if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                uVar9 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar8 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                       (ulonglong)uVar9 * 0x10) + 0x61) * 0x10 +
                                              0x138 + lVar5);
                                    goto code_r0x000180691829;
                                  }
                                  uVar9 = uVar9 + 1;
                                } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                              }
                              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180691829:
                              uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                              uStack_78 = uVar6;
                              (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
                              if (*param_3 != 0) {
                                lVar5 = UnityEngine_UIElements_VisualElement__get_style(*param_3,0);
                                uVar6 = func_0x000182601c10();
                                if (lVar5 != 0) {
                                  FUN_180005060(0x1f,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                  if (*param_3 != 0) {
                                    plVar7 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (*param_3,0);
                                    uStack_78 = 0x3e8f5c293e99999a;
                                    uStack_70 = 0x3f3333333e6b851f;
                                    puVar8 = (undefined8 *)
                                             UnityEngine_UIElements_StyleColor__op_Implicit
                                                       (auStack_58,&uStack_78,0);
                                    if (plVar7 != (longlong *)0x0) {
                                      lVar5 = *plVar7;
                                      uVar6 = *puVar8;
                                      uVar3 = puVar8[1];
                                      uVar1 = *(undefined4 *)(puVar8 + 2);
                                      if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                        uVar9 = 0;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar5 + 0xb0) +
                                               (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                            puVar8 = (undefined8 *)
                                                     ((longlong)
                                                      (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                               (ulonglong)uVar9 * 0x10) + 0x1d) *
                                                      0x10 + 0x138 + lVar5);
                                            goto code_r0x000180691919;
                                          }
                                          uVar9 = uVar9 + 1;
                                        } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                                      }
                                      puVar8 = (undefined8 *)
                                               FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x1d);
code_r0x000180691919:
                                      uStack_78 = uVar6;
                                      uStack_70 = uVar3;
                                      uStack_68 = uVar1;
                                      (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
                                      UnityEngine_UIElements_VisualElement__Add(lVar4,*param_2,0);
                                      UnityEngine_UIElements_VisualElement__Add(lVar4,*param_3,0);
                                      if (param_1 != 0) {
                                        UnityEngine_UIElements_VisualElement__Add(param_1,lVar4,0);
                                        return lVar4;
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
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar4 = (*pcVar2)();
  return lVar4;
}

