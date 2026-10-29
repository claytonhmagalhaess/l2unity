// L2ClickableSlot___ctor__18076f460 @ 0x18076f460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ClickableSlot___ctor__18076f460(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined8 uVar6;
  
  uVar6 = 0;
  L2Slot___ctor__180794e40();
  bVar5 = DAT_1834b43cf == '\0';
  *(undefined1 *)(param_1 + 0x68) = in_stack_00000028;
  *(undefined1 *)(param_1 + 0x69) = in_stack_00000030;
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
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar4,param_1,MD_L2ClickableSlot.HandleSlotClickDown,0,uVar6);
    FUN_180990d50(uVar1,uVar4,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_18055b980(uVar6,param_1,MD_L2ClickableSlot.HandleSlotClickUp,0);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_180990d50(lVar2,uVar6,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
  }
  return;
}

