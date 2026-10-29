// OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_b__2__1806c1130 @ 0x1806c1130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_b__2__1806c1130(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ushort uVar14;
  undefined4 uVar15;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined8 uStackX_8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (DAT_1834b3f46 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Opcoes/'");
    FUN_180315380(LIT_"'Combobox_DF_Btn_Over'");
    FUN_180315380(LIT_"'Combobox_DF_Btn'");
    DAT_1834b3f46 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar9 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x18),0);
    uVar10 = LIT_"'Combobox_DF_Btn_Over'";
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar10 = LIT_"'Combobox_DF_Btn'";
    }
    uVar10 = System_String__Concat(LIT_"'Opcoes/'",uVar10,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = SparkEstilo__Textura(uVar10,0);
    puVar11 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar10,0)
    ;
    if (plVar9 != (longlong *)0x0) {
      lVar13 = *plVar9;
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      uStack_30 = (undefined1 *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
      uVar10 = puVar11[4];
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        uVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar11 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0xb)
                       * 0x10 + 0x138 + lVar13);
            goto LAB_1806c14a5;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
LAB_1806c14a5:
      uStack_68 = uVar2;
      uStack_60 = uVar3;
      uStack_58 = uVar4;
      uStack_50 = uVar5;
      uStack_48 = uVar10;
      (*(code *)*puVar11)(plVar9,&uStack_68,puVar11[1]);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        plVar9 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x18),0);
        if (*(char *)(param_1 + 0x21) == '\0') {
          uVar15 = 0xc2b40000;
        }
        else {
          uVar15 = 0;
        }
        uStackX_8 = 0;
        UnityEngine_UIElements_Angle___ctor(&uStackX_8,uVar15,0,0);
        uStack_98 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        UnityEngine_UIElements_Rotate___ctor(&uStack_a8,uStackX_8,0);
        uStack_88 = (undefined4)uStack_a8;
        uStack_84 = uStack_a8._4_4_;
        uStack_80 = (undefined4)uStack_a0;
        uStack_7c = uStack_a0._4_4_;
        uStack_78 = (undefined4)uStack_98;
        uStack_74 = (undefined4)((ulonglong)uStack_98 >> 0x20);
        puVar12 = (undefined4 *)
                  UnityEngine_UIElements_StyleRotate__op_Implicit(&uStack_68,&uStack_88,0);
        if (plVar9 != (longlong *)0x0) {
          uStack_88 = *puVar12;
          uStack_84 = puVar12[1];
          uStack_80 = puVar12[2];
          lVar13 = *plVar9;
          uStack_7c = (undefined4)*(undefined8 *)(puVar12 + 3);
          uVar15 = uStack_7c;
          uStack_78 = (undefined4)((ulonglong)*(undefined8 *)(puVar12 + 3) >> 0x20);
          uVar6 = uStack_78;
          uStack_74 = (undefined4)*(undefined8 *)(puVar12 + 5);
          uVar7 = uStack_74;
          uStack_70 = (undefined4)((ulonglong)*(undefined8 *)(puVar12 + 5) >> 0x20);
          uVar8 = uStack_70;
          if (*(ushort *)(lVar13 + 0x12e) != 0) {
            uVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                           0x6b) * 0x10 + 0x138 + lVar13);
                goto LAB_1806c15f9;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x6b);
LAB_1806c15f9:
          uStack_7c = uVar15;
          uStack_78 = uVar6;
          uStack_74 = uVar7;
          uStack_70 = uVar8;
          (*(code *)*puVar11)(plVar9,&uStack_88,puVar11[1]);
          if (*(longlong *)(param_1 + 0x28) != 0) {
            lVar13 = UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x28),0);
            uVar10 = FUN_180eb5810(*(char *)(param_1 + 0x21) == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar13 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10);
              if (*(longlong *)(param_1 + 0x30) != 0) {
                plVar9 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x30),0);
                uVar10 = FUN_180eb5810(*(char *)(param_1 + 0x21) == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (plVar9 != (longlong *)0x0) {
                  uVar14 = 0;
                  lVar13 = *plVar9;
                  if (*(ushort *)(lVar13 + 0x12e) != 0) {
                    do {
                      if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar11 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                            (ulonglong)uVar14 * 0x10) + 0x33) * 0x10 + 0x138 +
                                  lVar13);
                        goto LAB_1800050ad;
                      }
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
                  }
                  uStack_30 = &LAB_1800050ad;
                  puVar11 = (undefined8 *)FUN_180312860(plVar9);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
                  return;
                }
              }
            }
            goto LAB_1806c16de;
          }
        }
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
LAB_1806c16de:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

