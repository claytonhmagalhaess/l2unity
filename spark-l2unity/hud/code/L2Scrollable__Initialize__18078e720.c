// L2Scrollable__Initialize__18078e720 @ 0x18078e720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Scrollable__Initialize__18078e720(longlong *param_1,longlong param_2,undefined1 param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RDI;
  bool bVar6;
  
  param_1[4] = param_2;
  func_0x000180314690(param_1 + 4);
  bVar6 = cRam00000001834b4433 == '\0';
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_3;
  if (bVar6) {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.ScrollView>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ScrollView'");
    cRam00000001834b4433 = '\x01';
  }
  lVar2 = param_1[4];
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = FUN_180b0e310(lVar2,LIT_"'ScrollView'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.ScrollView>);
  }
  param_1[2] = lVar2;
  func_0x000180314690(param_1 + 2,lVar2);
  lVar2 = 0;
  if (param_1[2] != 0) {
    lVar2 = *(longlong *)(param_1[2] + 0x348);
  }
  param_1[3] = lVar2;
  func_0x000180314690(param_1 + 3);
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (cRam00000001834b4435 == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator,0);
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
  if (param_1[3] == 0) {
    return;
  }
  lVar2 = param_1[3];
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = FUN_180b0e310(lVar2,LIT_"'unity-high-button'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton>,unaff_RDI);
  lVar3 = FUN_180b0e310(param_1[3],LIT_"'unity-low-button'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton>);
  lVar4 = FUN_180b0e310(param_1[3],LIT_"'unity-drag-container'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
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
        lVar2 = param_1[2];
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

