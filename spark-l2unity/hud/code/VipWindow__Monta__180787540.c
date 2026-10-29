// VipWindow__Monta__180787540 @ 0x180787540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VipWindow__Monta__180787540(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_30;
  
  puStack_30 = &UNK_180787560;
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  puStack_30 = &UNK_18078756e;
  L2Window__AddWindow__1807995d0(param_1,param_2,0);
  if (cRam00000001834b439f == '\0') {
    FUN_180315380(TI_System.Action<UnityEngine.UIElements.MeshGenerationContext>,param_2,0);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__0);
    FUN_180315380(MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__1);
    FUN_180315380(MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__2);
    FUN_180315380(MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__3);
    FUN_180315380(MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__4);
    FUN_180315380(MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__5);
    FUN_180315380(MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__6);
    FUN_180315380(TI_VipWindow.<>c__DisplayClass24_0);
    FUN_180315380(MD_VipWindow.PosicaoInicial);
    FUN_180315380(MD_VipWindow.TracosDaCaixa);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Vip/VIPmark_0'");
    FUN_180315380(LIT_"'Opcoes/Brilho_Radial'");
    FUN_180315380(LIT_"'VIP'");
    FUN_180315380(LIT_"'VipMarca'");
    cRam00000001834b439f = '\x01';
  }
  lVar6 = func_0x000180315580(TI_VipWindow.<>c__DisplayClass24_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  if (lVar6 != 0) {
    *(longlong **)(lVar6 + 0x40) = param_1;
    func_0x000180314690(lVar6 + 0x40,param_1);
    lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
    param_1[0x12] = lVar7;
    func_0x000180314690(param_1 + 0x12,lVar7);
    if (param_1[0x12] != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x12],0);
      uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar7 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
        if (param_1[0x12] != 0) {
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1[0x12],0);
          puVar10 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x41600000,0);
          if (plVar9 != (longlong *)0x0) {
            lVar7 = *plVar9;
            uVar8 = *puVar10;
            uVar1 = *(undefined4 *)(puVar10 + 1);
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar15 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) +
                             0x69) * 0x10 + 0x138 + lVar7);
                  goto code_r0x000180786189;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x000180786189:
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
            uStack_c8 = uVar8;
            (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]);
            if (param_1[0x12] != 0) {
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1[0x12],0);
              puVar10 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x42f00000,0);
              if (plVar9 != (longlong *)0x0) {
                lVar7 = *plVar9;
                uVar8 = *puVar10;
                uVar1 = *(undefined4 *)(puVar10 + 1);
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar15 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                          (ulonglong)uVar15 * 0x10) + 0x73) * 0x10 + 0x138 + lVar7);
                      goto code_r0x000180786229;
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180786229:
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                uStack_c8 = uVar8;
                (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]);
                if (param_1[0x12] != 0) {
                  plVar9 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style(param_1[0x12],0);
                  puVar10 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x42300000,0)
                  ;
                  if (plVar9 != (longlong *)0x0) {
                    lVar7 = *plVar9;
                    uVar8 = *puVar10;
                    uVar1 = *(undefined4 *)(puVar10 + 1);
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      uVar15 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar10 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                              (ulonglong)uVar15 * 0x10) + 0xad) * 0x10 + 0x138 +
                                    lVar7);
                          goto code_r0x0001807862c9;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001807862c9:
                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                    uStack_c8 = uVar8;
                    (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]);
                    if (param_1[0x12] != 0) {
                      lVar7 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x12],0);
                      uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                      if (lVar7 != 0) {
                        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
                        if (param_1[0x12] != 0) {
                          UnityEngine_UIElements_VisualElement__set_pickingMode(param_1[0x12],0,0);
                          lVar7 = param_1[0x12];
                          uVar8 = func_0x000180315580(TI_MouseOverDetectionManipulator);
                          MouseOverDetectionManipulator___ctor__1807b03c0(uVar8,lVar7,0);
                          UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                    (lVar7,uVar8,0);
                          uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                          UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
                          *(undefined8 *)(lVar6 + 0x10) = uVar8;
                          func_0x000180314690(lVar6 + 0x10,uVar8);
                          if (*(longlong *)(lVar6 + 0x10) != 0) {
                            UnityEngine_UIElements_VisualElement__set_pickingMode
                                      (*(longlong *)(lVar6 + 0x10),1,0);
                            if (*(longlong *)(lVar6 + 0x10) != 0) {
                              lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(lVar6 + 0x10),0);
                              uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                              if (lVar7 != 0) {
                                FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
                                if (*(longlong *)(lVar6 + 0x10) != 0) {
                                  plVar9 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(lVar6 + 0x10),0);
                                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                                    plVar11 = (longlong *)
                                              UnityEngine_UIElements_VisualElement__get_style
                                                        (*(longlong *)(lVar6 + 0x10),0);
                                    puVar10 = (undefined8 *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit
                                                        (&uStack_c8,0x42980000,0);
                                    if (plVar11 != (longlong *)0x0) {
                                      lVar7 = *plVar11;
                                      uVar8 = *puVar10;
                                      uVar1 = *(undefined4 *)(puVar10 + 1);
                                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                        uVar15 = 0;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar7 + 0xb0) +
                                               (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                            puVar10 = (undefined8 *)
                                                      ((longlong)
                                                       (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                                (ulonglong)uVar15 * 0x10) + 0x43) *
                                                       0x10 + 0x138 + lVar7);
                                            goto code_r0x0001807864a7;
                                          }
                                          uVar15 = uVar15 + 1;
                                        } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                      }
                                      puVar10 = (undefined8 *)
                                                FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001807864a7:
                                      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                      uStack_c8 = uVar8;
                                      (*(code *)*puVar10)(plVar11,&uStack_c8,puVar10[1]);
                                      if (plVar9 != (longlong *)0x0) {
                                        lVar7 = *plVar9;
                                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                          uVar15 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar7 + 0xb0) +
                                                 (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar10 = (undefined8 *)
                                                        ((longlong)
                                                         (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                                  (ulonglong)uVar15 * 0x10) + 0xad)
                                                         * 0x10 + 0x138 + lVar7);
                                              goto code_r0x000180786519;
                                            }
                                            uVar15 = uVar15 + 1;
                                          } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                        }
                                        puVar10 = (undefined8 *)
                                                  FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180786519:
                                        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                        uStack_c8 = uVar8;
                                        (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]);
                                        if (*(longlong *)(lVar6 + 0x10) != 0) {
                                          plVar9 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (*(longlong *)(lVar6 + 0x10),0);
                                          puVar10 = (undefined8 *)
                                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                                              (&uStack_c8,0xc1800000,0);
                                          if (plVar9 != (longlong *)0x0) {
                                            lVar7 = *plVar9;
                                            uVar8 = *puVar10;
                                            uVar1 = *(undefined4 *)(puVar10 + 1);
                                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                              uVar15 = 0;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar7 + 0xb0) +
                                                     (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar10 = (undefined8 *)
                                                            ((longlong)
                                                             (*(int *)(*(longlong *)(lVar7 + 0xb0) +
                                                                       8 + (ulonglong)uVar15 * 0x10)
                                                             + 0x47) * 0x10 + 0x138 + lVar7);
                                                  goto code_r0x0001807865b9;
                                                }
                                                uVar15 = uVar15 + 1;
                                              } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                            }
                                            puVar10 = (undefined8 *)
                                                      FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001807865b9:
                                            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                            uStack_c8 = uVar8;
                                            (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]);
                                            if (*(longlong *)(lVar6 + 0x10) != 0) {
                                              plVar9 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                              puVar10 = (undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0xc1900000,0);
                                              if (plVar9 != (longlong *)0x0) {
                                                lVar7 = *plVar9;
                                                uVar8 = *puVar10;
                                                uVar1 = *(undefined4 *)(puVar10 + 1);
                                                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                  uVar15 = 0;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar7 + 0xb0) +
                                                         (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle
                                                       ) {
                                                      puVar10 = (undefined8 *)
                                                                ((longlong)
                                                                 (*(int *)(*(longlong *)
                                                                            (lVar7 + 0xb0) + 8 +
                                                                          (ulonglong)uVar15 * 0x10)
                                                                 + 0x73) * 0x10 + 0x138 + lVar7);
                                                      goto code_r0x000180786659;
                                                    }
                                                    uVar15 = uVar15 + 1;
                                                  } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                }
                                                puVar10 = (undefined8 *)
                                                          FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180786659:
                                                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                                uStack_c8 = uVar8;
                                                (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]);
                                                if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                  plVar9 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x10),0);
                                                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar8 = SparkEstilo__Textura__180723790
                                                                    (LIT_"'Opcoes/Brilho_Radial'",0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_88,uVar8,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar7 = *plVar9;
                                                    uVar12 = *puVar10;
                                                    uVar3 = puVar10[1];
                                                    uVar4 = puVar10[2];
                                                    uVar5 = puVar10[3];
                                                    uVar8 = puVar10[4];
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar15 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar15 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar7 + 0xb0) + 8 +
                                                                              (ulonglong)uVar15 *
                                                                              0x10) + 0xb) * 0x10 +
                                                                     0x138 + lVar7);
                                                          goto code_r0x000180786719;
                                                        }
                                                        uVar15 = uVar15 + 1;
                                                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0xb);
