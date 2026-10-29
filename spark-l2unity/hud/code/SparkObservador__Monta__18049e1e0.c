// SparkObservador__Monta__18049e1e0 @ 0x18049e1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkObservador__Monta__18049e1e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar18;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar19;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong uVar17;
  
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  if (cRam00000001834b3240 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkObservador.FechaAjuda);
    FUN_180315380(MD_SparkObservador.PedeSair);
    FUN_180315380(MD_SparkObservador._Monta_b__26_0);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'You are watching as a free camera - nobody sees you here.'");
    FUN_180315380(LIT_"'Keys'");
    FUN_180315380(LIT_"'Observing'");
    FUN_180315380(LIT_"'The camera stays inside the arena. <color=#FFDD8C>Leave<...");
    FUN_180315380(LIT_"'<color=#FFDD8C>W A S D</color>  move the camera'");
    FUN_180315380(LIT_"'Observer mode'");
    FUN_180315380(LIT_"'<color=#FFDD8C>Space</color>  up      <color=#FFDD8C>Shi...");
    FUN_180315380(LIT_"'Leave'");
    FUN_180315380(LIT_"'<color=#FFDD8C>Mouse wheel</color>  zoom'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'<color=#FFDD8C>Right mouse button</color>  turn the camera'");
    cRam00000001834b3240 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) || (param_2 == 0)) {
    return;
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar8 = SparkEstilo__Painel__180721ce0(0);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  func_0x000180314690(param_1 + 0x20,uVar8);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
    uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar9 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        plVar10 = (longlong *)
                  UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
        puVar11 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_128,0x41000000,0);
        if (plVar10 != (longlong *)0x0) {
          lVar9 = *plVar10;
          uVar18 = 0;
          uVar8 = *puVar11;
          uVar1 = *(undefined4 *)(puVar11 + 1);
          if (*(ushort *)(lVar9 + 0x12e) != 0) {
            uVar17 = uVar18;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar17 * 0x10) + 0x73) * 0x10
                           + 0x138 + lVar9);
                goto code_r0x00018049e4a9;
              }
              uVar16 = (short)uVar17 + 1;
              uVar17 = (ulonglong)uVar16;
            } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018049e4a9:
          uStack_128 = uVar8;
          uStack_120 = uVar1;
          (*(code *)*puVar11)(plVar10,&uStack_128,puVar11[1]);
          if (*(longlong *)(param_1 + 0x20) != 0) {
            plVar10 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x20),0);
            uVar8 = func_0x0001825fc350(0x42480000,0);
            puVar11 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_128,uVar8,0);
            if (plVar10 != (longlong *)0x0) {
              lVar9 = *plVar10;
              uVar8 = *puVar11;
              uVar1 = *(undefined4 *)(puVar11 + 1);
              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                uVar17 = uVar18;
                do {
                  if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar17 * 0x10) + 0x47) *
                               0x10 + 0x138 + lVar9);
                    goto code_r0x00018049e559;
                  }
                  uVar16 = (short)uVar17 + 1;
                  uVar17 = (ulonglong)uVar16;
                } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018049e559:
              uStack_128 = uVar8;
              uStack_120 = uVar1;
              (*(code *)*puVar11)(plVar10,&uStack_128,puVar11[1]);
              if (*(longlong *)(param_1 + 0x20) != 0) {
                plVar10 = (longlong *)
                          UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0x20),0);
                uVar8 = func_0x0001825fc350(0xc2480000,0);
                uVar12 = func_0x0001825fc560(0,0);
                uStack_88 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                func_0x000182607f40(&uStack_98,uVar8,uVar12,0);
                uStack_118 = (undefined4)uStack_98;
                uStack_114 = uStack_98._4_4_;
                uStack_110 = (undefined4)uStack_90;
                uStack_10c = uStack_90._4_4_;
                uStack_108 = (undefined4)uStack_88;
                uStack_104 = (undefined4)((ulonglong)uStack_88 >> 0x20);
                puVar13 = (undefined4 *)
                          UnityEngine_UIElements_StyleRotate__op_Implicit(&uStack_f8,&uStack_118,0);
                if (plVar10 != (longlong *)0x0) {
                  lVar9 = *plVar10;
                  uStack_118 = *puVar13;
                  uStack_114 = puVar13[1];
                  uStack_110 = puVar13[2];
                  uStack_10c = (undefined4)*(undefined8 *)(puVar13 + 3);
                  uVar1 = uStack_10c;
                  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)(puVar13 + 3) >> 0x20);
                  uVar4 = uStack_108;
                  uStack_104 = (undefined4)*(undefined8 *)(puVar13 + 5);
                  uVar5 = uStack_104;
                  uStack_100 = (undefined4)((ulonglong)*(undefined8 *)(puVar13 + 5) >> 0x20);
                  uVar6 = uStack_100;
                  if (*(ushort *)(lVar9 + 0x12e) != 0) {
                    uVar17 = uVar18;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar17 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar11 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar17 * 0x10) + 0x7f
                                   ) * 0x10 + 0x138 + lVar9);
                        goto code_r0x00018049e659;
                      }
                      uVar16 = (short)uVar17 + 1;
                      uVar17 = (ulonglong)uVar16;
                    } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                  }
                  puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x00018049e659:
                  uStack_10c = uVar1;
                  uStack_108 = uVar4;
                  uStack_104 = uVar5;
                  uStack_100 = uVar6;
                  (*(code *)*puVar11)(plVar10,&uStack_118,puVar11[1]);
                  if (*(longlong *)(param_1 + 0x20) != 0) {
                    lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0x20),0);
                    uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                    if (lVar9 != 0) {
                      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
                      if (*(longlong *)(param_1 + 0x20) != 0) {
                        plVar10 = (longlong *)
                                  UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0x20),0);
                        uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                        if (plVar10 != (longlong *)0x0) {
                          lVar9 = *plVar10;
                          if (*(ushort *)(lVar9 + 0x12e) != 0) {
                            uVar17 = uVar18;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar17 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar11 = (undefined8 *)
                                          ((longlong)
                                           (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar17 * 0x10
                                                    ) + 3) * 0x10 + 0x138 + lVar9);
                                goto code_r0x00018049e749;
                              }
                              uVar16 = (short)uVar17 + 1;
                              uVar17 = (ulonglong)uVar16;
                            } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                          }
                          puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,3);
