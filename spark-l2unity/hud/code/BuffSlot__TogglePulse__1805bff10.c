// BuffSlot__TogglePulse__1805bff10 @ 0x1805bff10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot__TogglePulse__1805bff10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  
  if (cRam00000001834b3a8f == '\0') {
    FUN_180315380(LIT_"'fade-high'");
    FUN_180315380(LIT_"'fade-low'");
    cRam00000001834b3a8f = '\x01';
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
code_r0x0001805bffbb:
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  cVar9 = UnityEngine_UIElements_VisualElement__ClassListContains
                    (*(longlong *)(param_1 + 0x40),LIT_"'fade-low'",0);
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 == 0) goto code_r0x0001805bffbb;
  if (cVar9 == '\0') {
    UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar2,LIT_"'fade-high'",0);
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar7 = LIT_"'fade-low'";
  }
  else {
    UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar2,LIT_"'fade-low'",0);
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar7 = LIT_"'fade-high'";
  }
  if (lVar2 == 0) goto code_r0x0001805bffbb;
  if (DAT_1834c4697 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add,uVar7,0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Capacity);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.set_Capacity);
    FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834c4697 = '\x01';
  }
  cVar9 = func_0x000181707e50(uVar7,0);
  if (cVar9 != '\0') {
    return;
  }
  lVar3 = *(longlong *)(lVar2 + 0x40);
  if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
  }
  if (lVar3 == *(longlong *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8)) {
    if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = FUN_180d0e450(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    *(undefined8 *)(lVar2 + 0x40) = uVar11;
    func_0x000180314690(lVar2 + 0x40,uVar11);
  }
  else {
    if (*(longlong *)(lVar2 + 0x40) == 0) goto LAB_1825c41c4;
    cVar9 = FUN_181647ac0(*(longlong *)(lVar2 + 0x40),uVar7,MR_System.Collections.Generic.List<string>.Contains);
    if (cVar9 != '\0') {
      return;
    }
    if (*(longlong *)(lVar2 + 0x40) == 0) goto LAB_1825c41c4;
    iVar10 = Animancer_AnimancerEvent_Sequence__get_Capacity
                       (*(longlong *)(lVar2 + 0x40),MR_System.Collections.Generic.List<string>.get_Capacity);
    lVar3 = *(longlong *)(lVar2 + 0x40);
    if (lVar3 == 0) goto LAB_1825c41c4;
    if (iVar10 == *(int *)(lVar3 + 0x18)) {
      iVar10 = Animancer_AnimancerEvent_Sequence__get_Capacity(lVar3,MR_System.Collections.Generic.List<string>.get_Capacity);
      FUN_180bbb170(lVar3,iVar10 + 1,MR_System.Collections.Generic.List<string>.set_Capacity);
    }
  }
  lVar8 = MR_System.Collections.Generic.List<string>.Add;
  lVar3 = *(longlong *)(lVar2 + 0x40);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
          FUN_1803155c0();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar1 * 8) = uVar7;
        func_0x000180314690(lVar4 + 0x20 + (longlong)(int)uVar1 * 8,uVar7);
      }
      else {
        FUN_181645af0(lVar3,uVar7,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      plVar5 = *(longlong **)(lVar2 + 0x298);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar5 + 0x388))(plVar5,lVar2,0x10,*(undefined8 *)(*plVar5 + 0x390));
      return;
    }
  }
LAB_1825c41c4:
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

