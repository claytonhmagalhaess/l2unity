// HighlightedInputFieldManipulator__UnregisterCallbacksFromTarget__1807af4c0 @ 0x1807af4c0

void HighlightedInputFieldManipulator__UnregisterCallbacksFromTarget__1807af4c0(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b450e == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.BlurEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.FocusEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.BlurEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.FocusEvent>);
    FUN_180315380(MD_HighlightedInputFieldManipulator.OnBlurEvent);
    FUN_180315380(MD_HighlightedInputFieldManipulator.OnFocusEvent);
    cRam00000001834b450e = '\x01';
  }
  lVar2 = func_0x0001814b50c0(param_1,0);
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.BlurEvent>);
  FUN_18055b980(uVar3,param_1,MD_HighlightedInputFieldManipulator.OnBlurEvent,0);
  if (lVar2 != 0) {
    FUN_180990ff0(lVar2,uVar3,0,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.BlurEvent>);
    lVar4 = func_0x0001814b50c0(param_1,0);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.FocusEvent>);
    FUN_18055b980(lVar5,param_1,MD_HighlightedInputFieldManipulator.OnFocusEvent,0);
    lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.FocusEvent>;
    if (lVar4 != 0) {
      if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.FocusEvent> + 0x38) == 0) {
        FUN_180312fc0(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.FocusEvent>);
      }
      if (lVar5 != 0) {
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          FUN_1809ca110(*(longlong *)(lVar4 + 0x18),lVar5,0,
                        *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8));
        }
        return;
      }
      uVar3 = func_0x0001803153a0(TI_System.ArgumentException);
      uVar3 = func_0x000180315580(uVar3);
      uVar6 = func_0x0001803153a0(LIT_"'callback parameter is null'");
      System_ArgumentException___ctor(uVar3,uVar6,0);
      FUN_180315590(uVar3,lVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

