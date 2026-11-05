// ChatWindow__OutroCampoComFoco__1805cc0a0 @ 0x1805cc0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ChatWindow__OutroCampoComFoco__1805cc0a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (DAT_1834b3ad1 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IPanel);
    FUN_180315380(TI_UnityEngine.UIElements.TextField);
    FUN_180315380(MR_UnityEngine.UIElements.VisualElement.GetFirstAncestorOfType<UnityEngine.UIElements.TextField>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834b3ad1 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar4 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x108),0);
    if (lVar4 != 0) {
      lVar4 = FUN_1800020c0(3,TI_UnityEngine.UIElements.IPanel,lVar4);
      if (lVar4 != 0) {
        plVar5 = (longlong *)UnityEngine_UIElements_FocusController__get_focusedElement(lVar4,0);
        if (plVar5 != (longlong *)0x0) {
          if (((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
              (*(longlong *)
                (*(longlong *)(*plVar5 + 200) + -8 +
                (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) == TI_UnityEngine.UIElements.VisualElement)) &&
             (plVar5 != *(longlong **)(param_1 + 0x108))) {
            if (*(longlong *)(param_1 + 0x108) == 0) {
              FUN_1803155d0();
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            cVar2 = UnityEngine_UIElements_VisualElement__Contains
                              (*(longlong *)(param_1 + 0x108),plVar5,0);
            if (cVar2 == '\0') {
              if ((*(byte *)(TI_UnityEngine.UIElements.TextField + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
                 (*(longlong *)
                   (*(longlong *)(*plVar5 + 200) + -8 +
                   (ulonglong)*(byte *)(TI_UnityEngine.UIElements.TextField + 0x130) * 8) == TI_UnityEngine.UIElements.TextField)) {
                return true;
              }
              lVar4 = FUN_180b1a7e0(plVar5,MR_UnityEngine.UIElements.VisualElement.GetFirstAncestorOfType<UnityEngine.UIElements.TextField>);
              return lVar4 != 0;
            }
          }
        }
      }
    }
  }
  return false;
}

