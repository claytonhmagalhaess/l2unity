// L2DraggableSlot___ctor__180771210 @ 0x180771210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2DraggableSlot___ctor__180771210
               (longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
               undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (DAT_1834b43e7 == '\0') {
    FUN_180315380(TI_SlotDragManipulator);
    DAT_1834b43e7 = '\x01';
  }
  L2Slot___ctor__180794e40(param_1,param_3,param_2,param_4,0);
  bVar5 = DAT_1834b43cf == '\0';
  *(undefined1 *)(param_1 + 0x68) = param_5;
  *(undefined1 *)(param_1 + 0x69) = param_6;
  if (bVar5) {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MD_L2ClickableSlot.HandleSlotClickDown);
    FUN_180315380(MD_L2ClickableSlot.HandleSlotClickUp);
    DAT_1834b43cf = '\x01';
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar3,param_1,MD_L2ClickableSlot.HandleSlotClickDown,0);
    FUN_180990d50(uVar4,uVar3,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    lVar1 = *(longlong *)(param_1 + 0x40);
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_18055b980(uVar4,param_1,MD_L2ClickableSlot.HandleSlotClickUp,0);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_180990d50(lVar1,uVar4,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
  }
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0x78) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = func_0x000180315580(TI_SlotDragManipulator);
    SlotDragManipulator___ctor__1807b39d0(uVar3,uVar4,param_1,0);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    func_0x000180314690(param_1 + 0x78,uVar3);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x78),0);
  }
  return;
}

