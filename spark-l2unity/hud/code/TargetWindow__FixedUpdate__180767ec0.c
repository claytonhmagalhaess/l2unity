// TargetWindow__FixedUpdate__180767ec0 @ 0x180767ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetWindow__FixedUpdate__180767ec0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  float fVar11;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (cRam00000001834b42e6 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_TargetWindow);
    FUN_180315380(LIT_"'visible'");
    cRam00000001834b42e6 = '\x01';
  }
  if (param_1[6] == 0) {
    return;
  }
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  if (**(longlong **)(TI_TargetManager + 0xb8) == 0) goto code_r0x0001807683ac;
  cVar5 = TargetManager__HasTarget__1807ea7b0(**(longlong **)(TI_TargetManager + 0xb8),0);
  if (cVar5 == '\0') {
    if ((char)param_1[7] != '\0') {
      return;
    }
    (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if ((char)param_1[7] != '\0') {
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  }
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  if ((((**(longlong **)(TI_TargetManager + 0xb8) == 0) ||
       (lVar8 = *(longlong *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20), lVar8 == 0)) ||
      (*(longlong *)(lVar8 + 0x30) == 0)) ||
     (plVar3 = (longlong *)param_1[0x11], plVar3 == (longlong *)0x0)) goto code_r0x0001807683ac;
  (**(code **)(*plVar3 + 0xe48))
            (plVar3,*(undefined8 *)(*(longlong *)(lVar8 + 0x30) + 0x18),
             *(undefined8 *)(*plVar3 + 0xe50));
  if (param_1[0x12] != 0) {
    SparkAlvoExpandido__Atualiza(param_1[0x12],lVar8,0);
  }
  lVar7 = *(longlong *)(lVar8 + 0x30);
  if (lVar7 == 0) goto code_r0x0001807683ac;
  if (*(int *)(lVar7 + 0x10) == 2) {
    bVar10 = true;
  }
  else {
    bVar10 = *(int *)(lVar7 + 0x10) == 3;
  }
  if (*(char *)(lVar7 + 0x28) == '\0') {
code_r0x00018076835c:
    TargetWindow__SetTargetColor(param_1,0,0);
    if (param_1[0x13] != 0) {
      cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains
                        (param_1[0x13],LIT_"'visible'",0);
      if (cVar5 != '\0') {
        if (param_1[0x13] == 0) goto code_r0x0001807683ac;
        UnityEngine_UIElements_VisualElement__RemoveFromClassList
                  (param_1[0x13],LIT_"'visible'",0);
      }
      return;
    }
  }
  else {
    if (bVar10) {
      lVar7 = *(longlong *)(lVar8 + 0x30);
      if (*(char *)(lVar7 + 0x55) == '\0') goto code_r0x00018076835c;
      if (lVar7 == 0) goto code_r0x0001807683ac;
      iVar1 = *(int *)(lVar7 + 0x14);
      if (*(int *)(TI_TargetWindow + 0xe4) == 0) {
        func_0x000180315660(TI_TargetWindow);
      }
      if (iVar1 != *(int *)(*(longlong *)(TI_TargetWindow + 0xb8) + 8)) {
        if ((*(longlong *)(lVar8 + 0x40) != 0) && (0 < *(int *)(*(longlong *)(lVar8 + 0x40) + 0x10))
           ) {
          uVar6 = FUN_1804169f0(0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if (cVar5 != '\0') {
            lVar7 = FUN_1804169f0(0);
            if (lVar7 == 0) goto code_r0x0001807683ac;
            if (*(longlong *)(lVar7 + 0x40) != 0) {
              lVar7 = FUN_1804169f0(0);
              if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x40) == 0)) goto code_r0x0001807683ac;
              if (0 < *(int *)(*(longlong *)(lVar7 + 0x40) + 0x10)) {
                lVar7 = FUN_1804169f0(0);
                if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x40) == 0)) ||
                   (*(longlong *)(lVar8 + 0x40) == 0)) goto code_r0x0001807683ac;
                TargetWindow__CorPelaDiferenca
                          (param_1,*(int *)(*(longlong *)(lVar7 + 0x40) + 0x10) -
                                   *(int *)(*(longlong *)(lVar8 + 0x40) + 0x10),0);
                goto code_r0x000180768240;
              }
            }
          }
        }
        goto code_r0x0001807681d6;
      }
      if (*(int *)(TI_TargetWindow + 0xe4) == 0) {
        func_0x000180315660(TI_TargetWindow);
      }
      TargetWindow__CorPelaDiferenca
                (param_1,*(undefined4 *)(*(longlong *)(TI_TargetWindow + 0xb8) + 0xc),0);
    }
    else {
code_r0x0001807681d6:
      if (param_1[0x11] == 0) goto code_r0x0001807683ac;
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x11],0);
      uStack_48 = 0x3f8000003f800000;
      uStack_40 = 0x3f8000003f800000;
      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_68,&uStack_48,0)
      ;
      if (lVar7 == 0) goto code_r0x0001807683ac;
      uStack_48 = *puVar9;
      uStack_40 = puVar9[1];
      uStack_38 = *(undefined4 *)(puVar9 + 2);
      FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_48);
    }
code_r0x000180768240:
    if (param_1[0x13] != 0) {
      cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains
                        (param_1[0x13],LIT_"'visible'",0);
      if (cVar5 == '\0') {
        if (param_1[0x13] == 0) goto code_r0x0001807683ac;
        UnityEngine_UIElements_VisualElement__AddToClassList(param_1[0x13],LIT_"'visible'",0);
      }
      if (param_1[0x15] == 0) {
        return;
      }
      if (param_1[0x14] == 0) {
        return;
      }
      if ((*(longlong *)(lVar8 + 0x38) != 0) && (*(longlong *)(lVar8 + 0x40) != 0)) {
        iVar1 = *(int *)(*(longlong *)(lVar8 + 0x40) + 0x38);
        iVar2 = *(int *)(*(longlong *)(lVar8 + 0x38) + 0x10);
        lVar8 = UnityEngine_UIElements_VisualElement__get_resolvedStyle(param_1[0x15],0);
        if (lVar8 != 0) {
          fVar11 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar8);
          if (param_1[0x14] != 0) {
            lVar8 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
            puVar9 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit
                               (&uStack_48,fVar11 * ((float)iVar2 / (float)iVar1),0);
            if (lVar8 != 0) {
              uStack_60 = *(undefined4 *)(puVar9 + 1);
              uStack_68 = *puVar9;
              FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_68);
              return;
            }
          }
        }
      }
    }
  }
code_r0x0001807683ac:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

