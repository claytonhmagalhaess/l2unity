// SlotHoverDetectManipulator__UnregisterCallbacksFromTarget__1807b3c10 @ 0x1807b3c10

void SlotHoverDetectManipulator__UnregisterCallbacksFromTarget__1807b3c10(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b451e == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOverEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_180315380(MD_SlotHoverDetectManipulator.PointerOutHandler);
    FUN_180315380(MD_SlotHoverDetectManipulator.PointerOverHandler);
    cRam00000001834b451e = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent>);
  FUN_18055b980(uVar4,param_1,MD_SlotHoverDetectManipulator.PointerOverHandler,0);
  if (lVar1 != 0) {
    FUN_180990ff0(lVar1,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOverEvent>);
    lVar1 = *(longlong *)(param_1 + 0x40);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_18055b980(lVar5,param_1,MD_SlotHoverDetectManipulator.PointerOutHandler,0);
    lVar3 = MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent>;
    if (lVar1 != 0) {
      if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent> + 0x38) == 0) {
        FUN_180312fc0(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent>);
      }
      if (lVar5 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x18);
        if (lVar1 != 0) {
          FUN_1809ca110(lVar1,lVar5,0,*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8));
        }
        return;
      }
      uVar4 = func_0x0001803153a0(TI_System.ArgumentException);
      uVar4 = func_0x000180315580(uVar4);
      uVar6 = func_0x0001803153a0(LIT_"'callback parameter is null'");
      System_ArgumentException___ctor(uVar4,uVar6,0);
      FUN_180315590(uVar4,lVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