code_r0x00018049e749:
                          (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
                          if (*(longlong *)(param_1 + 0x20) != 0) {
                            plVar10 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(param_1 + 0x20),0);
                            puVar13 = *(undefined4 **)(TI_SparkEstilo + 0xb8);
                            uStack_d8 = *puVar13;
                            uStack_d4 = puVar13[1];
                            uStack_d0 = puVar13[2];
                            uStack_cc = puVar13[3];
                            puVar11 = (undefined8 *)
                                      UnityEngine_UIElements_StyleColor__op_Implicit
                                                (&uStack_118,&uStack_d8,0);
                            if (plVar10 != (longlong *)0x0) {
                              lVar9 = *plVar10;
                              uVar8 = *puVar11;
                              uVar12 = puVar11[1];
                              uVar1 = *(undefined4 *)(puVar11 + 2);
                              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                uVar17 = uVar18;
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar17 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar11 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                        uVar17 * 0x10) + 9) * 0x10 + 0x138 + lVar9);
                                    goto code_r0x00018049e7f9;
                                  }
                                  uVar16 = (short)uVar17 + 1;
                                  uVar17 = (ulonglong)uVar16;
                                } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                              }
                              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018049e7f9:
                              uStack_f8 = uVar8;
                              uStack_f0 = uVar12;
                              uStack_e8 = uVar1;
                              (*(code *)*puVar11)(plVar10,&uStack_f8,puVar11[1]);
                              SparkEstilo__Espaco__18071fb80
                                        (*(undefined8 *)(param_1 + 0x20),0x40800000,0x40c00000,
                                         0x40800000,CONCAT44(uVar19,0x41200000),0);
                              lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                              uStack_d8 = *(undefined4 *)(lVar9 + 0x60);
                              uStack_d4 = *(undefined4 *)(lVar9 + 100);
                              uStack_d0 = *(undefined4 *)(lVar9 + 0x68);
                              uStack_cc = *(undefined4 *)(lVar9 + 0x6c);
                              uStack_b8 = 0;
                              uStack_c8 = 0;
                              uStack_c0 = 0;
                              func_0x000180cb7cb0(&uStack_c8,&uStack_d8,MR_System.Nullable<UnityEngine.Color>..ctor);
                              uStack_f8 = uStack_c8;
                              uStack_f0 = uStack_c0;
                              uStack_e8 = uStack_b8;
                              lVar9 = SparkEstilo__Texto__180722af0
                                                (LIT_"'Observing'",0xc,&uStack_f8,1,0);
                              if (lVar9 != 0) {
                                lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                                uVar8 = func_0x000182601c10(0,0);
                                if (lVar14 != 0) {
                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar14,uVar8);
                                  plVar10 = (longlong *)
                                            UnityEngine_UIElements_VisualElement__get_style(lVar9,0)
                                  ;
                                  puVar11 = (undefined8 *)
                                            UnityEngine_UIElements_StyleLength__op_Implicit
                                                      (&uStack_128,0x41200000,0);
                                  if (plVar10 != (longlong *)0x0) {
                                    lVar14 = *plVar10;
                                    uVar8 = *puVar11;
                                    uVar19 = *(undefined4 *)(puVar11 + 1);
                                    if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                      uVar17 = uVar18;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar14 + 0xb0) + uVar17 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar11 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                              uVar17 * 0x10) + 0x4f) * 0x10 + 0x138
                                                    + lVar14);
                                          goto code_r0x00018049e969;
                                        }
                                        uVar16 = (short)uVar17 + 1;
                                        uVar17 = (ulonglong)uVar16;
                                      } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                                    }
                                    puVar11 = (undefined8 *)
                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018049e969:
                                    uStack_128 = uVar8;
                                    uStack_120 = uVar19;
                                    (*(code *)*puVar11)(plVar10,&uStack_128,puVar11[1]);
                                    if (*(longlong *)(param_1 + 0x20) != 0) {
                                      UnityEngine_UIElements_VisualElement__Add
                                                (*(longlong *)(param_1 + 0x20),lVar9,0);
                                      uVar8 = func_0x000180315580(TI_System.Action);
                                      FUN_1816a9c60(uVar8,param_1,MD_SparkObservador._Monta_b__26_0,0);
                                      lVar9 = SparkEstilo__Botao__18071e130
                                                        (LIT_"'Keys'",uVar8,0x32,0,0);
                                      if (lVar9 != 0) {
                                        lVar14 = UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar9,0);
                                        uVar8 = func_0x000182601c10(0,0);
                                        if (lVar14 != 0) {
                                          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar14,uVar8);
                                          plVar10 = (longlong *)
                                                    UnityEngine_UIElements_VisualElement__get_style
                                                              (lVar9,0);
                                          puVar11 = (undefined8 *)
                                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                                              (&uStack_128,0x40800000,0);
                                          if (plVar10 != (longlong *)0x0) {
                                            lVar14 = *plVar10;
                                            uVar8 = *puVar11;
                                            uVar19 = *(undefined4 *)(puVar11 + 1);
                                            if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                              uVar17 = uVar18;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar14 + 0xb0) + uVar17 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar11 = (undefined8 *)
                                                            ((longlong)
                                                             (*(int *)(*(longlong *)(lVar14 + 0xb0)
                                                                       + 8 + uVar17 * 0x10) + 0x4f)
                                                             * 0x10 + 0x138 + lVar14);
                                                  goto code_r0x00018049eaa9;
                                                }
                                                uVar16 = (short)uVar17 + 1;
                                                uVar17 = (ulonglong)uVar16;
                                              } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                                            }
                                            puVar11 = (undefined8 *)
                                                      FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018049eaa9:
                                            uStack_128 = uVar8;
                                            uStack_120 = uVar19;
                                            (*(code *)*puVar11)(plVar10,&uStack_128,puVar11[1]);
                                            if (*(longlong *)(param_1 + 0x20) != 0) {
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (*(longlong *)(param_1 + 0x20),lVar9,0);
                                              uVar8 = func_0x000180315580(TI_System.Action);
                                              FUN_1816a9c60(uVar8,0,MD_SparkObservador.PedeSair,0);
                                              uVar19 = 0;
                                              lVar9 = SparkEstilo__Botao__18071e130
                                                                (LIT_"'Leave'",uVar8,0x46,0,0
                                                                );
                                              if (lVar9 != 0) {
                                                lVar14 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                uVar8 = func_0x000182601c10(0,0);
                                                if (lVar14 != 0) {
                                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar14,uVar8);
                                                  if (*(longlong *)(param_1 + 0x20) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0x20),lVar9,0
                                                              );
                                                    uVar8 = *(undefined8 *)(param_1 + 0x20);
                                                    uVar12 = func_0x000180315580(
                                                  TI_MouseOverDetectionManipulator);
                                                  MouseOverDetectionManipulator___ctor__1807b03c0
                                                            (uVar12,uVar8,0);
                                                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                            (uVar8,uVar12,0);
                                                  if (*(longlong *)(param_1 + 0x20) != 0) {
                                                    lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x20),0);
                                                  uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_2,*(undefined8 *)
                                                                        (param_1 + 0x20),0);
                                                    uVar8 = SparkEstilo__Painel__180721ce0(0);
                                                    *(undefined8 *)(param_1 + 0x28) = uVar8;
                                                    func_0x000180314690(param_1 + 0x28,uVar8);
                                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                                      lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x28),0);
                                                  uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
                                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                                      plVar10 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x28),0);
                                                  uVar8 = func_0x0001825fc350(0x41b00000,0);
                                                  puVar11 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_128,uVar8,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar9 = *plVar10;
                                                    uVar8 = *puVar11;
                                                    uVar1 = *(undefined4 *)(puVar11 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar9 + 0xb0) + 8 +
                                                                              uVar17 * 0x10) + 0x73)
                                                                     * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018049ecf9;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                            0x73);
