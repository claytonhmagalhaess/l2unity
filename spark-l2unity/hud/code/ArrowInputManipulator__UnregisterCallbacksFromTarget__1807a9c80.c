// ArrowInputManipulator__UnregisterCallbacksFromTarget__1807a9c80 @ 0x1807a9c80

void ArrowInputManipulator__UnregisterCallbacksFromTarget__1807a9c80(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b4503 == '\0') {
    FUN_180315380(MD_ArrowInputManipulator.OnLeftArrowClick);
    FUN_180315380(MD_ArrowInputManipulator.OnRightArrowClick);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    cRam00000001834b4503 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
  FUN_18055b980(uVar4,param_1,MD_ArrowInputManipulator.OnLeftArrowClick,0);
  if (lVar1 != 0) {
    FUN_180990ff0(lVar1,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.ClickEvent>);
    lVar1 = *(longlong *)(param_1 + 0x60);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_18055b980(lVar5,param_1,MD_ArrowInputManipulator.OnRightArrowClick,0);
    lVar3 = MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.ClickEvent>;
    if (lVar1 != 0) {
      if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.ClickEvent> + 0x38) == 0) {
        FUN_180312fc0(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.ClickEvent>);
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

