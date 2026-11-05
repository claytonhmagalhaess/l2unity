// SlotClickSoundManipulator__RegisterCallbacksOnTarget__1807b2e00 @ 0x1807b2e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotClickSoundManipulator__RegisterCallbacksOnTarget__1807b2e00(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b4514 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MD_SlotClickSoundManipulator.MouseDownHandler);
    cRam00000001834b4514 = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
  FUN_18055b980(lVar4,param_1,MD_SlotClickSoundManipulator.MouseDownHandler,0);
  lVar3 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>;
  if (plVar1 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> + 0x38) == 0) {
    FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      FUN_180312fc0(lVar3);
    }
  }
  if (lVar4 != 0) {
    lVar5 = plVar1[3];
    if (lVar5 == 0) {
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
      UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar5,0);
      plVar1[3] = lVar5;
      func_0x000180314690(plVar1 + 3,lVar5);
      if (lVar5 == 0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FUN_1809c9fd0(lVar5,lVar4,1,*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8));
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x10);
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
      if (*(longlong *)(lVar3 + 0x38) == 0) {
        FUN_180312fc0(lVar3);
      }
    }
    if (plVar1 != (longlong *)0x0) {
      if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) ==
          TI_UnityEngine.UIElements.VisualElement)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_180312f40(lVar4);
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          func_0x000180315660(lVar4);
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_180312f40(lVar3);
        }
        func_0x0001825c3d40(plVar1,1 << ((byte)*(undefined4 *)(*(longlong *)(lVar3 + 0xb8) + 0x10) &
                                        0x1f),1,0,unaff_RDI);
      }
    }
    return;
  }
  uVar6 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar6 = func_0x000180315580(uVar6);
  uVar7 = func_0x0001803153a0(LIT_"'callback parameter is null'");
  System_ArgumentException___ctor(uVar6,uVar7,0);
  FUN_180315590(uVar6,lVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