code_r0x00018049ecf9:
                                                    uStack_128 = uVar8;
                                                    uStack_120 = uVar1;
                                                    (*(code *)*puVar11)(plVar10,&uStack_128,
                                                                        puVar11[1]);
                                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                                      plVar10 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x28),0);
                                                  uVar8 = func_0x0001825fc350(0x42480000,0);
                                                  puVar11 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_128,uVar8,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar9 = *plVar10;
                                                    uVar8 = *puVar11;
                                                    uVar1 = *(undefined4 *)(puVar11 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar9 + 0xb0) + 8 +
                                                                              uVar17 * 0x10) + 0x47)
                                                                     * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018049eda9;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                            0x47);
code_r0x00018049eda9:
                                                    uStack_128 = uVar8;
                                                    uStack_120 = uVar1;
                                                    (*(code *)*puVar11)(plVar10,&uStack_128,
                                                                        puVar11[1]);
                                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                                      plVar10 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x28),0);
                                                  uVar8 = func_0x0001825fc350(0xc2480000,0);
                                                  uVar12 = func_0x0001825fc560(0,0);
                                                  uStack_70 = 0;
                                                  uStack_80 = 0;
                                                  uStack_78 = 0;
                                                  func_0x000182607f40(&uStack_80,uVar8,uVar12,0);
                                                  uStack_118 = (undefined4)uStack_80;
                                                  uStack_114 = uStack_80._4_4_;
                                                  uStack_110 = (undefined4)uStack_78;
                                                  uStack_10c = uStack_78._4_4_;
                                                  uStack_108 = (undefined4)uStack_70;
                                                  uStack_104 = (undefined4)
                                                               ((ulonglong)uStack_70 >> 0x20);
                                                  puVar13 = (undefined4 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleRotate__op_Implicit
                                                            (&uStack_f8,&uStack_118,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar9 = *plVar10;
                                                    uStack_118 = *puVar13;
                                                    uStack_114 = puVar13[1];
                                                    uStack_110 = puVar13[2];
                                                    uStack_10c = (undefined4)
                                                                 *(undefined8 *)(puVar13 + 3);
                                                    uVar1 = uStack_10c;
                                                    uStack_108 = (undefined4)
                                                                 ((ulonglong)
                                                                  *(undefined8 *)(puVar13 + 3) >>
                                                                 0x20);
                                                    uVar4 = uStack_108;
                                                    uStack_104 = (undefined4)
                                                                 *(undefined8 *)(puVar13 + 5);
                                                    uVar5 = uStack_104;
                                                    uStack_100 = (undefined4)
                                                                 ((ulonglong)
                                                                  *(undefined8 *)(puVar13 + 5) >>
                                                                 0x20);
                                                    uVar6 = uStack_100;
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar9 + 0xb0) + 8 +
                                                                              uVar17 * 0x10) + 0x7f)
                                                                     * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018049eea9;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                            0x7f);
