// L2PopupWindow__RegisterCloseWindowEvent__1807781c0 @ 0x1807781c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2PopupWindow__RegisterCloseWindowEvent__1807781c0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b440b == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.Button);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(MD_L2PopupWindow._RegisterCloseWindowEvent_b__0_0);
    FUN_180315380(LIT_"'Cant find close button with className: '");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b440b = '\x01';
  }
  plVar3 = (longlong *)L2Window__GetElementByClass__180799750(param_1,param_2,0);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = System_String__Concat(LIT_"'Cant find close button with className: '",param_2,LIT_"'.'",0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834bfa1e == '\0') {
      FUN_180315380(TI_UnityEngine.Debug,0);
      FUN_180315380(TI_UnityEngine.ILogger);
      DAT_1834bfa1e = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b3803 == '\0') {
      FUN_180315380(TI_UnityEngine.Debug);
      DAT_1834b3803 = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
    if (lVar2 != 0) {
      FUN_180036090(5,TI_UnityEngine.ILogger,lVar2,2,uVar4);
      return;
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.Button + 0x130)) ||
     (*(longlong *)
       (*(longlong *)(*plVar3 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.Button + 0x130) * 8)
      != TI_UnityEngine.UIElements.Button)) {
    FUN_1803146d0(plVar3,TI_UnityEngine.UIElements.Button);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = func_0x000180315580(TI_ButtonClickSoundManipulator);
  BlinkingCursorManipulator___ctor__1807aa3c0(uVar4,plVar3,0);
  UnityEngine_UIElements_VisualElementExtensions__AddManipulator(plVar3,uVar4,0);
  lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
  FUN_18055b980(lVar5,param_1,MD_L2PopupWindow._RegisterCloseWindowEvent_b__0_0,0);
  lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>;
  if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> + 0x38) == 0) {
    FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      FUN_180312fc0(lVar2);
    }
  }
  if (lVar5 != 0) {
    lVar6 = plVar3[3];
    if (lVar6 == 0) {
      lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
      UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar6,0);
      plVar3[3] = lVar6;
      func_0x000180314690(plVar3 + 3,lVar6);
      if (lVar6 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_1809c9fd0(lVar6,lVar5,0,*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8));
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10);
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
      if (*(longlong *)(lVar2 + 0x38) == 0) {
        FUN_180312fc0(lVar2);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(*plVar3 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) ==
          TI_UnityEngine.UIElements.VisualElement)) {
        lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_180312f40(lVar5);
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          func_0x000180315660(lVar5);
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_180312f40(lVar2);
        }
        func_0x0001825c3d40(plVar3,1 << ((byte)*(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0x10) &
                                        0x1f),0,0,unaff_RDI);
      }
    }
    return;
  }
  uVar4 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar4 = func_0x000180315580(uVar4);
  uVar7 = func_0x0001803153a0(LIT_"'callback parameter is null'");
  System_ArgumentException___ctor(uVar4,uVar7,0);
  FUN_180315590(uVar4,lVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

