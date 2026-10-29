// ArrowInputManipulator__RegisterCallbacksOnTarget__1807a99a0 @ 0x1807a99a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrowInputManipulator__RegisterCallbacksOnTarget__1807a99a0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b4502 == '\0') {
    FUN_180315380(MD_ArrowInputManipulator.OnLeftArrowClick);
    FUN_180315380(MD_ArrowInputManipulator.OnRightArrowClick);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    cRam00000001834b4502 = '\x01';
  }
  ArrowInputManipulator__LoadElements__1807a9670(param_1,0);
  lVar4 = *(longlong *)(param_1 + 0x58);
  uVar2 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
  FUN_18055b980(uVar2,param_1,MD_ArrowInputManipulator.OnLeftArrowClick,0);
  if (lVar4 != 0) {
    FUN_180990d50(lVar4,uVar2,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
    lVar4 = *(longlong *)(param_1 + 0x60);
    uVar2 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_18055b980(uVar2,param_1,MD_ArrowInputManipulator.OnRightArrowClick,0);
    if (lVar4 != 0) {
      FUN_180990d50(lVar4,uVar2,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar3 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      UnityEngine_UIElements_MouseManipulator___ctor(uVar3,0);
      UnityEngine_UIElements_Manipulator__set_target(uVar3,uVar2,0);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar2,uVar3,0);
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      lVar4 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      UnityEngine_UIElements_MouseManipulator___ctor(lVar4,0);
      UnityEngine_UIElements_Manipulator__set_target(lVar4,uVar2,0);
      if (DAT_1834c4ccf == '\0') {
        FUN_180315380(TI_UnityEngine.UIElements.IManipulator,lVar4,0);
        DAT_1834c4ccf = '\x01';
      }
      if (lVar4 != 0) {
        FUN_180002030(0,TI_UnityEngine.UIElements.IManipulator,lVar4,uVar2,unaff_RDI);
      }
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

