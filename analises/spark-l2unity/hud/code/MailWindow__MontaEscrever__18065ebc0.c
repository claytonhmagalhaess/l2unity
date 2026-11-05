// MailWindow__MontaEscrever__18065ebc0 @ 0x18065ebc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MailWindow__MontaEscrever__18065ebc0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ushort uVar10;
  ulonglong uVar12;
  undefined4 auStackX_8 [2];
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
  ulonglong uVar11;
  
  if (cRam00000001834b3d8c == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
    FUN_180315380(MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_MailWindow.Envia);
    FUN_180315380(MD_MailWindow.LimpaEscrever);
    FUN_180315380(MD_MailWindow.TrocaCod);
    FUN_180315380(MD_MailWindow._MontaEscrever_b__43_0);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Clear'");
    FUN_180315380(LIT_"'To'");
    FUN_180315380(LIT_"' Adena'");
    FUN_180315380(LIT_"'Request payment: off'");
    FUN_180315380(LIT_"'Attachments (up to {0}) - click an item below to attach,...");
    FUN_180315380(LIT_"'Send'");
    FUN_180315380(LIT_"'Subject'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3d8c = '\x01';
  }
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar4,0);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  func_0x000180314690(param_1 + 0xb8,uVar4);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    uVar4 = func_0x000182601c10(0x3f800000,0);
    if (lVar5 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        plVar6 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
        puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0,0);
        if (plVar6 != (longlong *)0x0) {
          lVar5 = *plVar6;
          uVar12 = 0;
          uVar4 = *puVar7;
          uVar1 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            uVar11 = uVar12;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar11 * 0x10) + 0x57) * 0x10
                          + 0x138 + lVar5);
                goto code_r0x00018065ee39;
              }
              uVar10 = (short)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018065ee39:
          uStack_b8 = uVar4;
          uStack_b0 = uVar1;
          (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
          lVar5 = *(longlong *)(param_1 + 0xb8);
          uVar4 = SparkUI__Campo(0x10,0);
          *(undefined8 *)(param_1 + 0xf8) = uVar4;
          func_0x000180314690(param_1 + 0xf8,uVar4);
          uVar4 = MailWindow__Rotulado(LIT_"'To'",uVar4,0);
          if (lVar5 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar5,uVar4,0);
            lVar5 = *(longlong *)(param_1 + 0xb8);
            uVar4 = SparkUI__Campo(0x80,0);
            *(undefined8 *)(param_1 + 0x100) = uVar4;
            func_0x000180314690(param_1 + 0x100,uVar4);
            uVar4 = MailWindow__Rotulado(LIT_"'Subject'",uVar4,0);
            if (lVar5 != 0) {
              UnityEngine_UIElements_VisualElement__Add(lVar5,uVar4,0);
              uVar4 = SparkUI__Campo(0x200,0);
              *(undefined8 *)(param_1 + 0x108) = uVar4;
              func_0x000180314690(param_1 + 0x108,uVar4);
              if (*(longlong *)(param_1 + 0x108) != 0) {
                UnityEngine_UIElements_TextField__set_multiline(*(longlong *)(param_1 + 0x108),1,0);
                if (*(longlong *)(param_1 + 0x108) != 0) {
                  plVar6 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x108),0);
                  puVar7 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x42c00000,0);
                  if (plVar6 != (longlong *)0x0) {
                    lVar5 = *plVar6;
                    uVar4 = *puVar7;
                    uVar1 = *(undefined4 *)(puVar7 + 1);
                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                      uVar11 = uVar12;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar11 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar7 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar11 * 0x10) +
                                    0x43) * 0x10 + 0x138 + lVar5);
                          goto code_r0x00018065efc9;
                        }
                        uVar10 = (short)uVar11 + 1;
                        uVar11 = (ulonglong)uVar10;
                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                    }
                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018065efc9:
                    uStack_b8 = uVar4;
                    uStack_b0 = uVar1;
                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                    if (*(longlong *)(param_1 + 0x108) != 0) {
                      lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0x108),0);
                      uVar4 = func_0x000182601c10(0,0);
                      if (lVar5 != 0) {
                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                        MailWindow__Escuro(*(undefined8 *)(param_1 + 0x108),0);
                        if (*(longlong *)(param_1 + 0x108) != 0) {
                          lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0x108),0);
                          uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                          if (lVar5 != 0) {
                            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                            if (*(longlong *)(param_1 + 0x108) != 0) {
                              lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(param_1 + 0x108),0);
                              uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                              if (lVar5 != 0) {
                                FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                if (*(longlong *)(param_1 + 0x108) != 0) {
                                  plVar6 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(param_1 + 0x108),0);
                                  puVar7 = (undefined8 *)
                                           UnityEngine_UIElements_StyleLength__op_Implicit
                                                     (&uStack_b8,0x40800000,0);
                                  if (plVar6 != (longlong *)0x0) {
                                    lVar5 = *plVar6;
                                    uVar4 = *puVar7;
                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                      uVar11 = uVar12;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar5 + 0xb0) + uVar11 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar7 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                             uVar11 * 0x10) + 0x51) * 0x10 + 0x138 +
                                                   lVar5);
                                          goto code_r0x00018065f149;
                                        }
                                        uVar10 = (short)uVar11 + 1;
                                        uVar11 = (ulonglong)uVar10;
                                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                                    }
                                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51)
                                    ;
