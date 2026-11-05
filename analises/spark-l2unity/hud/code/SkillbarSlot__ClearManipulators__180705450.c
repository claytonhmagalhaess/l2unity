// SkillbarSlot__ClearManipulators__180705450 @ 0x180705450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__ClearManipulators__180705450(longlong param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b4175 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ItemQtd'");
    FUN_180315380(LIT_"'MacroSigla'");
    cRam00000001834b4175 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = FUN_180b0e310(lVar1,LIT_"'MacroSigla'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    if (lVar1 != 0) {
      UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(lVar1,0);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = FUN_180b0e310(lVar1,LIT_"'ItemQtd'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    if (lVar1 != 0) {
      UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(lVar1,0);
    }
  }
  L2DraggableSlot__ClearManipulators__1807711c0(param_1,0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x90),0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    func_0x000180314690(param_1 + 0x90,0);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x98),0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    func_0x000180314690(param_1 + 0x98,0);
  }
  return;
}

