// OptionsWindow__Escolha__180692e50 @ 0x180692e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
OptionsWindow__Escolha__180692e50
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ushort uVar16;
  ulonglong uVar18;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar19;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  ulonglong uVar17;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  if (cRam00000001834b3e9d == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Add);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__2);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__3);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass64_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Opcoes/EditBox_DF_bg'");
    FUN_180315380(LIT_"'Opcoes/Combobox_DF_Btn'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3e9d = '\x01';
  }
  lVar11 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass64_0);
  func_0x0001803f01b0(lVar11,0);
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x18) = param_2;
    func_0x000180314690(lVar11 + 0x18,param_2);
    *(undefined8 *)(lVar11 + 0x20) = param_3;
    func_0x000180314690(lVar11 + 0x20,param_3);
    *(longlong *)(lVar11 + 0x38) = param_1;
    func_0x000180314690(lVar11 + 0x38,param_1);
    *(undefined8 *)(lVar11 + 0x40) = param_4;
    func_0x000180314690(lVar11 + 0x40,param_4);
    uVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar12,0);
    *(undefined8 *)(lVar11 + 0x30) = uVar12;
    func_0x000180314690(lVar11 + 0x30,uVar12);
    if (*(longlong *)(lVar11 + 0x30) != 0) {
      lVar13 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar11 + 0x30),0);
      uVar12 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar13 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar13,uVar12);
        if (*(longlong *)(lVar11 + 0x30) != 0) {
          lVar13 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar11 + 0x30),0);
          uVar12 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar13 != 0) {
            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar13,uVar12);
            if (*(longlong *)(lVar11 + 0x30) != 0) {
              plVar14 = (longlong *)
                        UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(lVar11 + 0x30),0);
              puVar15 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8);
              if (plVar14 != (longlong *)0x0) {
                lVar13 = *plVar14;
                uVar18 = 0;
                uVar12 = *puVar15;
                uVar1 = *(undefined4 *)(puVar15 + 1);
                if (*(ushort *)(lVar13 + 0x12e) != 0) {
                  uVar17 = uVar18;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + uVar17 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar15 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + uVar17 * 0x10) + 0xad)
                                 * 0x10 + 0x138 + lVar13);
                      goto code_r0x000180693179;
                    }
                    uVar16 = (short)uVar17 + 1;
                    uVar17 = (ulonglong)uVar16;
                  } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
                }
                puVar15 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180693179:
                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar1);
                uStack_b8 = uVar12;
                (*(code *)*puVar15)(plVar14,&uStack_b8,puVar15[1]);
                if (*(longlong *)(lVar11 + 0x30) != 0) {
                  plVar14 = (longlong *)
                            UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(lVar11 + 0x30),0);
                  puVar15 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8);
                  if (plVar14 != (longlong *)0x0) {
                    lVar13 = *plVar14;
                    uVar12 = *puVar15;
                    uVar1 = *(undefined4 *)(puVar15 + 1);
                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                      uVar17 = uVar18;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + uVar17 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar15 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + uVar17 * 0x10) +
                                     0x43) * 0x10 + 0x138 + lVar13);
                          goto code_r0x000180693219;
                        }
                        uVar16 = (short)uVar17 + 1;
                        uVar17 = (ulonglong)uVar16;
                      } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
                    }
                    puVar15 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180693219:
                    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar1);
                    uStack_b8 = uVar12;
                    (*(code *)*puVar15)(plVar14,&uStack_b8,puVar15[1]);
                    if (*(longlong *)(lVar11 + 0x30) != 0) {
                      plVar14 = (longlong *)
                                UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(lVar11 + 0x30),0);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar12 = SparkEstilo__Textura(LIT_"'Opcoes/EditBox_DF_bg'",0);
                      puVar15 = (undefined8 *)
                                UnityEngine_UIElements_StyleBackground__op_Implicit
                                          (&uStack_b8,uVar12,0);
                      if (plVar14 != (longlong *)0x0) {
                        lVar13 = *plVar14;
                        uVar6 = *puVar15;
                        uVar7 = puVar15[1];
                        uVar8 = puVar15[2];
                        uVar9 = puVar15[3];
                        uVar12 = puVar15[4];
                        if (*(ushort *)(lVar13 + 0x12e) != 0) {
                          uVar17 = uVar18;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + uVar17 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar15 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + uVar17 * 0x10)
                                         + 0xb) * 0x10 + 0x138 + lVar13);
                              goto code_r0x0001806932d9;
                            }
                            uVar16 = (short)uVar17 + 1;
                            uVar17 = (ulonglong)uVar16;
                          } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
                        }
                        puVar15 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806932d9:
                        uStack_b8 = uVar6;
                        uStack_b0 = uVar7;
                        uStack_a8 = uVar8;
                        uStack_a0 = uVar9;
                        uStack_98 = uVar12;
                        (*(code *)*puVar15)(plVar14,&uStack_b8,puVar15[1]);
                        SparkEstilo__Fatia(*(undefined8 *)(lVar11 + 0x30),3,3,3,CONCAT44(uVar19,3),0
                                          );
                        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                          func_0x000180315660(TI_OptionsWindow);
                        }
                        uStack_b8 = *(undefined8 *)
                                     (*(longlong *)(TI_OptionsWindow + 0xb8) + 0x28);
                        uStack_b0 = *(undefined8 *)
                                     (*(longlong *)(TI_OptionsWindow + 0xb8) + 0x30);
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        func_0x000180cb7cb0(&uStack_88,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                        uStack_b8 = uStack_88;
                        uStack_b0 = uStack_80;
                        uStack_a8 = CONCAT44(uStack_a8._4_4_,uStack_78);
                        uVar12 = SparkEstilo__Texto(LIT_"''",0xb,&uStack_b8,0,0);
                        *(undefined8 *)(lVar11 + 0x28) = uVar12;
                        func_0x000180314690(lVar11 + 0x28,uVar12);
                        if (*(longlong *)(lVar11 + 0x28) != 0) {
                          lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(lVar11 + 0x28),0);
                          uVar12 = func_0x000182601c10(0x3f800000,0);
                          if (lVar13 != 0) {
                            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar13,uVar12);
                            if (*(longlong *)(lVar11 + 0x28) != 0) {
                              plVar14 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar11 + 0x28),0);
                              puVar15 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8);
                              if (plVar14 != (longlong *)0x0) {
                                lVar13 = *plVar14;
                                uVar12 = *puVar15;
                                uVar19 = *(undefined4 *)(puVar15 + 1);
                                if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                  uVar17 = uVar18;
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + uVar17 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar15 = (undefined8 *)
                                                ((longlong)
                                                 (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                                          uVar17 * 0x10) + 0x61) * 0x10 + 0x138 +
                                                lVar13);
                                      goto code_r0x000180693479;
                                    }
                                    uVar16 = (short)uVar17 + 1;
                                    uVar17 = (ulonglong)uVar16;
                                  } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
                                }
                                puVar15 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180693479:
                                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
                                uStack_b8 = uVar12;
                                (*(code *)*puVar15)(plVar14,&uStack_b8,puVar15[1]);
                                if (*(longlong *)(lVar11 + 0x28) != 0) {
                                  lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(lVar11 + 0x28),0);
                                  uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                                  if (lVar13 != 0) {
                                    FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar12);
                                    if (*(longlong *)(lVar11 + 0x28) != 0) {
                                      lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                                         (*(longlong *)(lVar11 + 0x28),0);
                                      uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                      if (lVar13 != 0) {
                                        FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar13,uVar12);
                                        if (*(longlong *)(lVar11 + 0x30) != 0) {
                                          UnityEngine_UIElements_VisualElement__Add
                                                    (*(longlong *)(lVar11 + 0x30),
                                                     *(undefined8 *)(lVar11 + 0x28),0);
                                          uVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                          UnityEngine_UIElements_VisualElement___ctor(uVar12,0);
                                          *(undefined8 *)(lVar11 + 0x10) = uVar12;
                                          func_0x000180314690(lVar11 + 0x10,uVar12);
                                          if (*(longlong *)(lVar11 + 0x10) != 0) {
                                            plVar14 = (longlong *)
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar11 + 0x10),0);
                                            puVar15 = (undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8);
                                            if (plVar14 != (longlong *)0x0) {
                                              lVar13 = *plVar14;
                                              uVar12 = *puVar15;
                                              uVar19 = *(undefined4 *)(puVar15 + 1);
                                              if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                                uVar17 = uVar18;
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar13 + 0xb0) + uVar17 * 0x10
                                                       ) == TI_UnityEngine.UIElements.IStyle) {
                                                    puVar15 = (undefined8 *)
                                                              ((longlong)
                                                               (*(int *)(*(longlong *)
                                                                          (lVar13 + 0xb0) + 8 +
                                                                        uVar17 * 0x10) + 0xad) *
                                                               0x10 + 0x138 + lVar13);
                                                    goto code_r0x0001806935e9;
                                                  }
                                                  uVar16 = (short)uVar17 + 1;
                                                  uVar17 = (ulonglong)uVar16;
                                                } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
                                              }
                                              puVar15 = (undefined8 *)
                                                        FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806935e9:
                                              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
                                              uStack_b8 = uVar12;
                                              (*(code *)*puVar15)(plVar14,&uStack_b8,puVar15[1]);
                                              if (*(longlong *)(lVar11 + 0x10) != 0) {
                                                plVar14 = (longlong *)
                                                                                                                    
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar11 + 0x10),0);
                                                puVar15 = (undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8);
                                                if (plVar14 != (longlong *)0x0) {
                                                  lVar13 = *plVar14;
                                                  uVar12 = *puVar15;
                                                  uVar19 = *(undefined4 *)(puVar15 + 1);
                                                  if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                                    uVar17 = uVar18;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar13 + 0xb0) +
                                                           uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                        puVar15 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar13 + 0xb0) + 8 +
                                                                            uVar17 * 0x10) + 0x43) *
                                                                   0x10 + 0x138 + lVar13);
                                                        goto code_r0x000180693689;
                                                      }
                                                      uVar16 = (short)uVar17 + 1;
                                                      uVar17 = (ulonglong)uVar16;
                                                    } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
                                                  }
                                                  puVar15 = (undefined8 *)
                                                            FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,
                                                                          0x43);
