// L2Tab__Initialize__180795780 @ 0x180795780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Tab__Initialize__180795780
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000180314690(param_1 + 0x20,param_3);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  func_0x000180314690(param_1 + 0x28,param_4);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  func_0x000180314690(param_1 + 0x38,param_2);
  if (cRam00000001834b445f == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MD_L2Tab._InitTabHeader_b__13_0);
    cRam00000001834b445f = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = func_0x000180315580(TI_ButtonClickSoundManipulator);
    BlinkingCursorManipulator___ctor__1807aa3c0(uVar2,lVar1,0);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar1,uVar2,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar2,param_1,MD_L2Tab._InitTabHeader_b__13_0,0);
    FUN_180990d50(lVar1,uVar2,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
  }
  return;
}

