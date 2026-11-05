// OptionsWindow__Brilhos__18068f430 @ 0x18068f430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__Brilhos__18068f430(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_a8 [120];
  undefined8 uStack_30;
  
  if (cRam00000001834b3e9c == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(TI_System.Random);
    FUN_180315380(TI_float__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass63_0._Brilhos_b__0);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass63_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement__);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e9c = '\x01';
  }
  uStack_30 = (undefined1 *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  lVar5 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass63_0);
  func_0x0001803f01b0(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    func_0x000180314690(lVar5 + 0x10,param_2);
    *(undefined8 *)(lVar5 + 0x20) = param_1;
    func_0x000180314690(lVar5 + 0x20,param_1);
    if (*(longlong *)(lVar5 + 0x20) != 0) {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x20),0);
      uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
      if (lVar6 != 0) {
        FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
        uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(uVar7,0);
        *(undefined8 *)(lVar5 + 0x18) = uVar7;
        func_0x000180314690(lVar5 + 0x18,uVar7);
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(lVar5 + 0x18),1,0);
          if (*(longlong *)(lVar5 + 0x18) != 0) {
            lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x18),0);
            uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
            if (lVar6 != 0) {
              FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
              if (*(longlong *)(lVar5 + 0x18) != 0) {
                plVar8 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(lVar5 + 0x18),0);
                if (*(longlong *)(lVar5 + 0x18) != 0) {
                  plVar9 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar5 + 0x18),0);
                  if (*(longlong *)(lVar5 + 0x18) != 0) {
                    plVar10 = (longlong *)
                              UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(lVar5 + 0x18),0);
                    if (*(longlong *)(lVar5 + 0x18) != 0) {
                      plVar11 = (longlong *)
                                UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(lVar5 + 0x18),0);
                      puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                      if (plVar11 != (longlong *)0x0) {
                        lVar6 = *plVar11;
                        uVar7 = *puVar12;
                        uVar4 = *(undefined4 *)(puVar12 + 1);
                        if (*(ushort *)(lVar6 + 0x12e) != 0) {
                          uVar14 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar12 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                  (ulonglong)uVar14 * 0x10) + 0x2d) * 0x10 + 0x138 +
                                        lVar6);
                              goto code_r0x00018068f727;
                            }
                            uVar14 = uVar14 + 1;
                          } while (uVar14 < *(ushort *)(lVar6 + 0x12e));
                        }
                        puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x00018068f727:
                        uStack_108 = uVar7;
                        uStack_100 = uVar4;
                        (*(code *)*puVar12)(plVar11,&uStack_108,puVar12[1]);
                        if (plVar10 != (longlong *)0x0) {
                          lVar6 = *plVar10;
                          if (*(ushort *)(lVar6 + 0x12e) != 0) {
                            uVar14 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar12 = (undefined8 *)
                                          ((longlong)
                                           (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                    (ulonglong)uVar14 * 0x10) + 0x69) * 0x10 + 0x138
                                          + lVar6);
                                goto code_r0x00018068f799;
                              }
                              uVar14 = uVar14 + 1;
                            } while (uVar14 < *(ushort *)(lVar6 + 0x12e));
                          }
                          puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x00018068f799:
                          uStack_108 = uVar7;
                          uStack_100 = uVar4;
                          (*(code *)*puVar12)(plVar10,&uStack_108,puVar12[1]);
                          if (plVar9 != (longlong *)0x0) {
                            lVar6 = *plVar9;
                            if (*(ushort *)(lVar6 + 0x12e) != 0) {
                              uVar14 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                      (ulonglong)uVar14 * 0x10) + 0x73) * 0x10 +
                                             0x138 + lVar6);
                                  goto code_r0x00018068f809;
                                }
                                uVar14 = uVar14 + 1;
                              } while (uVar14 < *(ushort *)(lVar6 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018068f809:
                            uStack_108 = uVar7;
                            uStack_100 = uVar4;
                            (*(code *)*puVar12)(plVar9,&uStack_108,puVar12[1]);
                            if (plVar8 != (longlong *)0x0) {
                              lVar6 = *plVar8;
                              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                uVar14 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar12 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                        (ulonglong)uVar14 * 0x10) + 0x47) * 0x10 +
                                               0x138 + lVar6);
                                    goto code_r0x00018068f879;
                                  }
                                  uVar14 = uVar14 + 1;
                                } while (uVar14 < *(ushort *)(lVar6 + 0x12e));
                              }
                              puVar12 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018068f879:
                              uStack_108 = uVar7;
                              uStack_100 = uVar4;
                              (*(code *)*puVar12)(plVar8,&uStack_108,puVar12[1]);
                              if (*(longlong *)(lVar5 + 0x20) != 0) {
                                UnityEngine_UIElements_VisualElement__Insert
                                          (*(longlong *)(lVar5 + 0x20),0,
                                           *(undefined8 *)(lVar5 + 0x18),0);
                                uVar7 = func_0x000180314710(TI_UnityEngine.UIElements.VisualElement__,0x1a);
                                *(undefined8 *)(lVar5 + 0x58) = uVar7;
                                func_0x000180314690(lVar5 + 0x58,uVar7);
                                uVar7 = func_0x000180314710(TI_float__,0x1a);
                                *(undefined8 *)(lVar5 + 0x40) = uVar7;
                                func_0x000180314690(lVar5 + 0x40,uVar7);
                                uVar7 = func_0x000180314710(TI_float__,0x1a);
                                *(undefined8 *)(lVar5 + 0x30) = uVar7;
                                func_0x000180314690(lVar5 + 0x30,uVar7);
                                uVar7 = func_0x000180314710(TI_float__,0x1a);
                                *(undefined8 *)(lVar5 + 0x38) = uVar7;
                                func_0x000180314690(lVar5 + 0x38,uVar7);
                                uVar7 = func_0x000180314710(TI_float__,0x1a);
                                *(undefined8 *)(lVar5 + 0x50) = uVar7;
                                func_0x000180314690(lVar5 + 0x50,uVar7);
                                plVar8 = *(longlong **)(lVar5 + 0x20);
                                if (plVar8 != (longlong *)0x0) {
                                  uVar4 = (**(code **)(*plVar8 + 0x158))
                                                    (plVar8,*(undefined8 *)(*plVar8 + 0x160));
                                  uVar7 = func_0x000180315580(TI_System.Random);
                                  System_Random___ctor(uVar7,uVar4,0);
                                  *(undefined8 *)(lVar5 + 0x48) = uVar7;
                                  func_0x000180314690(lVar5 + 0x48,uVar7);
                                  uVar16 = 0;
                                  do {
                                    lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                    UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
                                    if (lVar6 == 0) goto code_r0x00018068fffb;
                                    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar6,1,0)
                                    ;
                                    plVar8 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar6,0);
                                    uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar13 = *plVar8;
                                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                      uVar14 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar13 + 0xb0) +
                                             (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                          puVar12 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                                              (ulonglong)uVar14 * 0x10) + 0x67) *
                                                     0x10 + 0x138 + lVar13);
                                          goto code_r0x00018068fa79;
                                        }
                                        uVar14 = uVar14 + 1;
                                      } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
                                    }
                                    puVar12 = (undefined8 *)
                                              FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x67);
