// ButtonClickSoundManipulator__UnregisterCallbacksFromTarget__1807abd20 @ 0x1807abd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ButtonClickSoundManipulator__UnregisterCallbacksFromTarget__1807abd20(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b450a == '\0') {
    FUN_180315380(MD_ButtonClickSoundManipulator.MouseDownHandler);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    cRam00000001834b450a = '\x01';
  }
  lVar3 = func_0x0001814b50c0(param_1,0);
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
  FUN_18055b980(lVar4,param_1,MD_ButtonClickSoundManipulator.MouseDownHandler,0);
  lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>;
  if (lVar3 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent> + 0x38) == 0) {
    FUN_180312fc0(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>);
  }
  if (lVar4 != 0) {
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FUN_1809ca110(*(longlong *)(lVar3 + 0x18),lVar4,0,
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8));
    }
    return;
  }
  uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar5 = func_0x000180315580(uVar5);
  uVar6 = func_0x0001803153a0(LIT_"'callback parameter is null'");
  System_ArgumentException___ctor(uVar5,uVar6,0);
  FUN_180315590(uVar5,lVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

