// OptionsWindow___BuildWindow_b__30_0__18069b3e0 @ 0x18069b3e0

void OptionsWindow___BuildWindow_b__30_0__18069b3e0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStackX_8 [8];
  
  if (cRam00000001834b3ea5 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'janela: clique em {0}/{1} - lista aberta, dentro dela={2}'");
    cRam00000001834b3ea5 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return;
  }
  if (param_2 == 0) goto code_r0x00018069b646;
  plVar5 = (longlong *)func_0x0001803ff800(param_2,0);
  uVar3 = LIT_"'janela: clique em {0}/{1} - lista aberta, dentro dela={2}'";
  if (plVar5 == (longlong *)0x0) {
code_r0x00018069b498:
    uVar7 = 0;
  }
  else {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8
         ) != TI_UnityEngine.UIElements.VisualElement)) goto code_r0x00018069b498;
    uVar7 = func_0x00018239a460(plVar5,0);
  }
  lVar6 = func_0x0001803ff800(param_2,0);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    plVar5 = (longlong *)func_0x0001818f8b80(lVar6,0);
    if (plVar5 == (longlong *)0x0) goto code_r0x00018069b646;
    uVar8 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  }
  plVar5 = (longlong *)func_0x0001803ff800(param_2,0);
  if (plVar5 == (longlong *)0x0) {
code_r0x00018069b543:
    auStackX_8[0] = 0;
  }
  else {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8
         ) != TI_UnityEngine.UIElements.VisualElement)) goto code_r0x00018069b543;
    if (*(longlong **)(param_1 + 0xd8) == plVar5) {
      auStackX_8[0] = 1;
    }
    else {
      if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x00018069b646;
      auStackX_8[0] =
           UnityEngine_UIElements_VisualElement__Contains(*(longlong *)(param_1 + 0xd8),plVar5,0);
    }
  }
  uVar2 = func_0x000180314670(uRam00000001834c6248,auStackX_8);
  System_String__Format(uVar3,uVar7,uVar8,uVar2,0);
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return;
  }
  if (param_2 != 0) {
    plVar5 = (longlong *)func_0x0001803ff800(param_2,0);
    if (plVar5 != (longlong *)0x0) {
      if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(*plVar5 + 200) + -8 +
           (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) == TI_UnityEngine.UIElements.VisualElement)) {
        if (*(longlong **)(param_1 + 0xd8) == plVar5) {
          return;
        }
        if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x00018069b646;
        cVar4 = UnityEngine_UIElements_VisualElement__Contains
                          (*(longlong *)(param_1 + 0xd8),plVar5,0);
        if (cVar4 != '\0') {
          return;
        }
      }
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(undefined8 *)(param_1 + 0xd8),0);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      func_0x000180314690(param_1 + 0xd8,0);
    }
    return;
  }
code_r0x00018069b646:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

