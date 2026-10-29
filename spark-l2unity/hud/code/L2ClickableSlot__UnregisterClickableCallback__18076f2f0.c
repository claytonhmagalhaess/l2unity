// L2ClickableSlot__UnregisterClickableCallback__18076f2f0 @ 0x18076f2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ClickableSlot__UnregisterClickableCallback__18076f2f0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_1834b43d0 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MD_L2ClickableSlot.HandleSlotClickDown);
    FUN_180315380(MD_L2ClickableSlot.HandleSlotClickUp);
    DAT_1834b43d0 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar3,param_1,MD_L2ClickableSlot.HandleSlotClickDown,0);
    FUN_180990ff0(uVar4,uVar3,1,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    lVar1 = *(longlong *)(param_1 + 0x40);
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_18055b980(uVar4,param_1,MD_L2ClickableSlot.HandleSlotClickUp,0);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_180990ff0(lVar1,uVar4,1,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseUpEvent>);
  }
  return;
}

