// SparkEstilo__Seletor__180722450 @ 0x180722450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SparkEstilo__Seletor__180722450
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [48];
  
  if (cRam00000001834b41ff == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_System.Func<int>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__0);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__2);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__3);
    FUN_180315380(TI_SparkEstilo.<>c__DisplayClass39_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'24Hz_DF_ChannelControlBtn_Next'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'24Hz_DF_ChannelControlBtn_Pre'");
    cRam00000001834b41ff = '\x01';
  }
  lVar4 = func_0x000180315580(TI_SparkEstilo.<>c__DisplayClass39_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_1;
    func_0x000180314690(lVar4 + 0x18,param_1);
    *(undefined8 *)(lVar4 + 0x38) = param_2;
    func_0x000180314690(lVar4 + 0x38,param_2);
    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    func_0x000180314690(lVar4 + 0x28,uVar5);
    if (*(longlong *)(lVar4 + 0x28) != 0) {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar4 + 0x28),0);
      uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar6 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
        if (*(longlong *)(lVar4 + 0x28) != 0) {
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar4 + 0x28),0);
          uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar6 != 0) {
            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
            if (*(longlong *)(lVar4 + 0x28) != 0) {
              plVar7 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar4 + 0x28),0);
              puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar7 != (longlong *)0x0) {
                lVar6 = *plVar7;
                uVar5 = *puVar8;
                uVar1 = *(undefined4 *)(puVar8 + 1);
                if (*(ushort *)(lVar6 + 0x12e) != 0) {
                  uVar9 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar8 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10)
                                + 0xad) * 0x10 + 0x138 + lVar6);
                      goto code_r0x0001807226d9;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < *(ushort *)(lVar6 + 0x12e));
                }
                puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001807226d9:
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                uStack_78 = uVar5;
                (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
                if (*(longlong *)(lVar4 + 0x28) != 0) {
                  plVar7 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar4 + 0x28),0);
                  puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                  if (plVar7 != (longlong *)0x0) {
                    lVar6 = *plVar7;
                    uVar5 = *puVar8;
                    uVar1 = *(undefined4 *)(puVar8 + 1);
                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                      uVar9 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar8 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                             (ulonglong)uVar9 * 0x10) + 0x43) * 0x10 + 0x138 + lVar6
                                   );
                          goto code_r0x000180722779;
                        }
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < *(ushort *)(lVar6 + 0x12e));
                    }
                    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180722779:
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                    uStack_78 = uVar5;
                    (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
                    if (*(longlong *)(lVar4 + 0x28) != 0) {
                      plVar7 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(lVar4 + 0x28),0);
                      uStack_78 = 0;
                      uStack_70 = 0x3eb3333300000000;
                      puVar8 = (undefined8 *)
                               UnityEngine_UIElements_StyleColor__op_Implicit
                                         (auStack_58,&uStack_78,0);
                      if (plVar7 != (longlong *)0x0) {
                        lVar6 = *plVar7;
                        uVar5 = *puVar8;
                        uVar3 = puVar8[1];
                        uVar1 = *(undefined4 *)(puVar8 + 2);
                        if (*(ushort *)(lVar6 + 0x12e) != 0) {
                          uVar9 = 0;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar9 * 0x10)
                                == TI_UnityEngine.UIElements.IStyle) {
                              puVar8 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                 (ulonglong)uVar9 * 0x10) + 9) * 0x10 + 0x138 +
                                       lVar6);
                              goto code_r0x000180722829;
                            }
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < *(ushort *)(lVar6 + 0x12e));
                        }
                        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180722829:
                        uStack_78 = uVar5;
                        uStack_70 = uVar3;
                        uStack_68 = uVar1;
                        (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
                        uVar5 = *(undefined8 *)(lVar4 + 0x28);
                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        SparkEstilo__Moldura__180721b40(uVar5,0);
                        *(undefined4 *)(lVar4 + 0x20) = 0;
                        uStack_68 = 0;
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uVar5 = SparkEstilo__Texto__180722af0(LIT_"''",0xb,&uStack_78,0,0);
                        *(undefined8 *)(lVar4 + 0x10) = uVar5;
                        func_0x000180314690(lVar4 + 0x10,uVar5);
                        if (*(longlong *)(lVar4 + 0x10) != 0) {
                          lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(lVar4 + 0x10),0);
                          uVar5 = func_0x000182601c10();
                          if (lVar6 != 0) {
                            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                            if (*(longlong *)(lVar4 + 0x10) != 0) {
                              lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(lVar4 + 0x10),0);
                              uVar5 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                              if (lVar6 != 0) {
                                FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                                uVar5 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar5,lVar4,MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__0,0);
                                *(undefined8 *)(lVar4 + 0x30) = uVar5;
                                func_0x000180314690(lVar4 + 0x30,uVar5);
                                lVar6 = *(longlong *)(lVar4 + 0x28);
                                uVar5 = SparkEstilo___c__DisplayClass39_0___Seletor_g__Seta_1
                                                  (lVar4,LIT_"'24Hz_DF_ChannelControlBtn_Pre'",0xffffffff,0);
                                if (lVar6 != 0) {
                                  UnityEngine_UIElements_VisualElement__Add(lVar6,uVar5,0);
                                  if (*(longlong *)(lVar4 + 0x28) != 0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (*(longlong *)(lVar4 + 0x28),
                                               *(undefined8 *)(lVar4 + 0x10),0);
                                    lVar6 = *(longlong *)(lVar4 + 0x28);
                                    uVar5 = SparkEstilo___c__DisplayClass39_0___Seletor_g__Seta_1
                                                      (lVar4,LIT_"'24Hz_DF_ChannelControlBtn_Next'",1,0);
                                    if (lVar6 != 0) {
                                      UnityEngine_UIElements_VisualElement__Add(lVar6,uVar5,0);
                                      uVar5 = func_0x000180315580(TI_System.Func<int>);
                                      FUN_1814af140(uVar5,lVar4,MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__2,0);
                                      *param_3 = uVar5;
                                      func_0x000180314690(param_3,uVar5);
                                      uVar5 = func_0x000180315580(TI_System.Action<int>);
                                      FUN_180b7db20(uVar5,lVar4,MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__3,0);
                                      *param_4 = uVar5;
                                      func_0x000180314690(param_4,uVar5);
                                      lVar6 = *(longlong *)(lVar4 + 0x30);
                                      if (lVar6 != 0) {
                                        (**(code **)(lVar6 + 0x18))
                                                  (*(undefined8 *)(lVar6 + 0x40),
                                                   *(undefined8 *)(lVar6 + 0x28));
                                        return *(undefined8 *)(lVar4 + 0x28);
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
  uVar5 = (*pcVar2)();
  return uVar5;
}

