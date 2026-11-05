// ClanWindow__MontaAlianca__1805dec00 @ 0x1805dec00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ClanWindow__MontaAlianca__1805dec00(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ushort uVar10;
  ulonglong uVar12;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar13;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uVar11;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  if (cRam00000001834b3b76 == '\0') {
    FUN_180315380(TI_System.Action<byte__>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_ClanWindow._MontaAlianca_b__123_0);
    FUN_180315380(MD_ClanWindow._MontaAlianca_b__123_3);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_ClanWindow.Envio);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_SparkClan.GravaAllyCrest);
    FUN_180315380(MD_SparkClan.InfoDaAlianca);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_ClanWindow.__c._MontaAlianca_b__123_1);
    FUN_180315380(MD_ClanWindow.__c._MontaAlianca_b__123_2);
    FUN_180315380(TI_ClanWindow.<>c);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Alliance crest (8x12)'");
    FUN_180315380(LIT_"'To create an alliance, the clan leader of a level 5 clan...");
    FUN_180315380(LIT_"'Dissolve Alliance'");
    FUN_180315380(LIT_"'Dismiss a clan from the alliance'");
    FUN_180315380(LIT_"'Dismiss'");
    FUN_180315380(LIT_"'Choose the alliance crest'");
    FUN_180315380(LIT_"'Alliance Info'");
    FUN_180315380(LIT_"'Leave Alliance'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Invite Target Clan'");
    cRam00000001834b3b76 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar2,0);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = SparkEstilo__Painel__180721ce0(0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar4 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        uVar12 = 0;
        SparkEstilo__Espaco__18071fb80
                  (lVar3,0x41200000,0x41400000,0x41200000,CONCAT44(uVar13,0x41400000),0);
        uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
        *(undefined8 *)(param_1 + 0x280) = uVar5;
        func_0x000180314690(param_1 + 0x280,uVar5);
        if (*(longlong *)(param_1 + 0x280) != 0) {
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x280),0)
          ;
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41800000,0);
          if (plVar6 != (longlong *)0x0) {
            lVar4 = *plVar6;
            uVar5 = *puVar7;
            uVar13 = *(undefined4 *)(puVar7 + 1);
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              uVar11 = uVar12;
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar11 * 0x10) + 0xad) *
                            0x10 + 0x138 + lVar4);
                  goto code_r0x0001805def49;
                }
                uVar10 = (short)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
              } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805def49:
            uStack_b8 = uVar5;
            uStack_b0 = uVar13;
            (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
            if (*(longlong *)(param_1 + 0x280) != 0) {
              plVar6 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0x280),0);
              puVar7 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41c00000,0);
              if (plVar6 != (longlong *)0x0) {
                lVar4 = *plVar6;
                uVar5 = *puVar7;
                uVar13 = *(undefined4 *)(puVar7 + 1);
                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                  uVar11 = uVar12;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar7 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar11 * 0x10) + 0x43) *
                                0x10 + 0x138 + lVar4);
                      goto code_r0x0001805defe9;
                    }
                    uVar10 = (short)uVar11 + 1;
                    uVar11 = (ulonglong)uVar10;
                  } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805defe9:
                uStack_b8 = uVar5;
                uStack_b0 = uVar13;
                (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                if (*(longlong *)(param_1 + 0x280) != 0) {
                  plVar6 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x280),0);
                  puVar7 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41200000,0);
                  if (plVar6 != (longlong *)0x0) {
                    lVar4 = *plVar6;
                    uVar5 = *puVar7;
                    uVar13 = *(undefined4 *)(puVar7 + 1);
                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                      uVar11 = uVar12;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar11 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar7 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar11 * 0x10) +
                                    0x4f) * 0x10 + 0x138 + lVar4);
                          goto code_r0x0001805df089;
                        }
                        uVar10 = (short)uVar11 + 1;
                        uVar11 = (ulonglong)uVar10;
                      } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                    }
                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805df089:
                    uStack_b8 = uVar5;
                    uStack_b0 = uVar13;
                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                    UnityEngine_UIElements_VisualElement__Add
                              (lVar3,*(undefined8 *)(param_1 + 0x280),0);
                    lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                    UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
                    if (lVar4 != 0) {
                      lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                      uVar5 = func_0x000182601c10(0x3f800000,0);
                      if (lVar8 != 0) {
                        FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                        lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uStack_b8 = *(undefined8 *)(lVar8 + 0x70);
                        uStack_b0 = *(undefined4 *)(lVar8 + 0x78);
                        uStack_ac = *(undefined4 *)(lVar8 + 0x7c);
                        uStack_68 = 0;
                        uStack_78 = 0;
                        uStack_70 = 0;
                        func_0x000180cb7cb0(&uStack_78,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                        uStack_98 = uStack_78;
                        uStack_90 = uStack_70;
                        uStack_88 = uStack_68;
                        uVar5 = SparkEstilo__Texto__180722af0(LIT_"''",0xe,&uStack_98,1,0);
                        *(undefined8 *)(param_1 + 0x270) = uVar5;
                        func_0x000180314690(param_1 + 0x270,uVar5);
                        UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                        lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uStack_b8 = *(undefined8 *)(lVar8 + 0x50);
                        uStack_b0 = *(undefined4 *)(lVar8 + 0x58);
                        uStack_ac = *(undefined4 *)(lVar8 + 0x5c);
                        uStack_50 = 0;
                        uStack_60 = 0;
                        uStack_58 = 0;
                        func_0x000180cb7cb0(&uStack_60,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                        uStack_98 = uStack_60;
                        uStack_90 = uStack_58;
                        uStack_88 = uStack_50;
                        uVar5 = SparkEstilo__Texto__180722af0(LIT_"''",0xb,&uStack_98,0,0);
                        *(undefined8 *)(param_1 + 0x278) = uVar5;
                        func_0x000180314690(param_1 + 0x278,uVar5);
                        UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                        UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
                        uVar5 = func_0x000180315580(TI_System.Action);
                        FUN_1816a9c60(uVar5,0,MD_SparkClan.InfoDaAlianca,0);
                        uVar5 = SparkEstilo__Botao__18071e130(LIT_"'Alliance Info'",uVar5,100,0,0);
                        UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                        if (lVar2 != 0) {
                          UnityEngine_UIElements_VisualElement__Add(lVar2,lVar3,0);
                          lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                          UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
                          if (lVar3 != 0) {
                            lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
                            uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                            if (lVar4 != 0) {
                              FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                              plVar6 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
                              puVar7 = (undefined8 *)
                                       UnityEngine_UIElements_StyleLength__op_Implicit
                                                 (&uStack_b8,0x41200000,0);
                              if (plVar6 != (longlong *)0x0) {
                                lVar4 = *plVar6;
                                uVar5 = *puVar7;
                                uVar13 = *(undefined4 *)(puVar7 + 1);
                                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                  uVar11 = uVar12;
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar11 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar7 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                         uVar11 * 0x10) + 0x51) * 0x10 + 0x138 +
                                               lVar4);
                                      goto code_r0x0001805df379;
                                    }
                                    uVar10 = (short)uVar11 + 1;
                                    uVar11 = (ulonglong)uVar10;
                                  } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                                }
                                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805df379:
                                uStack_b8 = uVar5;
                                uStack_b0 = uVar13;
                                (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                uVar5 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar5,param_1,MD_ClanWindow._MontaAlianca_b__123_0,0);
                                uVar5 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Invite Target Clan'",uVar5,0x8c,0,0);
                                *(undefined8 *)(param_1 + 0x298) = uVar5;
                                func_0x000180314690(param_1 + 0x298,uVar5);
                                UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                                if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar5 = LIT_"'Leave Alliance'";
                                lVar4 = *(longlong *)
                                         (*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x58);
                                if (lVar4 == 0) {
                                  if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
                                    func_0x000180315660();
                                  }
                                  uVar9 = **(undefined8 **)(TI_ClanWindow.<>c + 0xb8);
                                  lVar4 = func_0x000180315580(TI_System.Action);
                                  FUN_1816a9c60(lVar4,uVar9,MD_ClanWindow.__c._MontaAlianca_b__123_1,0);
                                  *(longlong *)(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x58) =
                                       lVar4;
                                  func_0x000180314690(*(longlong *)(TI_ClanWindow.<>c + 0xb8) +
                                                      0x58,lVar4);
                                }
                                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar5 = SparkEstilo__Botao__18071e130(uVar5,lVar4,0x78,1,0);
                                *(undefined8 *)(param_1 + 0x2a0) = uVar5;
                                func_0x000180314690(param_1 + 0x2a0,uVar5);
                                if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar5 = ClanWindow__Rodape(uVar5,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                                if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar5 = LIT_"'Dissolve Alliance'";
                                lVar4 = *(longlong *)
                                         (*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x68);
                                if (lVar4 == 0) {
                                  if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
                                    func_0x000180315660();
                                  }
                                  uVar9 = **(undefined8 **)(TI_ClanWindow.<>c + 0xb8);
                                  lVar4 = func_0x000180315580(TI_System.Action);
                                  FUN_1816a9c60(lVar4,uVar9,MD_ClanWindow.__c._MontaAlianca_b__123_2,0);
                                  *(longlong *)(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x68) =
                                       lVar4;
                                  func_0x000180314690(*(longlong *)(TI_ClanWindow.<>c + 0xb8) +
                                                      0x68,lVar4);
                                }
                                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar5 = SparkEstilo__Botao__18071e130(uVar5,lVar4,0x82,1,0);
                                *(undefined8 *)(param_1 + 0x2b0) = uVar5;
                                func_0x000180314690(param_1 + 0x2b0,uVar5);
                                if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar5 = ClanWindow__Rodape(uVar5,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar2,lVar3,0);
                                uVar5 = ClanWindow__Secao(LIT_"'Dismiss a clan from the alliance'",0);
                                UnityEngine_UIElements_VisualElement__Add(lVar2,uVar5,0);
                                lVar3 = ClanWindow__LinhaDeEdicao(0);
                                uVar5 = SparkEstilo__Campo__18071f2b0(0x10,0xdc,0);
                                *(undefined8 *)(param_1 + 0x288) = uVar5;
                                func_0x000180314690(param_1 + 0x288,uVar5);
                                if (lVar3 != 0) {
                                  UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                                  uVar5 = func_0x000180315580(TI_System.Action);
                                  FUN_1816a9c60(uVar5,param_1,MD_ClanWindow._MontaAlianca_b__123_3,0);
                                  uVar5 = SparkEstilo__Botao__18071e130
                                                    (LIT_"'Dismiss'",uVar5,0x50,1,0);
                                  *(undefined8 *)(param_1 + 0x2a8) = uVar5;
                                  func_0x000180314690(param_1 + 0x2a8,uVar5);
                                  uVar5 = ClanWindow__Pequeno(uVar5,0);
                                  UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                                  UnityEngine_UIElements_VisualElement__Add(lVar2,lVar3,0);
                                  uVar5 = ClanWindow__Secao(LIT_"'Alliance crest (8x12)'",0);
                                  UnityEngine_UIElements_VisualElement__Add(lVar2,uVar5,0);
                                  uVar5 = func_0x000180315580(TI_System.Action<byte__>);
                                  FUN_18055b980(uVar5,0,MD_SparkClan.GravaAllyCrest,0);
                                  uVar9 = func_0x000180315580(TI_ClanWindow.Envio);
                                  ClanWindow_Envio___ctor
                                            (uVar9,8,0xc,3,LIT_"'Choose the alliance crest'",uVar5,0);
                                  *(undefined8 *)(param_1 + 0x290) = uVar9;
                                  func_0x000180314690(param_1 + 0x290,uVar9);
                                  if (*(longlong *)(param_1 + 0x290) != 0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (lVar2,*(undefined8 *)
                                                      (*(longlong *)(param_1 + 0x290) + 0x10),0);
                                    lVar3 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                    uStack_b8 = *(undefined8 *)(lVar3 + 0x50);
                                    uStack_b0 = *(undefined4 *)(lVar3 + 0x58);
                                    uStack_ac = *(undefined4 *)(lVar3 + 0x5c);
                                    uStack_88 = 0;
                                    uStack_98 = 0;
                                    uStack_90 = 0;
                                    func_0x000180cb7cb0(&uStack_98,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                    uStack_b8 = uStack_98;
                                    uStack_b0 = (undefined4)uStack_90;
                                    uStack_ac = uStack_90._4_4_;
                                    uStack_a8 = uStack_88;
                                    lVar3 = SparkEstilo__Texto__180722af0
                                                      (LIT_"'To create an alliance, the clan leader of a level 5 clan...",0xb,&uStack_b8,0,0);
                                    if (lVar3 != 0) {
                                      lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                                        (lVar3,0);
                                      uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                      if (lVar4 != 0) {
                                        FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                                        plVar6 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar3,0);
                                        puVar7 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_b8,0x41600000,0);
                                        if (plVar6 != (longlong *)0x0) {
                                          lVar4 = *plVar6;
                                          uVar5 = *puVar7;
                                          uVar13 = *(undefined4 *)(puVar7 + 1);
                                          if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar4 + 0xb0) + uVar12 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar7 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8
                                                                   + uVar12 * 0x10) + 0x51) * 0x10 +
                                                          0x138 + lVar4);
                                                goto code_r0x0001805df8f9;
                                              }
                                              uVar10 = (short)uVar12 + 1;
                                              uVar12 = (ulonglong)uVar10;
                                            } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                                          }
                                          puVar7 = (undefined8 *)
                                                   FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805df8f9:
                                          uStack_b8 = uVar5;
                                          uStack_b0 = uVar13;
                                          (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                          UnityEngine_UIElements_VisualElement__Add(lVar2,lVar3,0);
                                          return lVar2;
                                        }
                                      }
                                    }
                                  }
                                }
                                FUN_1803155d0();
                                pcVar1 = (code *)swi(3);
                                lVar2 = (*pcVar1)();
                                return lVar2;
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
  lVar2 = (*pcVar1)();
  return lVar2;
}

