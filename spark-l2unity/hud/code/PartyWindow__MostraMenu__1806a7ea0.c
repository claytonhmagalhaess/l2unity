// PartyWindow__MostraMenu__1806a7ea0 @ 0x1806a7ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PartyWindow__MostraMenu__1806a7ea0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ushort uVar15;
  uint uVar16;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [72];
  undefined1 *puStack_50;
  
  uStack_c8 = param_2;
  if (cRam00000001834b3f7c == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MD_PartyWindow.FechaMenuFora);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__0);
    FUN_180315380(MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__1);
    FUN_180315380(MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__2);
    FUN_180315380(TI_PartyWindow.<>c__DisplayClass39_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'party-nome'");
    cRam00000001834b3f7c = '\x01';
  }
  PartyWindow__FechaMenu__1806a7270(param_1,0);
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  func_0x000180314690(param_1 + 0xa0,uVar3);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa0),0);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar4 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa0),0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,(int)param_2,0);
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *plVar5;
          uVar3 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar15 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) +
                          0x47) * 0x10 + 0x138 + lVar4);
                goto code_r0x0001806a80f9;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806a80f9:
          uStack_108 = uVar3;
          uStack_100 = uVar1;
          (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1]);
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            plVar5 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0xa0),0);
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,uStack_c8._4_4_,0);
            if (plVar5 != (longlong *)0x0) {
              lVar4 = *plVar5;
              uVar3 = *puVar6;
              uVar1 = *(undefined4 *)(puVar6 + 1);
              if (*(ushort *)(lVar4 + 0x12e) != 0) {
                uVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar6 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                              + 0x73) * 0x10 + 0x138 + lVar4);
                    goto code_r0x0001806a8199;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
              }
              puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806a8199:
              uStack_108 = uVar3;
              uStack_100 = uVar1;
              (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1]);
              if (*(longlong *)(param_1 + 0xa0) != 0) {
                plVar5 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0xa0),0);
                uStack_f8 = 0x3d4ccccd3d4ccccd;
                uStack_f0 = 0x3f7333333d75c28f;
                puVar6 = (undefined8 *)
                         UnityEngine_UIElements_StyleColor__op_Implicit(auStack_98,&uStack_f8,0);
                if (plVar5 != (longlong *)0x0) {
                  lVar4 = *plVar5;
                  uVar3 = *puVar6;
                  uVar14 = puVar6[1];
                  uVar1 = *(undefined4 *)(puVar6 + 2);
                  if (*(ushort *)(lVar4 + 0x12e) != 0) {
                    uVar15 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar6 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                           (ulonglong)uVar15 * 0x10) + 9) * 0x10 + 0x138 + lVar4);
                        goto code_r0x0001806a8249;
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
                  }
                  puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001806a8249:
                  uStack_f8 = uVar3;
                  uStack_f0 = uVar14;
                  uStack_e8 = uVar1;
                  (*(code *)*puVar6)(plVar5,&uStack_f8,puVar6[1]);
                  if (*(longlong *)(param_1 + 0xa0) != 0) {
                    lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0xa0),0);
                    if (*(longlong *)(param_1 + 0xa0) != 0) {
                      lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0xa0),0);
                      if (*(longlong *)(param_1 + 0xa0) != 0) {
                        lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(param_1 + 0xa0),0);
                        if (*(longlong *)(param_1 + 0xa0) != 0) {
                          lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0xa0),0);
                          uVar3 = func_0x000182601c10();
                          if (lVar9 != 0) {
                            FUN_180005060(0x23,TI_UnityEngine.UIElements.IStyle,lVar9,uVar3);
                            if (lVar8 != 0) {
                              FUN_180005060(0x1f,TI_UnityEngine.UIElements.IStyle,lVar8,uVar3);
                              if (lVar7 != 0) {
                                FUN_180005060(0x1b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                if (lVar4 != 0) {
                                  FUN_180005060(0x2b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                  if (*(longlong *)(param_1 + 0xa0) != 0) {
                                    plVar5 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (*(longlong *)(param_1 + 0xa0),0);
                                    if (*(longlong *)(param_1 + 0xa0) != 0) {
                                      plVar10 = (longlong *)
                                                UnityEngine_UIElements_VisualElement__get_style
                                                          (*(longlong *)(param_1 + 0xa0),0);
                                      if (*(longlong *)(param_1 + 0xa0) != 0) {
                                        plVar11 = (longlong *)
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa0),0);
                                        if (*(longlong *)(param_1 + 0xa0) != 0) {
                                          plVar12 = (longlong *)
                                                    UnityEngine_UIElements_VisualElement__get_style
                                                              (*(longlong *)(param_1 + 0xa0),0);
                                          uStack_f8 = 0x3f0000003f0ccccd;
                                          uStack_f0 = 0x3f8000003ec28f5c;
                                          puVar6 = (undefined8 *)
                                                   UnityEngine_UIElements_StyleColor__op_Implicit
                                                             (auStack_98,&uStack_f8,0);
                                          if (plVar12 != (longlong *)0x0) {
                                            lVar4 = *plVar12;
                                            uVar3 = *puVar6;
                                            uVar14 = puVar6[1];
                                            uVar1 = *(undefined4 *)(puVar6 + 2);
                                            if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                              uVar15 = 0;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar4 + 0xb0) +
                                                     (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar6 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar4 + 0xb0) +
                                                                      8 + (ulonglong)uVar15 * 0x10)
                                                            + 0x21) * 0x10 + 0x138 + lVar4);
                                                  goto code_r0x0001806a8447;
                                                }
                                                uVar15 = uVar15 + 1;
                                              } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
                                            }
                                            puVar6 = (undefined8 *)
                                                     FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x21);
code_r0x0001806a8447:
                                            uStack_f8 = uVar3;
                                            uStack_f0 = uVar14;
                                            uStack_e8 = uVar1;
                                            (*(code *)*puVar6)(plVar12,&uStack_f8,puVar6[1]);
                                            if (plVar11 != (longlong *)0x0) {
                                              lVar4 = *plVar11;
                                              if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                uVar15 = 0;
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar4 + 0xb0) +
                                                       (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                                                  {
                                                    puVar6 = (undefined8 *)
                                                             ((longlong)
                                                              (*(int *)(*(longlong *)(lVar4 + 0xb0)
                                                                        + 8 + (ulonglong)uVar15 *
                                                                              0x10) + 0x1d) * 0x10 +
                                                              0x138 + lVar4);
                                                    goto code_r0x0001806a84b9;
                                                  }
                                                  uVar15 = uVar15 + 1;
                                                } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
                                              }
                                              puVar6 = (undefined8 *)
                                                       FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x1d);
