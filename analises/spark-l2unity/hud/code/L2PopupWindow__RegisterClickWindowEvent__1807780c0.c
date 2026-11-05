// L2PopupWindow__RegisterClickWindowEvent__1807780c0 @ 0x1807780c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2PopupWindow__RegisterClickWindowEvent__1807780c0
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (cRam00000001834b440c == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MD_L2PopupWindow._RegisterClickWindowEvent_b__1_0);
    FUN_180315380(MD_L2PopupWindow._RegisterClickWindowEvent_b__1_1);
    cRam00000001834b440c = '\x01';
  }
  if (param_2 != 0) {
    uVar1 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar1,param_1,MD_L2PopupWindow._RegisterClickWindowEvent_b__1_0,0);
    FUN_180990d50(param_2,uVar1,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
  }
  if (param_3 != 0) {
    uVar1 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar1,param_1,MD_L2PopupWindow._RegisterClickWindowEvent_b__1_1,0);
    FUN_180990d50(param_3,uVar1,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
  }
  return;
}