code_r0x00018068fa79:
                                    (*(code *)*puVar12)(plVar8,uVar7,puVar12[1]);
                                    plVar8 = *(longlong **)(lVar5 + 0x48);
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    (**(code **)(*plVar8 + 0x198))
                                              (plVar8,1,3,*(undefined8 *)(*plVar8 + 0x1a0));
                                    plVar8 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar6,0);
                                    puVar12 = (undefined8 *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit();
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar13 = *plVar8;
                                    uVar7 = *puVar12;
                                    uVar4 = *(undefined4 *)(puVar12 + 1);
                                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                      uVar14 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar13 + 0xb0) +
                                             (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                          puVar12 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                                              (ulonglong)uVar14 * 0x10) + 0xad) *
                                                     0x10 + 0x138 + lVar13);
                                          goto code_r0x00018068fb39;
                                        }
                                        uVar14 = uVar14 + 1;
                                      } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
                                    }
                                    puVar12 = (undefined8 *)
                                              FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018068fb39:
                                    uStack_108 = uVar7;
                                    uStack_100 = uVar4;
                                    (*(code *)*puVar12)(plVar8,&uStack_108,puVar12[1]);
                                    plVar8 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar6,0);
                                    puVar12 = (undefined8 *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit();
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar13 = *plVar8;
                                    uVar7 = *puVar12;
                                    uVar4 = *(undefined4 *)(puVar12 + 1);
                                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                      uVar14 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar13 + 0xb0) +
                                             (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                          puVar12 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                                              (ulonglong)uVar14 * 0x10) + 0x43) *
                                                     0x10 + 0x138 + lVar13);
                                          goto code_r0x00018068fbd9;
                                        }
                                        uVar14 = uVar14 + 1;
                                      } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
                                    }
                                    puVar12 = (undefined8 *)
                                              FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068fbd9:
                                    uStack_f8 = uVar7;
                                    uStack_f0 = uVar4;
                                    (*(code *)*puVar12)(plVar8,&uStack_f8,puVar12[1]);
                                    plVar8 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar6,0);
                                    uStack_c8 = 0x3f5c28f63f800000;
                                    uStack_c0 = 0x3f8000003f0ccccd;
                                    puVar12 = (undefined8 *)
                                              UnityEngine_UIElements_StyleColor__op_Implicit
                                                        (auStack_a8,&uStack_c8,0);
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar13 = *plVar8;
                                    uVar7 = *puVar12;
                                    uVar3 = puVar12[1];
                                    uVar4 = *(undefined4 *)(puVar12 + 2);
                                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                      uVar14 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar13 + 0xb0) +
                                             (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                          puVar12 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                                              (ulonglong)uVar14 * 0x10) + 9) * 0x10
                                                     + 0x138 + lVar13);
                                          goto code_r0x00018068fc79;
                                        }
                                        uVar14 = uVar14 + 1;
                                      } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
                                    }
                                    puVar12 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018068fc79:
                                    uStack_c8 = uVar7;
                                    uStack_c0 = uVar3;
                                    uStack_b8 = uVar4;
                                    (*(code *)*puVar12)(plVar8,&uStack_c8);
                                    if (*(longlong *)(lVar5 + 0x18) == 0) goto code_r0x00018068fffb;
                                    UnityEngine_UIElements_VisualElement__Add
                                              (*(longlong *)(lVar5 + 0x18),lVar6);
                                    plVar8 = *(longlong **)(lVar5 + 0x58);
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar13 = func_0x0001803146b0(lVar6,*(undefined8 *)
                                                                        (*plVar8 + 0x40));
                                    if (lVar13 == 0) {
                                      uVar7 = func_0x000180314f80();
                                      FUN_180315590(uVar7,0);
                                      pcVar1 = (code *)swi(3);
                                      (*pcVar1)();
                                      return;
                                    }
                                    uVar15 = (uint)uVar16;
                                    if (*(uint *)(plVar8 + 3) <= uVar15) {
code_r0x000180690001:
                                      FUN_1803155c0();
                                      pcVar1 = (code *)swi(3);
                                      (*pcVar1)();
                                      return;
                                    }
                                    plVar8[uVar16 + 4] = lVar6;
                                    func_0x000180314690(plVar8 + uVar16 + 4,lVar6);
                                    plVar8 = *(longlong **)(lVar5 + 0x48);
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar6 = *(longlong *)(lVar5 + 0x40);
                                    dVar2 = (double)(**(code **)(*plVar8 + 0x1b8))
                                                              (plVar8,*(undefined8 *)
                                                                       (*plVar8 + 0x1c0));
                                    if (lVar6 == 0) goto code_r0x00018068fffb;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar15)
                                    goto code_r0x000180690001;
                                    *(float *)(lVar6 + 0x20 + uVar16 * 4) = (float)dVar2 * 0.6;
                                    plVar8 = *(longlong **)(lVar5 + 0x48);
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar6 = *(longlong *)(lVar5 + 0x30);
                                    dVar2 = (double)(**(code **)(*plVar8 + 0x1b8))
                                                              (plVar8,*(undefined8 *)
                                                                       (*plVar8 + 0x1c0));
                                    if (lVar6 == 0) goto code_r0x00018068fffb;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar15)
                                    goto code_r0x000180690001;
                                    *(float *)(lVar6 + 0x20 + uVar16 * 4) = (float)dVar2;
                                    plVar8 = *(longlong **)(lVar5 + 0x48);
                                    if (plVar8 == (longlong *)0x0) goto code_r0x00018068fffb;
                                    lVar6 = *(longlong *)(lVar5 + 0x38);
                                    dVar2 = (double)(**(code **)(*plVar8 + 0x1b8))
                                                              (plVar8,*(undefined8 *)
                                                                       (*plVar8 + 0x1c0));
                                    if (lVar6 == 0) goto code_r0x00018068fffb;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar15)
                                    goto code_r0x000180690001;
                                    *(float *)(lVar6 + 0x20 + uVar16 * 4) =
                                         (float)dVar2 * 0.12 + 0.08;
                                    if (*(longlong **)(lVar5 + 0x48) == (longlong *)0x0)
                                    goto code_r0x00018068fffb;
                                    lVar6 = *(longlong *)(lVar5 + 0x50);
                                    dVar2 = (double)(**(code **)(**(longlong **)(lVar5 + 0x48) +
                                                                0x1b8))();
                                    if (lVar6 == 0) goto code_r0x00018068fffb;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar15)
                                    goto code_r0x000180690001;
                                    *(float *)(lVar6 + 0x20 + uVar16 * 4) = (float)dVar2 * 6.28;
                                    uVar16 = (ulonglong)(uVar15 + 1);
                                  } while ((int)(uVar15 + 1) < 0x1a);
                                  uVar4 = FUN_1824366b0(0);
                                  *(undefined4 *)(lVar5 + 0x28) = uVar4;
                                  if (*(longlong *)(lVar5 + 0x18) != 0) {
                                    lVar6 = func_0x0001818f3de0(*(longlong *)(lVar5 + 0x18),0);
                                    uVar7 = func_0x000180315580(TI_System.Action);
                                    FUN_1816a9c60(uVar7,lVar5,MD_OptionsWindow.__c__DisplayClass63_0._Brilhos_b__0,0);
                                    if (lVar6 != 0) {
                                      plVar8 = (longlong *)
                                               FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar6,uVar7);
                                      if (plVar8 != (longlong *)0x0) {
                                        uVar14 = 0;
                                        lVar5 = *plVar8;
                                        if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar5 + 0xb0) +
                                                 (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IVisualElementScheduledItem)
                                            {
                                              puVar12 = (undefined8 *)
                                                        ((longlong)
                                                         (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                                  (ulonglong)uVar14 * 0x10) + 5) *
                                                         0x10 + 0x138 + lVar5);
                                              goto LAB_180002080;
                                            }
                                            uVar14 = uVar14 + 1;
                                          } while (uVar14 < *(ushort *)(lVar5 + 0x12e));
                                        }
                                        uStack_30 = &LAB_180002080;
                                        puVar12 = (undefined8 *)FUN_180312860(plVar8);
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                        (*(code *)*puVar12)(plVar8,0x21,puVar12[1]);
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
code_r0x00018068fffb:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