code_r0x00018049eea9:
                                                    uStack_10c = uVar1;
                                                    uStack_108 = uVar4;
                                                    uStack_104 = uVar5;
                                                    uStack_100 = uVar6;
                                                    (*(code *)*puVar11)(plVar10,&uStack_118,
                                                                        puVar11[1]);
                                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                                      plVar10 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x28),0);
                                                  puVar11 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_128,0x43960000,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar9 = *plVar10;
                                                    uVar8 = *puVar11;
                                                    uVar1 = *(undefined4 *)(puVar11 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar9 + 0xb0) + 8 +
                                                                              uVar17 * 0x10) + 0xad)
                                                                     * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018049ef59;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                            0xad);
code_r0x00018049ef59:
                                                    uStack_128 = uVar8;
                                                    uStack_120 = uVar1;
                                                    (*(code *)*puVar11)(plVar10,&uStack_128,
                                                                        puVar11[1]);
                                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                                      plVar10 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x28),0);
                                                  puVar13 = *(undefined4 **)(TI_SparkEstilo + 0xb8);
                                                  uStack_d8 = *puVar13;
                                                  uStack_d4 = puVar13[1];
                                                  uStack_d0 = puVar13[2];
                                                  uStack_cc = puVar13[3];
                                                  puVar11 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_118,&uStack_d8,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar9 = *plVar10;
                                                    uVar8 = *puVar11;
                                                    uVar12 = puVar11[1];
                                                    uVar1 = *(undefined4 *)(puVar11 + 2);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar9 + 0xb0) + 8 +
                                                                              uVar17 * 0x10) + 9) *
                                                                     0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018049f009;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,9
                                                                           );
