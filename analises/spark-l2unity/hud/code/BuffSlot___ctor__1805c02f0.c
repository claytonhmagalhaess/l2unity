// BuffSlot___ctor__1805c02f0 @ 0x1805c02f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot___ctor__1805c02f0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3a89 == '\0') {
    FUN_180315380(MD_BuffSlot.AltClique);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'Duration'");
    cRam00000001834b3a89 = '\x01';
  }
  L2Slot___ctor__180794e40(param_1,param_2,0,10,0);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = FUN_180b0e310(param_2,LIT_"'Duration'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  func_0x000180314690(param_1 + 0x70,uVar3);
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
  FUN_18055b980(lVar4,param_1,MD_BuffSlot.AltClique,0);
  lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>;
  if (param_2 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> + 0x38) == 0) {
    FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      FUN_180312fc0(lVar2);
    }
  }
  if (lVar4 != 0) {
    lVar5 = param_2[3];
    if (lVar5 == 0) {
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
      UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar5,0);
      param_2[3] = lVar5;
      func_0x000180314690(param_2 + 3,lVar5);
      if (lVar5 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_1809c9fd0(lVar5,lVar4,1,*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8));
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10);
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
      if (*(longlong *)(lVar2 + 0x38) == 0) {
        FUN_180312fc0(lVar2);
      }
    }
    if (param_2 != (longlong *)0x0) {
      if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(*param_2 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8)
          == TI_UnityEngine.UIElements.VisualElement)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_180312f40(lVar4);
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          func_0x000180315660(lVar4);
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_180312f40(lVar2);
        }
        func_0x0001825c3d40(param_2,1 << ((byte)*(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0x10)
                                         & 0x1f),1,0,unaff_RDI);
      }
    }
    return;
  }
  uVar3 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar3 = func_0x000180315580(uVar3);
  uVar6 = func_0x0001803153a0(LIT_"'callback parameter is null'");
  System_ArgumentException___ctor(uVar3,uVar6,0);
  FUN_180315590(uVar3,lVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

