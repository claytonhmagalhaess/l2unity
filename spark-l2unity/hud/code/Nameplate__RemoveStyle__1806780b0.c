// Nameplate__RemoveStyle__1806780b0 @ 0x1806780b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__RemoveStyle__1806780b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3e0e == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'TargetBubbleLeft'");
    FUN_180315380(LIT_"'TargetBubbleRight'");
    cRam00000001834b3e0e = '\x01';
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = FUN_180b0e310(uVar6,LIT_"'TargetBubbleLeft'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    func_0x000180314690(param_1 + 0x18,uVar6);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 == 0) goto code_r0x00018067820e;
    cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,param_2,0);
    if (cVar5 != '\0') {
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar1,param_2,0);
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = FUN_180b0e310(uVar6,LIT_"'TargetBubbleRight'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    func_0x000180314690(param_1 + 0x20,uVar6);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 == 0) {
code_r0x00018067820e:
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,param_2,0);
    if (cVar5 != '\0') {
      if (DAT_1834c4698 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<string>.Remove,param_2,0);
        FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
        FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
        FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
        FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
        DAT_1834c4698 = '\x01';
      }
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        cVar5 = FUN_18164eb60(*(longlong *)(lVar1 + 0x40),param_2,MR_System.Collections.Generic.List<string>.Remove);
        if (cVar5 != '\0') {
          lVar2 = *(longlong *)(lVar1 + 0x40);
          if (lVar2 == 0) goto LAB_1825ca921;
          if (*(int *)(lVar2 + 0x18) == 0) {
            if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
              func_0x000180315660();
            }
            FUN_180d0e7e0(lVar2,MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
            if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
              func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
            }
            *(undefined8 *)(lVar1 + 0x40) =
                 *(undefined8 *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8);
            func_0x000180314690(lVar1 + 0x40);
          }
          plVar3 = *(longlong **)(lVar1 + 0x298);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x388))
                      (plVar3,lVar1,0x10,*(undefined8 *)(*plVar3 + 0x390),unaff_RDI);
          }
        }
        return;
      }
LAB_1825ca921:
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

