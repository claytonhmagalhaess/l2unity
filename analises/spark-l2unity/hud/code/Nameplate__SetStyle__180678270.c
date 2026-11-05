// Nameplate__SetStyle__180678270 @ 0x180678270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__SetStyle__180678270(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  
  if (cRam00000001834b3e0d == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'TargetBubbleLeft'");
    FUN_180315380(LIT_"'TargetBubbleRight'");
    cRam00000001834b3e0d = '\x01';
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = FUN_180b0e310(uVar10,LIT_"'TargetBubbleLeft'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    *(undefined8 *)(param_1 + 0x18) = uVar10;
    func_0x000180314690(param_1 + 0x18,uVar10);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 == 0) goto code_r0x0001806783ce;
    cVar8 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,param_2,0);
    if (cVar8 == '\0') {
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar2,param_2,0);
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = FUN_180b0e310(uVar10,LIT_"'TargetBubbleRight'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    func_0x000180314690(param_1 + 0x20,uVar10);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
code_r0x0001806783ce:
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  cVar8 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,param_2,0);
  if (cVar8 != '\0') {
    return;
  }
  if (DAT_1834c4697 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add,param_2,0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Capacity);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.set_Capacity);
    FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834c4697 = '\x01';
  }
  cVar8 = func_0x000181707e50(param_2,0);
  if (cVar8 != '\0') {
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
    uVar10 = FUN_180d0e450(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    *(undefined8 *)(lVar2 + 0x40) = uVar10;
    func_0x000180314690(lVar2 + 0x40,uVar10);
  }
  else {
    if (*(longlong *)(lVar2 + 0x40) == 0) goto LAB_1825c41c4;
    cVar8 = FUN_181647ac0(*(longlong *)(lVar2 + 0x40),param_2,MR_System.Collections.Generic.List<string>.Contains);
    if (cVar8 != '\0') {
      return;
    }
    if (*(longlong *)(lVar2 + 0x40) == 0) goto LAB_1825c41c4;
    iVar9 = Animancer_AnimancerEvent_Sequence__get_Capacity
                      (*(longlong *)(lVar2 + 0x40),MR_System.Collections.Generic.List<string>.get_Capacity);
    lVar3 = *(longlong *)(lVar2 + 0x40);
    if (lVar3 == 0) goto LAB_1825c41c4;
    if (iVar9 == *(int *)(lVar3 + 0x18)) {
      iVar9 = Animancer_AnimancerEvent_Sequence__get_Capacity(lVar3,MR_System.Collections.Generic.List<string>.get_Capacity);
      FUN_180bbb170(lVar3,iVar9 + 1,MR_System.Collections.Generic.List<string>.set_Capacity);
    }
  }
  lVar7 = MR_System.Collections.Generic.List<string>.Add;
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
        *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar1 * 8) = param_2;
        func_0x000180314690(lVar4 + 0x20 + (longlong)(int)uVar1 * 8,param_2);
      }
      else {
        FUN_181645af0(lVar3,param_2,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70));
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