code_r0x000180786719:
                                                    uStack_88 = uVar12;
                                                    uStack_80 = uVar3;
                                                    uStack_78 = uVar4;
                                                    uStack_70 = uVar5;
                                                    uStack_68 = uVar8;
                                                    (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]
                                                                       );
                                                    if (param_1[0x12] != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (param_1[0x12],
                                                                 *(undefined8 *)(lVar6 + 0x10),0);
                                                      if (*(longlong *)(lVar6 + 0x10) != 0) {
                                                        lVar7 = func_0x0001818f3de0(*(longlong *)
                                                                                     (lVar6 + 0x10),
                                                                                    0);
                                                        uVar8 = func_0x000180315580(TI_System.Action);
                                                        FUN_1816a9c60(uVar8,lVar6,
                                                                      MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__0,0);
                                                        if (lVar7 != 0) {
                                                          lVar7 = FUN_180002030(1,
                                                  TI_UnityEngine.UIElements.IVisualElementScheduler,lVar7,uVar8);
                                                  if (lVar7 != 0) {
                                                    FUN_180002030(5,TI_UnityEngine.UIElements.IVisualElementScheduledItem,lVar7,0x32)
                                                    ;
                                                    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (uVar8,0);
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                    func_0x000180314690(lVar6 + 0x18,uVar8);
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (*(longlong *)(lVar6 + 0x18),1,0);
                                                  if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                    lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0xc0800000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar7 = *plVar11;
                                                    uVar8 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar15 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar15 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar7 + 0xb0) + 8 +
                                                                              (ulonglong)uVar15 *
                                                                              0x10) + 0x69) * 0x10 +
                                                                     0x138 + lVar7);
                                                          goto code_r0x000180786909;
                                                        }
                                                        uVar15 = uVar15 + 1;
                                                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x69);
