// DragManipulator__UpdateAnchorType__1807ae7b0 @ 0x1807ae7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DragManipulator__UpdateAnchorType__1807ae7b0(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  float fStackX_c;
  undefined1 auStack_48 [64];
  
  if (cRam00000001834b452f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b452f = '\x01';
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if (cVar4 != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x50);
    if (plVar2 == (longlong *)0x0) goto code_r0x0001807ae941;
    cVar4 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (cVar4 != '\0') {
      *(undefined2 *)(param_1 + 0x58) = 0;
      return;
    }
  }
  uVar5 = DragManipulator__get_Painel(param_1,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    pfVar6 = (float *)UnityEngine_UIElements_VisualElement__get_layout
                                (auStack_48,*(longlong *)(param_1 + 0x38),0);
    fVar1 = *pfVar6;
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                        (auStack_48,*(longlong *)(param_1 + 0x38),0);
      *(bool *)(param_1 + 0x58) = (float)uVar5 * 0.5 <= *(float *)(lVar7 + 8) * 0.5 + fVar1;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                          (auStack_48,*(longlong *)(param_1 + 0x38),0);
        if (*(longlong *)(param_1 + 0x38) != 0) {
          fStackX_c = (float)((ulonglong)uVar5 >> 0x20);
          fVar1 = *(float *)(lVar7 + 4);
          lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                            (auStack_48,*(longlong *)(param_1 + 0x38),0);
          *(bool *)(param_1 + 0x59) = fStackX_c * 0.5 <= *(float *)(lVar7 + 0xc) * 0.5 + fVar1;
          return;
        }
      }
    }
  }
code_r0x0001807ae941:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