code_r0x0001806a84b9:
                                              uStack_f8 = uVar3;
                                              uStack_f0 = uVar14;
                                              uStack_e8 = uVar1;
                                              (*(code *)*puVar6)(plVar11,&uStack_f8,puVar6[1]);
                                              if (plVar10 != (longlong *)0x0) {
                                                lVar4 = *plVar10;
                                                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                  uVar15 = 0;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar4 + 0xb0) +
                                                         (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle
                                                       ) {
                                                      puVar6 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar4 + 0xb0) + 8 +
                                                                         (ulonglong)uVar15 * 0x10) +
                                                                0x15) * 0x10 + 0x138 + lVar4);
                                                      goto code_r0x0001806a8529;
                                                    }
                                                    uVar15 = uVar15 + 1;
                                                  } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
                                                }
                                                puVar6 = (undefined8 *)
                                                         FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x15);
code_r0x0001806a8529:
                                                uStack_f8 = uVar3;
                                                uStack_f0 = uVar14;
                                                uStack_e8 = uVar1;
                                                (*(code *)*puVar6)(plVar10,&uStack_f8,puVar6[1]);
                                                if (plVar5 != (longlong *)0x0) {
                                                  lVar4 = *plVar5;
                                                  if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                    uVar15 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar4 + 0xb0) +
                                                           (ulonglong)uVar15 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar6 = (undefined8 *)
                                                                 ((longlong)
                                                                  (*(int *)(*(longlong *)
                                                                             (lVar4 + 0xb0) + 8 +
                                                                           (ulonglong)uVar15 * 0x10)
                                                                  + 0x25) * 0x10 + 0x138 + lVar4);
                                                        goto code_r0x0001806a8599;
                                                      }
                                                      uVar15 = uVar15 + 1;
                                                    } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
                                                  }
                                                  puVar6 = (undefined8 *)
                                                           FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x25)
                                                  ;
code_r0x0001806a8599:
                                                  uStack_f8 = uVar3;
                                                  uStack_f0 = uVar14;
                                                  uStack_e8 = uVar1;
                                                  (*(code *)*puVar6)(plVar5,&uStack_f8,puVar6[1]);
                                                  if (*(longlong *)(param_1 + 0xa0) != 0) {
                                                    plVar5 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa0),0);
                                                  if (*(longlong *)(param_1 + 0xa0) != 0) {
                                                    plVar10 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa0),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_d8,0x40000000,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar4 = *plVar10;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      uVar15 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             (ulonglong)uVar15 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             (ulonglong)uVar15 *
                                                                             0x10) + 0x5f) * 0x10 +
                                                                    0x138 + lVar4);
                                                          goto code_r0x0001806a8667;
                                                        }
                                                        uVar15 = uVar15 + 1;
                                                      } while (uVar15 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                           0x5f);
