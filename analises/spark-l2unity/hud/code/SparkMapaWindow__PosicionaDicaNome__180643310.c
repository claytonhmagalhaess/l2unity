// SparkMapaWindow__PosicionaDicaNome__180643310 @ 0x180643310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PosicionaDicaNome__180643310(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ushort uVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong *plStackX_20;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (cRam00000001834b3d3b == '\0') {
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<MembroDaParty>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d3b = '\x01';
  }
  plStackX_20 = (longlong *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(longlong *)(param_1 + 0x140) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x138) == 0) {
    return;
  }
  plVar5 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_userData(*(undefined8 *)(param_1 + 0x140),0);
  if (plVar5 == (longlong *)0x0) {
code_r0x0001806435dd:
    iVar15 = 0;
code_r0x0001806435e0:
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar12 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if (cVar2 != '\0') {
      lVar7 = FUN_1804169f0(0);
      if (lVar7 == 0) goto code_r0x000180643a36;
      if (*(longlong *)(lVar7 + 0x30) != 0) {
        lVar7 = FUN_1804169f0(0);
        if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) goto code_r0x000180643a36;
        uVar12 = *(undefined8 *)(*(longlong *)(lVar7 + 0x30) + 0x18);
        goto code_r0x000180643670;
      }
    }
    uVar12 = 0;
  }
  else {
    plVar14 = (longlong *)0x0;
    if (*plVar5 == _DAT_1834c6268) {
      plVar14 = plVar5;
    }
    if (plVar14 == (longlong *)0x0) goto code_r0x0001806435dd;
    if (*(longlong *)(*plVar5 + 0x40) != *(longlong *)(_DAT_1834c6268 + 0x40)) {
      FUN_1803146d0(plVar5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    piVar6 = (int *)func_0x000180314870();
    iVar15 = *piVar6;
    if (iVar15 == 0) goto code_r0x0001806435e0;
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar7 = FUN_18043b770();
    if (lVar7 == 0) goto code_r0x000180643a36;
    uVar12 = 0;
    uStack_98 = 0;
    plStackX_20 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<MembroDaParty>,lVar7);
    uStack_58 = 0;
    uStack_50 = &plStackX_20;
    do {
      if (plStackX_20 == (longlong *)0x0) goto code_r0x000180643a47;
      cVar2 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
      plVar5 = plStackX_20;
      if (cVar2 == '\0') {
        if (plStackX_20 != (longlong *)0x0) {
          FUN_180002390(0,TI_System.IDisposable,plStackX_20);
        }
        goto code_r0x000180643670;
      }
      if (plStackX_20 == (longlong *)0x0) goto code_r0x000180643a42;
      lVar7 = *plStackX_20;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TI_System.Collections.Generic.IEnumerator<MembroDaParty>) {
            puVar8 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10)
                      * 0x10 + 0x138 + lVar7);
            goto code_r0x000180643522;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plStackX_20,TI_System.Collections.Generic.IEnumerator<MembroDaParty>,0);
code_r0x000180643522:
      lVar7 = (*(code *)*puVar8)(plVar5,puVar8[1]);
      if (lVar7 == 0) goto code_r0x000180643a3c;
    } while (*(int *)(lVar7 + 0x10) != iVar15);
    uVar12 = *(undefined8 *)(lVar7 + 0x18);
    uStack_98 = uVar12;
    if (plStackX_20 != (longlong *)0x0) {
      FUN_180002390(0,TI_System.IDisposable,plStackX_20);
    }
  }