code_r0x000180786909:
                                                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                                    uStack_c8 = uVar8;
                                                    (*(code *)*puVar10)(plVar11,&uStack_c8,
                                                                        puVar10[1]);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      lVar7 = *plVar9;
                                                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                        uVar15 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar7 + 0xb0) +
                                                               (ulonglong)uVar15 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar10 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar7 + 0xb0) + 8
                                                                                + (ulonglong)uVar15
                                                                                  * 0x10) + 0x47) *
                                                                       0x10 + 0x138 + lVar7);
                                                            goto code_r0x000180786979;
                                                          }
                                                          uVar15 = uVar15 + 1;
                                                        } while (uVar15 < *(ushort *)(lVar7 + 0x12e)
                                                                );
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                              0x47);
code_r0x000180786979:
                                                      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                                      uStack_c8 = uVar8;
                                                      (*(code *)*puVar10)(plVar9,&uStack_c8,
                                                                          puVar10[1]);
                                                      if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                        plVar9 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0xc0800000,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar7 = *plVar9;
                                                    uVar8 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar15 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar15 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar7 + 0xb0) + 8 +
                                                                              (ulonglong)uVar15 *
                                                                              0x10) + 0x73) * 0x10 +
                                                                     0x138 + lVar7);
                                                          goto code_r0x000180786a19;
                                                        }
                                                        uVar15 = uVar15 + 1;
                                                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x73);
