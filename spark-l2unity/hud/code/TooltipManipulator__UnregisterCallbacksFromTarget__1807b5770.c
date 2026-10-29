// TooltipManipulator__UnregisterCallbacksFromTarget__1807b5770 @ 0x1807b5770

void TooltipManipulator__UnregisterCallbacksFromTarget__1807b5770(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b4520 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.DetachFromPanelEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.DetachFromPanelEvent>);
    FUN_180315380(MD_TooltipManipulator.PointerInHandler);
    FUN_180315380(MD_TooltipManipulator.PointerOutHandler);
    FUN_180315380(MD_TooltipManipulator.SaiuDaTela);
    cRam00000001834b4520 = '\x01';
  }
  lVar2 = func_0x0001814b50c0(param_1,0);
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
  FUN_18055b980(uVar3,param_1,MD_TooltipManipulator.PointerInHandler,0);
  if (lVar2 != 0) {
    FUN_180990ff0(lVar2,uVar3,1,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
    lVar2 = func_0x0001814b50c0(param_1,0);
    uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_18055b980(uVar3,param_1,MD_TooltipManipulator.PointerOutHandler,0);
    if (lVar2 != 0) {
      FUN_180990ff0(lVar2,uVar3,1,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent>);
      lVar4 = func_0x0001814b50c0(param_1,0);
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.DetachFromPanelEvent>);
      FUN_18055b980(lVar5,param_1,MD_TooltipManipulator.SaiuDaTela,0);
      lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.DetachFromPanelEvent>;
      if (lVar4 != 0) {
        if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.DetachFromPanelEvent> + 0x38) == 0) {
          FUN_180312fc0(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.DetachFromPanelEvent>);
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
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

