// CharCreationWindow__ShowRotatePawnWindow__18078c900 @ 0x18078c900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharCreationWindow__ShowRotatePawnWindow__18078c900(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (cRam00000001834b4499 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'toggle'");
    cRam00000001834b4499 = '\x01';
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains
                          (*(longlong *)(param_1 + 0xd0),LIT_"'toggle'",0);
        if (cVar4 != '\0') {
          if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x00018078c9c7;
          UnityEngine_UIElements_VisualElement__RemoveFromClassList
                    (*(longlong *)(param_1 + 0xd0),LIT_"'toggle'",0);
        }
        return;
      }
    }
  }
code_r0x00018078c9c7:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

