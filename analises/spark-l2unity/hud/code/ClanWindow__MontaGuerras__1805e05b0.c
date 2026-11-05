// ClanWindow__MontaGuerras__1805e05b0 @ 0x1805e05b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ClanWindow__MontaGuerras__1805e05b0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar12;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulonglong uVar11;
  
  if (cRam00000001834b3b72 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(MD_ClanWindow.PedeGuerras);
    FUN_180315380(MD_ClanWindow._MontaGuerras_b__110_0);
    FUN_180315380(MD_ClanWindow._MontaGuerras_b__110_1);
    FUN_180315380(MD_ClanWindow._MontaGuerras_b__110_2);
    FUN_180315380(MD_ClanWindow._MontaGuerras_b__110_3);
    FUN_180315380(MD_ClanWindow._MontaGuerras_b__110_4);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Clan name'");
    FUN_180315380(LIT_"'Surrender'");
    FUN_180315380(LIT_"'End War'");
    FUN_180315380(LIT_"'Status'");
    FUN_180315380(LIT_"'Clan'");
    FUN_180315380(LIT_"'Declare War'");
    FUN_180315380(LIT_"'Declare Back'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Refresh'");
    cRam00000001834b3b72 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = ClanWindow__LinhaDeEdicao(0);
  if (lVar4 != 0) {
    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41000000,0);
    if (plVar5 != (longlong *)0x0) {
      lVar8 = *plVar5;
      uVar12 = 0;
      uVar7 = *puVar6;
      uVar1 = *(undefined4 *)(puVar6 + 1);
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        uVar11 = uVar12;
        do {
          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar6 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar11 * 0x10) + 0x4b) *
                      0x10 + 0x138 + lVar8);
            goto code_r0x0001805e0809;
          }
          uVar10 = (short)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805e0809:
      uStack_b8 = uVar7;
      uStack_b0 = uVar1;
      (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_b8 = *(undefined8 *)(lVar8 + 0x50);
      uStack_b0 = *(undefined4 *)(lVar8 + 0x58);
      uStack_ac = *(undefined4 *)(lVar8 + 0x5c);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000180cb7cb0(&uStack_98,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_b8 = uStack_98;
      uStack_b0 = (undefined4)uStack_90;
      uStack_ac = uStack_90._4_4_;
      uStack_a8 = uStack_88;
      uVar7 = ClanWindow__Coluna(LIT_"'Clan name'",0x46,&uStack_b8,0);
      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar7,0);
      uVar7 = SparkEstilo__Campo__18071f2b0(0x10,0xdc,0);
      *(undefined8 *)(param_1 + 0x260) = uVar7;
      func_0x000180314690(param_1 + 0x260,uVar7);
      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar7,0);
      lVar8 = *(longlong *)(param_1 + 0x260);
      uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>);
      FUN_18055b980(uVar7,param_1,MD_ClanWindow._MontaGuerras_b__110_0,0);
      if (lVar8 != 0) {
        FUN_180990d50(lVar8,uVar7,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
        uVar7 = func_0x000180315580(TI_System.Action);
        FUN_1816a9c60(uVar7,param_1,MD_ClanWindow._MontaGuerras_b__110_1,0);
        uVar7 = SparkEstilo__Botao__18071e130(LIT_"'Declare War'",uVar7,100,0,0);
        *(undefined8 *)(param_1 + 600) = uVar7;
        func_0x000180314690(param_1 + 600,uVar7);
        uVar7 = ClanWindow__Pequeno(uVar7,0);
        UnityEngine_UIElements_VisualElement__Add(lVar4,uVar7,0);
        if (lVar3 != 0) {
          UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
          lVar4 = SparkEstilo__Painel__180721ce0(0);
          if (lVar4 != 0) {
            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            uVar7 = func_0x000182601c10(0x3f800000,0);
            if (lVar8 != 0) {
              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
              lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
              UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
              if (lVar8 != 0) {
                lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                if (lVar9 != 0) {
                  FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar7);
                  plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  puVar6 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41980000,0);
                  if (plVar5 != (longlong *)0x0) {
                    lVar9 = *plVar5;
                    uVar7 = *puVar6;
                    uVar1 = *(undefined4 *)(puVar6 + 1);
                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                      uVar11 = uVar12;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar11 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar6 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar11 * 0x10) +
                                    0x43) * 0x10 + 0x138 + lVar9);
                          goto code_r0x0001805e0ae9;
                        }
                        uVar10 = (short)uVar11 + 1;
                        uVar11 = (ulonglong)uVar10;
                      } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                    }
                    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805e0ae9:
                    uStack_b8 = uVar7;
                    uStack_b0 = uVar1;
                    (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                    uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                    if (lVar9 != 0) {
                      FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar9,uVar7);
                      plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                      puVar6 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_b8,0x40c00000,0);
                      if (plVar5 != (longlong *)0x0) {
                        lVar9 = *plVar5;
                        uVar7 = *puVar6;
                        uVar1 = *(undefined4 *)(puVar6 + 1);
                        if (*(ushort *)(lVar9 + 0x12e) != 0) {
                          uVar11 = uVar12;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar11 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar6 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar11 * 0x10) +
                                        0x61) * 0x10 + 0x138 + lVar9);
                              goto code_r0x0001805e0bc9;
                            }
                            uVar10 = (short)uVar11 + 1;
                            uVar11 = (ulonglong)uVar10;
                          } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                        }
                        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x0001805e0bc9:
                        uStack_b8 = uVar7;
                        uStack_b0 = uVar1;
                        (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                        SparkEstilo__CabecalhoDeLista__18071f010(lVar8,0);
                        lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uStack_b8 = *(undefined8 *)(lVar9 + 0x50);
                        uStack_b0 = *(undefined4 *)(lVar9 + 0x58);
                        uStack_ac = *(undefined4 *)(lVar9 + 0x5c);
                        uStack_70 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        func_0x000180cb7cb0(&uStack_80,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                        uStack_b8 = uStack_80;
                        uStack_b0 = (undefined4)uStack_78;
                        uStack_ac = uStack_78._4_4_;
                        uStack_a8 = uStack_70;
                        uVar7 = ClanWindow__Coluna(LIT_"''",0x16,&uStack_b8,0);
                        UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7,0);
                        lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uStack_b8 = *(undefined8 *)(lVar9 + 0x50);
                        uStack_b0 = *(undefined4 *)(lVar9 + 0x58);
                        uStack_ac = *(undefined4 *)(lVar9 + 0x5c);
                        uStack_58 = 0;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        func_0x000180cb7cb0(&uStack_68,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                        uStack_b8 = uStack_68;
                        uStack_b0 = (undefined4)uStack_60;
                        uStack_ac = uStack_60._4_4_;
                        uStack_a8 = uStack_58;
                        uVar7 = ClanWindow__Coluna(LIT_"'Clan'",300,&uStack_b8,0);
                        UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7,0);
                        lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uStack_b8 = *(undefined8 *)(lVar9 + 0x50);
                        uStack_b0 = *(undefined4 *)(lVar9 + 0x58);
                        uStack_ac = *(undefined4 *)(lVar9 + 0x5c);
                        uStack_40 = 0;
                        uStack_50 = 0;
                        uStack_48 = 0;
                        func_0x000180cb7cb0(&uStack_50,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                        uStack_b8 = uStack_50;
                        uStack_b0 = (undefined4)uStack_48;
                        uStack_ac = uStack_48._4_4_;
                        uStack_a8 = uStack_40;
                        uVar7 = ClanWindow__Coluna(LIT_"'Status'",0x8c,&uStack_b8,0);
                        UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7,0);
                        UnityEngine_UIElements_VisualElement__Add(lVar4,lVar8,0);
                        uVar7 = SparkEstilo__Lista__1807211b0(0);
                        *(undefined8 *)(param_1 + 0x238) = uVar7;
                        func_0x000180314690(param_1 + 0x238,uVar7);
                        UnityEngine_UIElements_VisualElement__Add
                                  (lVar4,*(undefined8 *)(param_1 + 0x238),0);
                        UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
                        lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                        UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
                        if (lVar4 != 0) {
                          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                          uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                          if (lVar8 != 0) {
                            FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                            uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                            if (lVar8 != 0) {
                              FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                              plVar5 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                              puVar6 = (undefined8 *)
                                       UnityEngine_UIElements_StyleLength__op_Implicit
                                                 (&uStack_b8,0x41000000,0);
                              if (plVar5 != (longlong *)0x0) {
                                lVar8 = *plVar5;
                                uVar7 = *puVar6;
                                uVar1 = *(undefined4 *)(puVar6 + 1);
                                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar12 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar6 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                         uVar12 * 0x10) + 0x51) * 0x10 + 0x138 +
                                               lVar8);
                                      goto code_r0x0001805e0e99;
                                    }
                                    uVar10 = (short)uVar12 + 1;
                                    uVar12 = (ulonglong)uVar10;
                                  } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                                }
                                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e0e99:
                                uStack_b8 = uVar7;
                                uStack_b0 = uVar1;
                                (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                                uVar7 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar7,param_1,MD_ClanWindow._MontaGuerras_b__110_2,0);
                                uVar7 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Declare Back'",uVar7,100,0,0);
                                *(undefined8 *)(param_1 + 0x250) = uVar7;
                                func_0x000180314690(param_1 + 0x250,uVar7);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,uVar7,0);
                                uVar7 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar7,param_1,MD_ClanWindow._MontaGuerras_b__110_3,0);
                                uVar7 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'End War'",uVar7,0x5a,0,0);
                                *(undefined8 *)(param_1 + 0x240) = uVar7;
                                func_0x000180314690(param_1 + 0x240,uVar7);
                                uVar7 = ClanWindow__Rodape(uVar7,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,uVar7,0);
                                uVar7 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar7,param_1,MD_ClanWindow._MontaGuerras_b__110_4,0);
                                uVar7 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Surrender'",uVar7,0x5a,1,0);
                                *(undefined8 *)(param_1 + 0x248) = uVar7;
                                func_0x000180314690(param_1 + 0x248,uVar7);
                                uVar7 = ClanWindow__Rodape(uVar7,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,uVar7,0);
                                uVar7 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar7,param_1,MD_ClanWindow.PedeGuerras,0);
                                uVar7 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Refresh'",uVar7,0x50,0,0);
                                uVar7 = ClanWindow__Rodape(uVar7,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,uVar7,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
                                return lVar3;
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
  lVar3 = (*pcVar2)();
  return lVar3;
}

