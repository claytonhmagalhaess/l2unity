// SparkGmWindow__MontaJogador__18060eac0 @ 0x18060eac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__MontaJogador__18060eac0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort uVar12;
  uint uVar13;
  longlong lStackX_20;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 auStack_e8 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (cRam00000001834b3c25 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_0);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_10);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_1);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_2);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_3);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_4);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_5);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_6);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_7);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_8);
    FUN_180315380(MD_SparkGmWindow._MontaJogador_b__49_9);
    FUN_180315380(TI_SparkGmWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_SparkGmWindow.__c._MontaJogador_b__49_11);
    FUN_180315380(MD_SparkGmWindow.__c__DisplayClass49_0._MontaJogador_b__12);
    FUN_180315380(TI_SparkGmWindow.<>c__DisplayClass49_0);
    FUN_180315380(TI_SparkGmWindow.<>c);
    FUN_180315380(TI_System.ValueTuple<string,System.Action>__);
    FUN_180315380(MR_System.ValueTuple<string,System.Action>..ctor);
    FUN_180315380(LIT_"'Track Player'");
    FUN_180315380(LIT_"'Show log'");
    FUN_180315380(LIT_"'Quests'");
    FUN_180315380(LIT_"'Go to'");
    FUN_180315380(LIT_"'Track Chat'");
    FUN_180315380(LIT_"'Type a name (or target a player) and choose what to see.'");
    FUN_180315380(LIT_"'Inventory'");
    FUN_180315380(LIT_"'Skills'");
    FUN_180315380(LIT_"'Track Player: a green line to where the player clicks + ...");
    FUN_180315380(LIT_"'Info page'");
    FUN_180315380(LIT_"'Stop'");
    FUN_180315380(LIT_"'Recall'");
    FUN_180315380(LIT_"'Status'");
    FUN_180315380(LIT_"'TRACKING'");
    FUN_180315380(LIT_"'Warehouse'");
    cRam00000001834b3c25 = '\x01';
  }
  lStackX_20 = 0;
  auStack_e8[0] = 0;
  lVar5 = func_0x000180314710(TI_System.ValueTuple<string,System.Action>__,4);
  uVar6 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_0,0);
  uStack_148 = 0;
  uStack_140 = 0;
  System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
            (&uStack_148,LIT_"'Status'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
  if (lVar5 == 0) goto DAT_18060fbaa;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined4 *)(lVar5 + 0x20) = (undefined4)uStack_148;
    *(undefined4 *)(lVar5 + 0x24) = uStack_148._4_4_;
    *(undefined4 *)(lVar5 + 0x28) = (undefined4)uStack_140;
    *(undefined4 *)(lVar5 + 0x2c) = uStack_140._4_4_;
    func_0x000180314690(lVar5 + 0x20,0);
    uVar6 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_1,0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
              (&uStack_d8,LIT_"'Inventory'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_d8;
      *(undefined4 *)(lVar5 + 0x34) = uStack_d8._4_4_;
      *(undefined4 *)(lVar5 + 0x38) = (undefined4)uStack_d0;
      *(undefined4 *)(lVar5 + 0x3c) = uStack_d0._4_4_;
      func_0x000180314690(lVar5 + 0x30,0);
      uVar6 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_2,0);
      uStack_158 = 0;
      uStack_150 = 0;
      System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                (&uStack_158,LIT_"'Skills'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined4 *)(lVar5 + 0x40) = (undefined4)uStack_158;
        *(undefined4 *)(lVar5 + 0x44) = uStack_158._4_4_;
        *(undefined4 *)(lVar5 + 0x48) = (undefined4)uStack_150;
        *(undefined4 *)(lVar5 + 0x4c) = uStack_150._4_4_;
        func_0x000180314690(lVar5 + 0x40,0);
        uVar6 = func_0x000180315580(TI_System.Action);
        FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_3,0);
        uStack_f8 = 0;
        uStack_f0 = 0;
        System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                  (&uStack_f8,LIT_"'Quests'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
        if (3 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + 0x50) = (undefined4)uStack_f8;
          *(undefined4 *)(lVar5 + 0x54) = uStack_f8._4_4_;
          *(undefined4 *)(lVar5 + 0x58) = (undefined4)uStack_f0;
          *(undefined4 *)(lVar5 + 0x5c) = uStack_f0._4_4_;
          func_0x000180314690(lVar5 + 0x50,0);
          if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar6 = SparkGmWindow__Botoes(lVar5,0);
          if (param_2 != 0) {
            UnityEngine_UIElements_VisualElement__Add(param_2,uVar6,0);
            lVar5 = func_0x000180314710(TI_System.ValueTuple<string,System.Action>__,4);
            uVar6 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_4,0);
            uStack_c8 = 0;
            uStack_c0 = 0;
            System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                      (&uStack_c8,LIT_"'Warehouse'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined4 *)(lVar5 + 0x20) = (undefined4)uStack_c8;
                *(undefined4 *)(lVar5 + 0x24) = uStack_c8._4_4_;
                *(undefined4 *)(lVar5 + 0x28) = (undefined4)uStack_c0;
                *(undefined4 *)(lVar5 + 0x2c) = uStack_c0._4_4_;
                func_0x000180314690(lVar5 + 0x20,0);
                uVar6 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_5,0);
                uStack_b8 = 0;
                uStack_b0 = 0;
                System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                          (&uStack_b8,LIT_"'Go to'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_b8;
                  *(undefined4 *)(lVar5 + 0x34) = uStack_b8._4_4_;
                  *(undefined4 *)(lVar5 + 0x38) = (undefined4)uStack_b0;
                  *(undefined4 *)(lVar5 + 0x3c) = uStack_b0._4_4_;
                  func_0x000180314690(lVar5 + 0x30,0);
                  uVar6 = func_0x000180315580(TI_System.Action);
                  FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_6,0);
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                            (&uStack_a8,LIT_"'Recall'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined4 *)(lVar5 + 0x40) = (undefined4)uStack_a8;
                    *(undefined4 *)(lVar5 + 0x44) = uStack_a8._4_4_;
                    *(undefined4 *)(lVar5 + 0x48) = (undefined4)uStack_a0;
                    *(undefined4 *)(lVar5 + 0x4c) = uStack_a0._4_4_;
                    func_0x000180314690(lVar5 + 0x40,0);
                    uVar6 = func_0x000180315580(TI_System.Action);
                    FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_7,0);
                    uStack_98 = 0;
                    uStack_90 = 0;
                    System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                              (&uStack_98,LIT_"'Info page'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
                    if (3 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined4 *)(lVar5 + 0x50) = (undefined4)uStack_98;
                      *(undefined4 *)(lVar5 + 0x54) = uStack_98._4_4_;
                      *(undefined4 *)(lVar5 + 0x58) = (undefined4)uStack_90;
                      *(undefined4 *)(lVar5 + 0x5c) = uStack_90._4_4_;
                      func_0x000180314690(lVar5 + 0x50,0);
                      uVar6 = SparkGmWindow__Botoes(lVar5,0);
                      UnityEngine_UIElements_VisualElement__Add(param_2,uVar6,0);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar6 = SparkEstilo__Divisor__18071f770(0);
                      UnityEngine_UIElements_VisualElement__Add(param_2,uVar6,0);
                      uVar6 = SparkGmWindow__Secao(LIT_"'TRACKING'",0);
                      UnityEngine_UIElements_VisualElement__Add(param_2,uVar6,0);
                      lVar5 = func_0x000180314710(TI_System.ValueTuple<string,System.Action>__,4);
                      uVar6 = func_0x000180315580(TI_System.Action);
                      FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_8,0);
                      uStack_88 = 0;
                      uStack_80 = 0;
                      System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                                (&uStack_88,LIT_"'Track Player'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
                      if (lVar5 == 0) goto DAT_18060fbaa;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined4 *)(lVar5 + 0x20) = (undefined4)uStack_88;
                        *(undefined4 *)(lVar5 + 0x24) = uStack_88._4_4_;
                        *(undefined4 *)(lVar5 + 0x28) = (undefined4)uStack_80;
                        *(undefined4 *)(lVar5 + 0x2c) = uStack_80._4_4_;
                        func_0x000180314690(lVar5 + 0x20,0);
                        uVar6 = func_0x000180315580(TI_System.Action);
                        FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_9,0);
                        uStack_78 = 0;
                        uStack_70 = 0;
                        System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                                  (&uStack_78,LIT_"'Track Chat'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
                        if (1 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_78;
                          *(undefined4 *)(lVar5 + 0x34) = uStack_78._4_4_;
                          *(undefined4 *)(lVar5 + 0x38) = (undefined4)uStack_70;
                          *(undefined4 *)(lVar5 + 0x3c) = uStack_70._4_4_;
                          func_0x000180314690(lVar5 + 0x30,0);
                          uVar6 = func_0x000180315580(TI_System.Action);
                          FUN_1816a9c60(uVar6,param_1,MD_SparkGmWindow._MontaJogador_b__49_10,0);
                          uStack_138 = 0;
                          uStack_130 = 0;
                          System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                                    (&uStack_138,LIT_"'Stop'",uVar6,MR_System.ValueTuple<string,System.Action>..ctor);
                          if (2 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined4 *)(lVar5 + 0x40) = (undefined4)uStack_138;
                            *(undefined4 *)(lVar5 + 0x44) = uStack_138._4_4_;
                            *(undefined4 *)(lVar5 + 0x48) = (undefined4)uStack_130;
                            *(undefined4 *)(lVar5 + 0x4c) = uStack_130._4_4_;
                            func_0x000180314690(lVar5 + 0x40,0);
                            if (*(int *)(TI_SparkGmWindow.<>c + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            uVar6 = LIT_"'Show log'";
                            lVar7 = *(longlong *)(*(longlong *)(TI_SparkGmWindow.<>c + 0xb8) + 0x10)
                            ;
                            if (lVar7 == 0) {
                              if (*(int *)(TI_SparkGmWindow.<>c + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar9 = **(undefined8 **)(TI_SparkGmWindow.<>c + 0xb8);
                              lVar7 = func_0x000180315580(TI_System.Action);
                              FUN_1816a9c60(lVar7,uVar9,MD_SparkGmWindow.__c._MontaJogador_b__49_11,0);
                              *(longlong *)(*(longlong *)(TI_SparkGmWindow.<>c + 0xb8) + 0x10) =
                                   lVar7;
                              func_0x000180314690(*(longlong *)(TI_SparkGmWindow.<>c + 0xb8) + 0x10,
                                                  lVar7);
                            }
                            uStack_118 = 0;
                            uStack_110 = 0;
                            System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                                      (&uStack_118,uVar6,lVar7,MR_System.ValueTuple<string,System.Action>..ctor);
                            if (*(uint *)(lVar5 + 0x18) < 4) {
                              FUN_1803155c0();
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            *(undefined4 *)(lVar5 + 0x50) = (undefined4)uStack_118;
                            *(undefined4 *)(lVar5 + 0x54) = uStack_118._4_4_;
                            *(undefined4 *)(lVar5 + 0x58) = (undefined4)uStack_110;
                            *(undefined4 *)(lVar5 + 0x5c) = uStack_110._4_4_;
                            func_0x000180314690(lVar5 + 0x50,0);
                            if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            uVar6 = SparkGmWindow__Botoes(lVar5,0);
                            UnityEngine_UIElements_VisualElement__Add(param_2,uVar6,0);
                            lVar7 = SparkGmWindow__Linha(0);
                            *(undefined4 *)(param_1 + 0x128) = 0;
                            lVar5 = *(longlong *)(*(longlong *)(TI_SparkGmWindow + 0xb8) + 8);
                            if (lVar5 == 0) {
code_r0x00018060fbc2:
                              FUN_1803155d0();
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            for (uVar13 = 0; (int)uVar13 < *(int *)(lVar5 + 0x18);
                                uVar13 = uVar13 + 1) {
                              lVar8 = func_0x000180315580(TI_SparkGmWindow.<>c__DisplayClass49_0);
                              SparkMapaWindow_Loja___ctor__1803f01b0(lVar8,0);
                              if (lVar8 == 0) goto code_r0x00018060fbc2;
                              *(longlong *)(lVar8 + 0x18) = param_1;
                              func_0x000180314690(lVar8 + 0x18,param_1);
                              if (*(uint *)(lVar5 + 0x18) <= uVar13) {
                                FUN_1803155c0();
                                pcVar4 = (code *)swi(3);
                                (*pcVar4)();
                                return;
                              }
                              uVar6 = *(undefined8 *)(lVar5 + ((longlong)(int)uVar13 + 2) * 0x10);
                              uVar1 = *(uint *)(lVar5 + 8 + ((longlong)(int)uVar13 + 2) * 0x10);
                              *(uint *)(lVar8 + 0x10) = uVar1;
                              *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | uVar1;
                              uVar9 = func_0x000180315580(TI_System.Action<bool>);
                              FUN_180b7dfa0(uVar9,lVar8,MD_SparkGmWindow.__c__DisplayClass49_0._MontaJogador_b__12,0);
                              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              lVar8 = SparkEstilo__Marcador__180721460
                                                (uVar6,uVar9,auStack_e8,&lStackX_20,0);
                              if (lStackX_20 == 0) goto code_r0x00018060fbc2;
                              (**(code **)(lStackX_20 + 0x18))
                                        (*(undefined8 *)(lStackX_20 + 0x40),1,1,
                                         *(undefined8 *)(lStackX_20 + 0x28));
                              if (lVar8 == 0) goto code_r0x00018060fbc2;
                              plVar10 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                              puVar11 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit
                                                  (&uStack_d8,0x42ac0000,0);
                              if (plVar10 == (longlong *)0x0) goto code_r0x00018060fbc2;
                              lVar3 = *plVar10;
                              uVar6 = *puVar11;
                              uVar2 = *(undefined4 *)(puVar11 + 1);
                              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                uVar12 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar11 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                                        (ulonglong)uVar12 * 0x10) + 0xad) * 0x10 +
                                               0x138 + lVar3);
                                    goto code_r0x00018060f4e9;
                                  }
                                  uVar12 = uVar12 + 1;
                                } while (uVar12 < *(ushort *)(lVar3 + 0x12e));
                              }
                              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018060f4e9:
                              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar2);
                              uStack_f8 = uVar6;
                              (*(code *)*puVar11)(plVar10,&uStack_f8,puVar11[1]);
                              plVar10 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                              uVar6 = func_0x000182601c10(0,0);
                              if (plVar10 == (longlong *)0x0) goto code_r0x00018060fbc2;
                              lVar3 = *plVar10;
                              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                uVar12 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar11 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                                        (ulonglong)uVar12 * 0x10) + 0x3d) * 0x10 +
                                               0x138 + lVar3);
                                    goto code_r0x00018060f579;
                                  }
                                  uVar12 = uVar12 + 1;
                                } while (uVar12 < *(ushort *)(lVar3 + 0x12e));
                              }
                              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x00018060f579:
                              (*(code *)*puVar11)(plVar10,uVar6,puVar11[1]);
                              plVar10 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                              puVar11 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit
                                                  (&uStack_148,0x40000000,0);
                              if (plVar10 == (longlong *)0x0) goto code_r0x00018060fbc2;
                              lVar3 = *plVar10;
                              uVar6 = *puVar11;
                              uVar2 = *(undefined4 *)(puVar11 + 1);
                              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                uVar12 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar11 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                                        (ulonglong)uVar12 * 0x10) + 0x4b) * 0x10 +
                                               0x138 + lVar3);
                                    goto code_r0x00018060f609;
                                  }
                                  uVar12 = uVar12 + 1;
                                } while (uVar12 < *(ushort *)(lVar3 + 0x12e));
                              }
                              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018060f609:
                              uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
                              uStack_158 = uVar6;
                              (*(code *)*puVar11)(plVar10,&uStack_158);
                              if (lVar7 == 0) goto code_r0x00018060fbc2;
                              UnityEngine_UIElements_VisualElement__Add(lVar7,lVar8,0);
                            }
                            UnityEngine_UIElements_VisualElement__Add(param_2,lVar7,0);
                            if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            uVar6 = SparkGmWindow__Dica(LIT_"'Track Player: a green line to where the player clicks + ...",0);
                            UnityEngine_UIElements_VisualElement__Add(param_2,uVar6,0);
                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                              func_0x000180315660(TI_SparkEstilo);
                            }
                            uStack_118 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
                            uStack_110 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
                            uStack_138 = 0;
                            uStack_130 = 0;
                            uStack_128 = 0;
                            func_0x000180cb7cb0(&uStack_138,&uStack_118,MR_System.Nullable<UnityEngine.Color>..ctor);
                            uStack_118 = uStack_138;
                            uStack_110 = uStack_130;
                            uStack_108 = uStack_128;
                            uVar6 = SparkEstilo__Texto__180722af0
                                              (LIT_"'Type a name (or target a player) and choose what to see.'",0xb,&uStack_118,1,0);
                            *(undefined8 *)(param_1 + 0x110) = uVar6;
                            func_0x000180314690(param_1 + 0x110,uVar6);
                            UnityEngine_UIElements_VisualElement__Add(param_2,uVar6,0);
                            if (*(longlong *)(param_1 + 0x110) != 0) {
                              lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(param_1 + 0x110),0);
                              uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                              if (lVar5 != 0) {
                                FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                if (*(longlong *)(param_1 + 0x110) != 0) {
                                  lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                    (*(longlong *)(param_1 + 0x110),0);
                                  uVar6 = func_0x000182601c10(0,0);
                                  if (lVar5 != 0) {
                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                    if (*(longlong *)(param_1 + 0x110) != 0) {
                                      plVar10 = (longlong *)
                                                UnityEngine_UIElements_VisualElement__get_style
                                                          (*(longlong *)(param_1 + 0x110),0);
                                      puVar11 = (undefined8 *)
                                                UnityEngine_UIElements_StyleLength__op_Implicit
                                                          (&uStack_148,0x40800000,0);
                                      if (plVar10 != (longlong *)0x0) {
                                        lVar5 = *plVar10;
                                        uVar6 = *puVar11;
                                        uVar2 = *(undefined4 *)(puVar11 + 1);
                                        if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                          uVar12 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar5 + 0xb0) +
                                                 (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar11 = (undefined8 *)
                                                        ((longlong)
                                                         (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                                  (ulonglong)uVar12 * 0x10) + 0x51)
                                                         * 0x10 + 0x138 + lVar5);
                                              goto code_r0x00018060f8b9;
                                            }
                                            uVar12 = uVar12 + 1;
                                          } while (uVar12 < *(ushort *)(lVar5 + 0x12e));
                                        }
                                        puVar11 = (undefined8 *)
                                                  FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018060f8b9:
                                        uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
                                        uStack_158 = uVar6;
                                        (*(code *)*puVar11)(plVar10,&uStack_158,puVar11[1]);
                                        if (*(longlong *)(param_1 + 0x110) != 0) {
                                          plVar10 = (longlong *)
                                                    UnityEngine_UIElements_VisualElement__get_style
                                                              (*(longlong *)(param_1 + 0x110),0);
                                          puVar11 = (undefined8 *)
                                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                                              (&uStack_148,0x40800000,0);
                                          if (plVar10 != (longlong *)0x0) {
                                            lVar5 = *plVar10;
                                            uVar6 = *puVar11;
                                            uVar2 = *(undefined4 *)(puVar11 + 1);
                                            if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                              uVar12 = 0;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar5 + 0xb0) +
                                                     (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar11 = (undefined8 *)
                                                            ((longlong)
                                                             (*(int *)(*(longlong *)(lVar5 + 0xb0) +
                                                                       8 + (ulonglong)uVar12 * 0x10)
                                                             + 0x4b) * 0x10 + 0x138 + lVar5);
                                                  goto code_r0x00018060f959;
                                                }
                                                uVar12 = uVar12 + 1;
                                              } while (uVar12 < *(ushort *)(lVar5 + 0x12e));
                                            }
                                            puVar11 = (undefined8 *)
                                                      FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018060f959:
                                            uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
                                            uStack_158 = uVar6;
                                            (*(code *)*puVar11)(plVar10,&uStack_158,puVar11[1]);
                                            uVar6 = SparkEstilo__Lista__1807211b0(0);
                                            *(undefined8 *)(param_1 + 0x118) = uVar6;
                                            func_0x000180314690(param_1 + 0x118,uVar6);
                                            if (*(longlong *)(param_1 + 0x118) != 0) {
                                              plVar10 = (longlong *)
                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x118),0);
                                              puVar11 = (undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_148,0,0);
                                              if (plVar10 != (longlong *)0x0) {
                                                lVar5 = *plVar10;
                                                uVar6 = *puVar11;
                                                uVar2 = *(undefined4 *)(puVar11 + 1);
                                                if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                  uVar12 = 0;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar5 + 0xb0) +
                                                         (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle
                                                       ) {
                                                      puVar11 = (undefined8 *)
                                                                ((longlong)
                                                                 (*(int *)(*(longlong *)
                                                                            (lVar5 + 0xb0) + 8 +
                                                                          (ulonglong)uVar12 * 0x10)
                                                                 + 0x57) * 0x10 + 0x138 + lVar5);
                                                      goto code_r0x00018060fa19;
                                                    }
                                                    uVar12 = uVar12 + 1;
                                                  } while (uVar12 < *(ushort *)(lVar5 + 0x12e));
                                                }
                                                puVar11 = (undefined8 *)
                                                          FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x57)
                                                ;