code_r0x000180693689:
                                                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
                                                  uStack_b8 = uVar12;
                                                  (*(code *)*puVar15)(plVar14,&uStack_b8,puVar15[1])
                                                  ;
                                                  if (*(longlong *)(lVar11 + 0x10) != 0) {
                                                    plVar14 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar11 + 0x10),0);
                                                  puVar15 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8);
                                                  if (plVar14 != (longlong *)0x0) {
                                                    lVar13 = *plVar14;
                                                    uVar12 = *puVar15;
                                                    uVar19 = *(undefined4 *)(puVar15 + 1);
                                                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar13 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar15 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar13 + 0xb0) + 8
                                                                              + uVar17 * 0x10) +
                                                                     0x4f) * 0x10 + 0x138 + lVar13);
                                                          goto code_r0x000180693729;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar13 + 0x12e))
                                                      ;
                                                    }
                                                    puVar15 = (undefined8 *)
                                                              FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,
                                                                            0x4f);
code_r0x000180693729:
                                                    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
                                                    uStack_b8 = uVar12;
                                                    (*(code *)*puVar15)(plVar14,&uStack_b8,
                                                                        puVar15[1]);
                                                    if (*(longlong *)(lVar11 + 0x10) != 0) {
                                                      plVar14 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar11 + 0x10),0);
                                                  uVar12 = SparkEstilo__Textura
                                                                     (LIT_"'Opcoes/Combobox_DF_Btn'",0);
                                                  puVar15 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_b8,uVar12,0);
                                                  if (plVar14 != (longlong *)0x0) {
                                                    lVar13 = *plVar14;
                                                    uVar6 = *puVar15;
                                                    uVar7 = puVar15[1];
                                                    uVar8 = puVar15[2];
                                                    uVar9 = puVar15[3];
                                                    uVar12 = puVar15[4];
                                                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar13 + 0xb0) +
                                                             uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar15 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar13 + 0xb0) + 8
                                                                              + uVar18 * 0x10) + 0xb
                                                                     ) * 0x10 + 0x138 + lVar13);
                                                          goto code_r0x0001806937d7;
                                                        }
                                                        uVar16 = (short)uVar18 + 1;
                                                        uVar18 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar13 + 0x12e))
                                                      ;
                                                    }
                                                    puVar15 = (undefined8 *)
                                                              FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,
                                                                            0xb);
