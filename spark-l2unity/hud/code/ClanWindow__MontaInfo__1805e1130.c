// ClanWindow__MontaInfo__1805e1130 @ 0x1805e1130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ClanWindow__MontaInfo__1805e1130(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (cRam00000001834b3b6e == '\0') {
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'REPUTATION'");
    FUN_180315380(LIT_"'RANK'");
    FUN_180315380(LIT_"'ALLIANCE'");
    FUN_180315380(LIT_"'MEMBERS'");
    FUN_180315380(LIT_"'CLAN HALL'");
    FUN_180315380(LIT_"'Clan Skills'");
    FUN_180315380(LIT_"'CASTLE'");
    FUN_180315380(LIT_"'LEVEL'");
    cRam00000001834b3b6e = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
  if (lVar4 != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar5 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x3f,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar6 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
        if (lVar5 != 0) {
          FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar6 = ClanWindow__Cartao(LIT_"'LEVEL'",param_1 + 0x1f8,0);
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
          uVar6 = ClanWindow__Cartao(LIT_"'REPUTATION'",param_1 + 0x200,0);
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
          uVar6 = ClanWindow__Cartao(LIT_"'RANK'",param_1 + 0x208,0);
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
          uVar6 = ClanWindow__Cartao(LIT_"'MEMBERS'",param_1 + 0x210,0);
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
          uVar6 = ClanWindow__Cartao(LIT_"'ALLIANCE'",param_1 + 0x218,0);
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
          uVar6 = ClanWindow__Cartao(LIT_"'CASTLE'",param_1 + 0x228,0);
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
          uVar6 = ClanWindow__Cartao(LIT_"'CLAN HALL'",param_1 + 0x220,0);
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
          if (lVar3 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
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
            uStack_68 = uStack_48;
            uStack_60 = (undefined4)uStack_40;
            uStack_5c = uStack_40._4_4_;
            uStack_58 = uStack_38;
            uVar11 = 0;
            lVar4 = SparkEstilo__Texto__180722af0(LIT_"'Clan Skills'",0xb,&uStack_68,1,0);
            if (lVar4 != 0) {
              plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
              puVar8 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68,0x40c00000,0);
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
                                (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10
                                         ) + 0x51) * 0x10 + 0x138 + lVar5);
                      goto code_r0x0001805e1569;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                }
                puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e1569:
                uStack_68 = uVar6;
                uStack_60 = uVar1;
                (*(code *)*puVar8)(plVar7,&uStack_68,puVar8[1]);
                plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                puVar8 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68,0x40800000,0);
                if (plVar7 != (longlong *)0x0) {
                  lVar5 = *plVar7;
                  uVar1 = *(undefined4 *)(puVar8 + 1);
                  uVar6 = *puVar8;
                  if (*(ushort *)(lVar5 + 0x12e) != 0) {
                    uVar10 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar8 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                           (ulonglong)uVar10 * 0x10) + 0x4b) * 0x10 + 0x138 + lVar5)
                        ;
                        goto code_r0x0001805e1609;
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                  }
                  puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805e1609:
                  uStack_68 = uVar6;
                  uStack_60 = uVar1;
                  (*(code *)*puVar8)(plVar7,&uStack_68,puVar8[1]);
                  UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
                  lVar4 = SparkEstilo__Painel__180721ce0(0);
                  if (lVar4 != 0) {
                    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    uVar6 = func_0x000182601c10(0x3f800000,0);
                    if (lVar5 != 0) {
                      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                      lVar5 = SparkEstilo__Lista__1807211b0(0);
                      uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                      UnityEngine_UIElements_VisualElement___ctor(uVar6,0);
                      *(undefined8 *)(param_1 + 0x230) = uVar6;
                      func_0x000180314690(param_1 + 0x230,uVar6);
                      if (*(longlong *)(param_1 + 0x230) != 0) {
                        lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(param_1 + 0x230),0);
                        uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                        if (lVar9 != 0) {
                          FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
                          if (*(longlong *)(param_1 + 0x230) != 0) {
                            lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 0x230),0);
                            uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
                            if (lVar9 != 0) {
                              FUN_180005060(0x3f,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
                              SparkEstilo__Espaco__18071fb80
                                        (*(undefined8 *)(param_1 + 0x230),0x40800000,0x40800000,
                                         0x40800000,CONCAT44(uVar11,0x40800000),0);
                              if (lVar5 != 0) {
                                UnityEngine_UIElements_VisualElement__Add
                                          (lVar5,*(undefined8 *)(param_1 + 0x230),0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,lVar5,0);
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

