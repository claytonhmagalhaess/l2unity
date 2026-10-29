// SparkChatFiltro__MontaFiltros__1805d3260 @ 0x1805d3260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkChatFiltro__MontaFiltros__1805d3260(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_df;
  undefined4 uStack_db;
  undefined4 uStack_d7;
  undefined4 uStack_d3;
  undefined3 uStack_cf;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  
  if (cRam00000001834b3b39 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.GetValueOrDefault);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.get_HasValue);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
    FUN_180315380(TI_SparkChatFiltro.<>c__DisplayClass57_0);
    FUN_180315380(MD_SparkChatFiltro.__c__DisplayClass57_1._MontaFiltros_b__0);
    FUN_180315380(MD_SparkChatFiltro.__c__DisplayClass57_1._MontaFiltros_b__1);
    FUN_180315380(TI_SparkChatFiltro.<>c__DisplayClass57_1);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"' tab'");
    cRam00000001834b3b39 = '\x01';
  }
  uVar13 = 0;
  while( true ) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= (int)uVar13) {
      return;
    }
    lVar2 = func_0x000180315580(TI_SparkChatFiltro.<>c__DisplayClass57_0);
    SparkMapaWindow_Loja___ctor__1803f01b0(lVar2,0);
    if (lVar2 == 0) {
code_r0x0001805d394d:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(uint *)(lVar2 + 0x10) = uVar13;
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar4 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
    if (lVar4 == 0) goto code_r0x0001805d394d;
    if (*(uint *)(lVar4 + 0x18) <= uVar13) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = System_String__Concat
                      (*(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar13 * 8),
                       LIT_"' tab'",0);
    uStack_108 = 0x3f44c4c53f64e4e5;
    uStack_100 = 0x3f8000003ef0f0f1;
    uStack_e8 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000180cb7cb0(&uStack_f8,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_148 = uStack_e8;
    uStack_158 = (undefined4)uStack_f8;
    uStack_154 = uStack_f8._4_4_;
    uStack_150 = (undefined4)uStack_f0;
    uStack_14c = uStack_f0._4_4_;
    lVar4 = SparkEstilo__Texto__180722af0(uVar3,0xb,&uStack_158,1,0);
    if (lVar4 == 0) goto code_r0x0001805d394d;
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c8);
    if (lVar5 == 0) break;
    uStack_138 = *puVar6;
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    FUN_1800050f0(0x51,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_138);
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar3 = func_0x000182601c10(0,0);
    if ((lVar5 == 0) || (FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3), param_1 == 0)) break;
    UnityEngine_UIElements_VisualElement__Add(param_1,lVar4,0);
    lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
    if (lVar4 == 0) break;
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar5 == 0) break;
    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
    if (lVar5 == 0) break;
    FUN_180005060(0x3f,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar3 = func_0x000182601c10(0,0);
    if (lVar5 == 0) break;
    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8);
    if (lVar5 == 0) break;
    uStack_120 = *(undefined4 *)(puVar6 + 1);
    uStack_128 = *puVar6;
    FUN_1800050f0(0x4d,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_128);
    uVar14 = 0;
    while( true ) {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660(TI_SparkChatFiltro);
      }
      if (**(longlong **)(TI_SparkChatFiltro + 0xb8) == 0) goto code_r0x0001805d3953;
      if (*(int *)(**(longlong **)(TI_SparkChatFiltro + 0xb8) + 0x18) <= (int)uVar14) break;
      lVar5 = func_0x000180315580(TI_SparkChatFiltro.<>c__DisplayClass57_1);
      SparkMapaWindow_Loja___ctor__1803f01b0(lVar5,0);
      if (lVar5 == 0) goto code_r0x0001805d3953;
      *(longlong *)(lVar5 + 0x18) = lVar2;
      func_0x000180314690(lVar5 + 0x18,lVar2);
      *(uint *)(lVar5 + 0x10) = uVar14;
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660(TI_SparkChatFiltro);
      }
      lVar9 = **(longlong **)(TI_SparkChatFiltro + 0xb8);
      if (lVar9 == 0) goto code_r0x0001805d3953;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) {
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = *(undefined8 *)(lVar9 + 0x20 + (longlong)(int)uVar14 * 8);
      uVar7 = func_0x000180315580(TI_System.Func<bool>);
      FUN_1814af410(uVar7,lVar5,MD_SparkChatFiltro.__c__DisplayClass57_1._MontaFiltros_b__0,0);
      uVar8 = func_0x000180315580(TI_System.Action<bool>);
      FUN_180b7dfa0(uVar8,lVar5,MD_SparkChatFiltro.__c__DisplayClass57_1._MontaFiltros_b__1,0);
      if ((param_2 == 0) ||
         (lVar9 = (**(code **)(param_2 + 0x18))
                            (*(undefined8 *)(param_2 + 0x40),uVar3,uVar7,uVar8,
                             *(undefined8 *)(param_2 + 0x28)), lVar9 == 0))
      goto code_r0x0001805d3953;
      lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8);
      if (lVar10 == 0) goto code_r0x0001805d3953;
      uStack_110 = *(undefined4 *)(puVar6 + 1);
      uStack_118 = *puVar6;
      FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle);
      pcVar11 = (char *)SparkChatFiltro__CorDoCanal(&uStack_158,*(undefined4 *)(lVar5 + 0x10));
      uStack_df = *(undefined4 *)(pcVar11 + 1);
      uStack_db = *(undefined4 *)(pcVar11 + 5);
      uStack_d7 = *(undefined4 *)(pcVar11 + 9);
      uStack_d3._0_3_ = (undefined3)*(undefined4 *)(pcVar11 + 0xd);
      uStack_d3._3_1_ = (undefined1)*(undefined4 *)(pcVar11 + 0x10);
      uStack_cf = (undefined3)((uint)*(undefined4 *)(pcVar11 + 0x10) >> 8);
      if (*pcVar11 != '\0') {
        if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar5 = FUN_180b0e310(lVar9,0);
        if (lVar5 != 0) {
          uVar3 = CONCAT35((undefined3)uStack_d7,CONCAT41(uStack_db,uStack_df._3_1_));
          uVar7 = CONCAT35(uStack_cf,CONCAT41(uStack_d3,uStack_d7._3_1_));
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          uStack_108 = uVar3;
          uStack_100 = uVar7;
          puVar12 = (undefined4 *)
                    UnityEngine_UIElements_StyleColor__op_Implicit(auStack_98,&uStack_108,0);
          if (lVar5 == 0) goto code_r0x0001805d3953;
          uStack_158 = *puVar12;
          uStack_154 = puVar12[1];
          uStack_150 = puVar12[2];
          uStack_14c = puVar12[3];
          uStack_148 = puVar12[4];
          FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle);
        }
      }
      UnityEngine_UIElements_VisualElement__Add(lVar4);
      uVar14 = uVar14 + 1;
    }
    UnityEngine_UIElements_VisualElement__Add(param_1);
    uVar13 = uVar13 + 1;
  }
code_r0x0001805d3953:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

