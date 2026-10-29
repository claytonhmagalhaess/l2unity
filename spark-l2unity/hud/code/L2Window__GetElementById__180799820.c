// L2Window__GetElementById__180799820 @ 0x180799820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong L2Window__GetElementById__180799820(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b448a == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"\" can't be found.\"");
    cRam00000001834b448a = '\x01';
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = FUN_180b0e310(uVar2,param_2,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  if (lVar1 == 0) {
    uVar2 = System_String__Concat(param_2,LIT_"\" can't be found.\"",0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogError(uVar2,0);
    lVar1 = 0;
  }
  return lVar1;
}

