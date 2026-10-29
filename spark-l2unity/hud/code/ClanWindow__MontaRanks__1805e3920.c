// ClanWindow__MontaRanks__1805e3920 @ 0x1805e3920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ClanWindow__MontaRanks__1805e3920(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
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
  ulonglong uVar10;
  
  if (cRam00000001834b3b6a == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_ClanWindow._MontaRanks_b__87_0);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Clan Hall'");
    FUN_180315380(LIT_"'Save Privileges'");
    FUN_180315380(LIT_"'Select a rank'");
    FUN_180315380(LIT_"'Castle'");
    FUN_180315380(LIT_"'System'");
    FUN_180315380(LIT_"'Pick a rank on the left to see and edit its privileges.'");
    FUN_180315380(LIT_"'Ranks'");
    cRam00000001834b3b6a = '\x01';
  }
  lVar2 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar2,0);
  if (lVar2 != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
    uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar3 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar3 = SparkEstilo__Painel__180721ce0(0);
      if (lVar3 != 0) {
        plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x432a0000,0);
        if (plVar5 != (longlong *)0x0) {
          lVar7 = *plVar5;
          uVar11 = 0;
          uVar4 = *puVar6;
          uVar13 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar10 = uVar11;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) + 0xad) * 0x10
                          + 0x138 + lVar7);
                goto code_r0x0001805e3b59;
              }
              uVar9 = (short)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805e3b59:
          uStack_b8 = uVar4;
          uStack_b0 = uVar13;
          (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
          plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
          puVar6 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41200000,0);
          if (plVar5 != (longlong *)0x0) {
            lVar7 = *plVar5;
            uVar4 = *puVar6;
            uVar13 = *(undefined4 *)(puVar6 + 1);
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar10 = uVar11;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) + 0x4f) *
                            0x10 + 0x138 + lVar7);
                  goto code_r0x0001805e3bf9;
                }
                uVar9 = (short)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
              } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805e3bf9:
            uStack_b8 = uVar4;
            uStack_b0 = uVar13;
            (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
            lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
            uStack_b8 = *(undefined8 *)(lVar7 + 0x50);
            uStack_b0 = *(undefined4 *)(lVar7 + 0x58);
            uStack_ac = *(undefined4 *)(lVar7 + 0x5c);
            uStack_88 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            func_0x000180cb7cb0(&uStack_98,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
            uStack_b8 = uStack_98;
            uStack_b0 = (undefined4)uStack_90;
            uStack_ac = uStack_90._4_4_;
            uStack_a8 = uStack_88;
            uVar13 = 0;
            uVar4 = SparkEstilo__Texto__180722af0(LIT_"'Ranks'",0xb,&uStack_b8,1,0);
            uVar12 = CONCAT44(uVar13,0x41000000);
            SparkEstilo__Espaco__18071fb80(uVar4,0x40c00000,0,0x40800000,uVar12,0);
            uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
            UnityEngine_UIElements_VisualElement__Add(lVar3,uVar4,0);
            uVar4 = SparkEstilo__Lista__1807211b0(0);
            *(undefined8 *)(param_1 + 0x1c8) = uVar4;
            func_0x000180314690(param_1 + 0x1c8,uVar4);
            UnityEngine_UIElements_VisualElement__Add(lVar3,*(undefined8 *)(param_1 + 0x1c8),0);
            UnityEngine_UIElements_VisualElement__Add(lVar2,lVar3,0);
            lVar3 = SparkEstilo__Painel__180721ce0(0);
            if (lVar3 != 0) {
              lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
              uVar4 = func_0x000182601c10(0x3f800000,0);
              if (lVar7 != 0) {
                FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                SparkEstilo__Espaco__18071fb80
                          (lVar3,0x41000000,0x41200000,0x41000000,CONCAT44(uVar13,0x41400000),0);
                lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                uStack_b8 = *(undefined8 *)(lVar7 + 0x70);
                uStack_b0 = *(undefined4 *)(lVar7 + 0x78);
                uStack_ac = *(undefined4 *)(lVar7 + 0x7c);
                uStack_70 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                func_0x000180cb7cb0(&uStack_80,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                uStack_b8 = uStack_80;
                uStack_b0 = (undefined4)uStack_78;
                uStack_ac = uStack_78._4_4_;
                uStack_a8 = uStack_70;
                uVar4 = SparkEstilo__Texto__180722af0(LIT_"'Select a rank'",0xd,&uStack_b8,1,0);
                *(undefined8 *)(param_1 + 0x1d0) = uVar4;
                func_0x000180314690(param_1 + 0x1d0,uVar4);
                UnityEngine_UIElements_VisualElement__Add(lVar3,uVar4,0);
                lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                uStack_b8 = *(undefined8 *)(lVar7 + 0x50);
                uStack_b0 = *(undefined4 *)(lVar7 + 0x58);
                uStack_ac = *(undefined4 *)(lVar7 + 0x5c);
                uStack_58 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                func_0x000180cb7cb0(&uStack_68,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                uStack_b8 = uStack_68;
                uStack_b0 = (undefined4)uStack_60;
                uStack_ac = uStack_60._4_4_;
                uStack_a8 = uStack_58;
                uVar4 = SparkEstilo__Texto__180722af0(LIT_"'Pick a rank on the left to see and edit its privileges.'",10,&uStack_b8,0,0);
                *(undefined8 *)(param_1 + 0x1d8) = uVar4;
                func_0x000180314690(param_1 + 0x1d8,uVar4);
                UnityEngine_UIElements_VisualElement__Add(lVar3,uVar4,0);
                if (*(longlong *)(param_1 + 0x1d8) != 0) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0x1d8),0);
                  uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                  if (lVar7 != 0) {
                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                    if (*(longlong *)(param_1 + 0x1d8) != 0) {
                      plVar5 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(param_1 + 0x1d8),0);
                      puVar6 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_b8,0x40000000,0);
                      if (plVar5 != (longlong *)0x0) {
                        lVar7 = *plVar5;
                        uVar4 = *puVar6;
                        uVar13 = *(undefined4 *)(puVar6 + 1);
                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                          uVar10 = uVar11;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar6 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) +
                                        0x51) * 0x10 + 0x138 + lVar7);
                              goto code_r0x0001805e3f49;
                            }
                            uVar9 = (short)uVar10 + 1;
                            uVar10 = (ulonglong)uVar9;
                          } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                        }
                        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e3f49:
                        uStack_b8 = uVar4;
                        uStack_b0 = uVar13;
                        (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                        if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
                          func_0x000180315660(TI_ClanWindow);
                        }
                        ClanWindow__Grupo(param_1,lVar3,LIT_"'System'",
                                          *(undefined8 *)
                                           (*(longlong *)(TI_ClanWindow + 0xb8) + 0x10),0);
                        ClanWindow__Grupo(param_1,lVar3,LIT_"'Clan Hall'",
                                          *(undefined8 *)
                                           (*(longlong *)(TI_ClanWindow + 0xb8) + 0x18),0);
                        ClanWindow__Grupo(param_1,lVar3,LIT_"'Castle'",
                                          *(undefined8 *)
                                           (*(longlong *)(TI_ClanWindow + 0xb8) + 0x20),0);
                        lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                        UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                        if (lVar7 != 0) {
                          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                          uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                          if (lVar8 != 0) {
                            FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                            if (lVar8 != 0) {
                              FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                              plVar5 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                              puVar6 = (undefined8 *)
                                       UnityEngine_UIElements_StyleLength__op_Implicit
                                                 (&uStack_b8,0x41000000,0);
                              if (plVar5 != (longlong *)0x0) {
                                lVar8 = *plVar5;
                                uVar4 = *puVar6;
                                uVar13 = *(undefined4 *)(puVar6 + 1);
                                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar6 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                         uVar11 * 0x10) + 0x51) * 0x10 + 0x138 +
                                               lVar8);
                                      goto code_r0x0001805e4119;
                                    }
                                    uVar9 = (short)uVar11 + 1;
                                    uVar11 = (ulonglong)uVar9;
                                  } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                                }
                                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e4119:
                                uStack_b8 = uVar4;
                                uStack_b0 = uVar13;
                                (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                                uVar4 = func_0x000180315580(TI_System.Action);
                                FUN_1816a9c60(uVar4,param_1,MD_ClanWindow._MontaRanks_b__87_0,0);
                                uVar4 = SparkEstilo__Botao__18071e130
                                                  (LIT_"'Save Privileges'",uVar4,0x78,0,0);
                                *(undefined8 *)(param_1 + 0x1e0) = uVar4;
                                func_0x000180314690(param_1 + 0x1e0,uVar4);
                                UnityEngine_UIElements_VisualElement__Add(lVar7,uVar4,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar3,lVar7,0);
                                SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x1e0),0,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar2,lVar3,0);
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

