// SparkLootingRights__Garante__180740260 @ 0x180740260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkLootingRights__Garante__180740260(void)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (cRam00000001834b427e == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkLootingRights);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MD_SparkLootingRights.__c._Garante_b__8_0);
    FUN_180315380(TI_SparkLootingRights.<>c);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Looting Rights'");
    FUN_180315380(LIT_"'spark.lr.x'");
    FUN_180315380(LIT_"'spark.lr.y'");
    cRam00000001834b427e = '\x01';
  }
  if (cRam00000001834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    cRam00000001834b31c0 = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar2 == '\0') {
    return 0;
  }
  if (cRam00000001834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    cRam00000001834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    lVar9 = *(longlong *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x20);
    if (lVar9 == 0) {
      return 0;
    }
    if ((**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) &&
       (lVar3 = func_0x0001825d76c0(**(longlong **)(TI_SparkLootingRights + 0xb8),0), lVar3 != 0)) {
      return 1;
    }
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = SparkEstilo__Painel(0);
    **(undefined8 **)(TI_SparkLootingRights + 0xb8) = uVar4;
    func_0x000180314690(*(undefined8 *)(TI_SparkLootingRights + 0xb8),uVar4);
    if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
      UnityEngine_UIElements_VisualElement__set_pickingMode
                (**(longlong **)(TI_SparkLootingRights + 0xb8),0,0);
      uVar4 = **(undefined8 **)(TI_SparkLootingRights + 0xb8);
      uVar5 = func_0x000180315580(TI_MouseOverDetectionManipulator);
      MouseOverDetectionManipulator___ctor(uVar5,uVar4,0);
      *(undefined8 *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x10) = uVar5;
      func_0x000180314690(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x10,uVar5);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                (**(undefined8 **)(TI_SparkLootingRights + 0xb8),
                 (*(undefined8 **)(TI_SparkLootingRights + 0xb8))[2],0);
      if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style
                          (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
        uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
        if (lVar3 != 0) {
          FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
          fVar11 = (float)UnityEngine_PlayerPrefs__GetFloat(LIT_"'spark.lr.x'",0xbf800000,0);
          fVar12 = (float)UnityEngine_PlayerPrefs__GetFloat(LIT_"'spark.lr.y'",0xbf800000,0);
          if ((fVar11 < 0.0) || (fVar12 < 0.0)) {
            if (**(longlong **)(TI_SparkLootingRights + 0xb8) == 0) goto code_r0x000180740f33;
            plVar7 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x41400000,0);
            if (plVar7 == (longlong *)0x0) goto code_r0x000180740f33;
            lVar3 = *plVar7;
            uVar4 = *puVar6;
            uVar13 = *(undefined4 *)(puVar6 + 1);
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0x69) * 0x10 + 0x138 + lVar3);
                  goto code_r0x000180740729;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x000180740729:
            uStack_98 = uVar4;
            uStack_90 = uVar13;
            (*(code *)*puVar6)(plVar7,&uStack_98,puVar6[1]);
            if (**(longlong **)(TI_SparkLootingRights + 0xb8) == 0) goto code_r0x000180740f33;
            plVar7 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x43660000,0);
            if (plVar7 == (longlong *)0x0) goto code_r0x000180740f33;
            lVar3 = *plVar7;
            uVar4 = *puVar6;
            uVar13 = *(undefined4 *)(puVar6 + 1);
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0x73) * 0x10 + 0x138 + lVar3);
                  goto code_r0x0001807407d9;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001807407d9:
            uStack_98 = uVar4;
            uStack_90 = uVar13;
            (*(code *)*puVar6)(plVar7,&uStack_98,puVar6[1]);
          }
          else {
            if (**(longlong **)(TI_SparkLootingRights + 0xb8) == 0) goto code_r0x000180740f33;
            lVar3 = UnityEngine_UIElements_VisualElement__get_style
                              (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,fVar11,0);
            if (lVar3 == 0) goto code_r0x000180740f33;
            uStack_90 = *(undefined4 *)(puVar6 + 1);
            uStack_98 = *puVar6;
            FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar3,&uStack_98);
            if (**(longlong **)(TI_SparkLootingRights + 0xb8) == 0) goto code_r0x000180740f33;
            lVar3 = UnityEngine_UIElements_VisualElement__get_style
                              (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,fVar12,0);
            if (lVar3 == 0) goto code_r0x000180740f33;
            uStack_90 = *(undefined4 *)(puVar6 + 1);
            uStack_98 = *puVar6;
            FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar3,&uStack_98);
          }
          if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
            plVar7 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x43660000,0);
            if (plVar7 != (longlong *)0x0) {
              lVar3 = *plVar7;
              uVar4 = *puVar6;
              uVar13 = *(undefined4 *)(puVar6 + 1);
              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                uVar10 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar6 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10)
                              + 0xad) * 0x10 + 0x138 + lVar3);
                    goto code_r0x000180740889;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
              }
              puVar6 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180740889:
              uStack_98 = uVar4;
              uStack_90 = uVar13;
              (*(code *)*puVar6)(plVar7,&uStack_98,puVar6[1]);
              if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
                plVar7 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
                uStack_78 = 0x3d0f5c293d23d70a;
                uStack_70 = 0x3f47ae143cf5c28f;
                puVar6 = (undefined8 *)
                         UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_98,&uStack_78,0);
                if (plVar7 != (longlong *)0x0) {
                  lVar3 = *plVar7;
                  uVar4 = *puVar6;
                  uVar5 = puVar6[1];
                  uVar13 = *(undefined4 *)(puVar6 + 2);
                  if (*(ushort *)(lVar3 + 0x12e) != 0) {
                    uVar10 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar6 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                           (ulonglong)uVar10 * 0x10) + 9) * 0x10 + 0x138 + lVar3);
                        goto code_r0x000180740939;
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
                  }
                  puVar6 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180740939:
                  uStack_78 = uVar4;
                  uStack_70 = uVar5;
                  uStack_68 = uVar13;
                  (*(code *)*puVar6)(plVar7,&uStack_78,puVar6[1]);
                  uVar4 = **(undefined8 **)(TI_SparkLootingRights + 0xb8);
                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                    func_0x000180315660(TI_SparkEstilo);
                  }
                  uVar13 = 0;
                  uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x20);
                  uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x28);
                  SparkEstilo__Borda(uVar4,&uStack_78,0x3f800000,0,0);
                  SparkEstilo__Espaco(**(undefined8 **)(TI_SparkLootingRights + 0xb8),0x40a00000,
                                      0x40e00000,0x40c00000,CONCAT44(uVar13,0x40e00000),0);
                  uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x70);
                  uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x78);
                  uStack_48 = 0;
                  uStack_58 = 0;
                  uStack_50 = 0;
                  func_0x000180cb7cb0(&uStack_58,&uStack_78,MR_System.Nullable<UnityEngine.Color>..ctor);
                  uStack_78 = uStack_58;
                  uStack_70 = uStack_50;
                  uStack_68 = uStack_48;
                  lVar3 = SparkEstilo__Texto(LIT_"'Looting Rights'",0xb,&uStack_78,1,0);
                  if (lVar3 != 0) {
                    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar3,0,0);
                    SparkLootingRights__Arrasta__18073ff60(lVar3,0);
                    lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
                    uVar4 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                    if (lVar8 != 0) {
                      FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
                      puVar6 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_78,0x40800000,0);
                      if (plVar7 != (longlong *)0x0) {
                        lVar8 = *plVar7;
                        uVar4 = *puVar6;
                        uVar13 = *(undefined4 *)(puVar6 + 1);
                        if (*(ushort *)(lVar8 + 0x12e) != 0) {
                          uVar10 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar6 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                 (ulonglong)uVar10 * 0x10) + 0x4b) * 0x10 + 0x138 +
                                       lVar8);
                              goto code_r0x000180740b39;
                            }
                            uVar10 = uVar10 + 1;
                          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                        }
                        puVar6 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180740b39:
                        uStack_98 = uVar4;
                        uStack_90 = uVar13;
                        (*(code *)*puVar6)(plVar7,&uStack_98,puVar6[1]);
                        if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
                          UnityEngine_UIElements_VisualElement__Add
                                    (**(longlong **)(TI_SparkLootingRights + 0xb8),lVar3,0);
                          uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                          UnityEngine_UIElements_VisualElement___ctor(uVar4,0);
                          *(undefined8 *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 8) = uVar4;
                          func_0x000180314690(*(longlong *)(TI_SparkLootingRights + 0xb8) + 8,uVar4);
                          lVar3 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 8);
                          if (lVar3 != 0) {
                            UnityEngine_UIElements_VisualElement__set_pickingMode(lVar3,1,0);
                            lVar3 = **(longlong **)(TI_SparkLootingRights + 0xb8);
                            if (lVar3 != 0) {
                              UnityEngine_UIElements_VisualElement__Add
                                        (lVar3,(*(longlong **)(TI_SparkLootingRights + 0xb8))[1],0);
                              UnityEngine_UIElements_VisualElement__Add
                                        (lVar9,**(undefined8 **)(TI_SparkLootingRights + 0xb8),0);
                              if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
                                plVar7 = (longlong *)
                                         func_0x0001818f3de0(**(longlong **)
                                                               (TI_SparkLootingRights + 0xb8),0);
                                if (*(int *)(TI_SparkLootingRights.<>c + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkLootingRights.<>c);
                                }
                                lVar9 = *(longlong *)
                                         (*(longlong *)(TI_SparkLootingRights.<>c + 0xb8) + 8);
                                if (lVar9 == 0) {
                                  if (*(int *)(TI_SparkLootingRights.<>c + 0xe4) == 0) {
                                    func_0x000180315660(TI_SparkLootingRights.<>c);
                                  }
                                  uVar4 = **(undefined8 **)(TI_SparkLootingRights.<>c + 0xb8);
                                  lVar9 = func_0x000180315580(TI_System.Action);
                                  FUN_1816a9c60(lVar9,uVar4,MD_SparkLootingRights.__c._Garante_b__8_0,0);
                                  *(longlong *)(*(longlong *)(TI_SparkLootingRights.<>c + 0xb8) + 8) =
                                       lVar9;
                                  func_0x000180314690(*(longlong *)(TI_SparkLootingRights.<>c + 0xb8) + 8
                                                      ,lVar9);
                                }
                                if (plVar7 != (longlong *)0x0) {
                                  lVar3 = *plVar7;
                                  if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                    uVar10 = 0;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar10 * 0x10)
                                          == TI_UnityEngine.UIElements.IVisualElementScheduler) {
                                        puVar6 = (undefined8 *)
                                                 ((longlong)
                                                  (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                                           (ulonglong)uVar10 * 0x10) + 1) * 0x10 +
                                                  0x138 + lVar3);
                                        goto code_r0x000180740d49;
                                      }
                                      uVar10 = uVar10 + 1;
                                    } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
                                  }
                                  puVar6 = (undefined8 *)
                                           FUN_180312860(plVar7,TI_UnityEngine.UIElements.IVisualElementScheduler,1);
code_r0x000180740d49:
                                  plVar7 = (longlong *)(*(code *)*puVar6)(plVar7,lVar9,puVar6[1]);
                                  if (plVar7 != (longlong *)0x0) {
                                    lVar9 = *plVar7;
                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                      uVar10 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar10 * 0x10
                                             ) == TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                                          puVar6 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                             (ulonglong)uVar10 * 0x10) + 5) * 0x10 +
                                                    0x138 + lVar9);
                                          goto code_r0x000180740db9;
                                        }
                                        uVar10 = uVar10 + 1;
                                      } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                    }
                                    puVar6 = (undefined8 *)
                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IVisualElementScheduledItem,5);
code_r0x000180740db9:
                                    uVar4 = (*(code *)*puVar6)(plVar7,1000,puVar6[1]);
                                    *(undefined8 *)
                                     (*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x20) = uVar4;
                                    func_0x000180314690(*(longlong *)(TI_SparkLootingRights + 0xb8) +
                                                        0x20,uVar4);
                                    return 1;
                                  }
                                }
                                goto code_r0x000180740f33;
                              }
                            }
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
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
    }
  }
code_r0x000180740f33:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

