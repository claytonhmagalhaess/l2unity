// OptionsWindow__BotaoDeAba__18068ee00 @ 0x18068ee00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
OptionsWindow__BotaoDeAba__18068ee00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (cRam00000001834b3e9b == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Array.IndexOf<string>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__2);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__3);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__4);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass62_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e9b = '\x01';
  }
  lVar3 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass62_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    func_0x000180314690(lVar3 + 0x10,param_1);
    *(undefined8 *)(lVar3 + 0x40) = param_3;
    func_0x000180314690(lVar3 + 0x40,param_3);
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar4,0);
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    func_0x000180314690(lVar3 + 0x20,uVar4);
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      plVar5 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x20),0);
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x42380000,0);
      if (plVar5 != (longlong *)0x0) {
        lVar7 = *plVar5;
        uVar4 = *puVar6;
        uVar2 = *(undefined4 *)(puVar6 + 1);
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x43)
                        * 0x10 + 0x138 + lVar7);
              goto code_r0x00018068f029;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068f029:
        uStack_78 = uVar4;
        uStack_70 = uVar2;
        (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
        if (*(longlong *)(lVar3 + 0x20) != 0) {
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x20),0);
          uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
          if (lVar7 != 0) {
            FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
            if (*(longlong *)(lVar3 + 0x20) != 0) {
              plVar5 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar3 + 0x20),0);
              puVar6 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x41400000,0);
              if (plVar5 != (longlong *)0x0) {
                lVar7 = *plVar5;
                uVar4 = *puVar6;
                uVar2 = *(undefined4 *)(puVar6 + 1);
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar9 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar6 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10)
                                + 99) * 0x10 + 0x138 + lVar7);
                      goto code_r0x00018068f119;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,99);
code_r0x00018068f119:
                uStack_78 = uVar4;
                uStack_70 = uVar2;
                (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
                if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                  func_0x000180315660(TI_OptionsWindow);
                }
                lVar7 = *(longlong *)(TI_OptionsWindow + 0xb8);
                uStack_78 = *(undefined8 *)(lVar7 + 0x28);
                uStack_70 = *(undefined4 *)(lVar7 + 0x30);
                uStack_6c = *(undefined4 *)(lVar7 + 0x34);
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_48 = 0;
                func_0x000180cb7cb0(&uStack_58,&uStack_78,MR_System.Nullable<UnityEngine.Color>..ctor);
                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uStack_68 = uStack_48;
                uStack_78 = uStack_58;
                uStack_70 = (undefined4)uStack_50;
                uStack_6c = uStack_50._4_4_;
                uVar4 = SparkEstilo__Texto__180722af0(param_2,0xc,&uStack_78,0,0);
                *(undefined8 *)(lVar3 + 0x30) = uVar4;
                func_0x000180314690(lVar3 + 0x30,uVar4);
                if (*(longlong *)(lVar3 + 0x30) != 0) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(lVar3 + 0x30),0);
                  uVar4 = FUN_180eb5810(5,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                  if (lVar7 != 0) {
                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                    if (*(longlong *)(lVar3 + 0x20) != 0) {
                      UnityEngine_UIElements_VisualElement__Add
                                (*(longlong *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x30),0);
                      *(undefined1 *)(lVar3 + 0x28) = 0;
                      uVar2 = FUN_1809e1cf0(*(undefined8 *)
                                             (*(longlong *)(TI_OptionsWindow + 0xb8) + 0x38),
                                            param_2,MR_System.Array.IndexOf<string>);
                      *(undefined4 *)(lVar3 + 0x18) = uVar2;
                      uVar4 = func_0x000180315580(TI_System.Action);
                      FUN_1816a9c60(uVar4,lVar3,MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__0,0);
                      *(undefined8 *)(lVar3 + 0x38) = uVar4;
                      func_0x000180314690(lVar3 + 0x38,uVar4);
                      lVar7 = *(longlong *)(lVar3 + 0x20);
                      uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                      FUN_18055b980(uVar4,lVar3,MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__1,0);
                      if (lVar7 != 0) {
                        FUN_180990d50(lVar7,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                        lVar7 = *(longlong *)(lVar3 + 0x20);
                        uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                        FUN_18055b980(uVar4,lVar3,MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__2,0);
                        if (lVar7 != 0) {
                          FUN_180990d50(lVar7,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                          lVar7 = *(longlong *)(lVar3 + 0x20);
                          uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
                          FUN_18055b980(uVar4,lVar3,MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__3,0);
                          if (lVar7 != 0) {
                            FUN_180990d50(lVar7,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
                            uVar4 = *(undefined8 *)(lVar3 + 0x20);
                            uVar8 = func_0x000180315580(TI_System.Func<bool>);
                            FUN_1814af410(uVar8,lVar3,MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__4,0);
                            OptionsWindow__Brilhos(uVar4,uVar8,0);
                            if (*(longlong *)(lVar3 + 0x20) != 0) {
                              UnityEngine_UIElements_VisualElement__set_userData
                                        (*(longlong *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x38),0
                                        );
                              lVar7 = *(longlong *)(lVar3 + 0x38);
                              if (lVar7 != 0) {
                                (**(code **)(lVar7 + 0x18))
                                          (*(undefined8 *)(lVar7 + 0x40),
                                           *(undefined8 *)(lVar7 + 0x28));
                                return *(undefined8 *)(lVar3 + 0x20);
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
  uVar4 = (*pcVar1)();
  return uVar4;
}