code_r0x000180786a19:
                                                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                                    uStack_c8 = uVar8;
                                                    (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0xc0400000,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar7 = *plVar9;
                                                    uVar8 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar15 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar15 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar7 + 0xb0) + 8 +
                                                                              (ulonglong)uVar15 *
                                                                              0x10) + 0x2d) * 0x10 +
                                                                     0x138 + lVar7);
                                                          goto code_r0x000180786ab9;
                                                        }
                                                        uVar15 = uVar15 + 1;
                                                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x2d);
code_r0x000180786ab9:
                                                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                                    uStack_c8 = uVar8;
                                                    (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x18),0);
                                                  uStack_c8 = 0x3ce560423cf5c28f;
                                                  uStack_c0 = 0x3f1eb8523cb43958;
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_88,&uStack_c8,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar7 = *plVar9;
                                                    uVar8 = *puVar10;
                                                    uVar12 = puVar10[1];
                                                    uVar1 = *(undefined4 *)(puVar10 + 2);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar15 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar15 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar7 + 0xb0) + 8 +
                                                                              (ulonglong)uVar15 *
                                                                              0x10) + 9) * 0x10 +
                                                                     0x138 + lVar7);
                                                          goto code_r0x000180786b69;
                                                        }
                                                        uVar15 = uVar15 + 1;
                                                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,9)
                                                    ;
code_r0x000180786b69:
                                                    uStack_c8 = uVar8;
                                                    uStack_c0 = uVar12;
                                                    uStack_b8 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_c8,puVar10[1]
                                                                       );
                                                    uStack_c8 = 0x3f07ae143f1eb852;
                                                    uStack_c0 = 0x3ee666663ea3d70a;
                                                    SparkEstilo__Borda__18071da60
                                                              (*(undefined8 *)(lVar6 + 0x18),
                                                               &uStack_c8,0x3f800000,0,0);
                                                    lVar7 = *(longlong *)(lVar6 + 0x18);
                                                    if (lVar7 != 0) {
                                                      uVar8 = *(undefined8 *)(lVar7 + 0x218);
                                                      uVar12 = func_0x000180315580(TI_System.Action<UnityEngine.UIElements.MeshGenerationContext>);
                                                      FUN_18055b980(uVar12,0,MD_VipWindow.TracosDaCaixa,0)
                                                      ;
                                                      lVar13 = System_Delegate__Combine
                                                                         (uVar8,uVar12,0);
                                                      uVar8 = TI_System.Action<UnityEngine.UIElements.MeshGenerationContext>;
                                                      if (lVar13 == 0) {
                                                        lVar14 = 0;
                                                      }
                                                      else {
                                                        lVar14 = func_0x0001803146b0(lVar13,
                                                  TI_System.Action<UnityEngine.UIElements.MeshGenerationContext>);
                                                  if (lVar14 == 0) {
                                                    FUN_1803146d0(lVar13,uVar8);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  *(longlong *)(lVar7 + 0x218) = lVar14;
                                                  func_0x000180314690(lVar7 + 0x218,lVar14);
                                                  if (param_1[0x12] != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_1[0x12],
                                                               *(undefined8 *)(lVar6 + 0x18),0);
                                                    if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                      lVar7 = func_0x0001818f3de0(*(longlong *)
                                                                                   (lVar6 + 0x18),0)
                                                      ;
                                                      uVar8 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(uVar8,lVar6,MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__1
                                                                    ,0);
                                                      if (lVar7 != 0) {
                                                        lVar7 = FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler
                                                                              ,lVar7,uVar8);
                                                        if (lVar7 != 0) {
                                                          FUN_180002030(5,TI_UnityEngine.UIElements.IVisualElementScheduledItem,lVar7
                                                                        ,0x21);
                                                          uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement
                                                                                     );
                                                                                                                    
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (uVar8,0);
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  func_0x000180314690(lVar6 + 0x20,uVar8);
                                                  if (*(longlong *)(lVar6 + 0x20) != 0) {
                                                    UnityEngine_UIElements_VisualElement__set_name
                                                              (*(longlong *)(lVar6 + 0x20),
                                                               LIT_"'VipMarca'",0);
                                                    if (*(longlong *)(lVar6 + 0x20) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x20),0);
                                                  if (*(longlong *)(lVar6 + 0x20) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x20),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0x42200000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar7 = *plVar11;
                                                    uVar8 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar15 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar15 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar7 + 0xb0) + 8 +
                                                                              (ulonglong)uVar15 *
                                                                              0x10) + 0x43) * 0x10 +
                                                                     0x138 + lVar7);
                                                          goto code_r0x000180786f77;
                                                        }
                                                        uVar15 = uVar15 + 1;
                                                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x43);
