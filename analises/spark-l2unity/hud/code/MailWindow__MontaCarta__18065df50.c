// MailWindow__MontaCarta__18065df50 @ 0x18065df50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MailWindow__MontaCarta__18065df50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort uVar9;
  ulonglong uVar11;
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
  
  if (cRam00000001834b3d8b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"''");
    cRam00000001834b3d8b = '\x01';
  }
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  func_0x000180314690(param_1 + 0xb0,uVar3);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0,0);
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *plVar5;
          uVar11 = 0;
          uVar3 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar10 = uVar11;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar10 * 0x10) + 0x57) * 0x10
                          + 0x138 + lVar4);
                goto code_r0x00018065e119;
              }
              uVar9 = (short)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018065e119:
          uStack_b8 = uVar3;
          uStack_b0 = uVar1;
          (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
          lVar4 = *(longlong *)(param_1 + 0xb0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_b8 = *(undefined8 *)(lVar7 + 0x40);
          uStack_b0 = *(undefined4 *)(lVar7 + 0x48);
          uStack_ac = *(undefined4 *)(lVar7 + 0x4c);
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          func_0x000180cb7cb0(&uStack_98,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_b8 = uStack_98;
          uStack_b0 = (undefined4)uStack_90;
          uStack_ac = uStack_90._4_4_;
          uStack_a8 = uStack_88;
          uVar3 = SparkEstilo__Texto__180722af0(LIT_"''",0xb,&uStack_b8,0,0);
          *(undefined8 *)(param_1 + 0xd0) = uVar3;
          func_0x000180314690(param_1 + 0xd0,uVar3);
          if (lVar4 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
            if (*(longlong *)(param_1 + 0xd0) != 0) {
              lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xd0),0);
              uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
              if (lVar4 != 0) {
                FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                if (*(longlong *)(param_1 + 0xd0) != 0) {
                  lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0xd0),0);
                  uVar3 = func_0x000182601c10(0,0);
                  if (lVar4 != 0) {
                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                    lVar4 = *(longlong *)(param_1 + 0xb0);
                    uVar3 = SparkEstilo__Divisor__18071f770(0);
                    if (lVar4 != 0) {
                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                      lVar4 = SparkEstilo__Lista__1807211b0(0);
                      if (lVar4 != 0) {
                        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                        uVar3 = func_0x000182601c10(0x3f800000,0);
                        if (lVar7 != 0) {
                          FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                          plVar5 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                          puVar6 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0,0);
                          if (plVar5 != (longlong *)0x0) {
                            lVar7 = *plVar5;
                            uVar3 = *puVar6;
                            uVar1 = *(undefined4 *)(puVar6 + 1);
                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                              uVar10 = uVar11;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar6 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                     uVar10 * 0x10) + 0x37) * 0x10 + 0x138 + lVar7);
                                  goto code_r0x00018065e359;
                                }
                                uVar9 = (short)uVar10 + 1;
                                uVar10 = (ulonglong)uVar9;
                              } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                            }
                            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x00018065e359:
                            uStack_b8 = uVar3;
                            uStack_b0 = uVar1;
                            (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                            plVar5 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                            puVar6 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0,0)
                            ;
                            if (plVar5 != (longlong *)0x0) {
                              lVar7 = *plVar5;
                              uVar3 = *puVar6;
                              uVar1 = *(undefined4 *)(puVar6 + 1);
                              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar6 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                       uVar11 * 0x10) + 0x57) * 0x10 + 0x138 + lVar7
                                             );
                                    goto code_r0x00018065e3e9;
                                  }
                                  uVar9 = (short)uVar11 + 1;
                                  uVar11 = (ulonglong)uVar9;
                                } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                              }
                              puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018065e3e9:
                              uStack_b8 = uVar3;
                              uStack_b0 = uVar1;
                              (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                              lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                              uStack_b8 = *(undefined8 *)(lVar7 + 0x40);
                              uStack_b0 = *(undefined4 *)(lVar7 + 0x48);
                              uStack_ac = *(undefined4 *)(lVar7 + 0x4c);
                              uStack_70 = 0;
                              uStack_80 = 0;
                              uStack_78 = 0;
                              func_0x000180cb7cb0(&uStack_80,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                              uStack_b8 = uStack_80;
                              uStack_b0 = (undefined4)uStack_78;
                              uStack_ac = uStack_78._4_4_;
                              uStack_a8 = uStack_70;
                              uVar3 = SparkEstilo__Texto__180722af0
                                                (LIT_"''",0xb,&uStack_b8,0,0);
                              *(undefined8 *)(param_1 + 0xd8) = uVar3;
                              func_0x000180314690(param_1 + 0xd8,uVar3);
                              UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                              if (*(longlong *)(param_1 + 0xd8) != 0) {
                                lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(param_1 + 0xd8),0);
                                uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                if (lVar7 != 0) {
                                  FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                  if (*(longlong *)(param_1 + 0xd8) != 0) {
                                    plVar5 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (*(longlong *)(param_1 + 0xd8),0);
                                    if (*(longlong *)(param_1 + 0xd8) != 0) {
                                      plVar8 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (*(longlong *)(param_1 + 0xd8),0);
                                      puVar6 = (undefined8 *)
                                               UnityEngine_UIElements_StyleLength__op_Implicit
                                                         (&uStack_b8,0x40c00000,0);
                                      if (plVar8 != (longlong *)0x0) {
                                        lVar7 = *plVar8;
                                        uVar3 = *puVar6;
                                        uVar1 = *(undefined4 *)(puVar6 + 1);
                                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                          uVar9 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar7 + 0xb0) +
                                                 (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar6 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                                 (ulonglong)uVar9 * 0x10) + 0x4f) *
                                                        0x10 + 0x138 + lVar7);
                                              goto code_r0x00018065e577;
                                            }
                                            uVar9 = uVar9 + 1;
                                          } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                        }
                                        puVar6 = (undefined8 *)
                                                 FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018065e577:
                                        uStack_b8 = uVar3;
                                        uStack_b0 = uVar1;
                                        (*(code *)*puVar6)(plVar8,&uStack_b8,puVar6[1]);
                                        if (plVar5 != (longlong *)0x0) {
                                          lVar7 = *plVar5;
                                          if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                            uVar9 = 0;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar7 + 0xb0) +
                                                   (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                puVar6 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8
                                                                   + (ulonglong)uVar9 * 0x10) + 0x4d
                                                          ) * 0x10 + 0x138 + lVar7);
                                                goto code_r0x00018065e5e9;
                                              }
                                              uVar9 = uVar9 + 1;
                                            } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                          }
                                          puVar6 = (undefined8 *)
                                                   FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018065e5e9:
                                          uStack_b8 = uVar3;
                                          uStack_b0 = uVar1;
                                          (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                                          if (*(longlong *)(param_1 + 0xd8) != 0) {
                                            plVar5 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (*(longlong *)(param_1 + 0xd8),0);
                                            puVar6 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                                               (&uStack_b8,0x40800000,0);
                                            if (plVar5 != (longlong *)0x0) {
                                              lVar7 = *plVar5;
                                              uVar3 = *puVar6;
                                              uVar1 = *(undefined4 *)(puVar6 + 1);
                                              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                uVar9 = 0;
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar7 + 0xb0) +
                                                       (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                    puVar6 = (undefined8 *)
                                                             ((longlong)
                                                              (*(int *)(*(longlong *)(lVar7 + 0xb0)
                                                                        + 8 + (ulonglong)uVar9 *
                                                                              0x10) + 0x51) * 0x10 +
                                                              0x138 + lVar7);
                                                    goto code_r0x00018065e699;
                                                  }
                                                  uVar9 = uVar9 + 1;
                                                } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                              }
                                              puVar6 = (undefined8 *)
                                                       FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018065e699:
                                              uStack_b8 = uVar3;
                                              uStack_b0 = uVar1;
                                              (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                                              if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (*(longlong *)(param_1 + 0xb0),lVar4,0);
                                                uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                UnityEngine_UIElements_VisualElement___ctor(uVar3,0)
                                                ;
                                                *(undefined8 *)(param_1 + 0xe8) = uVar3;
                                                func_0x000180314690(param_1 + 0xe8,uVar3);
                                                if (*(longlong *)(param_1 + 0xe8) != 0) {
                                                  lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe8),0);
                                                  uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (*(longlong *)(param_1 + 0xe8) != 0) {
                                                      lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe8),0);
                                                  uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0x3f,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (*(longlong *)(param_1 + 0xe8) != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe8),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40c00000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar4 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      uVar9 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             (ulonglong)uVar9 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             (ulonglong)uVar9 * 0x10
                                                                             ) + 0x51) * 0x10 +
                                                                    0x138 + lVar4);
                                                          goto code_r0x00018065e819;
                                                        }
                                                        uVar9 = uVar9 + 1;
                                                      } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018065e819:
                                                    uStack_b8 = uVar3;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                                                    if (*(longlong *)(param_1 + 0xe8) != 0) {
                                                      lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe8),0);
                                                  uVar3 = func_0x000182601c10(0,0);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb0),
                                                                 *(undefined8 *)(param_1 + 0xe8),0);
                                                      lVar4 = *(longlong *)(param_1 + 0xb0);
                                                      lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                      uStack_b8 = *(undefined8 *)(lVar7 + 0x60);
                                                      uStack_b0 = *(undefined4 *)(lVar7 + 0x68);
                                                      uStack_ac = *(undefined4 *)(lVar7 + 0x6c);
                                                      uStack_58 = 0;
                                                      uStack_68 = 0;
                                                      uStack_60 = 0;
                                                      func_0x000180cb7cb0(&uStack_68,&uStack_b8,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_b8 = uStack_68;
                                                      uStack_b0 = (undefined4)uStack_60;
                                                      uStack_ac = uStack_60._4_4_;
                                                      uStack_a8 = uStack_58;
                                                      uVar3 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",0xb,
                                                                         &uStack_b8,0,0);
                                                      *(undefined8 *)(param_1 + 0xe0) = uVar3;
                                                      func_0x000180314690(param_1 + 0xe0,uVar3);
                                                      if (lVar4 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar4,uVar3,0);
                                                        if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                          plVar5 = (longlong *)
                                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40800000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar4 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      uVar9 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             (ulonglong)uVar9 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             (ulonglong)uVar9 * 0x10
                                                                             ) + 0x51) * 0x10 +
                                                                    0x138 + lVar4);
                                                          goto code_r0x00018065e9b9;
                                                        }
                                                        uVar9 = uVar9 + 1;
                                                      } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018065e9b9:
                                                    uStack_b8 = uVar3;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                                                    if (*(longlong *)(param_1 + 0xe0) != 0) {
                                                      lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                                  uVar3 = func_0x000182601c10(0,0);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    uVar3 = MailWindow__Fileira(0);
                                                    *(undefined8 *)(param_1 + 0xf0) = uVar3;
                                                    func_0x000180314690(param_1 + 0xf0,uVar3);
                                                    if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb0),
                                                                 *(undefined8 *)(param_1 + 0xf0),0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0xb0),0);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

