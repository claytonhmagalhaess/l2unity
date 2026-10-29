// DragManipulator__RegisterCallbacksOnTarget__1807ae490 @ 0x1807ae490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DragManipulator__RegisterCallbacksOnTarget__1807ae490(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b4528 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(MD_DragManipulator.PointerDownHandler);
    FUN_180315380(MD_DragManipulator.PointerMoveHandler);
    FUN_180315380(MD_DragManipulator.PointerUpHandler);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
    cRam00000001834b4528 = '\x01';
  }
  lVar2 = func_0x0001814b50c0(param_1,0);
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
  FUN_18055b980(uVar3,param_1,MD_DragManipulator.PointerDownHandler,0);
  if (lVar2 != 0) {
    FUN_180990d50(lVar2,uVar3,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    lVar2 = func_0x0001814b50c0(param_1,0);
    uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_18055b980(uVar3,param_1,MD_DragManipulator.PointerMoveHandler,0);
    if (lVar2 != 0) {
      FUN_180990d50(lVar2,uVar3,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
      plVar4 = (longlong *)func_0x0001814b50c0(param_1,0);
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
      FUN_18055b980(lVar5,param_1,MD_DragManipulator.PointerUpHandler,0);
      lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>;
      if (plVar4 != (longlong *)0x0) {
        if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> + 0x38) == 0) {
          FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
          if (*(longlong *)(lVar2 + 0x38) == 0) {
            FUN_180312fc0(lVar2);
          }
        }
        if (lVar5 != 0) {
          lVar6 = plVar4[3];
          if (lVar6 == 0) {
            lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
            UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar6,0);
            plVar4[3] = lVar6;
            func_0x000180314690(plVar4 + 3,lVar6);
            if (lVar6 == 0) {
              FUN_1803155d0();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          FUN_1809c9fd0(lVar6,lVar5,0,*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8));
          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10);
          if (*(longlong *)(lVar2 + 0x38) == 0) {
            FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
            if (*(longlong *)(lVar2 + 0x38) == 0) {
              FUN_180312fc0(lVar2);
            }
          }
          if (plVar4 != (longlong *)0x0) {
            if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
               (*(longlong *)
                 (*(longlong *)(*plVar4 + 200) + -8 +
                 (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) == TI_UnityEngine.UIElements.VisualElement)) {
              lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_180312f40(lVar5);
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
                func_0x000180315660(lVar5);
              }
              lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_180312f40(lVar2);
              }
              func_0x0001825c3d40(plVar4,1 << ((byte)*(undefined4 *)
                                                      (*(longlong *)(lVar2 + 0xb8) + 0x10) & 0x1f),0
                                  ,0,unaff_RDI);
            }
          }
          return;
        }
        uVar3 = func_0x0001803153a0(TI_System.ArgumentException);
        uVar3 = func_0x000180315580(uVar3);
        uVar7 = func_0x0001803153a0(LIT_"'callback parameter is null'");
        System_ArgumentException___ctor(uVar3,uVar7,0);
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

