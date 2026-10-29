// SparkHtml__AjustaFonte__1807352c0 @ 0x1807352c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__AjustaFonte__1807352c0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b4253 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass22_0._AjustaFonte_b__0);
    FUN_180315380(TI_SparkHtml.<>c__DisplayClass22_0);
    cRam00000001834b4253 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass22_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    func_0x000180314690(lVar4 + 0x10,param_1);
    *(undefined8 *)(lVar4 + 0x20) = param_2;
    func_0x000180314690(lVar4 + 0x20,param_2);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    func_0x000180314690(lVar4 + 0x18,0);
    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_18055b980(uVar5,lVar4,MD_SparkHtml.__c__DisplayClass22_0._AjustaFonte_b__0,0);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    func_0x000180314690(lVar4 + 0x18,uVar5);
    lVar3 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>;
    plVar1 = *(longlong **)(lVar4 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
      if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent> + 0x38) == 0) {
        FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
        if (*(longlong *)(lVar3 + 0x38) == 0) {
          FUN_180312fc0(lVar3);
        }
      }
      if (lVar4 != 0) {
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
        FUN_1809c9fd0(lVar6,lVar4,0,*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8));
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x10);
        if (*(longlong *)(lVar4 + 0x38) == 0) {
          FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
          if (*(longlong *)(lVar4 + 0x38) == 0) {
            FUN_180312fc0(lVar4);
          }
        }
        if (plVar1 != (longlong *)0x0) {
          if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8
               ) == TI_UnityEngine.UIElements.VisualElement)) {
            lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_180312f40(lVar3);
            }
            if (*(int *)(lVar3 + 0xe4) == 0) {
              func_0x000180315660(lVar3);
            }
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_180312f40(lVar4);
            }
            func_0x0001825c3d40(plVar1,1 << ((byte)*(undefined4 *)
                                                    (*(longlong *)(lVar4 + 0xb8) + 0x10) & 0x1f),0,0
                                ,unaff_RDI);
          }
        }
        return;
      }
      uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
      uVar5 = func_0x000180315580(uVar5);
      uVar7 = func_0x0001803153a0(LIT_"'callback parameter is null'");
      System_ArgumentException___ctor(uVar5,uVar7,0);
      FUN_180315590(uVar5,lVar3);
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

