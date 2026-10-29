// ButtonClickSoundManipulator__RegisterCallbacksOnTarget__1807abc70 @ 0x1807abc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ButtonClickSoundManipulator__RegisterCallbacksOnTarget__1807abc70(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b4509 == '\0') {
    FUN_180315380(MD_ButtonClickSoundManipulator.MouseDownHandler);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    cRam00000001834b4509 = '\x01';
  }
  plVar3 = (longlong *)func_0x0001814b50c0(param_1,0);
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
  FUN_18055b980(lVar4,param_1,MD_ButtonClickSoundManipulator.MouseDownHandler,0);
  lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>;
  if (plVar3 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> + 0x38) == 0) {
    FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      FUN_180312fc0(lVar2);
    }
  }
  if (lVar4 != 0) {
    lVar5 = plVar3[3];
    if (lVar5 == 0) {
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
      UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar5,0);
      plVar3[3] = lVar5;
      func_0x000180314690(plVar3 + 3,lVar5);
      if (lVar5 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_1809c9fd0(lVar5,lVar4,1,*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8));
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
        lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_180312f40(lVar4);
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          func_0x000180315660(lVar4);
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_180312f40(lVar2);
        }
        func_0x0001825c3d40(plVar3,1 << ((byte)*(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0x10) &
                                        0x1f),1,0,unaff_RDI);
      }
    }
    return;
  }
  uVar6 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar6 = func_0x000180315580(uVar6);
  uVar7 = func_0x0001803153a0(LIT_"'callback parameter is null'");
  System_ArgumentException___ctor(uVar6,uVar7,0);
  FUN_180315590(uVar6,lVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

