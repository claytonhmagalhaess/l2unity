// PartyWindow__FechaMenu__1806a7270 @ 0x1806a7270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PartyWindow__FechaMenu__1806a7270(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3f7e == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MD_PartyWindow.FechaMenuFora);
    cRam00000001834b3f7e = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(undefined8 *)(param_1 + 0xa0),0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    func_0x000180314690(param_1 + 0xa0,0);
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar2 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar2,param_1,MD_PartyWindow.FechaMenuFora,0);
      FUN_180990ff0(lVar1,uVar2,1,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    }
  }
  return;
}

