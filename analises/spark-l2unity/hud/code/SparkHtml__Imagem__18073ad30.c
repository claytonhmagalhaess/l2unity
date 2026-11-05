// SparkHtml__Imagem__18073ad30 @ 0x18073ad30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkHtml__Imagem__18073ad30(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ushort uVar18;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [96];
  
  if (cRam00000001834b4259 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'tutorial_'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'src'");
    cRam00000001834b4259 = '\x01';
  }
  lVar11 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar11,0);
  if (param_2 == 0) goto code_r0x00018073b5e3;
  uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'width'",0);
  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar8 = SparkHtml__Numero__18073daf0(uVar12,0);
  uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'height'",0);
  iVar9 = SparkHtml__Numero__18073daf0(uVar12,0);
  lVar13 = SparkHtml_No__Attr__180735120(param_2,LIT_"'src'",0);
  lVar15 = LIT_"''";
  if (lVar13 != 0) {
    lVar15 = lVar13;
  }
  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar14 = (longlong *)SparkHtml__Textura__18073eaa0(lVar15,0);
  if (lVar15 == 0) goto code_r0x00018073b5e3;
  iVar10 = func_0x000181709360(lVar15,0x2e,0);
  lVar15 = func_0x00018170c060(lVar15,iVar10 + 1,0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar7 = UnityEngine_Object__op_Inequality(plVar14,0,0);
  if (((cVar7 == '\0') || (iVar8 < 1)) || (iVar9 < 1)) goto code_r0x00018073b241;
  if (plVar14 == (longlong *)0x0) goto code_r0x00018073b5e3;
  iVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
  if (iVar10 < iVar8) {
code_r0x00018073b241:
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = UnityEngine_Object__op_Inequality(plVar14,0,0);
    if (cVar7 != '\0') {
      if (lVar11 == 0) goto code_r0x00018073b5e3;
      plVar17 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      puVar16 = (undefined8 *)
                UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_78,plVar14,0);
      if (plVar17 == (longlong *)0x0) goto code_r0x00018073b5e3;
      lVar15 = *plVar17;
      uVar3 = *puVar16;
      uVar4 = puVar16[1];
      uVar5 = puVar16[2];
      uVar6 = puVar16[3];
      uVar12 = puVar16[4];
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar16 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0xb)
                       * 0x10 + 0x138 + lVar15);
            goto code_r0x00018073b309;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar16 = (undefined8 *)FUN_180312860(plVar17,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018073b309:
      uStack_a8 = uVar3;
      uStack_a0 = uVar4;
      uStack_98 = uVar5;
      uStack_90 = uVar6;
      uStack_88 = uVar12;
      (*(code *)*puVar16)(plVar17,&uStack_a8,puVar16[1]);
    }
    if (iVar8 < 1) {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar7 = UnityEngine_Object__op_Inequality(plVar14,0,0);
      if (cVar7 != '\0') {
        if (plVar14 == (longlong *)0x0) goto code_r0x00018073b5e3;
        (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      }
    }
    if (iVar9 < 1) {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar7 = UnityEngine_Object__op_Inequality(plVar14,0,0);
      if (cVar7 != '\0') {
        if (plVar14 == (longlong *)0x0) goto code_r0x00018073b5e3;
        (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
      }
    }
    if (lVar11 == 0) goto code_r0x00018073b5e3;
  }
  else {
    iVar10 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
    if (iVar10 < iVar9) goto code_r0x00018073b241;
    iVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (iVar10 <= iVar8) {
      iVar10 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
      if (iVar10 <= iVar9) goto code_r0x00018073b241;
    }
    if (lVar15 == 0) goto code_r0x00018073b5e3;
    cVar7 = System_String__StartsWith(lVar15,LIT_"'tutorial_'",5,0);
    if (cVar7 == '\0') goto code_r0x00018073b241;
    if (lVar11 == 0) goto code_r0x00018073b5e3;
    lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    if (lVar15 == 0) goto code_r0x00018073b5e3;
    FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar12);
    lVar15 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar15,0);
    if (lVar15 == 0) goto code_r0x00018073b5e3;
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
    uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar13 == 0) goto code_r0x00018073b5e3;
    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar13,uVar12);
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
    puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8);
    if (lVar13 == 0) goto code_r0x00018073b5e3;
    uStack_c0 = *(undefined4 *)(puVar16 + 1);
    uStack_c8 = *puVar16;
    FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_c8);
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
    puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8);
    if (lVar13 == 0) goto code_r0x00018073b5e3;
    uStack_c0 = *(undefined4 *)(puVar16 + 1);
    uStack_c8 = *puVar16;
    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_c8);
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
    (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8);
    if (lVar13 == 0) goto code_r0x00018073b5e3;
    uStack_c8 = *puVar16;
    uStack_c0 = *(undefined4 *)(puVar16 + 1);
    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_c8);
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
    (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
    puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8);
    if (lVar13 == 0) goto code_r0x00018073b5e3;
    uStack_c8 = *puVar16;
    uStack_c0 = *(undefined4 *)(puVar16 + 1);
    FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_c8);
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
    puVar16 = (undefined8 *)
              UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_78,plVar14,0);
    if (lVar13 == 0) goto code_r0x00018073b5e3;
    uStack_a8 = *puVar16;
    uStack_a0 = puVar16[1];
    uStack_98 = puVar16[2];
    uStack_90 = puVar16[3];
    uStack_88 = puVar16[4];
    FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_a8);
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar15,1,0);
    UnityEngine_UIElements_VisualElement__Add(lVar11,lVar15,0);
  }
  plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
  puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
  if (plVar14 != (longlong *)0x0) {
    lVar15 = *plVar14;
    uVar12 = *puVar16;
    uVar1 = *(undefined4 *)(puVar16 + 1);
    if (*(ushort *)(lVar15 + 0x12e) != 0) {
      uVar18 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar16 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0xad)
                     * 0x10 + 0x138 + lVar15);
          goto code_r0x00018073b459;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
    }
    puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018073b459:
    uStack_c8 = uVar12;
    uStack_c0 = uVar1;
    (*(code *)*puVar16)(plVar14,&uStack_c8,puVar16[1]);
    plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar14 != (longlong *)0x0) {
      lVar15 = *plVar14;
      uVar12 = *puVar16;
      uVar1 = *(undefined4 *)(puVar16 + 1);
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar16 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0x43
                       ) * 0x10 + 0x138 + lVar15);
            goto code_r0x00018073b4f9;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018073b4f9:
      uStack_c8 = uVar12;
      uStack_c0 = uVar1;
      (*(code *)*puVar16)(plVar14,&uStack_c8,puVar16[1]);
      lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      uVar12 = func_0x000182601c10(0,0);
      if (lVar15 != 0) {
        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar12);
        return lVar11;
      }
    }
  }
code_r0x00018073b5e3:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar11 = (*pcVar2)();
  return lVar11;
}

