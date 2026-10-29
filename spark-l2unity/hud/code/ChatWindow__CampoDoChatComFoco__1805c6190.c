// ChatWindow__CampoDoChatComFoco__1805c6190 @ 0x1805c6190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ChatWindow__CampoDoChatComFoco__1805c6190(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong alStackX_10 [3];
  
  if (cRam00000001834b3ad0 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IPanel);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3ad0 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar2 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x108),0);
    if (lVar2 != 0) {
      lVar2 = FUN_1800020c0(3,TI_UnityEngine.UIElements.IPanel,lVar2);
      if ((lVar2 != 0) &&
         (plVar3 = (longlong *)UnityEngine_UIElements_FocusController__get_focusedElement(lVar2,0),
         plVar3 != (longlong *)0x0)) {
        if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
           (*(longlong *)
             (*(longlong *)(*plVar3 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8)
            == TI_UnityEngine.UIElements.VisualElement)) {
          if (plVar3 == *(longlong **)(param_1 + 0x108)) {
            return 1;
          }
          lVar2 = *(longlong *)(param_1 + 0x108);
          if (lVar2 != 0) {
            while( true ) {
              if (plVar3 == (longlong *)0x0) {
                return 0;
              }
              alStackX_10[0] = plVar3[0x4e];
              lVar5 = UnityEngine_UIElements_VisualElement_Hierarchy__get_parent(alStackX_10,0);
              if (lVar5 == lVar2) break;
              alStackX_10[0] = plVar3[0x4e];
              plVar3 = (longlong *)
                       UnityEngine_UIElements_VisualElement_Hierarchy__get_parent(alStackX_10,0);
            }
            return 1;
          }
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
    }
  }
  return 0;
}

