// SparkObservador__Update__1804a08d0 @ 0x1804a08d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkObservador__Update__1804a08d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  ushort uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  if (cRam00000001834b3247 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkObservador);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
    cRam00000001834b3247 = '\x01';
  }
  if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
    func_0x000180315660(TI_SparkObservador);
  }
  if (*(char *)(*(longlong *)(TI_SparkObservador + 0xb8) + 0x20) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar4 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x20),0);
    if (plVar4 == (longlong *)0x0) goto DAT_1804a0e0a;
    lVar8 = *plVar4;
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar5 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x32) *
                    0x10 + 0x138 + lVar8);
          goto code_r0x0001804a09e9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
    }
    puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x32);
code_r0x0001804a09e9:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cVar3 = FUN_180eb5870(uVar6,uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
    if (cVar3 != '\0') {
      if (*(longlong *)(param_1 + 0x20) == 0) goto DAT_1804a0e0a;
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
      uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar8 == 0) goto DAT_1804a0e0a;
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
    }
  }
  if (DAT_1834b31bf == '\0') {
    FUN_180315380(TI_CameraController);
    DAT_1834b31bf = '\x01';
  }
  lVar8 = **(longlong **)(TI_CameraController + 0xb8);
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  lVar10 = **(longlong **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(lVar8,0,0);
  if (cVar3 != '\0') {
    return;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(lVar10,0,0);
  if (cVar3 != '\0') {
    return;
  }
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(TI_GameManager);
    cRam00000001834b3021 = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_GameManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (cVar3 != '\0') {
    return;
  }
  lVar9 = FUN_18043b160(0);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x39) != '\a') {
      return;
    }
    if (cRam00000001834b324a == '\0') {
      FUN_180315380(MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer>);
      FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Renderer>.Add);
      cRam00000001834b324a = '\x01';
    }
    fVar14 = (float)FUN_1824366b0(0);
    if (fVar14 < *(float *)(param_1 + 0x70)) {
      if (lVar10 == 0) goto DAT_1804a0e0a;
    }
    else {
      fVar14 = (float)FUN_1824366b0(0);
      *(float *)(param_1 + 0x70) = fVar14 + 0.5;
      if ((lVar10 == 0) || (lVar9 = FUN_1809972e0(lVar10,1,MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer>), lVar9 == 0))
      goto DAT_1804a0e0a;
      for (uVar13 = 0; (int)uVar13 < *(int *)(lVar9 + 0x18); uVar13 = uVar13 + 1) {
        if (*(uint *)(lVar9 + 0x18) <= uVar13) {
          FUN_1803155c0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)(lVar9 + 0x20 + (longlong)(int)uVar13 * 8);
        if (lVar1 == 0) goto DAT_1804a0e0a;
        cVar3 = UnityEngine_Renderer__get_enabled(lVar1);
        if (cVar3 != '\0') {
          UnityEngine_Renderer__set_enabled(lVar1,0,0);
          if (*(longlong *)(param_1 + 0x68) == 0) goto DAT_1804a0e0a;
          FUN_180002eb0();
        }
      }
    }
    lVar10 = UnityEngine_Component__get_transform(lVar10,0);
    if (lVar10 != 0) {
      pfVar11 = (float *)UnityEngine_Transform__get_position(&fStack_28,lVar10,0);
      if ((*(char *)(param_1 + 0x38) == '\0') ||
         (fVar16 = pfVar11[1] - *(float *)(param_1 + 0x40),
         fVar15 = *pfVar11 - *(float *)(param_1 + 0x3c),
         fVar14 = pfVar11[2] - *(float *)(param_1 + 0x44),
         25.0 < fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14)) {
        fStack_28 = *pfVar11;
        fStack_24 = pfVar11[1];
        fStack_20 = pfVar11[2];
        SparkObservador__Centra(param_1,&fStack_28,0);
      }
      if (lVar8 != 0) {
        uVar6 = *(undefined8 *)(lVar8 + 0x48);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar7,0);
        if (cVar3 != '\0') {
          uVar6 = *(undefined8 *)(lVar8 + 0x48);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if (cVar3 != '\0') {
            uVar6 = *(undefined8 *)(lVar8 + 0x48);
            uVar7 = *(undefined8 *)(param_1 + 0x30);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar7,0);
            if (cVar3 != '\0') {
              *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar8 + 0x48);
              func_0x000180314690(param_1 + 0x58);
            }
          }
          *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(lVar8 + 0x7c);
          *(undefined1 *)(lVar8 + 0x7c) = 0;
          *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(param_1 + 0x30);
          func_0x000180314690(lVar8 + 0x48);
        }
        SparkObservador__Move(param_1,lVar8,0);
        return;
      }
    }
  }
DAT_1804a0e0a:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