code_r0x00018049f009:
                                                    uStack_f8 = uVar8;
                                                    uStack_f0 = uVar12;
                                                    uStack_e8 = uVar1;
                                                    (*(code *)*puVar11)(plVar10,&uStack_f8,
                                                                        puVar11[1]);
                                                    SparkEstilo__Espaco__18071fb80
                                                              (*(undefined8 *)(param_1 + 0x28),
                                                               0x40c00000,0x41000000,0x41200000,
                                                               CONCAT44(uVar19,0x41200000),0);
                                                    lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar9,0);
                                                    if (lVar9 != 0) {
                                                      lVar14 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar14 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar14,uVar8);
                                                    plVar10 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar8 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar14 = *plVar10;
                                                    if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar14 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar14 + 0xb0) + 8
                                                                              + uVar17 * 0x10) +
                                                                     0x45) * 0x10 + 0x138 + lVar14);
                                                          goto code_r0x00018049f129;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar14 + 0x12e))
                                                      ;
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                            0x45);
code_r0x00018049f129:
                                                    (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
                                                    lVar14 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar8 = func_0x000182601c10(0,0);
                                                  if (lVar14 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar14,uVar8);
                                                    plVar10 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  puVar11 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_128,0x40c00000,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar14 = *plVar10;
                                                    uVar8 = *puVar11;
                                                    uVar19 = *(undefined4 *)(puVar11 + 1);
                                                    if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar14 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar11 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar14 + 0xb0) + 8
                                                                              + uVar17 * 0x10) +
                                                                     0x4b) * 0x10 + 0x138 + lVar14);
                                                          goto code_r0x00018049f1e9;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar14 + 0x12e))
                                                      ;
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                            0x4b);
code_r0x00018049f1e9:
                                                    uStack_128 = uVar8;
                                                    uStack_120 = uVar19;
                                                    (*(code *)*puVar11)(plVar10,&uStack_128,
                                                                        puVar11[1]);
                                                    lVar14 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_d8 = *(undefined4 *)(lVar14 + 0x60);
                                                    uStack_d4 = *(undefined4 *)(lVar14 + 100);
                                                    uStack_d0 = *(undefined4 *)(lVar14 + 0x68);
                                                    uStack_cc = *(undefined4 *)(lVar14 + 0x6c);
                                                    uStack_a0 = 0;
                                                    uStack_b0 = 0;
                                                    uStack_a8 = 0;
                                                    func_0x000180cb7cb0(&uStack_b0,&uStack_d8,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_f8 = uStack_b0;
                                                    uStack_f0 = uStack_a8;
                                                    uStack_e8 = uStack_a0;
                                                    uVar8 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"'Observer mode'",0xd,
                                                                       &uStack_f8,1,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,uVar8,0);
                                                    uVar8 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar8,param_1,MD_SparkObservador.FechaAjuda
                                                                  ,0);
                                                    uVar8 = SparkEstilo__Fechar__180720510(uVar8,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,uVar8,0);
                                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x28),lVar9
                                                                 ,0);
                                                      lVar9 = func_0x000180314710(TI_string__,8);
                                                      if (lVar9 != 0) {
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar9 + 0x20) =
                                                               LIT_"'You are watching as a free camera - nobody sees you here.'";
                                                          func_0x000180314690(lVar9 + 0x20);
                                                          if (1 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x28) =
                                                                 LIT_"''";
                                                            func_0x000180314690(lVar9 + 0x28);
                                                            if (2 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x30) =
                                                                   LIT_"'<color=#FFDD8C>W A S D</color>  move the camera'";
                                                              func_0x000180314690(lVar9 + 0x30);
                                                              if (3 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x38) =
                                                                     LIT_"'<color=#FFDD8C>Space</color>  up      <color=#FFDD8C>Shi...";
                                                                func_0x000180314690(lVar9 + 0x38);
                                                                if (4 < *(uint *)(lVar9 + 0x18)) {
                                                                  *(undefined8 *)(lVar9 + 0x40) =
                                                                       LIT_"'<color=#FFDD8C>Right mouse button</color>  turn the camera'";
                                                                  func_0x000180314690(lVar9 + 0x40);
                                                                  if (5 < *(uint *)(lVar9 + 0x18)) {
                                                                    *(undefined8 *)(lVar9 + 0x48) =
                                                                         LIT_"'<color=#FFDD8C>Mouse wheel</color>  zoom'";
                                                                    func_0x000180314690(lVar9 + 0x48
                                                                                       );
                                                                    if (6 < *(uint *)(lVar9 + 0x18))
                                                                    {
                                                                      *(undefined8 *)(lVar9 + 0x50)
                                                                           = LIT_"''";
                                                                      func_0x000180314690(lVar9 + 
                                                  0x50);
                                                  if (7 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x58) =
                                                         LIT_"'The camera stays inside the arena. <color=#FFDD8C>Leave<...";
                                                    func_0x000180314690(lVar9 + 0x58);
                                                    while (uVar7 = (uint)uVar18,
                                                          (int)uVar7 < *(int *)(lVar9 + 0x18)) {
                                                      if (*(uint *)(lVar9 + 0x18) <= uVar7) {
                                                        FUN_1803155c0();
                                                        pcVar3 = (code *)swi(3);
                                                        (*pcVar3)();
                                                        return;
                                                      }
                                                      lVar14 = *(longlong *)
                                                                (lVar9 + 0x20 +
                                                                (longlong)(int)uVar7 * 8);
                                                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                        func_0x000180315660(TI_SparkEstilo);
                                                      }
                                                      lVar15 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                      uStack_68 = *(undefined4 *)(lVar15 + 0x40);
                                                      uStack_64 = *(undefined4 *)(lVar15 + 0x44);
                                                      uStack_60 = *(undefined4 *)(lVar15 + 0x48);
                                                      uStack_5c = *(undefined4 *)(lVar15 + 0x4c);
                                                      uStack_f8 = 0;
                                                      uStack_f0 = 0;
                                                      uStack_e8 = 0;
                                                      func_0x000180cb7cb0(&uStack_f8,&uStack_68,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_108 = uStack_e8;
                                                      uStack_118 = (undefined4)uStack_f8;
                                                      uStack_114 = uStack_f8._4_4_;
                                                      uStack_110 = (undefined4)uStack_f0;
                                                      uStack_10c = uStack_f0._4_4_;
                                                      lVar15 = SparkEstilo__Texto__180722af0
                                                                         (lVar14,0xb,&uStack_118,0,0
                                                                         );
                                                      if (lVar15 == 0) {
DAT_18049f929:
                                                        FUN_1803155d0();
                                                        pcVar3 = (code *)swi(3);
                                                        (*pcVar3)();
                                                        return;
                                                      }
                                                                                                            
                                                  UnityEngine_UIElements_TextElement__set_enableRichText
                                                            (lVar15,1,0);
                                                  plVar10 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar15,0);
                                                  uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (plVar10 == (longlong *)0x0)
                                                  goto DAT_18049f929;
                                                  lVar2 = *plVar10;
                                                  if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                    uVar16 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar2 + 0xb0) +
                                                           (ulonglong)uVar16 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar11 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar2 + 0xb0) + 8 +
                                                                            (ulonglong)uVar16 * 0x10
                                                                            ) + 0xab) * 0x10 + 0x138
                                                                  + lVar2);
                                                        goto code_r0x00018049f519;
                                                      }
                                                      uVar16 = uVar16 + 1;
                                                    } while (uVar16 < *(ushort *)(lVar2 + 0x12e));
                                                  }
                                                  puVar11 = (undefined8 *)
                                                            FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                          0xab);
