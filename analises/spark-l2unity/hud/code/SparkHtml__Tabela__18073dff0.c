// SparkHtml__Tabela__18073dff0 @ 0x18073dff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkHtml__Tabela__18073dff0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined4 uStackX_20;
  float fStackX_24;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  
  if (cRam00000001834b424c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'fixwidth'");
    FUN_180315380(LIT_"'FF'");
    FUN_180315380(LIT_"'bgcolor'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'tbody'");
    FUN_180315380(LIT_"'cellpadding'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'cellspacing'");
    cRam00000001834b424c = '\x01';
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
  if (lVar10 != 0) {
    lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
    uVar12 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar11 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      uVar12 = func_0x000182601c10(0,0);
      if ((lVar11 != 0) && (FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12), param_2 != 0)) {
        lVar11 = SparkHtml_No__Attr__180735120(param_2,LIT_"'width'",0);
        if (lVar11 == 0) {
          lVar11 = SparkHtml_No__Attr__180735120(param_2,LIT_"'fixwidth'",0);
        }
        if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkHtml__Largura__18073b690(lVar10,lVar11,1,0);
        uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'height'",0);
        iVar7 = SparkHtml__Numero__18073daf0(uVar12,0);
        if (0 < iVar7) {
          plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          plVar14 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_108);
          if (plVar13 == (longlong *)0x0) goto code_r0x00018073e834;
          lVar11 = *plVar14;
          lVar4 = plVar14[1];
          lVar1 = *plVar13;
          uVar16 = 0;
          if (*(ushort *)(lVar1 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar15 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) +
                           0x57) * 0x10 + 0x138 + lVar1);
                goto code_r0x00018073e299;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ushort *)(lVar1 + 0x12e));
          }
          puVar15 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018073e299:
          lStack_108 = lVar11;
          uStack_100 = (int)lVar4;
          (*(code *)*puVar15)(plVar13,&lStack_108,puVar15[1]);
        }
        uVar17 = 0;
        uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'bgcolor'",0);
        if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar11 = SparkHtml__Cor__180738870(uVar12,0);
        uVar16 = 0;
        if (lVar11 != 0) {
          plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          uVar12 = System_String__Concat(lVar11,LIT_"'FF'",0);
          puVar15 = (undefined8 *)ColorUtils__HexToColor(&uStack_f8,uVar12,0);
          uStack_f8 = *puVar15;
          uStack_f0 = (undefined8 *)puVar15[1];
          puVar15 = (undefined8 *)
                    UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_c8,&uStack_f8,0);
          if (plVar13 == (longlong *)0x0) goto code_r0x00018073e834;
          uVar12 = *puVar15;
          puVar3 = (undefined8 *)puVar15[1];
          uVar8 = *(undefined4 *)(puVar15 + 2);
          lVar11 = *plVar13;
          if (*(ushort *)(lVar11 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar15 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) +
                           9) * 0x10 + 0x138 + lVar11);
                goto code_r0x00018073e3c9;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ushort *)(lVar11 + 0x12e));
          }
          puVar15 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018073e3c9:
          uStack_f8 = uVar12;
          uStack_f0 = puVar3;
          uStack_e8 = uVar8;
          (*(code *)*puVar15)(plVar13,&uStack_f8,puVar15[1]);
        }
        lStack_d0 = lVar10;
        if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkHtml__Fundo__18073aae0(lVar10,param_2,0);
        uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'cellpadding'",0);
        uVar8 = SparkHtml__Numero__18073daf0(uVar12,0);
        uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'cellspacing'",0);
        uVar9 = SparkHtml__Numero__18073daf0(uVar12,0);
        lVar11 = SparkHtml_No__Attr__180735120(param_2,LIT_"'width'",0);
        if (lVar11 == 0) {
          lVar11 = SparkHtml_No__Attr__180735120(param_2,LIT_"'fixwidth'",0);
        }
        uVar5 = func_0x000181707e50(lVar11,0);
        if (*(longlong *)(param_2 + 0x28) != 0) {
          uStackX_20 = CONCAT31(uStackX_20._1_3_,uVar5);
          uStack_d8 = uVar8;
          uStack_d4 = uVar9;
          FUN_180bada40(&uStack_f8,*(longlong *)(param_2 + 0x28),MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
          uStack_98 = (undefined4)uStack_f8;
          uStack_94 = uStack_f8._4_4_;
          uStack_90 = (undefined4)uStack_f0;
          uStack_8c = uStack_f0._4_4_;
          lStack_88 = CONCAT44(uStack_e4,uStack_e8);
          uStack_c8 = 0;
          puStack_c0 = &uStack_98;
          while (cVar6 = FUN_1812fa7e0(&uStack_98,MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext), lVar11 = lStack_88,
                cVar6 != '\0') {
            lStack_108 = lStack_88;
            if (lStack_88 == 0) goto code_r0x00018073e845;
            cVar6 = func_0x0001817058a0(*(undefined8 *)(lStack_88 + 0x10),LIT_"'tbody'",0);
            if (cVar6 == '\0') {
              SparkHtml__Linha__18073c650(param_1,lVar10,lVar11,uVar8,uVar9,uVar5,0);
            }
            else {
              if (*(longlong *)(lVar11 + 0x28) == 0) goto code_r0x00018073e840;
              FUN_180bada40(&uStack_70);
              uStack_b0 = CONCAT44(uStack_6c,uStack_70);
              uStack_a8 = CONCAT44(uStack_64,uStack_68);
              uStack_a0 = uStack_60;
              uStack_f8 = 0;
              uStack_f0 = &uStack_b0;
              while (cVar6 = FUN_1812fa7e0(&uStack_b0,MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext), cVar6 != '\0') {
                SparkHtml__Linha__18073c650(param_1,lVar10,uStack_a0,uVar8,uVar9,uVar5,0);
              }
              Gear__UpdateWeaponType__1803dadf0(&uStack_b0,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
            }
          }
          Gear__UpdateWeaponType__1803dadf0(puStack_c0,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
          if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b4250 == '\0') {
            FUN_180315380(TI_SparkHtml);
            FUN_180315380(LIT_"'cellpadding'");
            cRam00000001834b4250 = '\x01';
          }
          uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'cellpadding'",0);
          if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
            func_0x000180315660();
          }
          uStackX_20 = SparkHtml__Numero__18073daf0(uVar12,0);
          fStackX_24 = 0.0;
          SparkHtml___MinimoDaTabela_g__Linhas_19_0(param_2,&uStackX_20,0);
          if (0.0 < fStackX_24) {
            plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            plVar14 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_108);
            if (plVar13 == (longlong *)0x0) goto code_r0x00018073e834;
            lVar11 = *plVar14;
            lVar4 = plVar14[1];
            lVar1 = *plVar13;
            if (*(ushort *)(lVar1 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar15 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + uVar17 * 0x10) + 0x59) *
                             0x10 + 0x138 + lVar1);
                  goto code_r0x00018073e7d6;
                }
                uVar16 = (short)uVar17 + 1;
                uVar17 = (ulonglong)uVar16;
              } while (uVar16 < *(ushort *)(lVar1 + 0x12e));
            }
            puVar15 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x00018073e7d6:
            lStack_108 = lVar11;
            uStack_100 = (int)lVar4;
            (*(code *)*puVar15)(plVar13,&lStack_108,puVar15[1]);
          }
          return lVar10;
        }
      }
    }
  }
code_r0x00018073e834:
  FUN_1803155d0();
  FUN_180311490();
code_r0x00018073e840:
  FUN_1803155d0();
code_r0x00018073e845:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  lVar10 = (*pcVar2)();
  return lVar10;
}

