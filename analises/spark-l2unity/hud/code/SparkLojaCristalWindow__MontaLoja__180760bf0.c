// SparkLojaCristalWindow__MontaLoja__180760bf0 @ 0x180760bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristalWindow__MontaLoja__180760bf0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  ulonglong uVar11;
  
  if (cRam00000001834b435e == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkLojaCristalWindow.Cristaliza);
    FUN_180315380(MD_SparkLojaCristalWindow._MontaLoja_b__37_0);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Select an item to see how many crystals you get.'");
    FUN_180315380(LIT_"'Close'");
    FUN_180315380(LIT_"'Crystallize'");
    FUN_180315380(LIT_"''");
    cRam00000001834b435e = '\x01';
  }
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  func_0x000180314690(param_1 + 0xa0,uVar3);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa0),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa0),0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_e8,0,0);
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *plVar5;
          uVar12 = 0;
          uVar3 = *puVar6;
          uVar13 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar11 = uVar12;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar11 * 0x10) + 0x57) * 0x10
                          + 0x138 + lVar4);
                goto code_r0x000180760e19;
              }
              uVar10 = (short)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180760e19:
          uStack_e8 = uVar3;
          uStack_e0 = uVar13;
          (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_e8 = *(undefined8 *)(lVar4 + 0x60);
          uStack_e0 = *(undefined4 *)(lVar4 + 0x68);
          uStack_dc = *(undefined4 *)(lVar4 + 0x6c);
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          func_0x000180cb7cb0(&uStack_c8,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_e8 = uStack_c8;
          uStack_e0 = (undefined4)uStack_c0;
          uStack_dc = uStack_c0._4_4_;
          uStack_d8 = uStack_b8;
          uVar3 = SparkEstilo__Texto__180722af0(LIT_"''",0xb,&uStack_e8,1,0);
          *(undefined8 *)(param_1 + 0xd8) = uVar3;
          func_0x000180314690(param_1 + 0xd8,uVar3);
          if (*(longlong *)(param_1 + 0xd8) != 0) {
            lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0)
            ;
            uVar3 = func_0x000182601c10(0,0);
            if (lVar4 != 0) {
              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
              if (*(longlong *)(param_1 + 0xd8) != 0) {
                plVar5 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0xd8),0);
                puVar6 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_e8,0x40800000,0);
                if (plVar5 != (longlong *)0x0) {
                  lVar4 = *plVar5;
                  uVar3 = *puVar6;
                  uVar13 = *(undefined4 *)(puVar6 + 1);
                  if (*(ushort *)(lVar4 + 0x12e) != 0) {
                    uVar11 = uVar12;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar11 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar6 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar11 * 0x10) + 0x4b)
                                  * 0x10 + 0x138 + lVar4);
                        goto code_r0x000180760f99;
                      }
                      uVar10 = (short)uVar11 + 1;
                      uVar11 = (ulonglong)uVar10;
                    } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                  }
                  puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180760f99:
                  uStack_e8 = uVar3;
                  uStack_e0 = uVar13;
                  (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                  if (*(longlong *)(param_1 + 0xa0) != 0) {
                    UnityEngine_UIElements_VisualElement__Add
                              (*(longlong *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xd8),0);
                    lVar4 = SparkEstilo__Painel__180721ce0(0);
                    if (lVar4 != 0) {
                      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                      uVar3 = func_0x000182601c10(0x3f800000,0);
                      if (lVar7 != 0) {
                        FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                        plVar5 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                        puVar6 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_e8,0,0);
                        if (plVar5 != (longlong *)0x0) {
                          lVar7 = *plVar5;
                          uVar3 = *puVar6;
                          uVar13 = *(undefined4 *)(puVar6 + 1);
                          if (*(ushort *)(lVar7 + 0x12e) != 0) {
                            uVar11 = uVar12;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar6 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar11 * 0x10)
                                          + 0x57) * 0x10 + 0x138 + lVar7);
                                goto code_r0x000180761099;
                              }
                              uVar10 = (short)uVar11 + 1;
                              uVar11 = (ulonglong)uVar10;
                            } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                          }
                          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180761099:
                          uStack_e8 = uVar3;
                          uStack_e0 = uVar13;
                          (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                          lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                          uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                          if (lVar7 != 0) {
                            FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                            lVar7 = SparkLojaCristalWindow__Fila(0);
                            if (lVar7 != 0) {
                              plVar5 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                              puVar6 = (undefined8 *)
                                       UnityEngine_UIElements_StyleLength__op_Implicit
                                                 (&uStack_e8,0x41000000,0);
                              if (plVar5 != (longlong *)0x0) {
                                lVar9 = *plVar5;
                                uVar3 = *puVar6;
                                uVar13 = *(undefined4 *)(puVar6 + 1);
                                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                  uVar11 = uVar12;
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar11 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar6 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                         uVar11 * 0x10) + 0x61) * 0x10 + 0x138 +
                                               lVar9);
                                      goto code_r0x000180761189;
                                    }
                                    uVar10 = (short)uVar11 + 1;
                                    uVar11 = (ulonglong)uVar10;
                                  } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                }
                                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180761189:
                                uStack_e8 = uVar3;
                                uStack_e0 = uVar13;
                                (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                                SparkEstilo__CabecalhoDeLista__18071f010(lVar7,0);
                                lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                uStack_e8 = *(undefined8 *)(lVar9 + 0x50);
                                uStack_e0 = *(undefined4 *)(lVar9 + 0x58);
                                uStack_dc = *(undefined4 *)(lVar9 + 0x5c);
                                uStack_a0 = 0;
                                uStack_b0 = 0;
                                uStack_a8 = 0;
                                func_0x000180cb7cb0(&uStack_b0,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                uStack_e8 = uStack_b0;
                                uStack_e0 = (undefined4)uStack_a8;
                                uStack_dc = uStack_a8._4_4_;
                                uStack_d8 = uStack_a0;
                                uVar13 = 0;
                                uVar3 = SparkEstilo__Texto__180722af0
                                                  (LIT_"''",0xb,&uStack_e8,1,0);
                                *(undefined8 *)(param_1 + 0xd0) = uVar3;
                                func_0x000180314690(param_1 + 0xd0,uVar3);
                                UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
                                UnityEngine_UIElements_VisualElement__Add(lVar4,lVar7,0);
                                uVar3 = SparkEstilo__Lista__1807211b0(0);
                                *(undefined8 *)(param_1 + 0x118) = uVar3;
                                func_0x000180314690(param_1 + 0x118,uVar3);
                                if (*(longlong *)(param_1 + 0x118) != 0) {
                                  plVar5 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(param_1 + 0x118),0);
                                  puVar6 = (undefined8 *)
                                           UnityEngine_UIElements_StyleLength__op_Implicit
                                                     (&uStack_e8,0,0);
                                  if (plVar5 != (longlong *)0x0) {
                                    lVar7 = *plVar5;
                                    uVar3 = *puVar6;
                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                      uVar11 = uVar12;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar6 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                             uVar11 * 0x10) + 0x57) * 0x10 + 0x138 +
                                                   lVar7);
                                          goto code_r0x0001807612f9;
                                        }
                                        uVar10 = (short)uVar11 + 1;
                                        uVar11 = (ulonglong)uVar10;
                                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                    }
                                    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57)
                                    ;