code_r0x000180786f77:
                                                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                                    uStack_c8 = uVar8;
                                                    (*(code *)*puVar10)(plVar11,&uStack_c8,
                                                                        puVar10[1]);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      lVar7 = *plVar9;
                                                      uVar17 = 0;
                                                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                        uVar16 = uVar17;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar7 + 0xb0) +
                                                               uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                            puVar10 = (undefined8 *)
                                                                      ((longlong)
                                                                       (*(int *)(*(longlong *)
                                                                                  (lVar7 + 0xb0) + 8
                                                                                + uVar16 * 0x10) +
                                                                       0xad) * 0x10 + 0x138 + lVar7)
                                                            ;
                                                            goto code_r0x000180786fe9;
                                                          }
                                                          uVar15 = (short)uVar16 + 1;
                                                          uVar16 = (ulonglong)uVar15;
                                                        } while (uVar15 < *(ushort *)(lVar7 + 0x12e)
                                                                );
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                              0xad);
code_r0x000180786fe9:
                                                      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
                                                      uStack_c8 = uVar8;
                                                      (*(code *)*puVar10)(plVar9,&uStack_c8,
                                                                          puVar10[1]);
                                                      if (*(longlong *)(lVar6 + 0x20) != 0) {
                                                        plVar9 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar6 + 0x20),0);
                                                  uVar8 = SparkEstilo__Textura__180723790
                                                                    (LIT_"'Vip/VIPmark_0'",0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_88,uVar8,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar7 = *plVar9;
                                                    uVar12 = *puVar10;
                                                    uVar3 = puVar10[1];
                                                    uVar4 = puVar10[2];
                                                    uVar5 = puVar10[3];
                                                    uVar8 = puVar10[4];
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar7 + 0xb0) + 8 +
                                                                              uVar17 * 0x10) + 0xb)
                                                                     * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x000180787099;
                                                        }
                                                        uVar15 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar15;
                                                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0xb);