code_r0x00018049f519:
                                                  (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
                                                  plVar10 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar15,0);
                                                  uVar8 = func_0x000182601c10(0,0);
                                                  if (plVar10 == (longlong *)0x0)
                                                  goto DAT_18049f929;
                                                  lVar2 = *plVar10;
                                                  if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                    uVar16 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar2 + 0xb0) +
                                                           (ulonglong)uVar16 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar11 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar2 + 0xb0) + 8 +
                                                                            (ulonglong)uVar16 * 0x10
                                                                            ) + 0x3d) * 0x10 + 0x138
                                                                  + lVar2);
                                                        goto code_r0x00018049f599;
                                                      }
                                                      uVar16 = uVar16 + 1;
                                                    } while (uVar16 < *(ushort *)(lVar2 + 0x12e));
                                                  }
                                                  puVar11 = (undefined8 *)
                                                            FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                          0x3d);
code_r0x00018049f599:
                                                  (*(code *)*puVar11)(plVar10,uVar8);
                                                  if (lVar14 == 0) goto DAT_18049f929;
                                                  if (*(int *)(lVar14 + 0x10) == 0) {
                                                    lVar14 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar15,0);
                                                  puVar11 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_d8,0x40c00000,0);
                                                  if (lVar14 == 0) goto code_r0x00018049f935;
                                                  uStack_120 = *(undefined4 *)(puVar11 + 1);
                                                  uStack_128 = *puVar11;
                                                  FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle);
                                                  }
                                                  if (*(longlong *)(param_1 + 0x28) == 0)
                                                  goto code_r0x00018049f935;
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (*(longlong *)(param_1 + 0x28),lVar15);
                                                  uVar18 = (ulonglong)(uVar7 + 1);
                                                  }
                                                  uVar8 = *(undefined8 *)(param_1 + 0x28);
                                                  uVar12 = func_0x000180315580(TI_MouseOverDetectionManipulator)
                                                  ;
                                                  MouseOverDetectionManipulator___ctor__1807b03c0
                                                            (uVar12,uVar8,0);
                                                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                            (uVar8,uVar12,0);
                                                  if (*(longlong *)(param_1 + 0x28) != 0) {
                                                    lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x28),0);
                                                  uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_2,*(undefined8 *)
                                                                        (param_1 + 0x28),0);
                                                    return;
                                                  }
                                                  }
code_r0x00018049f935:
                                                  FUN_1803155d0();
                                                  pcVar3 = (code *)swi(3);
                                                  (*pcVar3)();
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  FUN_1803155c0();
                                                  pcVar3 = (code *)swi(3);
                                                  (*pcVar3)();
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
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