code_r0x0001807612f9:
                                    uStack_e8 = uVar3;
                                    uStack_e0 = uVar1;
                                    (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                                    if (*(longlong *)(param_1 + 0x118) != 0) {
                                      plVar5 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (*(longlong *)(param_1 + 0x118),0);
                                      puVar6 = (undefined8 *)
                                               UnityEngine_UIElements_StyleLength__op_Implicit
                                                         (&uStack_e8,0,0);
                                      if (plVar5 != (longlong *)0x0) {
                                        lVar7 = *plVar5;
                                        uVar3 = *puVar6;
                                        uVar1 = *(undefined4 *)(puVar6 + 1);
                                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                          uVar11 = uVar12;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) ==
                                                TI_UnityEngine.UIElements.IStyle) {
                                              puVar6 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                                 uVar11 * 0x10) + 0x37) * 0x10 +
                                                        0x138 + lVar7);
                                              goto code_r0x000180761399;
                                            }
                                            uVar10 = (short)uVar11 + 1;
                                            uVar11 = (ulonglong)uVar10;
                                          } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                        }
                                        puVar6 = (undefined8 *)
                                                 FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x000180761399:
                                        uStack_e8 = uVar3;
                                        uStack_e0 = uVar1;
                                        (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                                        UnityEngine_UIElements_VisualElement__Add
                                                  (lVar4,*(undefined8 *)(param_1 + 0x118),0);
                                        if (*(longlong *)(param_1 + 0xa0) != 0) {
                                          UnityEngine_UIElements_VisualElement__Add
                                                    (*(longlong *)(param_1 + 0xa0),lVar4,0);
                                          lVar4 = SparkEstilo__Painel__180721ce0(0);
                                          if (lVar4 != 0) {
                                            lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                              (lVar4,0);
                                            uVar3 = func_0x000182601c10(0,0);
                                            if (lVar7 != 0) {
                                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                              plVar5 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                              puVar6 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x40c00000,0);
                                              if (plVar5 != (longlong *)0x0) {
                                                lVar7 = *plVar5;
                                                uVar3 = *puVar6;
                                                uVar1 = *(undefined4 *)(puVar6 + 1);
                                                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                  uVar11 = uVar12;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar7 + 0xb0) +
                                                         uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar6 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar7 + 0xb0) + 8 +
                                                                         uVar11 * 0x10) + 0x51) *
                                                                0x10 + 0x138 + lVar7);
                                                      goto code_r0x0001807614b9;
                                                    }
                                                    uVar10 = (short)uVar11 + 1;
                                                    uVar11 = (ulonglong)uVar10;
                                                  } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                                }
                                                puVar6 = (undefined8 *)
                                                         FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001807614b9:
                                                uStack_e8 = uVar3;
                                                uStack_e0 = uVar1;
                                                (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                                                SparkEstilo__Espaco__18071fb80
                                                          (lVar4,0x40c00000,0x41200000,0x40c00000,
                                                           CONCAT44(uVar13,0x41200000),0);
                                                lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                uStack_e8 = *(undefined8 *)(lVar7 + 0x50);
                                                uStack_e0 = *(undefined4 *)(lVar7 + 0x58);
                                                uStack_dc = *(undefined4 *)(lVar7 + 0x5c);
                                                uStack_88 = 0;
                                                uStack_98 = 0;
                                                uStack_90 = 0;
                                                func_0x000180cb7cb0(&uStack_98,&uStack_e8,
                                                                    MR_System.Nullable<UnityEngine.Color>..ctor);
                                                uStack_e8 = uStack_98;
                                                uStack_e0 = (undefined4)uStack_90;
                                                uStack_dc = uStack_90._4_4_;
                                                uStack_d8 = uStack_88;
                                                uVar3 = SparkEstilo__Texto__180722af0
                                                                  (LIT_"'Select an item to see how many crystals you get.'",0xb,
                                                                   &uStack_e8,0,0);
                                                *(undefined8 *)(param_1 + 0x100) = uVar3;
                                                func_0x000180314690(param_1 + 0x100,uVar3);
                                                if (*(longlong *)(param_1 + 0x100) != 0) {
                                                  lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x100),0);
                                                  uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,*(undefined8 *)
                                                                      (param_1 + 0x100),0);
                                                    uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (uVar3,0);
                                                    *(undefined8 *)(param_1 + 0xb0) = uVar3;
                                                    func_0x000180314690(param_1 + 0xb0,uVar3);
                                                    if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xb0),0);
                                                  uVar3 = func_0x000182601c10(0,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    lVar7 = SparkLojaCristalWindow__Fila(0);
                                                    uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (uVar3,0);
                                                    *(undefined8 *)(param_1 + 0xa8) = uVar3;
                                                    func_0x000180314690(param_1 + 0xa8,uVar3);
                                                    if (*(longlong *)(param_1 + 0xa8) != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa8),0);
                                                  if (*(longlong *)(param_1 + 0xa8) != 0) {
                                                    plVar8 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa8),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x42000000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar9 = *plVar8;
                                                    uVar3 = *puVar6;
                                                    uVar13 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar10 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             (ulonglong)uVar10 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             (ulonglong)uVar10 *
                                                                             0x10) + 0x43) * 0x10 +
                                                                    0x138 + lVar9);
                                                          goto code_r0x000180761727;
                                                        }
                                                        uVar10 = uVar10 + 1;
                                                      } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x43);
