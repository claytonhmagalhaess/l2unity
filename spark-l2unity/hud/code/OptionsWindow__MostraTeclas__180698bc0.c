// OptionsWindow__MostraTeclas__180698bc0 @ 0x180698bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__MostraTeclas__180698bc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lStackX_18;
  longlong lStackX_20;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [64];
  
  if (cRam00000001834b3e90 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Keys in use: '");
    FUN_180315380(LIT_"'Shortcut 2'");
    FUN_180315380(LIT_"'Shortcut 1'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3e90 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x90);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) < 4) {
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(lVar5 + 0x38) == 0) {
      return;
    }
    if ((*(longlong *)(lVar5 + 0x38) != 0) &&
       (lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x38),0),
       lVar5 != 0)) {
      uVar6 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar5);
      uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cVar4 = FUN_180eb54b0(uVar6,uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
      if (cVar4 != '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xb8),0);
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar5 = SparkTeclas__Lista__1804cca10(0);
        lStackX_20 = lVar5;
        if (*(longlong *)(param_1 + 200) != 0) {
          plVar1 = *(longlong **)(param_1 + 200);
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar6 = SparkTeclas__EmUso__1804cc610(lVar5,0);
          uVar6 = System_String__Concat(LIT_"'Keys in use: '",uVar6,0);
          lVar2 = *plVar1;
          (**(code **)(lVar2 + 0xe48))(plVar1,uVar6,*(undefined8 *)(lVar2 + 0xe50));
        }
        uVar6 = 0;
        lStackX_18 = 0;
        if (lVar5 != 0) {
          FUN_180bada40(&uStack_e8,lVar5,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
          uStack_c8 = uStack_e8;
          uStack_c4 = uStack_e4;
          uStack_c0 = uStack_e0;
          uStack_bc = uStack_dc;
          lStack_b8 = CONCAT44(uStack_d4,uStack_d8);
          while( true ) {
            cVar4 = FUN_1812fa7e0(&uStack_c8,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
            lVar2 = lStack_b8;
            if (cVar4 == '\0') {
              Gear__UpdateWeaponType__1803dadf0(&uStack_c8,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
              return;
            }
            if (lStack_b8 == 0) goto code_r0x0001806992fb;
            cVar4 = System_String__op_Inequality(*(undefined8 *)(lStack_b8 + 0x18),uVar6,0);
            if (cVar4 != '\0') break;
code_r0x0001806991c7:
            uVar7 = *(undefined8 *)(lVar2 + 0x10);
            if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar8 = OptionsWindow__LinhaSimples(uVar7,0);
            uVar7 = OptionsWindow__CaixaDeTecla__1806900b0(param_1,lVar2,0,lVar5,0);
            if (lVar8 == 0) goto code_r0x0001806992f6;
            UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7,0);
            uVar7 = OptionsWindow__CaixaDeTecla__1806900b0(param_1,lVar2,1,lVar5,0);
            UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7);
            if (lStackX_18 == 0) goto code_r0x0001806992f1;
            UnityEngine_UIElements_VisualElement__Add(lStackX_18,lVar8);
          }
          uVar6 = *(undefined8 *)(lVar2 + 0x18);
          lVar5 = *(longlong *)(param_1 + 0xb8);
          if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar7 = OptionsWindow__Grupo(uVar6,&lStackX_18,0);
          if (lVar5 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar5,uVar7,0);
            lVar5 = OptionsWindow__LinhaSimples(LIT_"''",0);
            if (lVar5 != 0) {
              lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              puVar9 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(auStack_98,0x41800000,0);
              if (lVar8 != 0) {
                uStack_138 = *puVar9;
                uStack_130 = *(undefined4 *)(puVar9 + 1);
                FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_138);
                lVar8 = func_0x000180314710(TI_string__,2);
                if (lVar8 != 0) {
                  if (*(int *)(lVar8 + 0x18) == 0) {
                    FUN_1803155c0();
code_r0x0001806992ba:
                    FUN_1803155c0();
code_r0x0001806992bf:
                    FUN_1803155c0();
code_r0x0001806992c4:
                    FUN_1803155d0();
code_r0x0001806992c9:
                    FUN_1803155d0();
code_r0x0001806992ce:
                    FUN_1803155d0();
code_r0x0001806992d3:
                    FUN_1803155d0();
                  }
                  else {
                    *(undefined8 *)(lVar8 + 0x20) = LIT_"'Shortcut 1'";
                    func_0x000180314690(lVar8 + 0x20);
                    if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x0001806992ba;
                    *(undefined8 *)(lVar8 + 0x28) = LIT_"'Shortcut 2'";
                    func_0x000180314690(lVar8 + 0x28);
                    for (uVar12 = 0; (int)uVar12 < (int)*(uint *)(lVar8 + 0x18); uVar12 = uVar12 + 1
                        ) {
                      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto code_r0x0001806992bf;
                      uVar7 = *(undefined8 *)(lVar8 + 0x20 + (longlong)(int)uVar12 * 8);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkEstilo);
                      }
                      lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uStack_a8 = *(undefined4 *)(lVar10 + 0x50);
                      uStack_a4 = *(undefined4 *)(lVar10 + 0x54);
                      uStack_a0 = *(undefined4 *)(lVar10 + 0x58);
                      uStack_9c = *(undefined4 *)(lVar10 + 0x5c);
                      uStack_108 = 0;
                      uStack_100 = 0;
                      uStack_f8 = 0;
                      func_0x000180cb7cb0(&uStack_108,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                      uStack_e8 = (undefined4)uStack_108;
                      uStack_e4 = uStack_108._4_4_;
                      uStack_e0 = (undefined4)uStack_100;
                      uStack_dc = uStack_100._4_4_;
                      uStack_d8 = uStack_f8;
                      lVar10 = SparkEstilo__Texto__180722af0(uVar7,9,&uStack_e8,0,0);
                      if (lVar10 == 0) goto code_r0x0001806992d3;
                      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (auStack_88,0x43020000,0);
                      if (lVar11 == 0) goto code_r0x0001806992ce;
                      uStack_128 = *puVar9;
                      uStack_120 = *(undefined4 *)(puVar9 + 1);
                      FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_128);
                      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (auStack_78,0x40c00000,0);
                      if (lVar11 == 0) goto code_r0x0001806992c9;
                      uStack_118 = *puVar9;
                      uStack_110 = *(undefined4 *)(puVar9 + 1);
                      FUN_1800050f0(0x4d,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_118);
                      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                      FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                      if (lVar11 == 0) goto code_r0x0001806992c4;
                      FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle);
                      UnityEngine_UIElements_VisualElement__Add(lVar5,lVar10);
                    }
                    if (lStackX_18 != 0) {
                      UnityEngine_UIElements_VisualElement__Add(lStackX_18,lVar5,0);
                      lVar5 = lStackX_20;
                      goto code_r0x0001806991c7;
                    }
                  }
                  FUN_1803155d0();
                }
                FUN_1803155d0();
              }
              FUN_1803155d0();
            }
            FUN_1803155d0();
          }
          FUN_1803155d0();
code_r0x0001806992f1:
          FUN_1803155d0();
code_r0x0001806992f6:
          FUN_1803155d0();
code_r0x0001806992fb:
          FUN_1803155d0();
          FUN_180311490();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

