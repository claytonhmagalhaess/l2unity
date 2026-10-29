// L2InputAmountWindow__RegisterDigitButton__1807764b0 @ 0x1807764b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2InputAmountWindow__RegisterDigitButton__1807764b0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b43f7 == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(MD_L2InputAmountWindow.__c__DisplayClass15_0._RegisterDigitButton_b__0);
    FUN_180315380(TI_L2InputAmountWindow.<>c__DisplayClass15_0);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'L2Button'");
    cRam00000001834b43f7 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_L2InputAmountWindow.<>c__DisplayClass15_0);
  Gear__UpdateWeaponType__1803dadf0(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_1;
    func_0x000180314690(lVar2 + 0x10,param_1);
    *(undefined8 *)(lVar2 + 0x18) = param_3;
    func_0x000180314690(lVar2 + 0x18,param_3);
    uVar3 = L2Window__GetElementById__180799820(param_1,param_2,0);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    plVar4 = (longlong *)FUN_180b0e310(uVar3,LIT_"'L2Button'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    uVar3 = func_0x000180315580(TI_ButtonClickSoundManipulator);
    BlinkingCursorManipulator___ctor__1807aa3c0(uVar3,plVar4,0);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator(plVar4,uVar3,0);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_18055b980(lVar5,lVar2,MD_L2InputAmountWindow.__c__DisplayClass15_0._RegisterDigitButton_b__0,0);
    lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>;
    if (plVar4 != (longlong *)0x0) {
      if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> + 0x38) == 0) {
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
               (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8
               ) == TI_UnityEngine.UIElements.VisualElement)) {
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
                                                    (*(longlong *)(lVar2 + 0xb8) + 0x10) & 0x1f),0,0
                                ,unaff_RDI);
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
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

