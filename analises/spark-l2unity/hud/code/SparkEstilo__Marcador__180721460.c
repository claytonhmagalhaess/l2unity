// SparkEstilo__Marcador__180721460 @ 0x180721460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Marcador__180721460
                   (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ushort uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if (cRam00000001834b41fe == '\0') {
    FUN_180315380(TI_System.Action<bool,bool>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__0);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__1);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__2);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__3);
    FUN_180315380(TI_SparkEstilo.<>c__DisplayClass38_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b41fe = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkEstilo.<>c__DisplayClass38_0);
  Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x30) = param_2;
    func_0x000180314690(lVar3 + 0x30,param_2);
    lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
    if (lVar4 != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
        if (lVar5 != 0) {
          FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
          plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          puVar8 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68,0x41a00000,0);
          if (plVar7 != (longlong *)0x0) {
            lVar5 = *plVar7;
            uVar6 = *puVar8;
            uVar1 = *(undefined4 *)(puVar8 + 1);
            if (*(ushort *)(lVar5 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar8 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0x43) * 0x10 + 0x138 + lVar5);
                  goto code_r0x0001807216b9;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001807216b9:
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
            uStack_68 = uVar6;
            (*(code *)*puVar8)(plVar7,&uStack_68,puVar8[1]);
            uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(uVar6,0);
            *(undefined8 *)(lVar3 + 0x18) = uVar6;
            func_0x000180314690(lVar3 + 0x18,uVar6);
            if (*(longlong *)(lVar3 + 0x18) != 0) {
              plVar7 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar3 + 0x18),0);
              if (*(longlong *)(lVar3 + 0x18) != 0) {
                plVar9 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(lVar3 + 0x18),0);
                puVar8 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68,0x41800000,0);
                if (plVar9 != (longlong *)0x0) {
                  lVar5 = *plVar9;
                  uVar6 = *puVar8;
                  uVar1 = *(undefined4 *)(puVar8 + 1);
                  if (*(ushort *)(lVar5 + 0x12e) != 0) {
                    uVar10 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar8 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                           (ulonglong)uVar10 * 0x10) + 0x43) * 0x10 + 0x138 + lVar5)
                        ;
                        goto code_r0x0001807217a7;
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                  }
                  puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001807217a7:
                  uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
                  uStack_68 = uVar6;
                  (*(code *)*puVar8)(plVar9,&uStack_68,puVar8[1]);
                  if (plVar7 != (longlong *)0x0) {
                    lVar5 = *plVar7;
                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                      uVar10 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar8 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                             (ulonglong)uVar10 * 0x10) + 0xad) * 0x10 + 0x138 +
                                   lVar5);
                          goto code_r0x000180721819;
                        }
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                    }
                    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180721819:
                    uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
                    uStack_68 = uVar6;
                    (*(code *)*puVar8)(plVar7,&uStack_68,puVar8[1]);
                    if (*(longlong *)(lVar3 + 0x18) != 0) {
                      plVar7 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(lVar3 + 0x18),0);
                      puVar8 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_68,0x40a00000,0);
                      if (plVar7 != (longlong *)0x0) {
                        lVar5 = *plVar7;
                        uVar6 = *puVar8;
                        uVar1 = *(undefined4 *)(puVar8 + 1);
                        if (*(ushort *)(lVar5 + 0x12e) != 0) {
                          uVar10 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar8 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                 (ulonglong)uVar10 * 0x10) + 0x4f) * 0x10 + 0x138 +
                                       lVar5);
                              goto code_r0x0001807218b9;
                            }
                            uVar10 = uVar10 + 1;
                          } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                        }
                        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001807218b9:
                        uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
                        uStack_68 = uVar6;
                        (*(code *)*puVar8)(plVar7,&uStack_68,puVar8[1]);
                        if (*(longlong *)(lVar3 + 0x18) != 0) {
                          lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(lVar3 + 0x18),0);
                          uVar6 = func_0x000182601c10(0,0);
                          if (lVar5 != 0) {
                            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_58 = 0;
                            uVar6 = SparkEstilo__Texto__180722af0(param_1,0xb,&uStack_68,0,0);
                            *(undefined8 *)(lVar3 + 0x20) = uVar6;
                            func_0x000180314690(lVar3 + 0x20,uVar6);
                            UnityEngine_UIElements_VisualElement__Add
                                      (lVar4,*(undefined8 *)(lVar3 + 0x18),0);
                            UnityEngine_UIElements_VisualElement__Add
                                      (lVar4,*(undefined8 *)(lVar3 + 0x20),0);
                            *(undefined2 *)(lVar3 + 0x10) = 0x100;
                            uVar6 = func_0x000180315580(TI_System.Action);
                            FUN_1816a9c60(uVar6,lVar3,MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__0,0);
                            *(undefined8 *)(lVar3 + 0x28) = uVar6;
                            func_0x000180314690(lVar3 + 0x28,uVar6);
                            uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                            FUN_18055b980(uVar6,lVar3,MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__1,0);
                            FUN_180990d50(lVar4,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                            uVar6 = func_0x000180315580(TI_System.Func<bool>);
                            FUN_1814af410(uVar6,lVar3,MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__2,0);
                            *param_3 = uVar6;
                            func_0x000180314690(param_3,uVar6);
                            uVar6 = func_0x000180315580(TI_System.Action<bool,bool>);
                            FUN_181141610(uVar6,lVar3,MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__3,0);
                            *param_4 = uVar6;
                            func_0x000180314690(param_4,uVar6);
                            lVar3 = *(longlong *)(lVar3 + 0x28);
                            if (lVar3 != 0) {
                              (**(code **)(lVar3 + 0x18))
                                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28)
                                        );
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

