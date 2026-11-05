// LoginWindow__MontaAvisoDeBloqueio__18079e890 @ 0x18079e890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__MontaAvisoDeBloqueio__18079e890(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ushort uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [56];
  
  if (cRam00000001834b44c8 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"''");
    cRam00000001834b44c8 = '\x01';
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEstilo);
  }
  uStack_88 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x90);
  uStack_80 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x98);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
  uStack_88 = uStack_68;
  uStack_80 = uStack_60;
  uStack_78 = uStack_58;
  uVar4 = SparkEstilo__Texto__180722af0(LIT_"''",0xd,&uStack_88,1,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  func_0x000180314690(param_1 + 0xa8,uVar4);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0xa8),1,0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x43d20000,0);
          if (plVar6 != (longlong *)0x0) {
            lVar5 = *plVar6;
            uVar4 = *puVar7;
            uVar1 = *(undefined4 *)(puVar7 + 1);
            if (*(ushort *)(lVar5 + 0x12e) != 0) {
              uVar9 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                            0xad) * 0x10 + 0x138 + lVar5);
                  goto code_r0x00018079eac9;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018079eac9:
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
            uStack_88 = uVar4;
            (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
            if (*(longlong *)(param_1 + 0xa8) != 0) {
              lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xa8),0);
              uVar4 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
              if (lVar5 != 0) {
                FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                if (*(longlong *)(param_1 + 0xa8) != 0) {
                  lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0xa8),0);
                  uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                  if (lVar5 != 0) {
                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                    if (*(longlong *)(param_1 + 0xa8) != 0) {
                      plVar6 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(param_1 + 0xa8),0);
                      uStack_88 = 0;
                      uStack_80 = 0x3f0ccccd00000000;
                      puVar7 = (undefined8 *)
                               UnityEngine_UIElements_StyleColor__op_Implicit
                                         (auStack_50,&uStack_88,0);
                      if (plVar6 != (longlong *)0x0) {
                        lVar5 = *plVar6;
                        uVar4 = *puVar7;
                        uVar3 = puVar7[1];
                        uVar1 = *(undefined4 *)(puVar7 + 2);
                        if (*(ushort *)(lVar5 + 0x12e) != 0) {
                          uVar9 = 0;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10)
                                == TI_UnityEngine.UIElements.IStyle) {
                              puVar7 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                 (ulonglong)uVar9 * 0x10) + 9) * 0x10 + 0x138 +
                                       lVar5);
                              goto code_r0x00018079ec09;
                            }
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                        }
                        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018079ec09:
                        uStack_88 = uVar4;
                        uStack_80 = uVar3;
                        uStack_78 = uVar1;
                        (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
                        if (*(longlong *)(param_1 + 0xa8) != 0) {
                          plVar6 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(param_1 + 0xa8),0);
                          if (*(longlong *)(param_1 + 0xa8) != 0) {
                            plVar8 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(param_1 + 0xa8),0);
                            puVar7 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_88,0x40800000,0);
                            if (plVar8 != (longlong *)0x0) {
                              lVar5 = *plVar8;
                              uVar4 = *puVar7;
                              uVar1 = *(undefined4 *)(puVar7 + 1);
                              if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                uVar9 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar7 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                       (ulonglong)uVar9 * 0x10) + 0x5f) * 0x10 +
                                              0x138 + lVar5);
                                    goto code_r0x00018079ecd7;
                                  }
                                  uVar9 = uVar9 + 1;
                                } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                              }
                              puVar7 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x00018079ecd7:
                              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                              uStack_88 = uVar4;
                              (*(code *)*puVar7)(plVar8,&uStack_88,puVar7[1]);
                              if (plVar6 != (longlong *)0x0) {
                                lVar5 = *plVar6;
                                if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                  uVar9 = 0;
                                  do {
                                    if (*(longlong *)
                                         (*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                                        TI_UnityEngine.UIElements.IStyle) {
                                      puVar7 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                         (ulonglong)uVar9 * 0x10) + 0x65) * 0x10 +
                                                0x138 + lVar5);
                                      goto code_r0x00018079ed49;
                                    }
                                    uVar9 = uVar9 + 1;
                                  } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                                }
                                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x00018079ed49:
                                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                uStack_88 = uVar4;
                                (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
                                if (*(longlong *)(param_1 + 0xa8) != 0) {
                                  lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                    (*(longlong *)(param_1 + 0xa8),0);
                                  uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                  if (lVar5 != 0) {
                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                    if (param_2 != 0) {
                                      UnityEngine_UIElements_VisualElement__Add
                                                (param_2,*(undefined8 *)(param_1 + 0xa8),0);
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
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

