// PetWindow__Arrastavel__1806ab870 @ 0x1806ab870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PetWindow__Arrastavel__1806ab870
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RDI;
  
  if (DAT_1834b3fbc == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__0);
    FUN_180315380(MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__1);
    FUN_180315380(MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__2);
    FUN_180315380(TI_PetWindow.<>c__DisplayClass53_0);
    DAT_1834b3fbc = '\x01';
  }
  lVar4 = func_0x000180315580(TI_PetWindow.<>c__DisplayClass53_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_3;
    func_0x000180314690(lVar4 + 0x10,param_3);
    *(undefined8 *)(lVar4 + 0x28) = param_2;
    func_0x000180314690(lVar4 + 0x28,param_2);
    *(undefined8 *)(lVar4 + 0x30) = param_1;
    func_0x000180314690(lVar4 + 0x30,param_1);
    *(undefined8 *)(lVar4 + 0x38) = param_4;
    func_0x000180314690(lVar4 + 0x38,param_4);
    *(undefined1 *)(lVar4 + 0x18) = 0;
    if (DAT_1834b2f44 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector2);
      DAT_1834b2f44 = '\x01';
    }
    lVar6 = *(longlong *)(lVar4 + 0x28);
    uVar1 = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
    *(undefined4 *)(lVar4 + 0x1c) = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_18055b980(uVar5,lVar4,MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__0,0);
    if (lVar6 != 0) {
      FUN_180990d50(lVar6,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
      lVar6 = *(longlong *)(lVar4 + 0x28);
      uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
      FUN_18055b980(uVar5,lVar4,MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__1,0);
      if (lVar6 != 0) {
        FUN_180990d50(lVar6,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
        plVar2 = *(longlong **)(lVar4 + 0x28);
        lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
        FUN_18055b980(lVar6,lVar4,MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__2,0);
        lVar4 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>;
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> + 0x38) == 0) {
            FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
            if (*(longlong *)(lVar4 + 0x38) == 0) {
              FUN_180312fc0(lVar4);
            }
          }
          if (lVar6 != 0) {
            lVar7 = plVar2[3];
            if (lVar7 == 0) {
              lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
              UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar7,0);
              plVar2[3] = lVar7;
              func_0x000180314690(plVar2 + 3,lVar7);
              if (lVar7 == 0) {
                FUN_1803155d0();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FUN_1809c9fd0(lVar7,lVar6,0,*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 8));
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x10);
            if (*(longlong *)(lVar4 + 0x38) == 0) {
              FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
              if (*(longlong *)(lVar4 + 0x38) == 0) {
                FUN_180312fc0(lVar4);
              }
            }
            if (plVar2 != (longlong *)0x0) {
              if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
                 (*(longlong *)
                   (*(longlong *)(*plVar2 + 200) + -8 +
                   (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) == TI_UnityEngine.UIElements.VisualElement)) {
                lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8);
                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_180312f40(lVar6);
                }
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  func_0x000180315660(lVar6);
                }
                lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8);
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_180312f40(lVar4);
                }
                func_0x0001825c3d40(plVar2,1 << ((byte)*(undefined4 *)
                                                        (*(longlong *)(lVar4 + 0xb8) + 0x10) & 0x1f)
                                    ,0,0,unaff_RDI);
              }
            }
            return;
          }
          uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
          uVar5 = func_0x000180315580(uVar5);
          uVar8 = func_0x0001803153a0(LIT_"'callback parameter is null'");
          System_ArgumentException___ctor(uVar5,uVar8,0);
          FUN_180315590(uVar5,lVar4);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

