// DragManipulator__PointerUpHandler__1807ae360 @ 0x1807ae360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DragManipulator__PointerUpHandler__1807ae360(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 auStack_48 [24];
  undefined *puStack_30;
  
  if (cRam00000001834b452c == '\0') {
    puStack_30 = &UNK_1807ae385;
    FUN_180315380(TI_UnityEngine.Object);
    puStack_30 = &UNK_1807ae391;
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerUpEvent>.get_pointerId);
    cRam00000001834b452c = '\x01';
  }
  puStack_30 = &UNK_1807ae3a2;
  uVar5 = func_0x0001814b50c0(param_1,0);
  if (param_2 == 0) goto code_r0x0001807ae47c;
  puStack_30 = &UNK_1807ae3bc;
  cVar4 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                    (uVar5,*(undefined4 *)(param_2 + 0x80),0);
  if (cVar4 != '\0') {
    puStack_30 = &UNK_1807ae3ce;
    uVar5 = func_0x0001814b50c0(param_1,0);
    puStack_30 = &UNK_1807ae3df;
    UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer
              (uVar5,*(undefined4 *)(param_2 + 0x80),0);
    if (*(char *)(param_1 + 0x5a) == '\0') {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        puStack_30 = &UNK_1807ae3fe;
        func_0x000180315660();
      }
      puStack_30 = &UNK_1807ae40b;
      cVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (cVar4 != '\0') {
        plVar2 = *(longlong **)(param_1 + 0x50);
        if (plVar2 == (longlong *)0x0) goto code_r0x0001807ae47c;
        puStack_30 = &UNK_1807ae428;
        (**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220));
      }
      if (*(char *)(param_1 + 0x5a) == '\0') goto code_r0x0001807ae468;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      puStack_30 = &UNK_1807ae447;
      func_0x000180315660();
    }
    puStack_30 = &UNK_1807ae454;
    cVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (cVar4 != '\0') {
      if (*(longlong *)(param_1 + 0x50) == 0) {
code_r0x0001807ae47c:
        puStack_30 = &UNK_1807ae481;
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puStack_30 = &UNK_1807ae468;
      L2Window__GuardaPosicao__180799980(*(longlong *)(param_1 + 0x50),0);
    }
  }
code_r0x0001807ae468:
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
          fVar1 = *(float *)(lVar7 + 4);
          lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                            (auStack_48,*(longlong *)(param_1 + 0x38),0);
          *(bool *)(param_1 + 0x59) =
               (float)((ulonglong)uVar5 >> 0x20) * 0.5 <= *(float *)(lVar7 + 0xc) * 0.5 + fVar1;
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

