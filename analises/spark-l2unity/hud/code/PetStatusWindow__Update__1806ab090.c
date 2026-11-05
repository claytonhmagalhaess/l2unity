// PetStatusWindow__Update__1806ab090 @ 0x1806ab090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PetStatusWindow__Update__1806ab090(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [80];
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x99) != '\0') &&
     ((*(float *)(param_1 + 0xa4) < 0.0 ||
      (fVar9 = (float)FUN_1824366b0(0), 2.0 <= fVar9 - *(float *)(param_1 + 0xa4))))) {
    *(undefined4 *)(param_1 + 0xa4) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x99) = 0;
    PetStatusWindow__Redesenha(param_1,0);
  }
  if (*(longlong *)(param_1 + 0x90) == 0) goto DAT_1806ab66b;
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x5a) != '\0') {
    *(undefined1 *)(param_1 + 0x9a) = 1;
  }
  if (cRam00000001834b3fa9 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IPanel);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3fa9 = '\x01';
  }
  if (*(char *)(param_1 + 0x9a) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (cRam00000001834b3fe7 == '\0') {
    FUN_180315380(TI_PartyWindow);
    cRam00000001834b3fe7 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_PartyWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar3 == '\0') {
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3fe4 == '\0') {
      FUN_180315380(TI_UnityEngine.Rect);
      cRam00000001834b3fe4 = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    pfVar6 = *(float **)(TI_UnityEngine.Rect + 0xb8);
    fVar9 = *pfVar6;
    fVar12 = pfVar6[1];
    fVar11 = pfVar6[3];
  }
  else {
    if (cRam00000001834b3fe7 == '\0') {
      FUN_180315380(TI_PartyWindow);
      cRam00000001834b3fe7 = '\x01';
    }
    lVar7 = **(longlong **)(TI_PartyWindow + 0xb8);
    if (lVar7 == 0) goto DAT_1806ab66b;
    if (cRam00000001834b3f6f == '\0') {
      FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
      FUN_180315380(TI_UnityEngine.Rect);
      FUN_180315380(TI_SparkParty);
      cRam00000001834b3f6f = '\x01';
    }
    if (*(longlong *)(lVar7 + 0x30) != 0) {
      if (*(int *)(TI_SparkParty + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkParty__get_EmParty(0);
      if (cVar3 != '\0') {
        if ((*(longlong *)(lVar7 + 0x30) == 0) ||
           (lVar5 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                              (*(longlong *)(lVar7 + 0x30),0), lVar5 == 0)) goto DAT_1806ab66b;
        iVar4 = FUN_1800020c0(0x18,TI_UnityEngine.UIElements.IResolvedStyle,lVar5);
        if (iVar4 == 0) {
          if (*(longlong *)(lVar7 + 0x30) == 0) goto DAT_1806ab66b;
          pfVar6 = (float *)UnityEngine_UIElements_VisualElement__get_layout
                                      (auStack_58,*(longlong *)(lVar7 + 0x30),0);
          fVar9 = *pfVar6;
          fVar12 = pfVar6[1];
          fVar11 = pfVar6[3];
          goto code_r0x0001806ab395;
        }
      }
    }
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3fe4 == '\0') {
      FUN_180315380(TI_UnityEngine.Rect);
      cRam00000001834b3fe4 = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    pfVar6 = *(float **)(TI_UnityEngine.Rect + 0xb8);
    fVar9 = *pfVar6;
    fVar12 = pfVar6[1];
    fVar11 = pfVar6[3];
  }
code_r0x0001806ab395:
  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (fVar11 <= 0.0) {
    fVar11 = 84.0;
    fVar9 = 0.0;
  }
  else {
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar11 = fVar11 + fVar12;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) goto DAT_1806ab66b;
  lVar7 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x30),0);
  if (lVar7 != 0) {
    if (((*(longlong *)(param_1 + 0x30) == 0) ||
        (lVar7 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x30),0), lVar7 == 0)) ||
       (lVar7 = FUN_1800020c0(0,TI_UnityEngine.UIElements.IPanel,lVar7), lVar7 == 0)) goto DAT_1806ab66b;
    lVar7 = UnityEngine_UIElements_VisualElement__get_layout(auStack_58,lVar7,0);
    fVar12 = *(float *)(lVar7 + 0xc);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(longlong *)(param_1 + 0x30) == 0) goto DAT_1806ab66b;
    lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                      (auStack_58,*(longlong *)(param_1 + 0x30),0);
    if ((0.0 < fVar12) && ((uint)ABS(*(float *)(lVar7 + 0xc)) < 0x7f800001)) {
      fVar12 = fVar12 - *(float *)(lVar7 + 0xc);
      fVar10 = fVar11;
      if (fVar12 <= fVar11) {
        fVar10 = fVar12;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
    }
  }
  fVar12 = fVar9 - *(float *)(param_1 + 0x9c);
  fVar10 = fVar11 - *(float *)(param_1 + 0xa0);
  if (fVar10 * fVar10 + fVar12 * fVar12 < 9.9999994e-11) {
    return;
  }
  *(float *)(param_1 + 0x9c) = fVar9;
  *(float *)(param_1 + 0xa0) = fVar11;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_58,fVar9,0);
    if (lVar7 != 0) {
      uStack_60 = *(undefined4 *)(puVar8 + 1);
      uStack_68 = *puVar8;
      FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_58,fVar11,0);
        if (lVar7 != 0) {
          uStack_60 = *(undefined4 *)(puVar8 + 1);
          uStack_68 = *puVar8;
          FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
          if (*(longlong *)(param_1 + 0x30) != 0) {
            lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0)
            ;
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(auStack_58,2,0);
            if (lVar7 != 0) {
              uStack_60 = *(undefined4 *)(puVar8 + 1);
              uStack_68 = *puVar8;
              FUN_1800050f0(0x69,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
              if (*(longlong *)(param_1 + 0x30) != 0) {
                lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(param_1 + 0x30),0);
                puVar8 = (undefined8 *)
                         UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(auStack_58,2,0);
                if (lVar7 != 0) {
                  uStack_60 = *(undefined4 *)(puVar8 + 1);
                  uStack_68 = *puVar8;
                  FUN_1800050f0(0x2d,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
DAT_1806ab66b:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

