// NameplatesManagerGame__UpdateTargetedNameplateStyle__18067c5b0 @ 0x18067c5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__UpdateTargetedNameplateStyle__18067c5b0
               (undefined8 param_1,longlong param_2,longlong param_3)

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
  undefined8 uVar11;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3e31 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'target-bubble-target'");
    FUN_180315380(LIT_"'target-bubble-attack'");
    cRam00000001834b3e31 = '\x01';
  }
  if (param_3 == 0) {
code_r0x00018067c6ac:
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar8 = UnityEngine_Object__op_Equality(uVar10,uVar11,0);
  uVar11 = LIT_"'target-bubble-attack'";
  if (cVar8 != '\0') {
    if ((*(longlong *)(param_3 + 0x28) == 0) ||
       (lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x38), lVar2 == 0))
    goto code_r0x00018067c6ac;
    if (*(char *)(lVar2 + 0x18) == '\0') {
      if (param_2 == 0) goto code_r0x00018067c6ac;
      if (cRam00000001834b3e0d == '\0') {
        FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
        FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
        FUN_180315380(LIT_"'TargetBubbleLeft'");
        FUN_180315380(LIT_"'TargetBubbleRight'");
        cRam00000001834b3e0d = '\x01';
      }
      if (*(longlong *)(param_2 + 0x18) == 0) {
        uVar10 = *(undefined8 *)(param_2 + 0x10);
        if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar10 = FUN_180b0e310(uVar10,LIT_"'TargetBubbleLeft'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI);
        *(undefined8 *)(param_2 + 0x18) = uVar10;
        func_0x000180314690(param_2 + 0x18,uVar10);
      }
      else {
        lVar2 = *(longlong *)(param_2 + 0x18);
        if (lVar2 == 0) goto code_r0x0001806783ce;
        cVar8 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,uVar11,0);
        if (cVar8 == '\0') {
          UnityEngine_UIElements_VisualElement__AddToClassList(lVar2,uVar11,0);
        }
      }
      if (*(longlong *)(param_2 + 0x20) == 0) {
        uVar11 = *(undefined8 *)(param_2 + 0x10);
        if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar11 = FUN_180b0e310(uVar11,LIT_"'TargetBubbleRight'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI);
        *(undefined8 *)(param_2 + 0x20) = uVar11;
        func_0x000180314690(param_2 + 0x20,uVar11);
        return;
      }
      lVar2 = *(longlong *)(param_2 + 0x20);
      if (lVar2 == 0) {
code_r0x0001806783ce:
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      cVar8 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,uVar11,0);
      if (cVar8 != '\0') {
        return;
      }
      if (DAT_1834c4697 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<string>.Add,uVar11,0);
        FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
        FUN_180315380(MR_System.Collections.Generic.List<string>.get_Capacity);
        FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
        FUN_180315380(MR_System.Collections.Generic.List<string>.set_Capacity);
        FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
        FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
        FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
        DAT_1834c4697 = '\x01';
      }
      cVar8 = func_0x000181707e50(uVar11,0);
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
        cVar8 = FUN_181647ac0(*(longlong *)(lVar2 + 0x40),uVar11,MR_System.Collections.Generic.List<string>.Contains);
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
            *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar1 * 8) = uVar11;
            func_0x000180314690(lVar4 + 0x20 + (longlong)(int)uVar1 * 8,uVar11);
          }
          else {
            FUN_181645af0(lVar3,uVar11,
                          *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70))
            ;
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
  }
  if (param_2 == 0) goto code_r0x00018067c6ac;
  Nameplate__SetStyle__180678270(param_2,LIT_"'target-bubble-target'",0);
  uVar11 = LIT_"'target-bubble-attack'";
  if (cRam00000001834b3e0e == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'TargetBubbleLeft'");
    FUN_180315380(LIT_"'TargetBubbleRight'");
    cRam00000001834b3e0e = '\x01';
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = FUN_180b0e310(uVar10,LIT_"'TargetBubbleLeft'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI);
    *(undefined8 *)(param_2 + 0x18) = uVar10;
    func_0x000180314690(param_2 + 0x18,uVar10);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x18);
    if (lVar2 == 0) goto code_r0x00018067820e;
    cVar8 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,uVar11,0);
    if (cVar8 != '\0') {
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar2,uVar11,0);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = FUN_180b0e310(uVar11,LIT_"'TargetBubbleRight'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    *(undefined8 *)(param_2 + 0x20) = uVar11;
    func_0x000180314690(param_2 + 0x20,uVar11);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (lVar2 == 0) {
code_r0x00018067820e:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    cVar8 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,uVar11,0);
    if (cVar8 != '\0') {
      if (DAT_1834c4698 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<string>.Remove,uVar11,0);
        FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
        FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
        FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
        FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
        DAT_1834c4698 = '\x01';
      }
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        cVar8 = FUN_18164eb60(*(longlong *)(lVar2 + 0x40),uVar11,MR_System.Collections.Generic.List<string>.Remove);
        if (cVar8 != '\0') {
          lVar3 = *(longlong *)(lVar2 + 0x40);
          if (lVar3 == 0) goto LAB_1825ca921;
          if (*(int *)(lVar3 + 0x18) == 0) {
            if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
              func_0x000180315660();
            }
            FUN_180d0e7e0(lVar3,MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
            if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
              func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
            }
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8);
            func_0x000180314690(lVar2 + 0x40);
          }
          plVar5 = *(longlong **)(lVar2 + 0x298);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x388))
                      (plVar5,lVar2,0x10,*(undefined8 *)(*plVar5 + 0x390),unaff_RDI);
          }
        }
        return;
      }
LAB_1825ca921:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