code_r0x0001806a8667:
                                                    uStack_108 = uVar3;
                                                    uStack_100 = uVar1;
                                                    (*(code *)*puVar6)(plVar10,&uStack_108,puVar6[1]
                                                                      );
                                                    if (plVar5 != (longlong *)0x0) {
                                                      lVar4 = *plVar5;
                                                      if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                        uVar15 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar4 + 0xb0) +
                                                               (ulonglong)uVar15 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar6 = (undefined8 *)
                                                                     ((longlong)
                                                                      (*(int *)(*(longlong *)
                                                                                 (lVar4 + 0xb0) + 8
                                                                               + (ulonglong)uVar15 *
                                                                                 0x10) + 0x65) *
                                                                      0x10 + 0x138 + lVar4);
                                                            goto code_r0x0001806a86d9;
                                                          }
                                                          uVar15 = uVar15 + 1;
                                                        } while (uVar15 < *(ushort *)(lVar4 + 0x12e)
                                                                );
                                                      }
                                                      puVar6 = (undefined8 *)
                                                               FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                             0x65);
code_r0x0001806a86d9:
                                                      uStack_108 = uVar3;
                                                      uStack_100 = uVar1;
                                                      (*(code *)*puVar6)(plVar5,&uStack_108,
                                                                         puVar6[1]);
                                                      if (param_3 != 0) {
                                                        for (uVar16 = 0;
                                                            (int)uVar16 < *(int *)(param_3 + 0x18);
                                                            uVar16 = uVar16 + 1) {
                                                          if (*(uint *)(param_3 + 0x18) <= uVar16) {
                                                            FUN_1803155c0();
                                                            pcVar2 = (code *)swi(3);
                                                            (*pcVar2)();
                                                            return;
                                                          }
                                                          uVar3 = *(undefined8 *)
                                                                   (param_3 +
                                                                   ((longlong)(int)uVar16 + 2) *
                                                                   0x10);
                                                          uVar14 = *(undefined8 *)
                                                                    (param_3 + 8 +
                                                                    ((longlong)(int)uVar16 + 2) *
                                                                    0x10);
                                                          lVar4 = func_0x000180315580(
                                                  TI_PartyWindow.<>c__DisplayClass39_0);
                                                  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
                                                  if (lVar4 == 0) goto code_r0x0001806a8d91;
                                                  *(longlong *)(lVar4 + 0x20) = param_1;
                                                  func_0x000180314690(lVar4 + 0x20,param_1);
                                                  uVar13 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
                                                  UnityEngine_UIElements_Label___ctor
                                                            (uVar13,uVar3,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar13;
                                                  func_0x000180314690(lVar4 + 0x10,uVar13);
                                                  if (*(longlong *)(lVar4 + 0x10) == 0)
                                                  goto code_r0x0001806a8d91;
                                                  UnityEngine_UIElements_VisualElement__AddToClassList
                                                            (*(longlong *)(lVar4 + 0x10),
                                                             LIT_"'party-nome'",0);
                                                  if (*(longlong *)(lVar4 + 0x10) == 0)
                                                  goto code_r0x0001806a8d91;
                                                  plVar5 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar4 + 0x10),0);
                                                  if (*(longlong *)(lVar4 + 0x10) == 0)
                                                  goto code_r0x0001806a8d91;
                                                  plVar10 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar4 + 0x10),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (auStack_98,0x41000000,0);
                                                  if (plVar10 == (longlong *)0x0)
                                                  goto code_r0x0001806a8d91;
                                                  lVar7 = *plVar10;
                                                  uVar3 = *puVar6;
                                                  uVar1 = *(undefined4 *)(puVar6 + 1);
                                                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                    uVar15 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar7 + 0xb0) +
                                                           (ulonglong)uVar15 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar6 = (undefined8 *)
                                                                 ((longlong)
                                                                  (*(int *)(*(longlong *)
                                                                             (lVar7 + 0xb0) + 8 +
                                                                           (ulonglong)uVar15 * 0x10)
                                                                  + 99) * 0x10 + 0x138 + lVar7);
                                                        goto code_r0x0001806a885a;
                                                      }
                                                      uVar15 = uVar15 + 1;
                                                    } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                  }
                                                  puVar6 = (undefined8 *)
                                                           FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,99);
