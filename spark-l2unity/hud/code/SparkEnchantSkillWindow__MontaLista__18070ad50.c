// SparkEnchantSkillWindow__MontaLista__18070ad50 @ 0x18070ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantSkillWindow__MontaLista__18070ad50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ushort uVar8;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b4147 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Enchantable skills'");
    FUN_180315380(LIT_"'There are no skills to enchant.'");
    cRam00000001834b4147 = '\x01';
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkEstilo__Painel__180721ce0(0);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  func_0x000180314690(param_1 + 0x90,uVar3);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x90),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x90),0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0,0);
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *plVar5;
          uVar3 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                          0x57) * 0x10 + 0x138 + lVar4);
                goto code_r0x00018070af09;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018070af09:
          uStack_88 = uVar3;
          uStack_80 = uVar1;
          (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
          if (*(longlong *)(param_1 + 0x90) != 0) {
            lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x90),0)
            ;
            uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
            if (lVar4 != 0) {
              FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
              lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
              UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
              if (lVar4 != 0) {
                lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                if (lVar7 != 0) {
                  FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                  uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                  if (lVar7 != 0) {
                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    puVar6 = (undefined8 *)
                             UnityEngine_UIElements_StyleLength__op_Implicit
                                       (&uStack_88,0x40c00000,0);
                    if (plVar5 != (longlong *)0x0) {
                      lVar7 = *plVar5;
                      uVar3 = *puVar6;
                      uVar1 = *(undefined4 *)(puVar6 + 1);
                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                        uVar8 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar8 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar6 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                               (ulonglong)uVar8 * 0x10) + 0x61) * 0x10 + 0x138 +
                                     lVar7);
                            goto code_r0x00018070b099;
                          }
                          uVar8 = uVar8 + 1;
                        } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
                      }
                      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x00018070b099:
                      uStack_88 = uVar3;
                      uStack_80 = uVar1;
                      (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                      uVar3 = func_0x000182601c10(0,0);
                      if (lVar7 != 0) {
                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                        SparkEstilo__CabecalhoDeLista__18071f010(lVar4,0);
                        lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uStack_88 = *(undefined8 *)(lVar7 + 0x50);
                        uStack_80 = *(undefined4 *)(lVar7 + 0x58);
                        uStack_7c = *(undefined4 *)(lVar7 + 0x5c);
                        uStack_58 = 0;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
                        uStack_88 = uStack_68;
                        uStack_80 = (undefined4)uStack_60;
                        uStack_7c = uStack_60._4_4_;
                        uStack_78 = uStack_58;
                        uVar3 = SparkEstilo__Texto__180722af0
                                          (LIT_"'Enchantable skills'",0xb,&uStack_88,1,0);
                        UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                        if (*(longlong *)(param_1 + 0x90) != 0) {
                          UnityEngine_UIElements_VisualElement__Add
                                    (*(longlong *)(param_1 + 0x90),lVar4,0);
                          uVar3 = SparkEstilo__Lista__1807211b0(0);
                          *(undefined8 *)(param_1 + 0xa0) = uVar3;
                          func_0x000180314690(param_1 + 0xa0,uVar3);
                          if (*(longlong *)(param_1 + 0xa0) != 0) {
                            lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 0xa0),0);
                            uVar3 = func_0x000182601c10(0x3f800000,0);
                            if (lVar4 != 0) {
                              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                              if (*(longlong *)(param_1 + 0xa0) != 0) {
                                lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(param_1 + 0xa0),0);
                                uVar3 = func_0x000182601c10(0x3f800000,0);
                                if (lVar4 != 0) {
                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                  if (*(longlong *)(param_1 + 0xa0) != 0) {
                                    plVar5 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (*(longlong *)(param_1 + 0xa0),0);
                                    puVar6 = (undefined8 *)
                                             UnityEngine_UIElements_StyleLength__op_Implicit
                                                       (&uStack_88,0,0);
                                    if (plVar5 != (longlong *)0x0) {
                                      lVar4 = *plVar5;
                                      uVar3 = *puVar6;
                                      uVar1 = *(undefined4 *)(puVar6 + 1);
                                      if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                        uVar8 = 0;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar4 + 0xb0) +
                                               (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                            puVar6 = (undefined8 *)
                                                     ((longlong)
                                                      (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                               (ulonglong)uVar8 * 0x10) + 0x37) *
                                                      0x10 + 0x138 + lVar4);
                                            goto code_r0x00018070b2b9;
                                          }
                                          uVar8 = uVar8 + 1;
                                        } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                      }
                                      puVar6 = (undefined8 *)
                                               FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x00018070b2b9:
                                      uStack_88 = uVar3;
                                      uStack_80 = uVar1;
                                      (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                      if (*(longlong *)(param_1 + 0xa0) != 0) {
                                        plVar5 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (*(longlong *)(param_1 + 0xa0),0);
                                        puVar6 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_88,0,0);
                                        if (plVar5 != (longlong *)0x0) {
                                          lVar4 = *plVar5;
                                          uVar3 = *puVar6;
                                          uVar1 = *(undefined4 *)(puVar6 + 1);
                                          if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                            uVar8 = 0;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar4 + 0xb0) +
                                                   (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                puVar6 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8
                                                                   + (ulonglong)uVar8 * 0x10) + 0x57
                                                          ) * 0x10 + 0x138 + lVar4);
                                                goto code_r0x00018070b359;
                                              }
                                              uVar8 = uVar8 + 1;
                                            } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                          }
                                          puVar6 = (undefined8 *)
                                                   FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018070b359:
                                          uStack_88 = uVar3;
                                          uStack_80 = uVar1;
                                          (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                          if (*(longlong *)(param_1 + 0x90) != 0) {
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (*(longlong *)(param_1 + 0x90),
                                                       *(undefined8 *)(param_1 + 0xa0),0);
                                            lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                            uStack_88 = *(undefined8 *)(lVar4 + 0x50);
                                            uStack_80 = *(undefined4 *)(lVar4 + 0x58);
                                            uStack_7c = *(undefined4 *)(lVar4 + 0x5c);
                                            uStack_40 = 0;
                                            uStack_50 = 0;
                                            uStack_48 = 0;
                                            func_0x000180cb7cb0(&uStack_50,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor
                                                               );
                                            uStack_88 = uStack_50;
                                            uStack_80 = (undefined4)uStack_48;
                                            uStack_7c = uStack_48._4_4_;
                                            uStack_78 = uStack_40;
                                            uVar3 = SparkEstilo__Texto__180722af0
                                                              (LIT_"'There are no skills to enchant.'",0xb,&uStack_88,0
                                                               ,0);
                                            *(undefined8 *)(param_1 + 0xa8) = uVar3;
                                            func_0x000180314690(param_1 + 0xa8,uVar3);
                                            if (*(longlong *)(param_1 + 0xa8) != 0) {
                                              plVar5 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa8),0);
                                              puVar6 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x41000000,0);
                                              if (plVar5 != (longlong *)0x0) {
                                                lVar4 = *plVar5;
                                                uVar3 = *puVar6;
                                                uVar1 = *(undefined4 *)(puVar6 + 1);
                                                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                  uVar8 = 0;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar4 + 0xb0) +
                                                         (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                                                    {
                                                      puVar6 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar4 + 0xb0) + 8 +
                                                                         (ulonglong)uVar8 * 0x10) +
                                                                0x4d) * 0x10 + 0x138 + lVar4);
                                                      goto code_r0x00018070b499;
                                                    }
                                                    uVar8 = uVar8 + 1;
                                                  } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                                }
                                                puVar6 = (undefined8 *)
                                                         FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018070b499:
                                                uStack_88 = uVar3;
                                                uStack_80 = uVar1;
                                                (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                if (*(longlong *)(param_1 + 0xa8) != 0) {
                                                  plVar5 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa8),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x40c00000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar4 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      uVar8 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             (ulonglong)uVar8 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             (ulonglong)uVar8 * 0x10
                                                                             ) + 0x51) * 0x10 +
                                                                    0x138 + lVar4);
                                                          goto code_r0x00018070b539;
                                                        }
                                                        uVar8 = uVar8 + 1;
                                                      } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018070b539:
                                                    uStack_88 = uVar3;
                                                    uStack_80 = uVar1;
                                                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                    if (*(longlong *)(param_1 + 0xa0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xa0),
                                                                 *(undefined8 *)(param_1 + 0xa8),0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0x90),0);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

