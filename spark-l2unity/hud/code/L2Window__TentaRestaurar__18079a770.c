// L2Window__TentaRestaurar__18079a770 @ 0x18079a770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__TentaRestaurar__18079a770(longlong param_1)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float afStackX_8 [4];
  float afStackX_18 [2];
  float afStackX_20 [2];
  float fStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [128];
  
  if (DAT_1834b4483 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_L2Window.RestauraQuandoPuder);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'canto'");
    DAT_1834b4483 = '\x01';
  }
  afStackX_20[0] = 0.0;
  fStack_c8 = 0.0;
  afStackX_8[0] = 0.0;
  afStackX_18[0] = 0.0;
  if (*(char *)(param_1 + 0x85) != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  uVar4 = L2Window__Painel__18079a070(param_1,0);
  uStack_c4 = uVar4;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_layout
                      (auStack_a8,*(longlong *)(param_1 + 0x30),0);
    fVar11 = (float)uVar4;
    if (fVar11 <= 0.0) {
      return;
    }
    fVar12 = *(float *)(lVar5 + 8);
    fVar1 = *(float *)(lVar5 + 0xc);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (fVar12 < 10.0) {
      return;
    }
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (fVar1 < 10.0) {
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x85) = 1;
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_18055b980(uVar4,param_1,MD_L2Window.RestauraQuandoPuder,0);
    if (lVar5 == 0) goto LAB_18079b0ac;
    FUN_180990ff0(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    uVar4 = L2Window__get_ChaveDoTamanho(param_1,0);
    cVar3 = UnityEngine_PlayerPrefs__HasKey(uVar4,0);
    if (cVar3 != '\0') {
      uVar4 = L2Window__get_ChaveDoTamanho(param_1,0);
      fVar7 = (float)func_0x00018242e300(uVar4,0);
      if (10.0 <= fVar7) {
        if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18079b0ac;
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,fVar7,0);
        if (lVar5 == 0) goto LAB_18079b0ac;
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        uStack_b8 = *puVar6;
        FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
        fVar12 = fVar7;
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
      }
    }
    uVar4 = L2Window__get_ChaveDaPosicao(param_1,0);
    cVar3 = UnityEngine_PlayerPrefs__HasKey(uVar4,0);
    if (cVar3 == '\0') {
      return;
    }
    uVar4 = L2Window__get_ChaveDaPosicao(param_1,0);
    lVar5 = UnityEngine_PlayerPrefs__GetString(uVar4,LIT_"''",0);
    if (lVar5 == 0) goto LAB_18079b0ac;
    lVar5 = System_String__Split(lVar5,0x7c,0,0);
    if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (lVar5 == 0) goto LAB_18079b0ac;
    fVar7 = uStack_c4._4_4_;
    if ((*(int *)(lVar5 + 0x18) == 3) &&
       (cVar3 = func_0x0001817058a0(*(undefined8 *)(lVar5 + 0x20),LIT_"'canto'",0), cVar3 != '\0'))
    {
      if (*(uint *)(lVar5 + 0x18) < 2) {
LAB_18079b0b2:
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar3 = System_Single__TryParse(*(undefined8 *)(lVar5 + 0x28),0xa7,uVar4,afStackX_8,0);
      if (cVar3 == '\0') {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_18079b0b2;
      cVar3 = System_Single__TryParse(*(undefined8 *)(lVar5 + 0x30),0xa7,uVar4,afStackX_18,0);
      if (cVar3 == '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18079b0ac;
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      fVar10 = afStackX_8[0];
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar10 = fVar11 * fVar10;
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar8 = 0.0;
        if (0.0 <= fVar11 - fVar12) {
          fVar8 = fVar11 - fVar12;
        }
        if (fVar8 < fVar10) {
          fVar10 = fVar8;
        }
      }
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,fVar10,0);
      if (lVar5 == 0) goto LAB_18079b0ac;
      uStack_b8 = *puVar6;
      uStack_b0 = *(undefined4 *)(puVar6 + 1);
      FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
      if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18079b0ac;
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      fVar11 = fVar7 * afStackX_18[0];
      if (fVar11 < 0.0) {
        fVar11 = 0.0;
      }
      else {
        fVar12 = 0.0;
        if (0.0 <= fVar7 - fVar1) {
          fVar12 = fVar7 - fVar1;
        }
        if (fVar12 < fVar11) {
          fVar11 = fVar12;
        }
      }
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,fVar11,0);
      if (lVar5 == 0) goto LAB_18079b0ac;
      uStack_b8 = *puVar6;
      uStack_b0 = *(undefined4 *)(puVar6 + 1);
      FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
      if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18079b0ac;
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(auStack_a8,2,0);
      if (lVar5 == 0) goto LAB_18079b0ac;
      uStack_b0 = *(undefined4 *)(puVar6 + 1);
      uStack_b8 = *puVar6;
      uVar4 = 0x69;
    }
    else {
      if (*(int *)(lVar5 + 0x18) != 2) {
        return;
      }
      cVar3 = System_Single__TryParse(*(undefined8 *)(lVar5 + 0x20),0xa7,uVar4,afStackX_20,0);
      if (cVar3 == '\0') {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_18079b0b2;
      cVar3 = System_Single__TryParse(*(undefined8 *)(lVar5 + 0x28),0xa7,uVar4,&fStack_c8,0);
      fVar10 = afStackX_20[0];
      if (cVar3 == '\0') {
        return;
      }
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar10 = fVar11 * fVar10;
      fVar9 = fVar11 - fVar12 * 0.5;
      fVar8 = fVar12 * 0.5;
      if ((fVar8 <= fVar10) && (fVar8 = fVar10, fVar9 < fVar10)) {
        fVar8 = fVar9;
      }
      fVar13 = fVar7 * fStack_c8;
      fVar9 = fVar7 - fVar1 * 0.5;
      fVar10 = fVar1 * 0.5;
      if ((fVar10 <= fVar13) && (fVar10 = fVar13, fVar9 < fVar13)) {
        fVar10 = fVar9;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (lVar5 == 0) goto LAB_18079b0ac;
      if (fVar11 * 0.5 <= fVar8) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit
                           (auStack_a8,(fVar11 - fVar8) - fVar12 * 0.5,0);
        if (lVar5 == 0) goto LAB_18079b0ac;
        uStack_b8 = *puVar6;
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        FUN_1800050f0(0x69,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
        if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18079b0ac;
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(auStack_a8,2,0);
        if (lVar5 == 0) goto LAB_18079b0ac;
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        uVar4 = 0x47;
      }
      else {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,fVar8 - fVar12 * 0.5,0);
        if (lVar5 == 0) goto LAB_18079b0ac;
        uStack_b8 = *puVar6;
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
        if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18079b0ac;
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(auStack_a8,2,0);
        if (lVar5 == 0) goto LAB_18079b0ac;
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        uVar4 = 0x69;
      }
      uStack_b8 = *puVar6;
      FUN_1800050f0(uVar4,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (lVar5 == 0) goto LAB_18079b0ac;
      if (fVar7 * 0.5 <= fVar10) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit
                           (auStack_a8,(fVar7 - fVar10) - fVar1 * 0.5,0);
        if (lVar5 == 0) goto LAB_18079b0ac;
        uStack_b8 = *puVar6;
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        FUN_1800050f0(0x2d,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
        if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_18079b0ac;
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(auStack_a8,2,0);
        if (lVar5 == 0) goto LAB_18079b0ac;
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        uVar4 = 0x73;
        goto LAB_18079b037;
      }
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,fVar10 - fVar1 * 0.5,0);
      if (lVar5 == 0) goto LAB_18079b0ac;
      uStack_b8 = *puVar6;
      uVar4 = 0x73;
      uStack_b0 = *(undefined4 *)(puVar6 + 1);
    }
    FUN_1800050f0(uVar4,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(auStack_a8,2,0);
      if (lVar5 != 0) {
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        uVar4 = 0x2d;
LAB_18079b037:
        uStack_b8 = *puVar6;
        FUN_1800050f0(uVar4,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
        return;
      }
    }
  }
LAB_18079b0ac:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

