// L2Window__GetLabelById__1807998f0 @ 0x1807998f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__GetLabelById__1807998f0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  if (cRam00000001834b4489 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    cRam00000001834b4489 = '\x01';
  }
  plVar2 = (longlong *)L2Window__GetElementById__180799820(param_1,param_2,0);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.Label + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar2 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.Label + 0x130) * 8) !=
        TI_UnityEngine.UIElements.Label)) {
      FUN_1803146d0(plVar2,TI_UnityEngine.UIElements.Label);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