code_r0x0001806a885a:
                                                  uStack_108 = uVar3;
                                                  uStack_100 = uVar1;
                                                  (*(code *)*puVar6)(plVar10,&uStack_108,puVar6[1]);
                                                  if (plVar5 == (longlong *)0x0)
                                                  goto code_r0x0001806a8d91;
                                                  lVar7 = *plVar5;
                                                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                    uVar15 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar7 + 0xb0) +
                                                           (ulonglong)uVar15 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar6 = (undefined8 *)
                                                                 ((longlong)
                                                                  (*(int *)(*(longlong *)
                                                                             (lVar7 + 0xb0) + 8 +
                                                                           (ulonglong)uVar15 * 0x10)
                                                                  + 0x61) * 0x10 + 0x138 + lVar7);
                                                        goto code_r0x0001806a88c9;
                                                      }
                                                      uVar15 = uVar15 + 1;
                                                    } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                  }
                                                  puVar6 = (undefined8 *)
                                                           FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x61)
                                                  ;
code_r0x0001806a88c9:
                                                  uStack_b8 = uVar3;
                                                  uStack_b0 = uVar1;
                                                  (*(code *)*puVar6)(plVar5,&uStack_b8,puVar6[1]);
                                                  if (*(longlong *)(lVar4 + 0x10) == 0)
                                                  goto code_r0x0001806a8d91;
                                                  plVar5 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar4 + 0x10),0);
                                                  if (*(longlong *)(lVar4 + 0x10) == 0)
                                                  goto code_r0x0001806a8d91;
                                                  plVar10 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar4 + 0x10),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8,0x40000000,0);
                                                  if (plVar10 == (longlong *)0x0)
                                                  goto code_r0x0001806a8d91;
                                                  lVar7 = *plVar10;
                                                  uVar3 = *puVar6;
                                                  uVar1 = *(undefined4 *)(puVar6 + 1);
                                                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                    uVar15 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar7 + 0xb0) +
                                                           (ulonglong)uVar15 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar6 = (undefined8 *)
                                                                 ((longlong)
                                                                  (*(int *)(*(longlong *)
                                                                             (lVar7 + 0xb0) + 8 +
                                                                           (ulonglong)uVar15 * 0x10)
                                                                  + 0x5f) * 0x10 + 0x138 + lVar7);
                                                        goto code_r0x0001806a898a;
                                                      }
                                                      uVar15 = uVar15 + 1;
                                                    } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                  }
                                                  puVar6 = (undefined8 *)
                                                           FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x5f
                                                                        );
code_r0x0001806a898a:
                                                  uStack_a8 = uVar3;
                                                  uStack_a0 = uVar1;
                                                  (*(code *)*puVar6)(plVar10,&uStack_a8,puVar6[1]);
                                                  if (plVar5 == (longlong *)0x0)
                                                  goto code_r0x0001806a8d91;
                                                  lVar7 = *plVar5;
                                                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                    uVar15 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar7 + 0xb0) +
                                                           (ulonglong)uVar15 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar6 = (undefined8 *)
                                                                 ((longlong)
                                                                  (*(int *)(*(longlong *)
                                                                             (lVar7 + 0xb0) + 8 +
                                                                           (ulonglong)uVar15 * 0x10)
                                                                  + 0x65) * 0x10 + 0x138 + lVar7);
                                                        goto code_r0x0001806a89f9;
                                                      }
                                                      uVar15 = uVar15 + 1;
                                                    } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                  }
                                                  puVar6 = (undefined8 *)
                                                           FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x65)
                                                  ;
