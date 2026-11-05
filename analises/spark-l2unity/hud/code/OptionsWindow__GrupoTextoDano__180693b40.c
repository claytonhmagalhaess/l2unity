// OptionsWindow__GrupoTextoDano__180693b40 @ 0x180693b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__GrupoTextoDano__180693b40
                   (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ushort uVar16;
  uint uVar17;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar20;
  ulonglong uVar19;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  ulonglong uVar18;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  if (cRam00000001834b3e8b == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass46_0._GrupoTextoDano_b__0);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass46_0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass46_1._GrupoTextoDano_b__1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass46_1._GrupoTextoDano_b__2);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass46_1);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'All On'");
    FUN_180315380(LIT_"'Opcoes/GroupBox_DF'");
    cRam00000001834b3e8b = '\x01';
  }
  lVar5 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass46_0);
  func_0x0001803f01b0(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    func_0x000180314690(lVar5 + 0x10,param_1);
    *(undefined4 *)(lVar5 + 0x18) = param_3;
    *(undefined8 *)(lVar5 + 0x20) = param_4;
    func_0x000180314690(lVar5 + 0x20,param_4);
    lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
    if (lVar6 != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar8 = func_0x000182601c10(0,0);
      if (lVar7 != 0) {
        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        puVar10 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x40c00000,0);
        if (plVar9 != (longlong *)0x0) {
          lVar7 = *plVar9;
          uVar13 = 0;
          uVar8 = *puVar10;
          uVar1 = *(undefined4 *)(puVar10 + 1);
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar19 = uVar13;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar19 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar19 * 0x10) + 0x4b) * 0x10
                           + 0x138 + lVar7);
                goto code_r0x000180693d89;
              }
              uVar16 = (short)uVar19 + 1;
              uVar19 = (ulonglong)uVar16;
            } while (uVar16 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180693d89:
          uStack_b8 = uVar8;
          uStack_b0 = uVar1;
          (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar8 = SparkEstilo__Textura(LIT_"'Opcoes/GroupBox_DF'",0);
          puVar10 = (undefined8 *)
                    UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_a8,uVar8,0);
          if (plVar9 != (longlong *)0x0) {
            lVar7 = *plVar9;
            uVar14 = *puVar10;
            uVar15 = puVar10[1];
            uVar8 = puVar10[4];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar19 = uVar13;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar19 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar19 * 0x10) + 0xb) *
                             0x10 + 0x138 + lVar7);
                  goto code_r0x000180693e59;
                }
                uVar16 = (short)uVar19 + 1;
                uVar19 = (ulonglong)uVar16;
              } while (uVar16 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180693e59:
            uStack_a8 = uVar14;
            uStack_a0 = uVar15;
            uStack_98 = uVar3;
            uStack_90 = uVar4;
            uStack_88 = uVar8;
            (*(code *)*puVar10)(plVar9,&uStack_a8,puVar10[1]);
            SparkEstilo__Fatia(lVar6,3,3,3,CONCAT44(uVar20,3),0);
            SparkEstilo__Espaco(lVar6,0x40800000,0x41000000,0x40c00000,0x41000000,0);
            lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
            if (lVar7 != 0) {
              lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
              if (lVar11 != 0) {
                FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
                lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                if (lVar11 != 0) {
                  FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
                  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  puVar10 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_b8,0x41c80000,0)
                  ;
                  if (plVar9 != (longlong *)0x0) {
                    lVar11 = *plVar9;
                    uVar8 = *puVar10;
                    uVar20 = *(undefined4 *)(puVar10 + 1);
                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                      uVar19 = uVar13;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar19 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar10 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar19 * 0x10) +
                                     0x43) * 0x10 + 0x138 + lVar11);
                          goto code_r0x000180693ff9;
                        }
                        uVar16 = (short)uVar19 + 1;
                        uVar19 = (ulonglong)uVar16;
                      } while (uVar16 < *(ushort *)(lVar11 + 0x12e));
                    }
                    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180693ff9:
                    uStack_b8 = uVar8;
                    uStack_b0 = uVar20;
                    (*(code *)*puVar10)(plVar9,&uStack_b8,puVar10[1]);
                    lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                    uVar8 = func_0x000182601c10(0,0);
                    if (lVar11 != 0) {
                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
                      if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                        func_0x000180315660(TI_OptionsWindow);
                      }
                      uStack_a8 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x18)
                      ;
                      uStack_a0 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x20)
                      ;
                      uStack_78 = 0;
                      uStack_70 = 0;
                      uStack_68 = 0;
                      func_0x000180cb7cb0(&uStack_78,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                      uStack_98 = CONCAT44(uStack_98._4_4_,uStack_68);
                      uStack_a8 = uStack_78;
                      uStack_a0 = uStack_70;
                      lVar11 = SparkEstilo__Texto(param_2,0xb,&uStack_a8,1,0);
                      if (lVar11 != 0) {
                        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                        uVar8 = func_0x000182601c10(0x3f800000,0);
                        if (lVar12 != 0) {
                          FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar8);
                          UnityEngine_UIElements_VisualElement__Add(lVar7,lVar11,0);
                          uVar8 = func_0x000180315580(TI_System.Action);
                          FUN_1816a9c60(uVar8,lVar5,MD_OptionsWindow.__c__DisplayClass46_0._GrupoTextoDano_b__0,0);
                          uVar19 = 0;
                          lVar11 = SparkEstilo__Botao(LIT_"'All On'",uVar8,0x50,0,0);
                          if (lVar11 != 0) {
                            lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                            uVar8 = func_0x000182601c10(0,0);
                            if (lVar12 != 0) {
                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar8);
                              UnityEngine_UIElements_VisualElement__Add(lVar7,lVar11,0);
                              UnityEngine_UIElements_VisualElement__Add(lVar6,lVar7,0);
                              uVar17 = 0;
                              uVar18 = uVar13;
                              while (*(longlong *)(lVar5 + 0x20) != 0) {
                                if (*(int *)(*(longlong *)(lVar5 + 0x20) + 0x18) <= (int)uVar17) {
                                  return lVar6;
                                }
                                lVar7 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass46_1);
                                func_0x0001803f01b0(lVar7,0);
                                uVar17 = (uint)uVar18;
                                if (uVar17 == ((int)uVar17 / 3 + ((int)uVar17 >> 0x1f) +
                                              (int)(((longlong)(int)uVar17 / 3 +
                                                     ((longlong)(int)uVar17 >> 0x3f) & 0xffffffffU)
                                                   >> 0x1f)) * 3) {
                                  uVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                  UnityEngine_UIElements_VisualElement___ctor(uVar13,0);
                                  if (uVar13 == 0) break;
                                  lVar11 = UnityEngine_UIElements_VisualElement__get_style(uVar13,0)
                                  ;
                                  uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                  if (lVar11 == 0) break;
                                  FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
                                  lVar11 = UnityEngine_UIElements_VisualElement__get_style(uVar13,0)
                                  ;
                                  uVar8 = func_0x000182601c10(0,0);
                                  if (lVar11 == 0) break;
                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
                                  UnityEngine_UIElements_VisualElement__Add(lVar6,uVar13,0);
                                }
                                if (lVar7 == 0) break;
                                *(uint *)(lVar7 + 0x10) = *(int *)(lVar5 + 0x18) + uVar17;
                                lVar11 = *(longlong *)(lVar5 + 0x20);
                                if (lVar11 == 0) break;
                                if (*(uint *)(lVar11 + 0x18) <= uVar17) {
                                  FUN_1803155c0();
                                  pcVar2 = (code *)swi(3);
                                  lVar5 = (*pcVar2)();
                                  return lVar5;
                                }
                                uVar8 = *(undefined8 *)(lVar11 + 0x20 + (longlong)(int)uVar17 * 8);
                                uVar14 = func_0x000180315580(TI_System.Func<bool>);
                                FUN_1814af410(uVar14,lVar7,MD_OptionsWindow.__c__DisplayClass46_1._GrupoTextoDano_b__1,0);
                                uVar15 = func_0x000180315580(TI_System.Action<bool>);
                                FUN_180b7dfa0(uVar15,lVar7,MD_OptionsWindow.__c__DisplayClass46_1._GrupoTextoDano_b__2,0);
                                uVar19 = uVar19 & 0xffffffff00000000;
                                lVar7 = OptionsWindow__Marca__180697090
                                                  (param_1,uVar8,uVar14,uVar15,uVar19,0);
                                if (lVar7 == 0) break;
                                lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                                uVar8 = func_0x0001825fc350(0x42053333,0);
                                puVar10 = (undefined8 *)
                                          UnityEngine_UIElements_StyleLength__op_Implicit
                                                    (&uStack_a8,uVar8,0);
                                if (lVar11 == 0) break;
                                uStack_b8 = *puVar10;
                                uStack_b0 = *(undefined4 *)(puVar10 + 1);
                                FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar11);
                                if (uVar13 == 0) break;
                                UnityEngine_UIElements_VisualElement__Add(uVar13,lVar7,0);
                                uVar17 = uVar17 + 1;
                                uVar18 = (ulonglong)uVar17;
                              }
                              FUN_1803155d0();
                              pcVar2 = (code *)swi(3);
                              lVar5 = (*pcVar2)();
                              return lVar5;
                            }
                          }
                        }
                      }
                    }
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
  lVar5 = (*pcVar2)();
  return lVar5;
}

