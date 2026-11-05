// L2Scrollable__RegisterPlayerScrollEvent__18078e810 @ 0x18078e810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Scrollable__RegisterPlayerScrollEvent__18078e810(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b4435 == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent>);
    FUN_180315380(MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_0);
    FUN_180315380(MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_1);
    FUN_180315380(MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_2);
    FUN_180315380(MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_3);
    FUN_180315380(MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_4);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'unity-drag-container'");
    FUN_180315380(LIT_"'unity-high-button'");
    FUN_180315380(LIT_"'unity-low-button'");
    cRam00000001834b4435 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = FUN_180b0e310(uVar5,LIT_"'unity-high-button'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton>);
  lVar3 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x18),LIT_"'unity-low-button'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton>)
  ;
  lVar4 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x18),LIT_"'unity-drag-container'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
  FUN_18055b980(uVar5,param_1,MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_0,0);
  if (lVar2 != 0) {
    FUN_180990d50(lVar2,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_18055b980(uVar5,param_1,MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_1,0);
    if (lVar3 != 0) {
      FUN_180990d50(lVar3,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
      uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,lVar2,0);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar2,uVar5,0);
      uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,lVar3,0);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar3,uVar5,0);
      uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
      FUN_18055b980(uVar5,param_1,MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_2,0);
      if (lVar4 != 0) {
        FUN_180990d50(lVar4,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
        uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent>);
        FUN_18055b980(uVar5,param_1,MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_3,0);
        FUN_180990d50(lVar4,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>);
        lVar2 = *(longlong *)(param_1 + 0x10);
        uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent>);
        FUN_18055b980(uVar5,param_1,MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_4,0);
        if (lVar2 != 0) {
          FUN_180990d50(lVar2,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