code_r0x0001806a89f9:
                                                  uStack_d8 = uVar3;
                                                  uStack_d0 = uVar1;
                                                  (*(code *)*puVar6)(plVar5,&uStack_d8,puVar6[1]);
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar14;
                                                  func_0x000180314690(lVar4 + 0x18,uVar14);
                                                  lVar7 = *(longlong *)(lVar4 + 0x10);
                                                  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                  FUN_18055b980(uVar3,lVar4,MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__0,0);
                                                  if (lVar7 == 0) goto code_r0x0001806a8d91;
                                                  FUN_180990d50(lVar7,uVar3,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                  lVar7 = *(longlong *)(lVar4 + 0x10);
                                                  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                  FUN_18055b980(uVar3,lVar4,MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__1,0);
                                                  if (lVar7 == 0) goto code_r0x0001806a8d91;
                                                  FUN_180990d50(lVar7,uVar3,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                  lVar7 = *(longlong *)(lVar4 + 0x10);
                                                  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                                                  FUN_18055b980(uVar3,lVar4,MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__2,0);
                                                  if (lVar7 == 0) goto code_r0x0001806a8d91;
                                                  FUN_180990d50(lVar7,uVar3);
                                                  if (*(longlong *)(param_1 + 0xa0) == 0)
                                                  goto code_r0x0001806a8d91;
                                                  UnityEngine_UIElements_VisualElement__Add();
                                                  }
                                                  if (*(longlong *)(param_1 + 0x20) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0x20),
                                                               *(undefined8 *)(param_1 + 0xa0),0);
                                                    plVar5 = *(longlong **)(param_1 + 0x20);
                                                    lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                                                    FUN_18055b980(lVar7,param_1,MD_PartyWindow.FechaMenuFora
                                                                  ,0);
                                                    lVar4 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>;
                                                    if (plVar5 != (longlong *)0x0) {
                                                      if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> + 0x38) == 0)
                                                      {
                                                        puStack_50 = (undefined1 *)0x180990d79;
                                                        FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
                                                        if (*(longlong *)(lVar4 + 0x38) == 0) {
                                                          puStack_50 = &LAB_180990d88;
                                                          FUN_180312fc0(lVar4);
                                                        }
                                                      }
                                                      if (lVar7 != 0) {
                                                        lVar8 = plVar5[3];
                                                        if (lVar8 == 0) {
                                                          puStack_50 = (undefined1 *)0x180990db0;
                                                          lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry
                                                                                     );
                                                          puStack_50 = (undefined1 *)0x180990dbd;
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackRegistry___ctor
                                                            (lVar8,0);
                                                  plVar5[3] = lVar8;
                                                  puStack_50 = (undefined1 *)0x180990dcd;
                                                  func_0x000180314690(plVar5 + 3,lVar8);
                                                  if (lVar8 == 0) {
                                                    puStack_50 = (undefined1 *)0x180990e4a;
                                                    FUN_1803155d0();
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  puStack_50 = (undefined1 *)0x180990de8;
                                                  FUN_1809c9fd0(lVar8,lVar7,1,
                                                                *(undefined8 *)
                                                                 (*(longlong *)(lVar4 + 0x38) + 8));
                                                  lVar4 = *(longlong *)
                                                           (*(longlong *)(lVar4 + 0x38) + 0x10);
                                                  if (*(longlong *)(lVar4 + 0x38) == 0) {
                                                    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
                                                    if (*(longlong *)(lVar4 + 0x38) == 0) {
                                                      FUN_180312fc0(lVar4);
                                                    }
                                                  }
                                                  if (plVar5 != (longlong *)0x0) {
                                                    if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <=
                                                         *(byte *)(*plVar5 + 0x130)) &&
                                                       (*(longlong *)
                                                         (*(longlong *)(*plVar5 + 200) + -8 +
                                                         (ulonglong)
                                                         *(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) ==
                                                        TI_UnityEngine.UIElements.VisualElement)) {
                                                      lVar7 = *(longlong *)
                                                               (*(longlong *)(lVar4 + 0x38) + 8);
                                                      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                                                        lVar7 = FUN_180312f40(lVar7);
                                                      }
                                                      if (*(int *)(lVar7 + 0xe4) == 0) {
                                                        func_0x000180315660(lVar7);
                                                      }
                                                      lVar4 = *(longlong *)
                                                               (*(longlong *)(lVar4 + 0x38) + 8);
                                                      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                                                        lVar4 = FUN_180312f40(lVar4);
                                                      }
                                                      func_0x0001825c3d40(plVar5,1 << ((byte)*(
                                                  undefined4 *)(*(longlong *)(lVar4 + 0xb8) + 0x10)
                                                  & 0x1f),1,0);
                                                  }
                                                  }
                                                  return;
                                                  }
                                                  puStack_50 = (undefined1 *)0x180990e14;
                                                  uVar3 = func_0x0001803153a0(TI_System.ArgumentException);
                                                  puStack_50 = (undefined1 *)0x180990e1c;
                                                  uVar3 = func_0x000180315580(uVar3);
                                                  puStack_50 = (undefined1 *)0x180990e2b;
                                                  uVar14 = func_0x0001803153a0(LIT_"'callback parameter is null'");
                                                  puStack_50 = (undefined1 *)0x180990e39;
                                                  System_ArgumentException___ctor(uVar3,uVar14,0);
                                                  puStack_50 = (undefined1 *)0x180990e44;
                                                  FUN_180315590(uVar3,lVar4);
                                                  pcVar2 = (code *)swi(3);
                                                  (*pcVar2)();
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
code_r0x0001806a8d91:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