code_r0x0001806937d7:
                                                    uStack_b8 = uVar6;
                                                    uStack_b0 = uVar7;
                                                    uStack_a8 = uVar8;
                                                    uStack_a0 = uVar9;
                                                    uStack_98 = uVar12;
                                                    (*(code *)*puVar15)(plVar14,&uStack_b8,
                                                                        puVar15[1]);
                                                    if (*(longlong *)(lVar11 + 0x30) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(lVar11 + 0x30),
                                                                 *(undefined8 *)(lVar11 + 0x10),0);
                                                      lVar13 = *(longlong *)(lVar11 + 0x30);
                                                      uVar12 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                  FUN_18055b980(uVar12,lVar11,MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__0,0
                                                               );
                                                  if (lVar13 != 0) {
                                                    FUN_180990d50(lVar13,uVar12,0,
                                                                  MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                    lVar13 = *(longlong *)(lVar11 + 0x30);
                                                    uVar12 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                  FUN_18055b980(uVar12,lVar11,MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__1,0
                                                               );
                                                  if (lVar13 != 0) {
                                                    FUN_180990d50(lVar13,uVar12,0,
                                                                  MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                    lVar13 = func_0x000180315580(
                                                  TI_System.Action);
                                                  FUN_1816a9c60(lVar13,lVar11,MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__2,0
                                                               );
                                                  if (*(longlong *)(lVar11 + 0x30) != 0) {
                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__set_userData
                                                            (*(longlong *)(lVar11 + 0x30),lVar13,0);
                                                  lVar3 = *(longlong *)(lVar11 + 0x30);
                                                  uVar12 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>)
                                                  ;
                                                  FUN_18055b980(uVar12,lVar11,MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__3,0
                                                               );
                                                  if (lVar3 != 0) {
                                                    FUN_180990d50(lVar3,uVar12,0,
                                                                  MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                    lVar10 = MR_System.Collections.Generic.List<System.Action>.Add;
                                                    lVar3 = *(longlong *)(param_1 + 0xb0);
                                                    if (lVar3 != 0) {
                                                      *(int *)(lVar3 + 0x1c) =
                                                           *(int *)(lVar3 + 0x1c) + 1;
                                                      lVar4 = *(longlong *)(lVar3 + 0x10);
                                                      if (lVar4 != 0) {
                                                        uVar2 = *(uint *)(lVar3 + 0x18);
                                                        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                                          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                                                          if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                                                            FUN_1803155c0();
                                                            pcVar5 = (code *)swi(3);
                                                            uVar12 = (*pcVar5)();
                                                            return uVar12;
                                                          }
                                                          *(longlong *)
                                                           (lVar4 + 0x20 + (longlong)(int)uVar2 * 8)
                                                               = lVar13;
                                                          func_0x000180314690(lVar4 + 0x20 +
                                                                              (longlong)(int)uVar2 *
                                                                              8,lVar13);
                                                        }
                                                        else {
                                                          FUN_181645af0(lVar3,lVar13,
                                                                        *(undefined8 *)
                                                                         (*(longlong *)
                                                                           (*(longlong *)
                                                                             (lVar10 + 0x20) + 0xc0)
                                                                         + 0x70));
                                                        }
                                                        if (lVar13 != 0) {
                                                          (**(code **)(lVar13 + 0x18))
                                                                    (*(undefined8 *)(lVar13 + 0x40),
                                                                     *(undefined8 *)(lVar13 + 0x28))
                                                          ;
                                                          return *(undefined8 *)(lVar11 + 0x30);
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
  pcVar5 = (code *)swi(3);
  uVar12 = (*pcVar5)();
  return uVar12;
}

