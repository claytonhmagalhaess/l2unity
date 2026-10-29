// SlotHoverDetectManipulator__RegisterCallbacksOnTarget__1807b3b00 @ 0x1807b3b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotHoverDetectManipulator__RegisterCallbacksOnTarget__1807b3b00(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b451d == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOverEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_180315380(MD_SlotHoverDetectManipulator.PointerOutHandler);
    FUN_180315380(MD_SlotHoverDetectManipulator.PointerOverHandler);
    cRam00000001834b451d = '\x01';
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent>);
  FUN_18055b980(uVar4,param_1,MD_SlotHoverDetectManipulator.PointerOverHandler,0);
  if (lVar3 != 0) {
    FUN_180990d50(lVar3,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOverEvent>);
    plVar1 = *(longlong **)(param_1 + 0x40);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent>);
    FUN_18055b980(lVar5,param_1,MD_SlotHoverDetectManipulator.PointerOutHandler,0);
    lVar3 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOutEvent>;
    if (plVar1 != (longlong *)0x0) {
      if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOutEvent> + 0x38) == 0) {
        FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
        if (*(longlong *)(lVar3 + 0x38) == 0) {
          FUN_180312fc0(lVar3);
        }
      }
      if (lVar5 != 0) {
        lVar6 = plVar1[3];
        if (lVar6 == 0) {
          lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
          UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar6,0);
          plVar1[3] = lVar6;
          func_0x000180314690(plVar1 + 3,lVar6);
          if (lVar6 == 0) {
            FUN_1803155d0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FUN_1809c9fd0(lVar6,lVar5,0,*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8));
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x10);
        if (*(longlong *)(lVar3 + 0x38) == 0) {
          FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
          if (*(longlong *)(lVar3 + 0x38) == 0) {
            FUN_180312fc0(lVar3);
          }
        }
        if (plVar1 != (longlong *)0x0) {
          if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8
               ) == TI_UnityEngine.UIElements.VisualElement)) {
            lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_180312f40(lVar5);
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              func_0x000180315660(lVar5);
            }
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_180312f40(lVar3);
            }
            func_0x0001825c3d40(plVar1,1 << ((byte)*(undefined4 *)
                                                    (*(longlong *)(lVar3 + 0xb8) + 0x10) & 0x1f),0,0
                                ,unaff_RDI);
          }
        }
        return;
      }
      uVar4 = func_0x0001803153a0(TI_System.ArgumentException);
      uVar4 = func_0x000180315580(uVar4);
      uVar7 = func_0x0001803153a0(LIT_"'callback parameter is null'");
      System_ArgumentException___ctor(uVar4,uVar7,0);
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