code_r0x00018065f149:
                                    uStack_b8 = uVar4;
                                    uStack_b0 = uVar1;
                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                      UnityEngine_UIElements_VisualElement__Add
                                                (*(longlong *)(param_1 + 0xb8),
                                                 *(undefined8 *)(param_1 + 0x108),0);
                                      auStackX_8[0] = 8;
                                      uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
                                      uVar4 = System_String__Format(LIT_"'Attachments (up to {0}) - click an item below to attach,...",uVar4,0);
                                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                      uStack_b8 = *(undefined8 *)(lVar5 + 0x50);
                                      uStack_b0 = *(undefined4 *)(lVar5 + 0x58);
                                      uStack_ac = *(undefined4 *)(lVar5 + 0x5c);
                                      uStack_88 = 0;
                                      uStack_98 = 0;
                                      uStack_90 = 0;
                                      func_0x000180cb7cb0(&uStack_98,&uStack_b8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                      uStack_a8 = uStack_88;
                                      uStack_b8 = uStack_98;
                                      uStack_b0 = (undefined4)uStack_90;
                                      uStack_ac = uStack_90._4_4_;
                                      lVar5 = SparkEstilo__Texto__180722af0(uVar4,10,&uStack_b8,0,0)
                                      ;
                                      if (lVar5 != 0) {
                                        lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                          (lVar5,0);
                                        uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                        if (lVar8 != 0) {
                                          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                          plVar6 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar5,0);
                                          puVar7 = (undefined8 *)
                                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                                             (&uStack_b8,0x40c00000,0);
                                          if (plVar6 != (longlong *)0x0) {
                                            lVar8 = *plVar6;
                                            uVar4 = *puVar7;
                                            uVar1 = *(undefined4 *)(puVar7 + 1);
                                            if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                              uVar11 = uVar12;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar7 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar8 + 0xb0) +
                                                                      8 + uVar11 * 0x10) + 0x51) *
                                                            0x10 + 0x138 + lVar8);
                                                  goto code_r0x00018065f2e9;
                                                }
                                                uVar10 = (short)uVar11 + 1;
                                                uVar11 = (ulonglong)uVar10;
                                              } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                                            }
                                            puVar7 = (undefined8 *)
                                                     FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018065f2e9:
                                            uStack_b8 = uVar4;
                                            uStack_b0 = uVar1;
                                            (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                            lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                              (lVar5,0);
                                            uVar4 = func_0x000182601c10(0,0);
                                            if (lVar8 != 0) {
                                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                              if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (*(longlong *)(param_1 + 0xb8),lVar5,0);
                                                uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                UnityEngine_UIElements_VisualElement___ctor(uVar4,0)
                                                ;
                                                *(undefined8 *)(param_1 + 0x118) = uVar4;
                                                func_0x000180314690(param_1 + 0x118,uVar4);
                                                if (*(longlong *)(param_1 + 0x118) != 0) {
                                                  lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                                    if (*(longlong *)(param_1 + 0x118) != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40400000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar5 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018065f459;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018065f459:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    if (*(longlong *)(param_1 + 0x118) != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x42100000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar5 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x43)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018065f4f9;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x43);
code_r0x00018065f4f9:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    if (*(longlong *)(param_1 + 0x118) != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  uVar4 = func_0x000182601c10(0,0);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb8),
                                                                 *(undefined8 *)(param_1 + 0x118),0)
                                                      ;
                                                      uVar4 = SparkEstilo__Lista__1807211b0(0);
                                                      *(undefined8 *)(param_1 + 0x120) = uVar4;
                                                      func_0x000180314690(param_1 + 0x120,uVar4);
                                                      if (*(longlong *)(param_1 + 0x120) != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x120),0);
                                                  uVar4 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                                    if (*(longlong *)(param_1 + 0x120) != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x120),0);
                                                  uVar4 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                                    if (*(longlong *)(param_1 + 0x120) != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x120),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar5 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x37)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018065f6a9;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x37);