code_r0x00018060fa19:
                                                uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
                                                uStack_158 = uVar6;
                                                (*(code *)*puVar11)(plVar10,&uStack_158,puVar11[1]);
                                                if (*(longlong *)(param_1 + 0x118) != 0) {
                                                  plVar10 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  puVar11 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_148,0,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar5 = *plVar10;
                                                    uVar6 = *puVar11;
                                                    uVar2 = *(undefined4 *)(puVar11 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar12 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             (ulonglong)uVar12 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar5 + 0xb0) + 8 +
                                                                              (ulonglong)uVar12 *
                                                                              0x10) + 0x37) * 0x10 +
                                                                     0x138 + lVar5);
                                                          goto code_r0x00018060fab9;
                                                        }
                                                        uVar12 = uVar12 + 1;
                                                      } while (uVar12 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                            0x37);
code_r0x00018060fab9:
                                                    uStack_150 = CONCAT44(uStack_150._4_4_,uVar2);
                                                    uStack_158 = uVar6;
                                                    (*(code *)*puVar11)(plVar10,&uStack_158,
                                                                        puVar11[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_2,*(undefined8 *)
                                                                        (param_1 + 0x118),0);
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
                            FUN_1803155d0();
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto DAT_18060fbc8;
            }
          }
DAT_18060fbaa:
          FUN_1803155d0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
DAT_18060fbc8:
  FUN_1803155c0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

