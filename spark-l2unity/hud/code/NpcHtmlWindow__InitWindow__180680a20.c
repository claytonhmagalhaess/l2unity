// NpcHtmlWindow__InitWindow__180680a20 @ 0x180680a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__InitWindow__180680a20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  
  if (cRam00000001834b3e3f == '\0') {
    FUN_180315380(TI_DragManipulator);
    FUN_180315380(LIT_"'btn-close-frame'");
    FUN_180315380(LIT_"'drag-area'");
    cRam00000001834b3e3f = '\x01';
  }
  L2Window__InitWindow__180799db0(param_1,param_2,0);
  lVar2 = L2Window__GetElementByClass__180799750(param_1,LIT_"'drag-area'",0);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = func_0x000180315580(TI_DragManipulator);
  DragManipulator___ctor__1807ae950(uVar3,lVar2,uVar4,param_1,0);
  UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar2,uVar3,0);
  L2PopupWindow__RegisterCloseWindowEvent__1807781c0(param_1,LIT_"'btn-close-frame'",0);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (cRam00000001834b440c == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>,lVar1,lVar2,0,unaff_RSI);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MD_L2PopupWindow._RegisterClickWindowEvent_b__1_0);
    FUN_180315380(MD_L2PopupWindow._RegisterClickWindowEvent_b__1_1);
    cRam00000001834b440c = '\x01';
  }
  if (lVar1 != 0) {
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar4,param_1,MD_L2PopupWindow._RegisterClickWindowEvent_b__1_0,0);
    FUN_180990d50(lVar1,uVar4,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
  }
  if (lVar2 != 0) {
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar4,param_1,MD_L2PopupWindow._RegisterClickWindowEvent_b__1_1,0);
    FUN_180990d50(lVar2,uVar4,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
  }
  return;
}