code_r0x000180761727:
                                                    uStack_e8 = uVar3;
                                                    uStack_e0 = uVar13;
                                                    (*(code *)*puVar6)(plVar8,&uStack_e8,puVar6[1]);
                                                    if (plVar5 != (longlong *)0x0) {
                                                      lVar9 = *plVar5;
                                                      if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                        uVar11 = uVar12;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar9 + 0xb0) +
                                                               uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                            puVar6 = (undefined8 *)
                                                                     ((longlong)
                                                                      (*(int *)(*(longlong *)
                                                                                 (lVar9 + 0xb0) + 8
                                                                               + uVar11 * 0x10) +
                                                                      0xad) * 0x10 + 0x138 + lVar9);
                                                            goto code_r0x000180761799;
                                                          }
                                                          uVar10 = (short)uVar11 + 1;
                                                          uVar11 = (ulonglong)uVar10;
                                                        } while (uVar10 < *(ushort *)(lVar9 + 0x12e)
                                                                );
                                                      }
                                                      puVar6 = (undefined8 *)
                                                               FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                             0xad);
code_r0x000180761799:
                                                      uStack_e8 = uVar3;
                                                      uStack_e0 = uVar13;
                                                      (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]
                                                                        );
                                                      if (*(longlong *)(param_1 + 0xa8) != 0) {
                                                        plVar5 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa8),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x41000000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar9 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar13 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x4f)
                                                                    * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x000180761849;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4f);