code_r0x000180643670:
  cVar2 = func_0x000181707e50(uVar12,0);
  if (cVar2 == '\0') {
    if ((*(longlong *)(param_1 + 0x140) == 0) ||
       (lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x140),0),
       lVar7 == 0)) goto code_r0x000180643a36;
    uVar9 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar7);
    uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cVar2 = FUN_180eb54b0(uVar9,uVar10,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    if (cVar2 != '\0') goto code_r0x000180643a1c;
    plVar5 = *(longlong **)(param_1 + 0x148);
    if (plVar5 == (longlong *)0x0) goto code_r0x000180643a36;
    (**(code **)(*plVar5 + 0xe48))(plVar5,uVar12,*(undefined8 *)(*plVar5 + 0xe50));
    if (*(longlong *)(param_1 + 0x148) == 0) goto code_r0x000180643a36;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x148),0);
    if (iVar15 == 0) {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      lVar11 = *(longlong *)(TI_SparkMapaWindow + 0xb8);
      uVar16 = *(undefined4 *)(lVar11 + 0x70);
      uVar17 = *(undefined4 *)(lVar11 + 0x74);
      uVar18 = *(undefined4 *)(lVar11 + 0x78);
      uVar19 = *(undefined4 *)(lVar11 + 0x7c);
    }
    else {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      lVar11 = *(longlong *)(TI_SparkMapaWindow + 0xb8);
      uVar16 = *(undefined4 *)(lVar11 + 0x80);
      uVar17 = *(undefined4 *)(lVar11 + 0x84);
      uVar18 = *(undefined4 *)(lVar11 + 0x88);
      uVar19 = *(undefined4 *)(lVar11 + 0x8c);
    }
    uStack_58 = CONCAT44(uVar17,uVar16);
    uStack_50 = (longlong **)CONCAT44(uVar19,uVar18);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_98,&uStack_58,0);
    if (lVar7 == 0) goto code_r0x000180643a36;
    uStack_58 = *puVar8;
    uStack_50 = (longlong **)puVar8[1];
    uStack_48 = *(undefined4 *)(puVar8 + 2);
    FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_58);
    if ((*(longlong *)(param_1 + 0x140) == 0) ||
       (lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x140),0),
       lVar7 == 0)) goto code_r0x000180643a36;
    puVar8 = (undefined8 *)FUN_180002200(&uStack_98,0xac,TI_UnityEngine.UIElements.IStyle,lVar7);
    uStack_70 = *puVar8;
    uStack_68 = *(undefined4 *)(puVar8 + 1);
    fVar3 = (float)func_0x000182602770(&uStack_70,0);
    if (*(longlong *)(param_1 + 0x138) == 0) goto code_r0x000180643a36;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x138),0);
    if ((*(longlong *)(param_1 + 0x140) == 0) ||
       (lVar11 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x140),0),
       lVar11 == 0)) goto code_r0x000180643a36;
    puVar8 = (undefined8 *)FUN_180002200(&uStack_98,0x46,TI_UnityEngine.UIElements.IStyle,lVar11);
    uStack_70 = *puVar8;
    uStack_68 = *(undefined4 *)(puVar8 + 1);
    fVar4 = (float)func_0x000182602770(&uStack_70,0);
    puVar8 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit
                       (&uStack_58,(fVar3 * 0.5 + fVar4) - 100.0,0);
    if (lVar7 == 0) goto code_r0x000180643a36;
    uStack_98 = *puVar8;
    uStack_90 = *(undefined4 *)(puVar8 + 1);
    FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_98);
    if (*(longlong *)(param_1 + 0x138) == 0) goto code_r0x000180643a36;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x138),0);
    if ((*(longlong *)(param_1 + 0x140) == 0) ||
       (lVar11 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x140),0),
       lVar11 == 0)) goto code_r0x000180643a36;
    puVar8 = (undefined8 *)FUN_180002200(&uStack_58,0x72,TI_UnityEngine.UIElements.IStyle,lVar11);
    uStack_70 = *puVar8;
    uStack_68 = *(undefined4 *)(puVar8 + 1);
    fVar3 = (float)func_0x000182602770(&uStack_70,0);
    puVar8 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,fVar3 - 22.0,0);
    if (lVar7 == 0) goto code_r0x000180643a36;
    uStack_98 = *puVar8;
    uStack_90 = *(undefined4 *)(puVar8 + 1);
    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_98);
    if (*(longlong *)(param_1 + 0x138) == 0) goto code_r0x000180643a36;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x138),0);
    uVar12 = 0;
  }
  else {
code_r0x000180643a1c:
    if (*(longlong *)(param_1 + 0x138) == 0) goto code_r0x000180643a36;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x138),0);
    uVar12 = 1;
  }
  uVar12 = FUN_180eb5810(uVar12,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar7 != 0) {
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar12);
    return;
  }
code_r0x000180643a36:
  FUN_1803155d0();
code_r0x000180643a3c:
  FUN_1803155d0();
code_r0x000180643a42:
  FUN_1803155d0();
code_r0x000180643a47:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

