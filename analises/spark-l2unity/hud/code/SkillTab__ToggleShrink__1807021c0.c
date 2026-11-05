// SkillTab__ToggleShrink__1807021c0 @ 0x1807021c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillTab__ToggleShrink__1807021c0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b411a == '\0') {
    FUN_180315380(MR_System.Linq.Enumerable.ElementAt<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(LIT_"'max'");
    FUN_180315380(LIT_"'shrink'");
    cRam00000001834b411a = '\x01';
  }
  if (((param_2 == 0) || (lVar9 = func_0x0001825d76d0(param_2,0), lVar9 == 0)) ||
     (lVar9 = func_0x0001825d76d0(lVar9,0), lVar9 == 0)) {
code_r0x0001807022c1:
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = UnityEngine_UIElements_VisualElement__Children(lVar9,0);
  lVar9 = FUN_1809bc970(uVar10,1,MR_System.Linq.Enumerable.ElementAt<UnityEngine.UIElements.VisualElement>);
  cVar7 = UnityEngine_UIElements_VisualElement__ClassListContains(param_2,LIT_"'max'",0);
  if (cVar7 != '\0') {
    UnityEngine_UIElements_VisualElement__RemoveFromClassList(param_2,LIT_"'max'",0);
    uVar10 = LIT_"'shrink'";
    if (lVar9 != 0) {
      if (DAT_1834c4698 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<string>.Remove,LIT_"'shrink'",0);
        FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
        FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
        FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
        FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
        DAT_1834c4698 = '\x01';
      }
      if (*(longlong *)(lVar9 + 0x40) != 0) {
        cVar7 = FUN_18164eb60(*(longlong *)(lVar9 + 0x40),uVar10,MR_System.Collections.Generic.List<string>.Remove);
        if (cVar7 != '\0') {
          lVar2 = *(longlong *)(lVar9 + 0x40);
          if (lVar2 == 0) goto LAB_1825ca921;
          if (*(int *)(lVar2 + 0x18) == 0) {
            if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
              func_0x000180315660();
            }
            FUN_180d0e7e0(lVar2,MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
            if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
              func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
            }
            *(undefined8 *)(lVar9 + 0x40) =
                 *(undefined8 *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8);
            func_0x000180314690(lVar9 + 0x40);
          }
          plVar4 = *(longlong **)(lVar9 + 0x298);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x388))
                      (plVar4,lVar9,0x10,*(undefined8 *)(*plVar4 + 0x390),unaff_RDI);
          }
        }
        return;
      }
LAB_1825ca921:
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto code_r0x0001807022c1;
  }
  UnityEngine_UIElements_VisualElement__AddToClassList();
  uVar10 = LIT_"'shrink'";
  if (lVar9 == 0) goto code_r0x0001807022c1;
  if (DAT_1834c4697 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add,LIT_"'shrink'",0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Capacity);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.set_Capacity);
    FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834c4697 = '\x01';
  }
  cVar7 = func_0x000181707e50(uVar10,0);
  if (cVar7 != '\0') {
    return;
  }
  lVar2 = *(longlong *)(lVar9 + 0x40);
  if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
  }
  if (lVar2 == *(longlong *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8)) {
    if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = FUN_180d0e450(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    *(undefined8 *)(lVar9 + 0x40) = uVar11;
    func_0x000180314690(lVar9 + 0x40,uVar11);
  }
  else {
    if (*(longlong *)(lVar9 + 0x40) == 0) goto LAB_1825c41c4;
    cVar7 = FUN_181647ac0(*(longlong *)(lVar9 + 0x40),uVar10,MR_System.Collections.Generic.List<string>.Contains);
    if (cVar7 != '\0') {
      return;
    }
    if (*(longlong *)(lVar9 + 0x40) == 0) goto LAB_1825c41c4;
    iVar8 = Animancer_AnimancerEvent_Sequence__get_Capacity
                      (*(longlong *)(lVar9 + 0x40),MR_System.Collections.Generic.List<string>.get_Capacity);
    lVar2 = *(longlong *)(lVar9 + 0x40);
    if (lVar2 == 0) goto LAB_1825c41c4;
    if (iVar8 == *(int *)(lVar2 + 0x18)) {
      iVar8 = Animancer_AnimancerEvent_Sequence__get_Capacity(lVar2,MR_System.Collections.Generic.List<string>.get_Capacity);
      FUN_180bbb170(lVar2,iVar8 + 1,MR_System.Collections.Generic.List<string>.set_Capacity);
    }
  }
  lVar6 = MR_System.Collections.Generic.List<string>.Add;
  lVar2 = *(longlong *)(lVar9 + 0x40);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
          FUN_1803155c0();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)(lVar3 + 0x20 + (longlong)(int)uVar1 * 8) = uVar10;
        func_0x000180314690(lVar3 + 0x20 + (longlong)(int)uVar1 * 8,uVar10);
      }
      else {
        FUN_181645af0(lVar2,uVar10,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      plVar4 = *(longlong **)(lVar9 + 0x298);
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar4 + 0x388))(plVar4,lVar9,0x10,*(undefined8 *)(*plVar4 + 0x390));
      return;
    }
  }
LAB_1825c41c4:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