code_r0x000180761849:
                                                    uStack_e8 = uVar3;
                                                    uStack_e0 = uVar13;
                                                    (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                                                    if (*(longlong *)(param_1 + 0xa8) != 0) {
                                                      lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa8),0);
                                                  uVar3 = func_0x000182601c10(0,0);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar3);
                                                    SparkEstilo__Moldura__180721b40
                                                              (*(undefined8 *)(param_1 + 0xa8),0);
                                                    if (lVar7 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar7,*(undefined8 *)
                                                                        (param_1 + 0xa8),0);
                                                      lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                      uStack_e8 = *(undefined8 *)(lVar9 + 0x60);
                                                      uStack_e0 = *(undefined4 *)(lVar9 + 0x68);
                                                      uStack_dc = *(undefined4 *)(lVar9 + 0x6c);
                                                      uStack_70 = 0;
                                                      uStack_80 = 0;
                                                      uStack_78 = 0;
                                                      func_0x000180cb7cb0(&uStack_80,&uStack_e8,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_e8 = uStack_80;
                                                      uStack_e0 = (undefined4)uStack_78;
                                                      uStack_dc = uStack_78._4_4_;
                                                      uStack_d8 = uStack_70;
                                                      uVar3 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",0xc,
                                                                         &uStack_e8,1,0);
                                                      *(undefined8 *)(param_1 + 0xe0) = uVar3;
                                                      func_0x000180314690(param_1 + 0xe0,uVar3);
                                                      if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                        lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  uVar3 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar9,uVar3);
                                                    if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                      lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  uVar3 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar3);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar7,*(undefined8 *)(param_1 + 0xe0)
                                                               ,0);
                                                    if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb0),lVar7
                                                                 ,0);
                                                      lVar7 = *(longlong *)(param_1 + 0xb0);
                                                      lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                      uStack_e8 = *(undefined8 *)(lVar9 + 0x50);
                                                      uStack_e0 = *(undefined4 *)(lVar9 + 0x58);
                                                      uStack_dc = *(undefined4 *)(lVar9 + 0x5c);
                                                      uVar3 = SparkLojaCristalWindow__Linha
                                                                        (&uStack_e8,0);
                                                      *(undefined8 *)(param_1 + 0xe8) = uVar3;
                                                      func_0x000180314690(param_1 + 0xe8,uVar3);
                                                      if (lVar7 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar7,uVar3,0);
                                                        lVar7 = *(longlong *)(param_1 + 0xb0);
                                                        lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8)
                                                        ;
                                                        uStack_e8 = *(undefined8 *)(lVar9 + 0x80);
                                                        uStack_e0 = *(undefined4 *)(lVar9 + 0x88);
                                                        uStack_dc = *(undefined4 *)(lVar9 + 0x8c);
                                                        uVar3 = SparkLojaCristalWindow__Linha
                                                                          (&uStack_e8,0);
                                                        *(undefined8 *)(param_1 + 0xf0) = uVar3;
                                                        func_0x000180314690(param_1 + 0xf0,uVar3);
                                                        if (lVar7 != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (lVar7,uVar3,0);
                                                          lVar7 = *(longlong *)(param_1 + 0xb0);
                                                          lVar9 = *(longlong *)
                                                                   (TI_SparkEstilo + 0xb8);
                                                          uStack_e8 = *(undefined8 *)(lVar9 + 0x40);
                                                          uStack_e0 = *(undefined4 *)(lVar9 + 0x48);
                                                          uStack_dc = *(undefined4 *)(lVar9 + 0x4c);
                                                          uVar3 = SparkLojaCristalWindow__Linha
                                                                            (&uStack_e8,0);
                                                          *(undefined8 *)(param_1 + 0xf8) = uVar3;
                                                          func_0x000180314690(param_1 + 0xf8,uVar3);
                                                          if (lVar7 != 0) {
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar7,uVar3,0);
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar4,*(undefined8 *)(param_1 + 0xb0),0
                                                            );
                                                  if (*(longlong *)(param_1 + 0xa0) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0xa0),lVar4,0
                                                              );
                                                    lVar4 = SparkLojaCristalWindow__Fila(0);
                                                    if (lVar4 != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    plVar5 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x40c00000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar7 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar13 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x000180761c19;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x000180761c19:
                                                    uStack_e8 = uVar3;
                                                    uStack_e0 = uVar13;
                                                    (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_SparkLojaCristalWindow._MontaLoja_b__37_0
                                                                  ,0);
                                                    lVar7 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Close'",uVar3,
                                                                       0x5a,0,0);
                                                    if (lVar7 != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar7,0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x40c00000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar9 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar13 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x4f)
                                                                    * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x000180761cf9;
                                                        }
                                                        uVar10 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4f);
code_r0x000180761cf9:
                                                    uStack_e8 = uVar3;
                                                    uStack_e0 = uVar13;
                                                    (*(code *)*puVar6)(plVar5,&uStack_e8,puVar6[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,lVar7,0);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_SparkLojaCristalWindow.Cristaliza
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Crystallize'",uVar3,
                                                                       0x6e,0,0);
                                                    *(undefined8 *)(param_1 + 0x120) = uVar3;
                                                    func_0x000180314690(param_1 + 0x120,uVar3);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    if (*(longlong *)(param_1 + 0xa0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xa0),lVar4
                                                                 ,0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0xa0),0);
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