code_r0x000180787099:
                                                    uStack_88 = uVar12;
                                                    uStack_80 = uVar3;
                                                    uStack_78 = uVar4;
                                                    uStack_70 = uVar5;
                                                    uStack_68 = uVar8;
                                                    (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(lVar6 + 0x20) != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (*(longlong *)(lVar6 + 0x20),1,0);
                                                  if (param_1[0x12] != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_1[0x12],
                                                               *(undefined8 *)(lVar6 + 0x20),0);
                                                    uStack_c8 = *(undefined8 *)
                                                                 (*(longlong *)
                                                                   (TI_SparkEstilo + 0xb8) + 0x60);
                                                    uStack_c0 = *(undefined8 *)
                                                                 (*(longlong *)
                                                                   (TI_SparkEstilo + 0xb8) + 0x68);
                                                    uStack_98 = 0;
                                                    uStack_a8 = 0;
                                                    uStack_a0 = 0;
                                                    func_0x000180cb7cb0(&uStack_a8,&uStack_c8,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_c8 = uStack_a8;
                                                    uStack_c0 = uStack_a0;
                                                    uStack_b8 = uStack_98;
                                                    lVar7 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"'VIP'",10,
                                                                       &uStack_c8,1,0);
                                                    param_1[0x17] = lVar7;
                                                    func_0x000180314690(param_1 + 0x17,lVar7);
                                                    if (param_1[0x17] != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (param_1[0x17],0);
                                                  uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
                                                    if (param_1[0x12] != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (param_1[0x12],param_1[0x17],0);
                                                      lVar7 = param_1[0x12];
                                                      uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                      FUN_18055b980(uVar8,lVar6,MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__2
                                                                    ,0);
                                                      if (lVar7 != 0) {
                                                        FUN_180990d50(lVar7,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                        lVar7 = param_1[0x12];
                                                        uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                        FUN_18055b980(uVar8,lVar6,
                                                                      MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__3,0);
                                                        if (lVar7 != 0) {
                                                          FUN_180990d50(lVar7,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>
                                                                       );
                                                          *(undefined2 *)(lVar6 + 0x28) = 0;
                                                          if (DAT_1834b2f44 == '\0') {
                                                            FUN_180315380(TI_UnityEngine.Vector2);
                                                            DAT_1834b2f44 = '\x01';
                                                          }
                                                          uVar1 = **(undefined4 **)
                                                                    (TI_UnityEngine.Vector2 + 0xb8);
                                                          *(undefined4 *)(lVar6 + 0x30) =
                                                               (*(undefined4 **)
                                                                 (TI_UnityEngine.Vector2 + 0xb8))[1];
                                                          *(undefined4 *)(lVar6 + 0x2c) = uVar1;
                                                          if (DAT_1834b2f44 == '\0') {
                                                            FUN_180315380(TI_UnityEngine.Vector2);
                                                            DAT_1834b2f44 = '\x01';
                                                          }
                                                          uVar1 = **(undefined4 **)
                                                                    (TI_UnityEngine.Vector2 + 0xb8);
                                                          *(undefined4 *)(lVar6 + 0x38) =
                                                               (*(undefined4 **)
                                                                 (TI_UnityEngine.Vector2 + 0xb8))[1];
                                                          *(undefined4 *)(lVar6 + 0x34) = uVar1;
                                                          lVar7 = param_1[0x12];
                                                          uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>
                                                                                     );
                                                          FUN_18055b980(uVar8,lVar6,
                                                                        MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__4,0);
                                                          if (lVar7 != 0) {
                                                            FUN_180990d50(lVar7,uVar8,0,
                                                                          MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                            lVar7 = param_1[0x12];
                                                            uVar8 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
                                                  FUN_18055b980(uVar8,lVar6,MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__5,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180990d50(lVar7,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
                                                    lVar7 = param_1[0x12];
                                                    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                    FUN_18055b980(uVar8,lVar6,MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__6,0
                                                                 );
                                                    if (lVar7 != 0) {
                                                      FUN_180990d50(lVar7,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                      lVar6 = param_1[0x12];
                                                      lVar7 = func_0x000180315580(TI_TooltipManipulator);
                                                      TooltipManipulator___ctor__1807b5900
                                                                (lVar7,lVar6,1,LIT_"'VIP'",
                                                                 0);
                                                      param_1[0x21] = lVar7;
                                                      func_0x000180314690(param_1 + 0x21,lVar7);
                                                                                                            
                                                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                            (param_1[0x12],param_1[0x21],0);
                                                  if (param_2 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_2,param_1[0x12],0);
                                                    lVar6 = param_1[0x12];
                                                    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
                                                    FUN_18055b980(uVar8,param_1,MD_VipWindow.PosicaoInicial
                                                                  ,0);
                                                    if (lVar6 != 0) {
                                                      FUN_180990d50(lVar6,uVar8,0,
                                                                    MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
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

