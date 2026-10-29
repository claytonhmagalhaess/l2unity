// OlympiadWindow__MostraResultado__180688970 @ 0x180688970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OlympiadWindow__MostraResultado__180688970(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ushort uVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int aiStackX_8 [2];
  int aiStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 auStack_c8 [4];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if (cRam00000001834b3e70 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OlympiadWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkOlimpiada);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Draw'");
    FUN_180315380(LIT_"'  <color=#A09080>'");
    FUN_180315380(LIT_"'Damage {0:#,0}   Points {1} ({2})'");
    FUN_180315380(LIT_"'Click to close'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'<color=#80E080>+{0}</color>'");
    FUN_180315380(LIT_"'<color=#E08080>{0}</color>'");
    FUN_180315380(LIT_"' wins!'");
    FUN_180315380(LIT_"'0'");
    cRam00000001834b3e70 = '\x01';
  }
  if (*(int *)(TI_SparkOlimpiada + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3eab == '\0') {
    FUN_180315380(TI_SparkOlimpiada);
    cRam00000001834b3eab = '\x01';
  }
  if (*(int *)(TI_SparkOlimpiada + 0xe4) == 0) {
    func_0x000180315660();
  }
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (lVar12 = *(longlong *)(*(longlong *)(TI_SparkOlimpiada + 0xb8) + 0x10), lVar12 == 0)) {
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0x30),0);
  uVar6 = LIT_"'Draw'";
  if (*(char *)(lVar12 + 0x10) == '\0') {
    uVar6 = System_String__Concat(*(undefined8 *)(lVar12 + 0x18),LIT_"' wins!'",0);
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEstilo);
  }
  lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
  uStack_88 = *(undefined4 *)(lVar4 + 0x60);
  uStack_84 = *(undefined4 *)(lVar4 + 100);
  uStack_80 = *(undefined4 *)(lVar4 + 0x68);
  uStack_7c = *(undefined4 *)(lVar4 + 0x6c);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000180cb7cb0(&uStack_78,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
  uStack_e8 = uStack_68;
  uStack_f8 = uStack_78;
  uStack_f0 = uStack_70;
  lVar4 = SparkEstilo__Texto__180722af0(uVar6,0xf,&uStack_f8,1,0);
  if (lVar4 != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    if (lVar5 != 0) {
      FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      puVar8 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x40c00000,0);
      if (plVar7 != (longlong *)0x0) {
        lVar5 = *plVar7;
        uVar6 = *puVar8;
        uVar16 = *(undefined4 *)(puVar8 + 1);
        if (*(ushort *)(lVar5 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x4b
                        ) * 0x10 + 0x138 + lVar5);
              goto code_r0x000180688c89;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(lVar5 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180688c89:
        uStack_d8 = uVar6;
        uStack_d0 = uVar16;
        (*(code *)*puVar8)(plVar7,&uStack_d8,puVar8[1]);
        if (*(longlong *)(param_1 + 0x30) != 0) {
          UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x30),lVar4,0);
          lVar12 = *(longlong *)(lVar12 + 0x20);
          if (lVar12 == 0) {
code_r0x000180689352:
            FUN_1803155d0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          for (uVar14 = 0; (int)uVar14 < *(int *)(lVar12 + 0x18); uVar14 = uVar14 + 1) {
            if (*(uint *)(lVar12 + 0x18) <= uVar14) {
              FUN_1803155c0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar4 = *(longlong *)(lVar12 + 0x20 + (longlong)(int)uVar14 * 8);
            if (lVar4 != 0) {
              lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
              UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
              if (lVar5 == 0) goto code_r0x000180689352;
              lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
              if (lVar9 == 0) goto code_r0x000180689352;
              FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
              lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              uVar6 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
              if (lVar9 == 0) goto code_r0x000180689352;
              FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
              lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              puVar8 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40400000,0);
              if (lVar9 == 0) goto code_r0x000180689352;
              uStack_d0 = *(undefined4 *)(puVar8 + 1);
              uStack_d8 = *puVar8;
              FUN_1800050f0(0x51,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_d8);
              if (*(int *)(lVar4 + 0x10) == 1) {
                if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
                  func_0x000180315660(TI_OlympiadWindow);
                }
                lVar9 = *(longlong *)(TI_OlympiadWindow + 0xb8);
                uVar16 = *(undefined4 *)(lVar9 + 8);
                uVar17 = *(undefined4 *)(lVar9 + 0xc);
                uVar18 = *(undefined4 *)(lVar9 + 0x10);
                uVar19 = *(undefined4 *)(lVar9 + 0x14);
              }
              else {
                if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
                  func_0x000180315660(TI_OlympiadWindow);
                }
                lVar9 = *(longlong *)(TI_OlympiadWindow + 0xb8);
                uVar16 = *(undefined4 *)(lVar9 + 0x18);
                uVar17 = *(undefined4 *)(lVar9 + 0x1c);
                uVar18 = *(undefined4 *)(lVar9 + 0x20);
                uVar19 = *(undefined4 *)(lVar9 + 0x24);
              }
              uVar6 = *(undefined8 *)(lVar4 + 0x28);
              uVar1 = *(undefined4 *)(lVar4 + 0x18);
              if (*(int *)(TI_SparkOlimpiada + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar10 = SparkOlimpiada__NomeDaClasse(uVar1,0);
              uVar6 = System_String__Concat(uVar6,LIT_"'  <color=#A09080>'",uVar10,LIT_"'</color>'",0);
              uStack_e8 = 0;
              uStack_f8 = 0;
              uStack_f0 = 0;
              uStack_98 = uVar16;
              uStack_94 = uVar17;
              uStack_90 = uVar18;
              uStack_8c = uVar19;
              func_0x000180cb7cb0(&uStack_f8,&uStack_98,MR_System.Nullable<UnityEngine.Color>..ctor);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660();
              }
              uStack_a8 = uStack_e8;
              uStack_b8 = (undefined4)uStack_f8;
              uStack_b4 = uStack_f8._4_4_;
              uStack_b0 = (undefined4)uStack_f0;
              uStack_ac = uStack_f0._4_4_;
              lVar9 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_b8,1,0);
              if (lVar9 == 0) {
                FUN_1803155d0();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              UnityEngine_UIElements_TextElement__set_enableRichText(lVar9,1,0);
              UnityEngine_UIElements_VisualElement__Add(lVar5,lVar9,0);
              iVar2 = *(int *)(lVar4 + 0x24);
              if (iVar2 < 1) {
                uVar6 = LIT_"'0'";
                if (iVar2 < 0) {
                  aiStackX_18[0] = iVar2;
                  uVar6 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
                  uVar6 = System_String__Format(LIT_"'<color=#E08080>{0}</color>'",uVar6,0);
                }
              }
              else {
                aiStackX_8[0] = iVar2;
                uVar6 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
                uVar6 = System_String__Format(LIT_"'<color=#80E080>+{0}</color>'",uVar6,0);
              }
              auStackX_20[0] = *(undefined4 *)(lVar4 + 0x1c);
              uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
              auStack_c8[0] = *(undefined4 *)(lVar4 + 0x20);
              uVar11 = func_0x000180314670(_DAT_1834c6268,auStack_c8);
              uVar6 = System_String__Format(LIT_"'Damage {0:#,0}   Points {1} ({2})'",uVar10,uVar11,uVar6,0);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
              uStack_98 = *(undefined4 *)(lVar4 + 0x40);
              uStack_94 = *(undefined4 *)(lVar4 + 0x44);
              uStack_90 = *(undefined4 *)(lVar4 + 0x48);
              uStack_8c = *(undefined4 *)(lVar4 + 0x4c);
              uStack_e8 = 0;
              uStack_f8 = 0;
              uStack_f0 = 0;
              func_0x000180cb7cb0(&uStack_f8,&uStack_98,MR_System.Nullable<UnityEngine.Color>..ctor);
              uStack_a8 = uStack_e8;
              uStack_b8 = (undefined4)uStack_f8;
              uStack_b4 = uStack_f8._4_4_;
              uStack_b0 = (undefined4)uStack_f0;
              uStack_ac = uStack_f0._4_4_;
              lVar4 = SparkEstilo__Texto__180722af0(uVar6,10,&uStack_b8,0,0);
              if (lVar4 == 0) {
DAT_18068933a:
                FUN_1803155d0();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              UnityEngine_UIElements_TextElement__set_enableRichText(lVar4,1,0);
              UnityEngine_UIElements_VisualElement__Add(lVar5,lVar4,0);
              if (*(longlong *)(param_1 + 0x30) == 0) goto DAT_18068933a;
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x30),lVar5,0);
            }
          }
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_98 = *(undefined4 *)(lVar12 + 0x50);
          uStack_94 = *(undefined4 *)(lVar12 + 0x54);
          uStack_90 = *(undefined4 *)(lVar12 + 0x58);
          uStack_8c = *(undefined4 *)(lVar12 + 0x5c);
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          func_0x000180cb7cb0(&uStack_f8,&uStack_98,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_b8 = (undefined4)uStack_f8;
          uStack_b4 = uStack_f8._4_4_;
          uStack_b0 = (undefined4)uStack_f0;
          uStack_ac = uStack_f0._4_4_;
          uStack_a8 = uStack_e8;
          lVar12 = SparkEstilo__Texto__180722af0(LIT_"'Click to close'",9,&uStack_b8,0,0);
          if (lVar12 != 0) {
            lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
            uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
            if (lVar4 != 0) {
              FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar6);
              plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
              puVar8 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40c00000,0);
              if (plVar7 != (longlong *)0x0) {
                lVar4 = *plVar7;
                uVar6 = *puVar8;
                uVar16 = *(undefined4 *)(puVar8 + 1);
                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                  uVar13 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar8 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10
                                         ) + 0x51) * 0x10 + 0x138 + lVar4);
                      goto code_r0x000180689229;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < *(ushort *)(lVar4 + 0x12e));
                }
                puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180689229:
                uStack_d8 = uVar6;
                uStack_d0 = uVar16;
                (*(code *)*puVar8)(plVar7,&uStack_d8,puVar8[1]);
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x30),lVar12,0);
                  if (*(longlong *)(param_1 + 0x30) != 0) {
                    lVar12 = UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(param_1 + 0x30),0);
                    uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                    if (lVar12 != 0) {
                      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
                      if (*(longlong *)(param_1 + 0x30) != 0) {
                        UnityEngine_UIElements_VisualElement__BringToFront
                                  (*(longlong *)(param_1 + 0x30),0);
                        fVar15 = (float)FUN_1824366b0(0);
                        *(float *)(param_1 + 0x40) = fVar15 + 15.0;
                        return;
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
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