code_r0x00018065f6a9:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    if (*(longlong *)(param_1 + 0x120) != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x120),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar5 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x57)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018065f749;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x57);
code_r0x00018065f749:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    if (*(longlong *)(param_1 + 0x120) != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x120),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40800000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar5 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018065f7e9;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018065f7e9:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb8),
                                                                 *(undefined8 *)(param_1 + 0x120),0)
                                                      ;
                                                      lVar5 = MailWindow__Fileira(0);
                                                      if (lVar5 != 0) {
                                                        lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar4 = func_0x000182601c10(0,0);
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                                    lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                                    lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                                    uVar4 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar4,param_1,MD_MailWindow.TrocaCod
                                                                  ,0);
                                                    uVar4 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Request payment: off'",uVar4,
                                                                       0xa0,0,0);
                                                    *(undefined8 *)(param_1 + 0x140) = uVar4;
                                                    func_0x000180314690(param_1 + 0x140,uVar4);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)
                                                                      (param_1 + 0x140),0);
                                                    uVar4 = SparkUI__Campo(0x10,0);
                                                    *(undefined8 *)(param_1 + 0x110) = uVar4;
                                                    func_0x000180314690(param_1 + 0x110,uVar4);
                                                    if (*(longlong *)(param_1 + 0x110) != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x110),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x42dc0000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar8 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar8 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0xad)
                                                                    * 0x10 + 0x138 + lVar8);
                                                          goto code_r0x00018065f9f9;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0xad);
code_r0x00018065f9f9:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    if (*(longlong *)(param_1 + 0x110) != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x110),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40c00000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar8 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar8 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x4d)
                                                                    * 0x10 + 0x138 + lVar8);
                                                          goto code_r0x00018065fa99;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x00018065fa99:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    MailWindow__Escuro(*(undefined8 *)
                                                                        (param_1 + 0x110),0);
                                                    uVar4 = *(undefined8 *)(param_1 + 0x110);
                                                    uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>
                                                                               );
                                                    FUN_18055b980(uVar9,param_1,MD_MailWindow._MontaEscrever_b__43_0
                                                                  ,0);
                                                    FUN_1809fd010(uVar4,uVar9,MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)
                                                                      (param_1 + 0x110),0);
                                                    lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_b8 = *(undefined8 *)(lVar8 + 0x50);
                                                    uStack_b0 = *(undefined4 *)(lVar8 + 0x58);
                                                    uStack_ac = *(undefined4 *)(lVar8 + 0x5c);
                                                    uStack_70 = 0;
                                                    uStack_80 = 0;
                                                    uStack_78 = 0;
                                                    func_0x000180cb7cb0(&uStack_80,&uStack_b8,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_b8 = uStack_80;
                                                    uStack_b0 = (undefined4)uStack_78;
                                                    uStack_ac = uStack_78._4_4_;
                                                    uStack_a8 = uStack_70;
                                                    uVar4 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"' Adena'",0xb,
                                                                       &uStack_b8,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,uVar4,0);
                                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb8),lVar5
                                                                 ,0);
                                                      lVar5 = MailWindow__Fileira(0);
                                                      if (lVar5 != 0) {
                                                        lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar4 = func_0x000182601c10(0,0);
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                                    lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                                    lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_b8 = *(undefined8 *)(lVar8 + 0x60);
                                                    uStack_b0 = *(undefined4 *)(lVar8 + 0x68);
                                                    uStack_ac = *(undefined4 *)(lVar8 + 0x6c);
                                                    uStack_58 = 0;
                                                    uStack_68 = 0;
                                                    uStack_60 = 0;
                                                    func_0x000180cb7cb0(&uStack_68,&uStack_b8,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_b8 = uStack_68;
                                                    uStack_b0 = (undefined4)uStack_60;
                                                    uStack_ac = uStack_60._4_4_;
                                                    uStack_a8 = uStack_58;
                                                    uVar4 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"''",0xb,&uStack_b8
                                                                       ,0,0);
                                                    *(undefined8 *)(param_1 + 0x128) = uVar4;
                                                    func_0x000180314690(param_1 + 0x128,uVar4);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,uVar4,0);
                                                    if (*(longlong *)(param_1 + 0x128) != 0) {
                                                      lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x128),0);
                                                  uVar4 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar8 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                                    uVar4 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar4,param_1,MD_MailWindow.LimpaEscrever
                                                                  ,0);
                                                    uVar4 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Clear'",uVar4,
                                                                       0x50,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,uVar4,0);
                                                    lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar8,0);
                                                    if (lVar8 != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_b8,0x40c00000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar2 = *plVar6;
                                                    uVar4 = *puVar7;
                                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar2 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar2 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0xad)
                                                                    * 0x10 + 0x138 + lVar2);
                                                          goto code_r0x00018065fde9;
                                                        }
                                                        uVar10 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0xad);
code_r0x00018065fde9:
                                                    uStack_b8 = uVar4;
                                                    uStack_b0 = uVar1;
                                                    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,lVar8,0);
                                                    uVar4 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar4,param_1,MD_MailWindow.Envia
                                                                  ,0);
                                                    uVar4 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Send'",uVar4,
                                                                       100,0,0);
                                                    *(undefined8 *)(param_1 + 0x130) = uVar4;
                                                    func_0x000180314690(param_1 + 0x130,uVar4);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,uVar4,0);
                                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb8),lVar5
                                                                 ,0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0xb8),0);
                                                        MailWindow__AtualizaEscrever(param_1,0);
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

