// FriendWindow__MontaBloqueio__1805fe650 @ 0x1805fe650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FriendWindow__MontaBloqueio__1805fe650(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 *puStack_30;
  ulonglong uVar10;
  
  if (cRam00000001834b3c04 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_FriendWindow._MontaBloqueio_b__21_0);
    FUN_180315380(MD_FriendWindow._MontaBloqueio_b__21_1);
    FUN_180315380(TI_FriendWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_SparkAmigos.DesbloqueiaTodos);
    FUN_180315380(MD_SparkAmigos.ListaDeBloqueio);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_FriendWindow.__c._MontaBloqueio_b__21_2);
    FUN_180315380(TI_FriendWindow.<>c);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Block'");
    FUN_180315380(LIT_"'Blocked players cannot whisper you or invite you. The bl...");
    FUN_180315380(LIT_"'Unblock'");
    FUN_180315380(LIT_"'Block all'");
    FUN_180315380(LIT_"'Block list'");
    FUN_180315380(LIT_"'Unblock all'");
    cRam00000001834b3c04 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  func_0x000180314690(param_1 + 0x98,uVar3);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_68 = *(undefined8 *)(lVar4 + 0x50);
      uStack_60 = *(undefined4 *)(lVar4 + 0x58);
      uStack_5c = *(undefined4 *)(lVar4 + 0x5c);
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x000180cb7cb0(&uStack_48,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
      uVar10 = 0;
      uStack_68 = uStack_48;
      uStack_60 = (undefined4)uStack_40;
      uStack_5c = uStack_40._4_4_;
      uStack_58 = uStack_38;
      lVar4 = SparkEstilo__Texto__180722af0(LIT_"'Blocked players cannot whisper you or invite you. The bl...",10,&uStack_68,0,0);
      if (lVar4 != 0) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
        if (lVar5 != 0) {
          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          uVar3 = func_0x000182601c10(0,0);
          if (lVar5 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
            if (*(longlong *)(param_1 + 0x98) != 0) {
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x98),lVar4,0);
              if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar4 = FriendWindow__Fileira(0);
              if (lVar4 != 0) {
                lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                if (lVar5 != 0) {
                  FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
                  uVar3 = SparkUI__Campo(0x10,0);
                  *(undefined8 *)(param_1 + 0xb8) = uVar3;
                  func_0x000180314690(param_1 + 0xb8,uVar3);
                  if (*(longlong *)(param_1 + 0xb8) != 0) {
                    lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0xb8),0);
                    uVar3 = func_0x000182601c10(0x3f800000,0);
                    if (lVar5 != 0) {
                      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
                      if (*(longlong *)(param_1 + 0xb8) != 0) {
                        plVar6 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(param_1 + 0xb8),0);
                        puVar7 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                           (&uStack_68,0x40c00000,0);
                        if (plVar6 != (longlong *)0x0) {
                          lVar5 = *plVar6;
                          uVar3 = *puVar7;
                          uVar1 = *(undefined4 *)(puVar7 + 1);
                          if (*(ushort *)(lVar5 + 0x12e) != 0) {
                            do {
                              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar10 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar7 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar10 * 0x10)
                                          + 0x4f) * 0x10 + 0x138 + lVar5);
                                goto code_r0x0001805fea89;
                              }
                              uVar9 = (short)uVar10 + 1;
                              uVar10 = (ulonglong)uVar9;
                            } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                          }
                          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805fea89:
                          uStack_68 = uVar3;
                          uStack_60 = uVar1;
                          (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
                          FriendWindow__Escuro(*(undefined8 *)(param_1 + 0xb8),0);
                          UnityEngine_UIElements_VisualElement__Add
                                    (lVar4,*(undefined8 *)(param_1 + 0xb8),0);
                          if (*(longlong *)(param_1 + 0x98) != 0) {
                            UnityEngine_UIElements_VisualElement__Add
                                      (*(longlong *)(param_1 + 0x98),lVar4,0);
                            lVar4 = FriendWindow__Fileira(0);
                            if (lVar4 != 0) {
                              lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                              uVar3 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                              if (lVar5 != 0) {
                                FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
                                uVar3 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar3,param_1,MD_FriendWindow._MontaBloqueio_b__21_0,0);
                                uVar3 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Block'",uVar3,0x54,1,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                uVar3 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar3,param_1,MD_FriendWindow._MontaBloqueio_b__21_1,0);
                                uVar3 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Unblock'",uVar3,0x54,0,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                uVar3 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar3,0,MD_SparkAmigos.ListaDeBloqueio,0);
                                uVar3 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Block list'",uVar3,0x54,0,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                if (*(longlong *)(param_1 + 0x98) != 0) {
                                  UnityEngine_UIElements_VisualElement__Add
                                            (*(longlong *)(param_1 + 0x98),lVar4,0);
                                  lVar4 = FriendWindow__Fileira(0);
                                  if (lVar4 != 0) {
                                    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0)
                                    ;
                                    uVar3 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                    if (lVar5 != 0) {
                                      FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
                                      if (*(int *)(TI_FriendWindow.<>c + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      uVar3 = LIT_"'Block all'";
                                      lVar5 = *(longlong *)
                                               (*(longlong *)(TI_FriendWindow.<>c + 0xb8) + 8);
                                      if (lVar5 == 0) {
                                        if (*(int *)(TI_FriendWindow.<>c + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        uVar8 = **(undefined8 **)(TI_FriendWindow.<>c + 0xb8);
                                        lVar5 = func_0x000180315580(TI_System.Action);
                                        FUN_1816a9c60(lVar5,uVar8,MD_FriendWindow.__c._MontaBloqueio_b__21_2,0);
                                        *(longlong *)
                                         (*(longlong *)(TI_FriendWindow.<>c + 0xb8) + 8) = lVar5;
                                        func_0x000180314690(*(longlong *)
                                                             (TI_FriendWindow.<>c + 0xb8) + 8,lVar5
                                                           );
                                      }
                                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      uVar3 = SparkEstilo__Botao__18071e130(uVar3,lVar5,0x82,1,0);
                                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                      uVar3 = func_0x000180315580(TI_System.Action);
                                      FUN_1816a9c60(uVar3,0,MD_SparkAmigos.DesbloqueiaTodos,0);
                                      uVar3 = SparkEstilo__Botao__18071e130
                                                        (LIT_"'Unblock all'",uVar3,0x82,0,0);
                                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                      if (*(longlong *)(param_1 + 0x98) != 0) {
                                        UnityEngine_UIElements_VisualElement__Add
                                                  (*(longlong *)(param_1 + 0x98),lVar4,0);
                                        if (param_2 != (longlong *)0x0) {
                                          lVar4 = *(longlong *)(param_1 + 0x98);
                                          if (lVar4 != 0) {
                                            puStack_30 = (undefined1 *)0x1825c42fe;
                                            plVar6 = (longlong *)
                                                     (**(code **)(*param_2 + 0x9d8))
                                                               (param_2,*(undefined8 *)
                                                                         (*param_2 + 0x9e0),0);
                                            if (plVar6 == (longlong *)0x0) {
                                              puStack_30 = (undefined1 *)0x1825c435b;
                                              uVar3 = func_0x0001803153a0(TI_System.InvalidOperationException);
                                              puStack_30 = (undefined1 *)0x1825c4363;
                                              uVar3 = func_0x000180315580(uVar3);
                                              puStack_30 = (undefined1 *)0x1825c4372;
                                              uVar8 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
                                              puStack_30 = (undefined1 *)0x1825c4380;
                                              System_InvalidOperationException___ctor(uVar3,uVar8,0)
                                              ;
                                              puStack_30 = (undefined1 *)0x1825c438c;
                                              uVar8 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
                                              puStack_30 = (undefined1 *)0x1825c4397;
                                              FUN_180315590(uVar3,uVar8);
                                              pcVar2 = (code *)swi(3);
                                              (*pcVar2)();
                                              return;
                                            }
                                            if (plVar6 == param_2) {
                                              puStack_30 = &LAB_1825c432e;
                                              UnityEngine_UIElements_VisualElement_Hierarchy__Add
                                                        (&stack0x00000010,lVar4,0);
                                            }
                                            else {
                                              puStack_30 = (undefined1 *)0x1825c4316;
                                              UnityEngine_UIElements_VisualElement__Add(plVar6);
                                            }
                                            *(longlong **)(lVar4 + 0x288) = param_2;
                                            puStack_30 = (undefined1 *)0x1825c4344;
                                            func_0x000180314690(lVar4 + 0x288,param_2);
                                          }
                                          return;
                                        }
                                      }
                                      FUN_1803155d0();
                                      pcVar2 = (code *)swi(3);
                                      (*pcVar2)();
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

