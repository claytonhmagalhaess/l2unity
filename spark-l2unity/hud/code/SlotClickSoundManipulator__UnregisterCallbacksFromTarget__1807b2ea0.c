// SlotClickSoundManipulator__UnregisterCallbacksFromTarget__1807b2ea0 @ 0x1807b2ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotClickSoundManipulator__UnregisterCallbacksFromTarget__1807b2ea0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b4515 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MD_SlotClickSoundManipulator.MouseDownHandler);
    cRam00000001834b4515 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
  FUN_18055b980(lVar4,param_1,MD_SlotClickSoundManipulator.MouseDownHandler,0);
  lVar3 = MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent>;
  if (lVar1 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> + 0x38) == 0) {
    FUN_180312fc0(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent>);
  }
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    if (lVar1 != 0) {
      FUN_1809ca110(lVar1,lVar4,0,*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8));
    }
    return;
  }
  uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar5 = func_0x000180315580(uVar5);
  uVar6 = func_0x0001803153a0(LIT_"'callback parameter is null'");
  System_ArgumentException___ctor(uVar5,uVar6,0);
  FUN_180315590(uVar5,lVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

